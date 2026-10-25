# Phase 6 — with() / other / soft audio

## Landed
1. with() GM8 ids: self=-1, other=-2, all=-3, noone=-4
2. Saves/restores other and self
3. Variables self/other/all/noone
4. Soft sound_play/loop/isplaying/stop tracking
5. action_if_sound uses isplaying

## Honest status
Audio is logical tracking only. with() does not snapshot the instance list.
