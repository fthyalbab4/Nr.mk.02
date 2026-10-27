#!/usr/bin/env python3
"""Export menu scroll + working download on Android WebView."""
from pathlib import Path
ROOT = Path(__file__).resolve().parents[2]
INDEX = ROOT / "app/src/main/assets/www/index.html"

OLD_DD = 'className: `fixed top-[22px] mt-[1px] bg-white border border-gray-500 shadow-[2px_2px_4px_rgba(0,0,0,0.4)] min-w-[200px] py-0.5 z-[9999]`'
NEW_DD = 'className: `fixed top-[22px] mt-[1px] bg-white border border-gray-500 shadow-[2px_2px_4px_rgba(0,0,0,0.4)] min-w-[200px] max-h-[min(70vh,520px)] overflow-y-auto overscroll-contain py-0.5 z-[9999] touch-pan-y`'

OLD_DL = '''      if (blob) {
        const a = document.createElement("a");
        a.href = URL.createObjectURL(blob);
        let ext = format === "j2me" ? "jar" : format === "gbc" ? "gbc" : format === "apk" ? "apk" : format === "esp32" ? "zip" : format;
        if (format === "win") {
          ext = blob.type === "application/zip" ? "zip" : "exe";
        }
        a.download = `${name}.${ext}`;
        a.click();
      }'''

NEW_DL = '''      if (blob) {
        let ext = format === "j2me" ? "jar" : format === "gbc" ? "gbc" : format === "apk" ? "apk" : format === "esp32" ? "zip" : format;
        if (format === "win") {
          ext = blob.type === "application/zip" ? "zip" : "exe";
        }
        const filename = `${name}.${ext}`;
        const mime = blob.type || "application/octet-stream";
        let savedNative = false;
        try {
          const native = window.NorNative;
          if (native && typeof native.saveExportBase64 === "function") {
            const buf = await blob.arrayBuffer();
            const bytes = new Uint8Array(buf);
            let bin = "";
            const chunk = 0x8000;
            for (let i = 0; i < bytes.length; i += chunk) {
              bin += String.fromCharCode.apply(null, bytes.subarray(i, i + chunk));
            }
            const b64 = btoa(bin);
            const path = native.saveExportBase64(b64, filename, mime);
            if (path) {
              savedNative = true;
              window.alert("تم التصدير وحفظ الملف:\\n" + path);
            }
          }
        } catch (nativeErr) {
          console.warn("native export save failed", nativeErr);
        }
        if (!savedNative) {
          const a = document.createElement("a");
          a.href = URL.createObjectURL(blob);
          a.download = filename;
          a.style.display = "none";
          document.body.appendChild(a);
          a.click();
          setTimeout(() => {
            try { URL.revokeObjectURL(a.href); } catch (_) {}
            try { a.remove(); } catch (_) {}
          }, 2500);
        }
      } else if (format !== "apk") {
        window.alert("التصدير لم يُنتج ملفًا. تأكد من وجود مشروع مفتوح وأن الصيغة مدعومة.");
      }'''

def main():
    if not INDEX.exists():
        print("no index"); return
    t = INDEX.read_text(encoding="utf-8", errors="ignore")
    n = 0
    if OLD_DD in t:
        t = t.replace(OLD_DD, NEW_DD, 1); n += 1; print("dropdown")
    if OLD_DL in t:
        t = t.replace(OLD_DL, NEW_DL, 1); n += 1; print("download")
    INDEX.write_text(t, encoding="utf-8")
    print("APPLY_EXPORT", n)

if __name__ == "__main__":
    main()
