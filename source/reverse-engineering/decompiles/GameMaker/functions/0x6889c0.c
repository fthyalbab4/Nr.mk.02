// rea decompile_all
// name: FUN_006889c0
// address: 0x6889c0
// body: available
// range: 0x6889c0-0x688d1d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006889c0(int param_1)

{
  FUN_004ee5c0(*(undefined4 *)(param_1 + 0x54c),*PTR_DAT_0078258c);
  FUN_004ee5c0(*(undefined4 *)(param_1 + 0x528),*PTR_DAT_0078258c);
  FUN_004ee5c0(*(undefined4 *)(param_1 + 0x52c),*PTR_DAT_0078258c);
  FUN_004ee5c0(*(undefined4 *)(param_1 + 0x544),*PTR_DAT_0078258c);
  FUN_004ee5c0(*(undefined4 *)(param_1 + 0x548),*PTR_DAT_0078258c);
  (**(code **)(**(int **)(param_1 + 0x51c) + 0x74))(*(int **)(param_1 + 0x51c),0);
  (**(code **)(**(int **)(param_1 + 0x524) + 0x74))(*(int **)(param_1 + 0x524),0);
  (**(code **)(**(int **)(param_1 + 0x528) + 0x74))(*(int **)(param_1 + 0x528),0);
  (**(code **)(**(int **)(param_1 + 0x52c) + 0x74))(*(int **)(param_1 + 0x52c),0);
  (**(code **)(**(int **)(param_1 + 0x544) + 0x74))(*(int **)(param_1 + 0x544),0);
  (**(code **)(**(int **)(param_1 + 0x548) + 0x74))(*(int **)(param_1 + 0x548),0);
  if (*(int *)(*(int *)(param_1 + 0x38c) + 0x2d4) == *(int *)(param_1 + 0x3c8)) {
    (**(code **)(**(int **)(param_1 + 0x51c) + 0x74))(*(int **)(param_1 + 0x51c),1);
    FUN_00407eb8(*(int *)(param_1 + 0x51c) + 0x80,L"Clear all instances from the room");
    (**(code **)(**(int **)(param_1 + 0x524) + 0x74))(*(int **)(param_1 + 0x524),1);
    FUN_00407eb8(*(int *)(param_1 + 0x524) + 0x80,L"Shift all instances by a given amount");
    (**(code **)(**(int **)(param_1 + 0x528) + 0x74))(*(int **)(param_1 + 0x528),1);
    FUN_00407eb8(*(int *)(param_1 + 0x528) + 0x80,L"Sort all instances by x-coordinate");
    (**(code **)(**(int **)(param_1 + 0x52c) + 0x74))(*(int **)(param_1 + 0x52c),1);
    FUN_00407eb8(*(int *)(param_1 + 0x52c) + 0x80,L"Sort all instances by y-coordinate");
    (**(code **)(**(int **)(param_1 + 0x544) + 0x74))(*(int **)(param_1 + 0x544),1);
    FUN_00407eb8(*(int *)(param_1 + 0x544) + 0x80,L"Lock all instances");
    (**(code **)(**(int **)(param_1 + 0x548) + 0x74))(*(int **)(param_1 + 0x548),1);
    FUN_00407eb8(*(int *)(param_1 + 0x548) + 0x80,L"Unlock all instances");
  }
  if (*(int *)(*(int *)(param_1 + 0x38c) + 0x2d4) == *(int *)(param_1 + 0x3d8)) {
    (**(code **)(**(int **)(param_1 + 0x51c) + 0x74))(*(int **)(param_1 + 0x51c),1);
    FUN_00407eb8(*(int *)(param_1 + 0x51c) + 0x80,L"Clear all tiles in the current layer");
    (**(code **)(**(int **)(param_1 + 0x524) + 0x74))(*(int **)(param_1 + 0x524),1);
    FUN_00407eb8(*(int *)(param_1 + 0x524) + 0x80,
                 L"Shift all tiles in the current layer by a given amount");
    (**(code **)(**(int **)(param_1 + 0x528) + 0x74))(*(int **)(param_1 + 0x528),1);
    FUN_00407eb8(*(int *)(param_1 + 0x528) + 0x80,
                 L"Sort all tiles in the current layer by x-coordinate");
    (**(code **)(**(int **)(param_1 + 0x52c) + 0x74))(*(int **)(param_1 + 0x52c),1);
    FUN_00407eb8(*(int *)(param_1 + 0x52c) + 0x80,
                 L"Sort all tiles in the current layer by y-coordinate");
    (**(code **)(**(int **)(param_1 + 0x544) + 0x74))(*(int **)(param_1 + 0x544),1);
    FUN_00407eb8(*(int *)(param_1 + 0x544) + 0x80,L"Lock all tiles in the current layer");
    (**(code **)(**(int **)(param_1 + 0x548) + 0x74))(*(int **)(param_1 + 0x548),1);
    FUN_00407eb8(*(int *)(param_1 + 0x548) + 0x80,L"Unlock all tiles in the current layer");
  }
  FUN_00530760(*(undefined4 *)(param_1 + 0x4d0),*(undefined4 *)(*(int *)(param_1 + 0x61c) + 0x18));
  FUN_00530760(*(undefined4 *)(param_1 + 0x4d8),*(undefined4 *)(*(int *)(param_1 + 0x61c) + 0x14));
  FUN_004c0238(*(undefined4 *)(param_1 + 0x4dc),*(undefined1 *)(param_1 + 0x162c));
  FUN_004c0238(*(undefined4 *)(param_1 + 0x54c),*(undefined1 *)(*(int *)(param_1 + 0x61c) + 0x1c));
  FUN_004dbce0(*(undefined4 *)(param_1 + 0x47c),*(undefined1 *)(param_1 + 0x162f));
  FUN_004dbce0(*(undefined4 *)(param_1 + 0x480),*(undefined1 *)(param_1 + 0x1630));
  FUN_004dbce0(*(undefined4 *)(param_1 + 0x484),*(undefined1 *)(param_1 + 0x162d));
  FUN_004dbce0(*(undefined4 *)(param_1 + 0x490),*(undefined1 *)(param_1 + 0x162e));
  FUN_004dbce0(*(undefined4 *)(param_1 + 0x488),*(undefined1 *)(param_1 + 0x1631));
  FUN_004dbce0(*(undefined4 *)(param_1 + 0x604),*(undefined1 *)(param_1 + 0x1632));
  FUN_004dbce0(*(undefined4 *)(param_1 + 0x608),*(undefined1 *)(param_1 + 0x1633));
  FUN_004dbce0(*(undefined4 *)(param_1 + 0x610),*(undefined1 *)(param_1 + 0x1634));
  return;
}
