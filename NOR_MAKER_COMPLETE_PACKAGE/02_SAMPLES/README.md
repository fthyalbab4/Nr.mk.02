# Sample GMK files (binary)

These files are **binary** GameMaker projects from the package zip.

| File | Size |
|------|------|
| plataformas.gmk | 29 KB |
| mario_bros.gmk | 90 KB |
| zelda.gmk | 214 KB |
| shooter.gmk | 225 KB |

## Why they are not as `.gmk` on GitHub from this agent

The GitHub connection used here only accepts **text** file content in the API.
Binary bytes cannot be pushed safely without corruption. Base64 of the larger
samples is 120–300 KB per file and exceeds reliable single-request size.

## How to get the binaries

**Full package (recommended):**

https://drive.google.com/file/d/1B_6oRyvT-zCNL3rOgNkvEscAKwBeu5mL/view?usp=drivesdk

Direct download:
https://drive.usercontent.google.com/download?id=1B_6oRyvT-zCNL3rOgNkvEscAKwBeu5mL&export=download&confirm=t

After download, extract `nm.maker.0..1.0.3.zip` → `NOR_MAKER_COMPLETE_PACKAGE/02_SAMPLES/`.

## Optional: upload yourself with git

```bash
# from a machine with the extracted samples
cd path/to/Nr.mk.02
cp /path/to/02_SAMPLES/*.gmk NOR_MAKER_COMPLETE_PACKAGE/02_SAMPLES/
git add NOR_MAKER_COMPLETE_PACKAGE/02_SAMPLES/*.gmk
git commit -m "add binary GMK samples"
git push
```
