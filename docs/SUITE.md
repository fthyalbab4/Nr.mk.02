# Test Suite Commands

This document lists the actual test suite commands present in the repository.

## 1. Gap Fill & Event Order Test Suite
Runs the gap fill patch sequence and executes unit tests for event order, xprevious/yprevious state tracking, and scaled AABB collision logic.
```bash
bash tools/gap_fill_20261013/ASSEMBLE.sh
```

## 2. Host Pipeline Test Suite
Builds the minimal host pipeline runner (`pipeline_min`) and executes step simulations on all sample GameMaker games (`mario_bros.gmk`, `plataformas.gmk`, `shooter.gmk`, `zelda.gmk`).
```bash
bash tools/run_host_pipeline.sh
```

## 3. Comprehensive Verification Script
Runs end-to-end verification covering GMK parsing, bitmask pixel collision, GML functions, DnD actions, software surfaces, low-latency audio, native runtime guard, and JNI library checks.
```bash
python3 run_full_verification.py
```

## 4. Native C Core Unit Tests
Builds `libgm82_host.so` and runs native C core unit executables (`test_dual_load`, `test_event_order`, `test_runtime_guard`).
```bash
make -C NOR_MAKER_COMPLETE_PACKAGE/01_BLACKSCREEN_FIX test
```
