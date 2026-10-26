// rea decompile_all
// name: FUN_006bc118
// address: 0x6bc118
// body: available
// range: 0x6bc118-0x6bc1e1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006bc118(int param_1,int param_2)

{
  int iVar1;

  if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 0xa020))) {
    *(undefined1 *)(param_1 + 0xa024) = 1;
    FUN_004ee5c0(*(undefined4 *)(param_1 + 0x38c),1);
    (**(code **)(**(int **)(param_1 + 0x388) + 0xf0))(*(int **)(param_1 + 0x388),param_2);
    iVar1 = FUN_006bccc8(*(undefined4 *)(param_1 + 0x3dc + param_2 * 4));
    FUN_004ee6d8(*(undefined4 *)(param_1 + 0x394),*(undefined4 *)(iVar1 + 4));
    FUN_004ee6d8(*(undefined4 *)(param_1 + 0x39c),*(undefined4 *)(iVar1 + 8));
    if (*(int *)(iVar1 + 0x10) == 1) {
      (**(code **)(**(int **)(param_1 + 0x3a4) + 0xf0))(*(int **)(param_1 + 0x3a4),1);
    }
    if (*(int *)(iVar1 + 0x10) == 0) {
      (**(code **)(**(int **)(param_1 + 0x3a8) + 0xf0))(*(int **)(param_1 + 0x3a8),1);
    }
    if (*(int *)(iVar1 + 0x10) == 2) {
      (**(code **)(**(int **)(param_1 + 0x3ac) + 0xf0))(*(int **)(param_1 + 0x3ac),1);
    }
    FUN_004ee6d8(*(undefined4 *)(param_1 + 0x3b4),*(undefined4 *)(iVar1 + 0xc));
    *(undefined1 *)(param_1 + 0xa024) = 0;
    return;
  }
  FUN_004ee5c0(*(undefined4 *)(param_1 + 0x38c),0);
  return;
}
