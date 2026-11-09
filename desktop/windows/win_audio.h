#ifndef NOR_WIN_AUDIO_H
#define NOR_WIN_AUDIO_H

#ifdef __cplusplus
extern "C" {
#endif

int nor_win_audio_init(void);
void nor_win_audio_pump(void);
void nor_win_audio_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif
