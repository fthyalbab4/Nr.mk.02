#!/usr/bin/env bash
set -euo pipefail

# This script studies a user-supplied, authorized GameMaker/runtime file.
# It never downloads, patches, decrypts, or executes the target.
: "${CRAFT_ANYTHING_CLI:?Set CRAFT_ANYTHING_CLI to the craft-anything-cli binary}"
: "${GM82_TARGET:?Set GM82_TARGET to an authorized GameMaker.exe/runtime path}"

if [[ ! -x "$CRAFT_ANYTHING_CLI" ]]; then
  echo "craft-anything-cli is not executable: $CRAFT_ANYTHING_CLI" >&2
  exit 2
fi
if [[ ! -f "$GM82_TARGET" && ! -d "$GM82_TARGET" ]]; then
  echo "GM82_TARGET does not exist: $GM82_TARGET" >&2
  exit 2
fi

analysis_dir="${GM82_ANALYSIS_DIR:-.analysis/gm82}"
mkdir -p "$analysis_dir"
project="$analysis_dir/craft-project.cany"
triage_json="$analysis_dir/triage.json"
report_md="$analysis_dir/report.md"

# Deep mode is explicit because native inspection reads the target's internals.
"$CRAFT_ANYTHING_CLI" \
  --deep \
  --project "$project" \
  --output-format json \
  triage "$GM82_TARGET" \
  > "$triage_json"

"$CRAFT_ANYTHING_CLI" \
  --deep \
  --project "$project" \
  report "$GM82_TARGET" \
  --out "$report_md"

printf 'Craft Anything GM82 study written to:\n  %s\n  %s\n' "$triage_json" "$report_md"
