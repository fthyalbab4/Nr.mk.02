package com.normaker.gm82;

import android.content.Context;
import android.media.AudioAttributes;
import android.media.SoundPool;
import android.util.SparseArray;

/**
 * Stage 5: Low-latency Direct Audio Engine for NOR Maker / GM82 Android.
 * Uses hardware SoundPool with usage GAME and content-type SONIFICATION.
 */
public class Gm82AudioEngine {

    private static Gm82AudioEngine sInstance;
    private final SoundPool mSoundPool;
    private final SparseArray<Integer> mLoadedSounds = new SparseArray<>();
    private final SparseArray<Integer> mActiveStreams = new SparseArray<>();

    public static synchronized Gm82AudioEngine getInstance() {
        if (sInstance == null) {
            sInstance = new Gm82AudioEngine();
        }
        return sInstance;
    }

    private Gm82AudioEngine() {
        AudioAttributes attrs = new AudioAttributes.Builder()
                .setUsage(AudioAttributes.USAGE_GAME)
                .setContentType(AudioAttributes.CONTENT_TYPE_SONIFICATION)
                .build();

        mSoundPool = new SoundPool.Builder()
                .setMaxStreams(16)
                .setAudioAttributes(attrs)
                .build();
    }

    public int loadSound(Context context, int resId) {
        if (mLoadedSounds.indexOfKey(resId) >= 0) {
            return mLoadedSounds.get(resId);
        }
        int soundId = mSoundPool.load(context, resId, 1);
        mLoadedSounds.put(resId, soundId);
        return soundId;
    }

    public int loadSoundPath(String path) {
        int soundId = mSoundPool.load(path, 1);
        return soundId;
    }

    public void playSound(int soundId, float volume, float pitch, boolean loop) {
        int streamId = mSoundPool.play(soundId, volume, volume, 1, loop ? -1 : 0, pitch);
        if (streamId != 0) {
            mActiveStreams.put(soundId, streamId);
        }
    }

    public void stopSound(int soundId) {
        int streamId = mActiveStreams.get(soundId, 0);
        if (streamId != 0) {
            mSoundPool.stop(streamId);
            mActiveStreams.delete(soundId);
        }
    }

    public void setVolume(int soundId, float leftVolume, float rightVolume) {
        int streamId = mActiveStreams.get(soundId, 0);
        if (streamId != 0) {
            mSoundPool.setVolume(streamId, leftVolume, rightVolume);
        }
    }

    public void release() {
        mSoundPool.release();
        mLoadedSounds.clear();
        mActiveStreams.clear();
    }
}
