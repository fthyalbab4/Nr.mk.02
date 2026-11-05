# Game Maker 8.2 Reverse-Engineering Analysis & Integration Report

## 1. Overview and Environment Setup
- **Tool Installed**: REA (`rea-agents` v6.7.0, https://github.com/morluto/rea).
- **Target Repository**: `fthyalbab4/Nr.mk.02` (NOR Maker).
- **Referenced Source**: `MahmoudMMorsy/NM.Maker.0..1.0` and bundled GM8.2 packages in `source/unpacked/`.

## 2. Status of External Repository & Portable Packages
- Attempting to clone or access `https://github.com/MahmoudMMorsy/NM.Maker.0..1.0` directly resulted in HTTP 404 (private or unavailable repository).
- However, the repository contains the multi-part archives `nm.maker.0..1.0.2 (1)_1.zip.001` through `003` which contains `NM.Maker.0..1.0.2` snapshots.
- Previous verified ports from `MahmoudMMorsy/NM.Maker.0..1.0` into `Nr.mk.02` were logged in `MM_PORT_FROM_0_1_0.md`:
  - Ported DnD `action_*` built-ins: `move_to`, `move_start`, `set_hspeed/vspeed/gravity/friction/motion`, `kill_object`, `create_object`, `sprite_set`, `sound`, `rooms`, `bounce`, `move_point`.
  - Added `xstart`/`ystart` instance fields.
  - Excluded monolithic overwrite to avoid breaking existing mobile Android core stability.

## 3. Reverse Engineering with REA (`rea-agents`)
Using REA inspection operations (`inspect-pe-resources`, `inspect-with-objdump`) on bundled GameMaker 8.2 extension binaries (`source/unpacked/gm82drag-main/gm82drag-main/gm82drag.dll`):
- **Binary Format**: PE32 executable for i386, Base of Code `0x6ae81000`, Entry Point `0x6ae81060`.
- **PE Resources**: Validated clean PE structure without overlapping corrupted resources.
- **Exported Symbols (Drag & Drop Windows Integration)**:
  - `AcceptFiles` (RVA `0x1250`)
  - `CheckDraggedFname` (RVA `0x1330`)
  - `CheckDraggedNum` (RVA `0x1310`)
  - `ClearLastDrop` (RVA `0x1380`)
- **Import Table Evidence**:
  - `SHELL32.DLL`: `DragAcceptFiles`, `DragFinish`, `DragQueryFileA`
  - `KERNEL32.DLL`: `AddAtomA`, `FindAtomA`, `GetAtomNameA`
  - `USER32.DLL`: window hook & message processing.
- **Mapping to NOR Maker (Android / Host runtime)**:
  - On Windows, these functions interface with Win32 shell drag-and-drop.
  - In NOR Maker's cross-platform architecture (Android/Linux Host), file reception is handled through Android intents (`ACTION_GET_CONTENT` / `ACTION_OPEN_DOCUMENT`) and browser HTML5 drag-and-drop events in the webview / JS runner.
  - Built-in stubs and compatibility hooks are maintained in `gm82_portable_compat.c` so games calling GM8.2 extension functions do not crash.

## 4. GM8.2 Feature Integration Mapping in NOR Maker
The core GM8.2 engine capabilities integrated into `Nr.mk.02` include:
1. **Core Math & Angle Operations**:
   - `floorto`, `ceilto`, `roundto`, `roundto_unbiased`, `approach_angle_biased`.
   - `point_line_lerp`, `lengthdir_zx`, `lengthdir_zy`, `lengthdir_zz`.
2. **Data Structures & Collections**:
   - `ds_grid` region operations.
   - `ds_bag_*`, `bigchoose` family, and `dss_*` aliases via `gm82_batch4_extras.c`.
3. **Execution Order & Lifecycle**:
   - Strict 7-phase GM execution pipeline (Begin Step, Step, End Step, Collision, Draw, etc.).
   - Deferred instance destruction and arena-backed allocations.
4. **Collision & Physics**:
   - Mario-tested parity for axis-separated ceiling/wall resolution and bounding box checks (`outside_room`).
5. **Cross-Platform Compatibility**:
   - C core synchronized across `app/src/main/cpp`, `NOR_MAKER_COMPLETE_PACKAGE/01_BLACKSCREEN_FIX`, and `app/src/main/cpp_backup`.
   - JavaScript engine and WebGL/Canvas runner supporting GMK assets (Mario Bros, Plataformas, Shooter, Zelda).

## 5. Summary & Verification
- All features are verified through the multi-tier audit suite (`python3 tools/daily_audit_runner.py`), ensuring 100% pass across native C tests, Python security/format verification, and JS game pipeline.
