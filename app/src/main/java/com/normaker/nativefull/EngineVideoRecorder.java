package com.normaker.nativefull;

import android.content.ContentResolver;
import android.content.ContentValues;
import android.content.Context;
import android.graphics.Bitmap;
import android.media.MediaCodec;
import android.media.MediaCodecInfo;
import android.media.MediaCodecList;
import android.media.MediaFormat;
import android.media.MediaMuxer;
import android.net.Uri;
import android.os.Build;
import android.os.Environment;
import android.provider.MediaStore;

import java.io.File;
import java.io.FileOutputStream;
import java.nio.ByteBuffer;
import java.text.SimpleDateFormat;
import java.util.Date;
import java.util.Locale;

/** Encodes only the native engine framebuffer to AVC/MP4; no Android UI is captured. */
final class EngineVideoRecorder {
    private static final String MIME = "video/avc";
    private final Context context;
    private MediaCodec codec;
    private MediaMuxer muxer;
    private android.os.ParcelFileDescriptor outputPfd;
    private Uri mediaUri;
    private File tempFile;
    private int trackIndex = -1;
    private boolean muxerStarted;
    private boolean recording;
    private int width, height;
    private int colorFormat;
    private long startNs;
    private long lastSubmittedNs;
    private long lastPtsUs = -1;

    EngineVideoRecorder(Context context) { this.context = context.getApplicationContext(); }
    boolean isRecording() { return recording; }

    synchronized String start(Bitmap source) throws Exception {
        if (recording) return "";
        if (source == null) throw new IllegalArgumentException("لا توجد صورة من المحرك");
        width = source.getWidth() & ~1;
        height = source.getHeight() & ~1;
        if (width < 2 || height < 2) throw new IllegalArgumentException("أبعاد الإطار غير صالحة");

        String stamp = new SimpleDateFormat("yyyyMMdd_HHmmss", Locale.US).format(new Date());
        String displayName = "NorMaker_Engine_" + stamp + ".mp4";
        if (Build.VERSION.SDK_INT >= 29) {
            ContentValues values = new ContentValues();
            values.put(MediaStore.Video.Media.DISPLAY_NAME, displayName);
            values.put(MediaStore.Video.Media.MIME_TYPE, "video/mp4");
            values.put(MediaStore.Video.Media.RELATIVE_PATH, Environment.DIRECTORY_MOVIES + "/NorMaker");
            values.put(MediaStore.Video.Media.IS_PENDING, 1);
            mediaUri = context.getContentResolver().insert(MediaStore.Video.Media.EXTERNAL_CONTENT_URI, values);
            if (mediaUri == null) throw new IllegalStateException("تعذر إنشاء ملف الفيديو");
            outputPfd = context.getContentResolver().openFileDescriptor(mediaUri, "w");
            if (outputPfd == null) throw new IllegalStateException("تعذر فتح ملف الفيديو");
            muxer = new MediaMuxer(outputPfd.getFileDescriptor(), MediaMuxer.OutputFormat.MUXER_OUTPUT_MPEG_4);
        } else {
            File dir = context.getExternalFilesDir(Environment.DIRECTORY_MOVIES);
            if (dir == null) dir = context.getFilesDir();
            if (!dir.exists() && !dir.mkdirs()) throw new IllegalStateException("تعذر إنشاء مجلد الفيديو");
            tempFile = new File(dir, displayName);
            muxer = new MediaMuxer(tempFile.getAbsolutePath(), MediaMuxer.OutputFormat.MUXER_OUTPUT_MPEG_4);
        }

        MediaCodecInfo info = findEncoder();
        if (info == null) throw new IllegalStateException("ترميز AVC غير متوفر على هذا الجهاز");
        colorFormat = chooseColorFormat(info);
        if (colorFormat == 0) throw new IllegalStateException("صيغة YUV420 غير مدعومة في المشفر");
        MediaFormat format = MediaFormat.createVideoFormat(MIME, width, height);
        format.setInteger(MediaFormat.KEY_COLOR_FORMAT, colorFormat);
        format.setInteger(MediaFormat.KEY_BIT_RATE, Math.max(500_000, width * height * 4));
        format.setInteger(MediaFormat.KEY_FRAME_RATE, 30);
        format.setInteger(MediaFormat.KEY_I_FRAME_INTERVAL, 1);
        codec = MediaCodec.createByCodecName(info.getName());
        codec.configure(format, null, null, MediaCodec.CONFIGURE_FLAG_ENCODE);
        codec.start();
        startNs = System.nanoTime();
        lastSubmittedNs = 0;
        recording = true;
        return displayName;
    }

    private static MediaCodecInfo findEncoder() {
        MediaCodecList list = new MediaCodecList(MediaCodecList.REGULAR_CODECS);
        for (MediaCodecInfo info : list.getCodecInfos()) {
            if (!info.isEncoder()) continue;
            for (String type : info.getSupportedTypes()) if (MIME.equalsIgnoreCase(type)) return info;
        }
        return null;
    }

    private static int chooseColorFormat(MediaCodecInfo info) {
        int[] formats = info.getCapabilitiesForType(MIME).colorFormats;
        for (int f : formats) if (f == MediaCodecInfo.CodecCapabilities.COLOR_FormatYUV420SemiPlanar) return f;
        for (int f : formats) if (f == MediaCodecInfo.CodecCapabilities.COLOR_FormatYUV420Planar) return f;
        return 0;
    }

