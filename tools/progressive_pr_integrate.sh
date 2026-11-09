#!/usr/bin/env bash
# Progressive PR integration for Nr.mk.02
# ONE PR at a time. Never bulk-merge. Never auto --ours/--theirs on core.
#
#   tools/progressive_pr_integrate.sh classify
#   tools/progressive_pr_integrate.sh attempt <PR>
#   tools/progressive_pr_integrate.sh status
#   tools/progressive_pr_integrate.sh resume-tests
#
# Critical (manual resolve only):
#   gm82_gml_bytecode.c gm82_gml_builtins.c gm82_runtime.c
#   gm82_gml_eval.c tests/test_event_order.c

set -euo pipefail
ROOT="$(cd "$(dirname "$0")/.." && pwd)"
cd "$ROOT"
LOG_DIR="$ROOT/integration_log"
STATE="$LOG_DIR/progressive_state.json"
QUEUE="$LOG_DIR/queue.txt"
mkdir -p "$LOG_DIR"
CRITICAL_REGEX='gm82_gml_bytecode\.c|gm82_gml_builtins\.c|gm82_runtime\.c|gm82_gml_eval\.c|test_event_order\.c'
say() { printf '%s\n' "$*"; }
die() { say "ERROR: $*"; exit 1; }
ensure_git() { git rev-parse --git-dir >/dev/null 2>&1 || die "not a git repo"; }
fetch_main() { git fetch origin main --quiet 2>/dev/null || git fetch origin main; say "origin/main=$(git rev-parse origin/main)"; }

classify() {
  ensure_git; fetch_main
  : > "$LOG_DIR/classify.tsv"
  echo -e "pr\tunique_commits\tfiles_changed\tcritical_touch\tlikely\ttitle" >> "$LOG_DIR/classify.tsv"
  local prs=(356 358 361 364 365 367 370 371 372 373 375 376 377 378 380 381 383 384 386 387 388 389 390 391 392 393 394 396)
  : > "$QUEUE"
  for pr in "${prs[@]}"; do
    if ! git fetch origin "pull/$pr/head:refs/pull/$pr/head" --quiet 2>/dev/null; then
      echo -e "$pr\tFETCH_FAIL\t0\tno\tfetch_fail\t" >> "$LOG_DIR/classify.tsv"; continue
    fi
    local commits files crit title likely
    commits=$(git rev-list --count "origin/main..refs/pull/$pr/head" 2>/dev/null || echo 0)
    files=$(git diff --name-only "origin/main...refs/pull/$pr/head" 2>/dev/null | wc -l | tr -d ' ')
    crit=no
    git diff --name-only "origin/main...refs/pull/$pr/head" 2>/dev/null | grep -E "$CRITICAL_REGEX" >/dev/null && crit=yes || true
    title=$(git log -1 --pretty=%s "refs/pull/$pr/head" 2>/dev/null | tr '\t' ' ' | head -c 80)
    if [[ "$commits" == "0" ]]; then likely=duplicate_or_behind
    elif [[ "$files" -eq 0 ]]; then likely=empty_diff
    elif [[ "$crit" == "yes" ]]; then likely=critical_manual
    else likely=candidate; fi
    say "PR #$pr commits=$commits files=$files critical=$crit => $likely"
    echo -e "$pr\t$commits\t$files\t$crit\t$likely\t$title" >> "$LOG_DIR/classify.tsv"
    [[ "$likely" == "candidate" || "$likely" == "critical_manual" ]] && echo "$pr" >> "$QUEUE"
  done
  say "Queue: $QUEUE"
}

run_tests() {
  say "=== post-step tests ==="
  [[ -f tools/verify_core_mirrors.py ]] && python3 tools/verify_core_mirrors.py
  [[ -d NOR_MAKER_COMPLETE_PACKAGE/01_BLACKSCREEN_FIX ]] && make -C NOR_MAKER_COMPLETE_PACKAGE/01_BLACKSCREEN_FIX gates
}

attempt() {
  local pr="${1:?PR number}"
  ensure_git; fetch_main
  local branch="integration/progressive"
  git checkout -B "$branch" origin/main
  git fetch origin "pull/$pr/head:refs/pull/$pr/head" || die "fetch failed"
  local commits; commits=$(git rev-list --count "origin/main..refs/pull/$pr/head")
  if [[ "$commits" == "0" ]]; then
    say "PR #$pr DUPLICATE"; echo "{\"pr\":$pr,\"result\":\"duplicate\"}" > "$STATE"; return 0
  fi
  set +e; git merge --no-ff --no-commit "refs/pull/$pr/head"; local rc=$?; set -e
  if [[ $rc -ne 0 ]]; then
    local conflicted; conflicted=$(git diff --name-only --diff-filter=U || true)
    say "CONFLICT PR #$pr"; printf '%s\n' "$conflicted" | tee "$LOG_DIR/conflicts_pr_$pr.txt"
    local crit_hit=false
    printf '%s\n' "$conflicted" | grep -E "$CRITICAL_REGEX" >/dev/null && crit_hit=true && say "CRITICAL: manual resolve only"
    git merge --abort 2>/dev/null || true
    echo "{\"pr\":$pr,\"result\":\"conflict\",\"critical\":$crit_hit}" > "$STATE"
    return 2
  fi
  if ! run_tests; then
    git merge --abort 2>/dev/null || git reset --hard origin/main
    echo "{\"pr\":$pr,\"result\":\"tests_failed\"}" > "$STATE"; return 3
  fi
  git commit -m "integrate: PR #$pr (progressive, tests green)"
  echo "{\"pr\":$pr,\"result\":\"integrated\",\"branch\":\"$branch\"}" > "$STATE"
  say "PR #$pr integrated"
}

case "${1:-status}" in
  classify) classify ;;
  attempt) attempt "${2:-}" ;;
  status) [[ -f "$STATE" ]] && cat "$STATE" || say "(no state)" ;;
  resume-tests) run_tests ;;
  *) say "usage: $0 {classify|attempt <PR>|status|resume-tests}"; exit 1 ;;
esac
