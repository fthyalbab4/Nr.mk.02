#!/usr/bin/env bash
set -u
ROOT="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
STAMP="$(date -u +%Y-%m-%dT%H:%M:%SZ)"
OUT="${ROOT}/build_host/strategy_gate_${STAMP//[:]/-}.log"
mkdir -p "${ROOT}/build_host"
exec > >(tee "${OUT}") 2>&1

echo "STRATEGY_GATE_START ${STAMP}"
echo "ROOT ${ROOT}"
cd "${ROOT}"

status=0

echo "=== HOST_PIPELINE ==="
if bash tools/run_host_pipeline.sh; then
  echo "HOST_PIPELINE PASS"
else
  echo "HOST_PIPELINE FAIL"
  status=1
fi

echo "=== ENGINE_SUITE ==="
if python3 tools/run_engine_suite.py; then
  echo "ENGINE_SUITE PASS"
else
  echo "ENGINE_SUITE FAIL"
  status=1
fi

echo "=== STATIC_GUARDS ==="
if git diff --check && ! grep -RInE '<<<<<<<|=======|>>>>>>>' app/src/main/cpp/src app/src/main/cpp/include; then
  echo "STATIC_GUARDS PASS"
else
  echo "STATIC_GUARDS FAIL"
  status=1
fi

echo "=== STRATEGY_GATE_RESULT ==="
if [ "${status}" -eq 0 ]; then
  echo "PASS log=${OUT}"
else
  echo "FAIL log=${OUT}"
fi
exit "${status}"
