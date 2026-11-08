#!/usr/bin/env bash
set -euo pipefail

ROOT="$(cd "$(dirname "$0")/../../.." && pwd)"
OUT="${1:-$ROOT/dist/NorMaker-Windows-Portable}"
ZIP="${2:-$ROOT/dist/NorMaker-Windows-Portable.zip}"

rm -rf "$OUT"
mkdir -p "$OUT"

for exe in NorMakerStudio.exe NorMakerNativePC.exe; do
  src="$ROOT/desktop/windows/dist/$exe"
  test -s "$src" || { echo "missing Windows binary: $src" >&2; exit 2; }
  cp "$src" "$OUT/"
done

cp -R "$ROOT/app/src/main/assets/www" "$OUT/www"
cp -R "$ROOT/desktop/windows/portable_compat" "$OUT/portable_compat"

cat > "$OUT/README.txt" <<'EOF'
Nor Maker Windows Portable

Run NorMakerStudio.exe for the editor application.
Run NorMakerNativePC.exe for the native engine host and project preview.

The portable_compat directory contains compatibility data imported from the
supplied Game Maker Portable package. Legacy x86 DLLs and Game Maker executables
are intentionally not bundled; NOR's native x64 host remains self-contained.
EOF

(
  cd "$OUT"
  find . -type f ! -name SHA256SUMS.txt -print0 | sort -z | xargs -0 sha256sum > SHA256SUMS.txt
)
rm -f "$ZIP"
( cd "$(dirname "$OUT")" && zip -qr "$(basename "$ZIP")" "$(basename "$OUT")" )
printf 'PACKAGE_OK %s\nZIP=%s\n' "$OUT" "$ZIP"
sha256sum "$ZIP"