    synchronized void writeFrame(Bitmap bitmap) {
        if (!recording || bitmap == null || codec == null) return;
        try {
            long now = System.nanoTime();
            if (lastSubmittedNs != 0 && now - lastSubmittedNs < 33_333_333L) return;
            int index = codec.dequeueInputBuffer(0);
            if (index >= 0) {
                ByteBuffer in = codec.getInputBuffer(index);
                if (in != null) {
                    in.clear();
                    bitmapToYuv420(bitmap, in, width, height, colorFormat);
                    long pts = Math.max((now - startNs) / 1000L, lastPtsUs + 1);
                    lastPtsUs = pts;
                    codec.queueInputBuffer(index, 0, in.position(), pts, 0);
                    lastSubmittedNs = now;
                } else codec.queueInputBuffer(index, 0, 0, 0, 0);
            }
            drain(false);
        } catch (Exception ignored) {
            // A transient encoder back-pressure or dropped frame must not stop gameplay.
        }
    }

    private static void bitmapToYuv420(Bitmap bitmap, ByteBuffer out, int w, int h, int format) {
        int srcW = bitmap.getWidth(), srcH = bitmap.getHeight();
        int[] row = new int[srcW];
        int ySize = w * h;
        int chroma = ySize;
        for (int y = 0; y < h; y++) {
            bitmap.getPixels(row, 0, srcW, 0, y, srcW, 1);
            for (int x = 0; x < w; x++) {
                int c = row[x];
                int r = (c >> 16) & 255, g = (c >> 8) & 255, b = c & 255;
                int yy = ((66 * r + 129 * g + 25 * b + 128) >> 8) + 16;
                out.put((byte) clamp(yy));
            }
        }
        int[] row2 = new int[srcW];
        for (int y = 0; y < h; y += 2) {
            bitmap.getPixels(row, 0, srcW, 0, y, srcW, 1);
            bitmap.getPixels(row2, 0, srcW, 0, Math.min(y + 1, srcH - 1), srcW, 1);
            for (int x = 0; x < w; x += 2) {
                int c1=row[x], c2=row[Math.min(x+1,srcW-1)], c3=row2[x], c4=row2[Math.min(x+1,srcW-1)];
                int r=(((c1>>16)&255)+((c2>>16)&255)+((c3>>16)&255)+((c4>>16)&255))/4;
                int g=(((c1>>8)&255)+((c2>>8)&255)+((c3>>8)&255)+((c4>>8)&255))/4;
                int b=((c1&255)+(c2&255)+(c3&255)+(c4&255))/4;
                int u=((-38*r-74*g+112*b+128)>>8)+128;
                int v=((112*r-94*g-18*b+128)>>8)+128;
                if (format == MediaCodecInfo.CodecCapabilities.COLOR_FormatYUV420Planar) {
                    int pos = ySize + (y/2)*(w/2) + x/2;
                    if (pos < out.capacity()) out.put(pos,(byte)clamp(u));
                    int vPos = ySize + (w*h)/4 + (y/2)*(w/2) + x/2;
                    if (vPos < out.capacity()) out.put(vPos,(byte)clamp(v));
                    chroma = Math.max(chroma, vPos+1);
                } else {
                    int pos = ySize + (y/2)*w + x;
                    if (pos+1 < out.capacity()) { out.put(pos,(byte)clamp(u)); out.put(pos+1,(byte)clamp(v)); }
                    chroma = Math.max(chroma, pos+2);
                }
            }
        }
        out.position(Math.min(chroma, out.capacity()));
    }
    private static int clamp(int v) { return Math.max(0, Math.min(255, v)); }

    private void drain(boolean eos) {
        if (codec == null) return;
        MediaCodec.BufferInfo info = new MediaCodec.BufferInfo();
        for (;;) {
            int index = codec.dequeueOutputBuffer(info, eos ? 10_000 : 0);
            if (index == MediaCodec.INFO_TRY_AGAIN_LATER) break;
            if (index == MediaCodec.INFO_OUTPUT_FORMAT_CHANGED) {
                if (muxerStarted) throw new IllegalStateException("format changed twice");
                trackIndex = muxer.addTrack(codec.getOutputFormat());
                muxer.start();
                muxerStarted = true;
            } else if (index >= 0) {
                ByteBuffer data = codec.getOutputBuffer(index);
                if (data != null && info.size > 0 && muxerStarted && (info.flags & MediaCodec.BUFFER_FLAG_CODEC_CONFIG) == 0) {
                    data.position(info.offset); data.limit(info.offset + info.size);
                    muxer.writeSampleData(trackIndex, data, info);
                }
                codec.releaseOutputBuffer(index, false);
                if ((info.flags & MediaCodec.BUFFER_FLAG_END_OF_STREAM) != 0) break;
            }
        }
    }

    synchronized Uri stop() {
        if (!recording) return mediaUri;
        recording = false;
        try {
            int inIndex = codec.dequeueInputBuffer(10_000);
            if (inIndex >= 0) codec.queueInputBuffer(inIndex, 0, 0, Math.max(0, (System.nanoTime()-startNs)/1000L), MediaCodec.BUFFER_FLAG_END_OF_STREAM);
            drain(true);
        } catch (Exception ignored) {}
        try { codec.stop(); } catch (Exception ignored) {}
        try { codec.release(); } catch (Exception ignored) {}
        codec = null;
        try { if (muxerStarted) muxer.stop(); } catch (Exception ignored) {}
        try { muxer.release(); } catch (Exception ignored) {}
        muxer = null;
        try { if (outputPfd != null) outputPfd.close(); } catch (Exception ignored) {}
        outputPfd = null;
        muxerStarted = false;
        if (Build.VERSION.SDK_INT >= 29 && mediaUri != null) {
            ContentValues done = new ContentValues(); done.put(MediaStore.Video.Media.IS_PENDING, 0);
            context.getContentResolver().update(mediaUri, done, null, null);
        }
        return mediaUri;
    }
}
