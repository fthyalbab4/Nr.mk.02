# Security rotation required

A private APK-signing key was previously committed in bundled web assets. It has been removed from the working tree and APK signing now requires a private key and matching certificate supplied explicitly by the owner. The legacy identity must be treated as compromised.

## New release identity

A replacement upload key was generated on 2026-11-02 as a PKCS#12 keystore with alias `nor_maker_upload`, RSA-4096, SHA256withRSA, and validity through 2054-03-19. Its public SHA-256 fingerprint is:

```text
CB:EF:3E:AA:08:F8:EB:0F:CA:ED:34:06:DE:FE:BF:BA:77:95:10:2A:FF:BE:D0:AE:5A:AF:A7:EF:15:AB:2F:38
```

The keystore and password are kept outside the repository. They must not be committed, uploaded to issues, or written into workflow logs.

## Release CI configuration

The release workflow is `.github/workflows/release.yml`. It expects these repository or environment secrets:

- `ANDROID_KEYSTORE_BASE64`
- `ANDROID_KEYSTORE_PASSWORD`
- `ANDROID_KEY_ALIAS` (`nor_maker_upload`)
- `ANDROID_KEY_PASSWORD`

The workflow materializes the keystore only under the ephemeral runner directory, validates all four secrets, and runs `:app:assembleRelease`. `app/build.gradle` uses the signing configuration only when all four environment variables are present. The current GitHub integration is not authorized to write repository Actions secrets (GitHub returned HTTP 403), so an owner or repository administrator must add the four secrets before triggering a production release.

Development builds rely on Android Gradle Plugin's local, generated debug keystore; no debug keystore is tracked by this project.
