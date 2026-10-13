# STATUS — مستمر

## مدمج main
- events: سلوك لاعب + skip death
- runtime: solid names + event order
- object filter
- MainActivity play path

## host
- حركة يمين MOVED
- هبوط بدون قفز LANDED
- قفز يعمل (jumped=1) + اصطدام solid

## ASSEMBLE
```bash
git pull
bash tools/gap_fill_20261013/ASSEMBLE.sh  # xprevious + player_physics patch
./gradlew assembleDebug
```
