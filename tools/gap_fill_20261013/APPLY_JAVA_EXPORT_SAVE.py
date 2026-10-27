#!/usr/bin/env python3
from pathlib import Path
ROOT = Path(__file__).resolve().parents[2]
p = ROOT / "app/src/main/java/com/normaker/nativefull/MainActivity.java"

METHOD = r'''
    private String saveExportBytes(byte[] data, String requestedName, String mime) {
        if (data == null) return "";
        String name = requestedName == null ? "export.bin" : new File(requestedName).getName();
        name = name.replaceAll("[^A-Za-z0-9._-]", "_");
        if (mime == null || mime.length() == 0) mime = "application/octet-stream";
        try {
            if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.Q) {
                ContentValues values = new ContentValues();
                values.put(MediaStore.MediaColumns.DISPLAY_NAME, name);
                values.put(MediaStore.MediaColumns.MIME_TYPE, mime);
                values.put(MediaStore.MediaColumns.RELATIVE_PATH, Environment.DIRECTORY_DOWNLOADS + "/NORMaker");
                values.put(MediaStore.MediaColumns.IS_PENDING, 1);
                Uri uri = getContentResolver().insert(MediaStore.Downloads.EXTERNAL_CONTENT_URI, values);
                if (uri == null) throw new IllegalStateException("insert failed");
                try (OutputStream out = getContentResolver().openOutputStream(uri)) {
                    if (out == null) throw new IllegalStateException("stream null");
                    out.write(data);
                }
                values.clear();
                values.put(MediaStore.MediaColumns.IS_PENDING, 0);
                getContentResolver().update(uri, values, null, null);
                return uri.toString();
            }
            File dir = Environment.getExternalStoragePublicDirectory(Environment.DIRECTORY_DOWNLOADS);
            if (dir == null) dir = getFilesDir();
            File folder = new File(dir, "NORMaker");
            if (!folder.exists() && !folder.mkdirs()) folder = dir;
            File file = new File(folder, name);
            try (FileOutputStream out = new FileOutputStream(file)) { out.write(data); }
            return file.getAbsolutePath();
        } catch (Exception e) {
            Log.e(TAG, "export bytes failed", e);
            return "";
        }
    }
'''

BRIDGE = r'''
        @JavascriptInterface public String saveExportBase64(String base64, String filename, String mime) {
            try {
                if (base64 == null || base64.length() == 0) return "";
                byte[] data = android.util.Base64.decode(base64, android.util.Base64.DEFAULT);
                return saveExportBytes(data, filename, mime);
            } catch (Exception e) {
                Log.e(TAG, "saveExportBase64 failed", e);
                return "";
            }
        }
'''

def main():
    if not p.exists():
        print("missing"); return
    t = p.read_text()
    if "saveExportBase64" in t:
        print("ok"); return
    if "import java.io.OutputStream;" not in t:
        t = t.replace("import java.io.FileOutputStream;", "import java.io.FileOutputStream;\nimport java.io.OutputStream;")
    needle = "    private String saveNorJson(String json, String requestedName) {"
    if needle not in t:
        print("saveNorJson missing"); return
    t = t.replace(needle, METHOD + "\n" + needle, 1)
    anchor = '@JavascriptInterface public String exportNorJsonToApp(String json, String filename) {\n            return saveNorJson(json, filename);\n        }'
    if anchor not in t:
        print("bridge anchor missing"); return
    t = t.replace(anchor, anchor + BRIDGE, 1)
    p.write_text(t)
    print("APPLY_JAVA_EXPORT_SAVE_DONE")

if __name__ == "__main__":
    main()
