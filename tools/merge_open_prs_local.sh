#!/usr/bin/env bash
set -Eeuo pipefail

# Local-only PR merger. It uses the user's existing gh authentication and
# does not invoke Manus agents, workflows, or token-consuming model calls.
REPO="${REPO:-fthyalbab4/Nr.mk.02}"
BASE="${BASE:-main}"
MODE="${1:---apply}"
LOG="${LOG:-/tmp/${REPO##*/}_merge_open_prs_$(date +%Y%m%d_%H%M%S).tsv}"

case "$MODE" in
  --apply|--dry-run) ;;
  *) echo "usage: $0 [--apply|--dry-run]" >&2; exit 2 ;;
esac

command -v gh >/dev/null || { echo "gh is required" >&2; exit 127; }
gh auth status >/dev/null
printf 'number\tresult\ttitle\tdetail\n' > "$LOG"

mapfile -t prs < <(gh pr list --repo "$REPO" --state open --limit 100 \
  --json number,isDraft,baseRefName,title \
  --jq '.[] | select(.baseRefName == "'"$BASE"'") | select(.isDraft == false) | [.number,.title] | @tsv')

if ((${#prs[@]} == 0)); then
  echo "No non-draft open PRs targeting $BASE."
  echo "log=$LOG"
  exit 0
fi

for row in "${prs[@]}"; do
  number="${row%%$'\t'*}"
  title="${row#*$'\t'}"
  if [[ "$MODE" == "--dry-run" ]]; then
    printf '%s\tDRY_RUN\t%s\t%s\n' "$number" "$title" "would run gh pr merge --auto --squash" | tee -a "$LOG"
    continue
  fi

  set +e
  output=$(gh pr merge "$number" --repo "$REPO" --squash --delete-branch 2>&1)
  rc=$?
  set -e
  if ((rc == 0)); then
    result="MERGED_OR_COMPLETED"
  else
    result="SKIPPED"
  fi
  detail=$(printf '%s' "$output" | tr '\n' ' ' | tr '\t' ' ')
  printf '%s\t%s\t%s\t%s\n' "$number" "$result" "$title" "$detail" | tee -a "$LOG"
done

echo "log=$LOG"
