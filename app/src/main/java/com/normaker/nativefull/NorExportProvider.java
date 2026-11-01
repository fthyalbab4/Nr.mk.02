package com.normaker.nativefull;

import android.content.ContentProvider;
import android.content.ContentValues;
import android.database.Cursor;
import android.database.MatrixCursor;
import android.net.Uri;
import android.os.ParcelFileDescriptor;
import android.provider.OpenableColumns;
import java.io.File;
import java.io.FileNotFoundException;

public class NorExportProvider extends ContentProvider {
    public static final String AUTHORITY = "com.normaker.nativefull.rkbzyn.exportprovider";

    @Override
    public boolean onCreate() {
        return true;
    }

    private File resolveCacheFile(Uri uri) throws FileNotFoundException {
        if (getContext() == null) throw new FileNotFoundException("Context is null");
        String filename = uri == null ? null : uri.getLastPathSegment();
        if (filename == null || filename.isEmpty()) throw new FileNotFoundException("Invalid URI: " + uri);
        try {
            File cacheRoot = getContext().getCacheDir().getCanonicalFile();
            File candidate = new File(cacheRoot, filename).getCanonicalFile();
            if (!candidate.getPath().startsWith(cacheRoot.getPath() + File.separator) || !candidate.isFile())
                throw new FileNotFoundException("File not found in cache");
            return candidate;
        } catch (java.io.IOException error) {
            throw new FileNotFoundException("Invalid cache path");
        }
    }

    @Override
    public ParcelFileDescriptor openFile(Uri uri, String mode) throws FileNotFoundException {
        if (!"r".equals(mode)) throw new FileNotFoundException("Read-only provider");
        return ParcelFileDescriptor.open(resolveCacheFile(uri), ParcelFileDescriptor.MODE_READ_ONLY);
    }

    @Override
    public String getType(Uri uri) {
        String name = uri.getLastPathSegment();
        if (name != null && name.endsWith(".apk")) {
            return "application/vnd.android.package-archive";
        }
        return "application/octet-stream";
    }

    @Override
    public Cursor query(Uri uri, String[] projection, String selection, String[] selectionArgs, String sortOrder) {
        File file;
        try { file = resolveCacheFile(uri); }
        catch (FileNotFoundException error) { return null; }

        String[] cols = projection != null ? projection : new String[]{
                OpenableColumns.DISPLAY_NAME,
                OpenableColumns.SIZE
        };
        MatrixCursor cursor = new MatrixCursor(cols, 1);
        MatrixCursor.RowBuilder row = cursor.newRow();
        for (String col : cols) {
            if (OpenableColumns.DISPLAY_NAME.equals(col)) {
                row.add(col, file.getName());
            } else if (OpenableColumns.SIZE.equals(col)) {
                row.add(col, file.length());
            } else {
                row.add(col, null);
            }
        }
        return cursor;
    }

    @Override
    public Uri insert(Uri uri, ContentValues values) {
        return null;
    }

    @Override
    public int delete(Uri uri, String selection, String[] selectionArgs) {
        return 0;
    }

    @Override
    public int update(Uri uri, ContentValues values, String selection, String[] selectionArgs) {
        return 0;
    }
}
