#!/usr/bin/env bash
set -Eeuo pipefail

# Safe, local-only PR reconciliation helper.
# It never uses --ours/--theirs, force-push, admin merge, or model calls.
# A PR branch is updated only when merging current origin/main produces no
# conflicts. Semantic conflicts are reported and left untouched.
REPO="${REPO:-fthyalbab4/Nr.mk.02}"
BASE="${BASE:-main}"
MODE="${1:---audit}"
ROOT="$(git rev-parse --show-toplevel)"
REPORT="${REPORT:-$ROOT/tools/pr_conflict_report.tsv}"
WORK="$(mktemp -d "${TMPDIR:-/tmp}/gm82-pr-reconcile.XXXXXX")"
cleanup() { rm -rf "$WORK"; }
trap cleanup EXIT

case "$MODE" in
  --audit|--apply-safe) ;;
  *) echo "usage: $0 [--audit|--apply-safe]" >&2; exit 2 ;;
esac
command -v gh >/dev/null || { echo "gh is required" >&2; exit 127; }
gh auth status >/dev/null
git fetch origin "$BASE" --quiet
printf 'number\tstatus\thead\tconflict_count\tconflicting_files\tdetail\n' > "$REPORT"

mapfile -t prs < <(gh pr list --repo "$REPO" --state open --limit 100 \
  --json number,isDraft,baseRefName,headRefName,headRepositoryOwner \
  --jq '.[] | select(.baseRefName == "'"$BASE"'") | select(.isDraft == false) | [.number,.headRefName,.headRepositoryOwner.login] | @tsv')

for row in "${prs[@]}"; do
  IFS=$'\t' read -r number branch owner <<< "$row"
  ref="refs/remotes/pr-reconcile/$number"
  if ! git fetch origin "pull/$number/head:$ref" --quiet 2>/dev/null; then
    printf '%s\tFETCH_FAILED\t%s\t0\t\tunable to fetch head\n' "$number" "$branch" >> "$REPORT"
    continue
  fi
  wt="$WORK/pr-$number"
  if ! git worktree add --quiet --detach "$wt" "$ref"; then
    printf '%s\tWORKTREE_FAILED\t%s\t0\t\tunable to create temporary worktree\n' "$number" "$branch" >> "$REPORT"
    continue
  fi
  push_status="NOT_APPLIED"
  set +e
  (cd "$wt" && git merge --no-commit --no-ff "origin/$BASE" >/tmp/pr-reconcile-$number.log 2>&1)
  merge_rc=$?
  set -e
  if ((merge_rc == 0)); then
    if [[ "$MODE" == "--apply-safe" ]]; then
      (cd "$wt" && git commit -m "Merge $BASE into PR #$number" >/dev/null)
      if git push "https://github.com/$REPO.git" "HEAD:$branch" >/tmp/pr-reconcile-push-$number.log 2>&1; then
        push_status="UPDATED_HEAD"
      else
        push_status="PUSH_FAILED"
      fi
    else
      push_status="CLEAN_READY"
    fi
    printf '%s\t%s\t%s\t0\t\tmerge with current %s has no conflicts\n' "$number" "$push_status" "$branch" "$BASE" >> "$REPORT"
    (cd "$wt" && git merge --abort >/dev/null 2>&1 || true)
  else
    mapfile -t files < <(cd "$wt" && git diff --name-only --diff-filter=U)
    joined=$(printf '%s,' "${files[@]}" | sed 's/,$//')
    printf '%s\tCONFLICT_REQUIRES_REVIEW\t%s\t%s\t%s\tsemantic resolution not automated\n' "$number" "$branch" "${#files[@]}" "$joined" >> "$REPORT"
    (cd "$wt" && git merge --abort >/dev/null 2>&1 || true)
  fi
  git worktree remove --force "$wt" >/dev/null 2>&1 || true
done

echo "report=$REPORT"
cat "$REPORT"
