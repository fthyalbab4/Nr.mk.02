#!/usr/bin/env bash
set -euo pipefail

TARGET_DIR="${1:-}"
if [[ -z "$TARGET_DIR" || ! -d "$TARGET_DIR" ]]; then
  echo "usage: $0 /path/to/game-maker/portable" >&2
  exit 2
fi

printf '# leanrea GM82 Portable inventory\n\n'
printf 'Target: `%s`\n\n' "$TARGET_DIR"
printf 'Generated: `%s`\n\n' "$(date -u +%Y-%m-%dT%H:%M:%SZ)"
printf '| File | Format | Size | SHA-256 | Imports |\n|---|---|---:|---|---:|\n'

for f in "$TARGET_DIR"/*; do
  [[ -f "$f" ]] || continue
  name=$(basename "$f")
  kind=$(file -b "$f" | tr '|' '/')
  size=$(stat -c '%s' "$f")
  sha=$(sha256sum "$f" | awk '{print $1}')
  imports=$(objdump -p "$f" 2>/dev/null | grep -c 'DLL Name' || true)
  printf '| `%s` | %s | %s | `%s` | %s |\n' "$name" "$kind" "$size" "$sha" "$imports"
done

printf '\n## GM82 feature evidence\n\n'
for f in "$TARGET_DIR"/*.{exe,dll}; do
  [[ -f "$f" ]] || continue
  name=$(basename "$f")
  echo "### $name"
  strings -a -n 6 "$f" | grep -E -i 'gm82_version|has_(objects|scripts|sounds|sprites|paths|fonts|timelines|triggers)|collision_shape|swap_creation_events|roomspeed|roompersistent|action_id|tree\.yyd|code\.gml|settings\.txt|room\.txt|sprite\.txt|OldGM82|DuplicateAsset|InvalidVersion' | sort -fu | head -120 || true
  echo
 done
