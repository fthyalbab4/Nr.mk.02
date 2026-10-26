// rea decompile_all
// name: FUN_006f2e48
// address: 0x6f2e48
// body: available
// range: 0x6f2e48-0x6f2f11 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006f2e48(int param_1)

{
  char cVar1;

  if (*(char *)(param_1 + 0x434) == '\0') {
    if (*(int *)(*(int *)(param_1 + 0x3d4) + 0x290) != *(int *)(*(int *)(param_1 + 0x420) + 0x14)) {
      FUN_005b2f08();
      FUN_00530760(*(undefined4 *)(param_1 + 0x3d8),
                   *(undefined4 *)(*(int *)(param_1 + 0x3d4) + 0x290));
      if (*(int *)(*(int *)(param_1 + 0x420) + 0x1c) != 2) {
        FUN_00530760(*(undefined4 *)(param_1 + 0x3f4),
                     *(undefined4 *)(*(int *)(param_1 + 0x420) + 0x20));
        FUN_00530760(*(undefined4 *)(param_1 + 0x3f8),
                     *(undefined4 *)(*(int *)(param_1 + 0x420) + 0x28));
        FUN_00530760(*(undefined4 *)(param_1 + 0x3fc),
                     *(undefined4 *)(*(int *)(param_1 + 0x420) + 0x24));
        FUN_00530760(*(undefined4 *)(param_1 + 0x400),
                     *(undefined4 *)(*(int *)(param_1 + 0x420) + 0x2c));
      }
      cVar1 = (**(code **)(**(int **)(param_1 + 0x3b8) + 0xec))();
      if (cVar1 != '\0') {
        FUN_006f28f8(param_1);
      }
      FUN_006f5ac8(*(undefined4 *)(param_1 + 0x42c));
      *(undefined1 *)(param_1 + 0x428) = 1;
    }
  }
  return;
}
