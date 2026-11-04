import JSZip from 'jszip';
import forge from 'node-forge';

/**
 * Robust, cryptographically correct APK V1 (JAR) Signer.
 * Generates valid META-INF/MANIFEST.MF, META-INF/CERT.SF, and META-INF/CERT.RSA files.
 * Signing material must be supplied by the caller; no private key is stored in source.
 */

// Helper to compute SHA-256 using fast native Web Crypto API
const sha256 = async (bytes: Uint8Array): Promise<string> => {
    // Falls back gracefully if running in environment where globalThis.crypto is structured differently,
    // though modern browser and Node.js environments have globalThis.crypto.subtle.
    const cryptoSubtle = typeof window !== 'undefined' ? window.crypto?.subtle : (globalThis as any).crypto?.subtle;
    if (cryptoSubtle) {
        const hashBuffer = await cryptoSubtle.digest('SHA-256', bytes);
        const hashArray = Array.from(new Uint8Array(hashBuffer));
        const binary = hashArray.map(b => String.fromCharCode(b)).join('');
        return btoa(binary);
    } else {
        // Fallback to node-forge SHA-256 if Web Crypto is unavailable (e.g. non-secure local contexts)
        const md = forge.md.sha256.create();
        const binaryString = Array.from(bytes).map(b => String.fromCharCode(b)).join('');
        md.update(binaryString, 'raw');
        return forge.util.encode64(md.digest().getBytes());
    }
};

// Formats text according to strict JAR manifest line wrapping specifications (max 72 bytes)
const wrapManifestText = (text: string): string => {
    const lines = text.split('\r\n');
    const wrappedLines: string[] = [];
    for (let line of lines) {
        if (line === '') {
            wrappedLines.push('');
            continue;
        }
        let wrapped = '';
        let first = true;
        while (line.length > 0) {
            const limit = first ? 72 : 71; // 71 bytes for continuation lines (since continuation starts with space)
            if (line.length <= limit) {
                wrapped += (first ? '' : ' ') + line;
                break;
            } else {
                wrapped += (first ? '' : ' ') + line.substring(0, limit) + '\r\n';
                line = line.substring(limit);
                first = false;
            }
        }
        wrappedLines.push(wrapped);
    }
    return wrappedLines.join('\r\n');
};

export const signAPK = async (zip: JSZip, customPrivateKeyPem?: string, customCertificatePem?: string): Promise<void> => {
    if (!customPrivateKeyPem || !customCertificatePem) {
        throw new Error('External signing key and certificate are required; refusing an embedded signing identity.');
    }
    // 1. Remove any pre-existing signature files in META-INF
    const filesToRemove = Object.keys(zip.files).filter(f => f.toUpperCase().startsWith("META-INF/"));
    filesToRemove.forEach(f => zip.remove(f));

    // 2. Identify all actual files to hash (exclude directories)
    const filesToHash = Object.keys(zip.files).filter(f => !zip.files[f].dir);

    // 3. Generate META-INF/MANIFEST.MF
    let manifestContent = "Manifest-Version: 1.0\r\nCreated-By: 1.0 (Android)\r\n\r\n";
    const manifestEntriesMap: Record<string, string> = {};

    for (const filename of filesToHash) {
        const fileData = await zip.file(filename)!.async("uint8array");
        const fileHash = await sha256(fileData);

        const entryText = `Name: ${filename}\r\nSHA-256-Digest: ${fileHash}\r\n\r\n`;
        const wrappedEntry = wrapManifestText(entryText);
        manifestContent += wrappedEntry;
        manifestEntriesMap[filename] = wrappedEntry;
    }

    // Write MANIFEST.MF
    zip.file("META-INF/MANIFEST.MF", manifestContent);

    // 4. Generate META-INF/CERT.SF
    const manifestBytes = new TextEncoder().encode(manifestContent);
    const manifestHash = await sha256(manifestBytes);

    let certSfContent = `Signature-Version: 1.0\r\nCreated-By: 1.0 (Android)\r\nSHA-256-Digest-Manifest: ${manifestHash}\r\n\r\n`;

    for (const filename of filesToHash) {
        const entryText = manifestEntriesMap[filename];
        const entryBytes = new TextEncoder().encode(entryText);
        const entryHash = await sha256(entryBytes);

        const sfEntry = `Name: ${filename}\r\nSHA-256-Digest: ${entryHash}\r\n\r\n`;
        certSfContent += wrapManifestText(sfEntry);
    }

    // Write CERT.SF
    zip.file("META-INF/CERT.SF", certSfContent);

    // 5. Load signing material supplied by the deployment environment.
    const privateKey = forge.pki.privateKeyFromPem(customPrivateKeyPem);
    const cert = forge.pki.certificateFromPem(customCertificatePem);

    // 6. Sign CERT.SF to generate PKCS#7 signed-data block (META-INF/CERT.RSA)
    const p7 = forge.pkcs7.createSignedData();
    p7.content = forge.util.createBuffer(certSfContent, 'utf8');
    p7.addCertificate(cert);
    p7.addSigner({
        key: privateKey,
        certificate: cert,
        digestAlgorithm: (forge as any).oids?.sha256 || '2.16.840.1.101.3.4.2.1',
        authenticatedAttributes: [
            {
                type: (forge as any).oids?.contentType || '1.2.840.113549.1.9.3',
                value: (forge as any).oids?.data || '1.2.840.113549.1.7.1'
            },
            {
                type: (forge as any).oids?.messageDigest || '1.2.840.113549.1.9.4'
                // Value is automatically calculated and injected by forge during .sign()
            },
            {
                type: (forge as any).oids?.signingTime || '1.2.840.113549.1.9.5',
                value: new Date()
            }
        ]
    });
    p7.sign();

    // Serialize PKCS#7 signed data structure to binary DER format
    const derBytesStr = forge.asn1.toDer(p7.toAsn1()).getBytes();
    const certRsaBytes = new Uint8Array(derBytesStr.length);
    for (let i = 0; i < derBytesStr.length; i++) {
        certRsaBytes[i] = derBytesStr.charCodeAt(i);
    }

    // Write CERT.RSA
    zip.file("META-INF/CERT.RSA", certRsaBytes);
};
