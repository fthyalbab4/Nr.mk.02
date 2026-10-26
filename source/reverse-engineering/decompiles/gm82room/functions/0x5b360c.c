// rea decompile_all
// name: FUN_005b360c
// address: 0x5b360c
// body: available
// range: 0x5b360c-0x5b3689 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005b360c(int param_1,char param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  char *pcVar3;
  undefined4 *puVar4;
  int iVar5;

  FUN_005b35a8(param_1);
  if (*(int *)(param_1 + 0xc) == 0) {
    FUN_005b3530(param_1);
    puVar2 = *(undefined1 **)(param_1 + 0x10);
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
    *puVar2 = 0xff;
    piVar1 = (int *)(param_1 + 0x14);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_005b3464(param_1);
    }
    pcVar3 = *(char **)(param_1 + 0x10);
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
    *pcVar3 = param_2 + -0x30;
    piVar1 = (int *)(param_1 + 0x14);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_005b3464(param_1);
    }
  }
  if (*(int *)(*(int *)(param_1 + 0x20) + 0x138) == 0) {
    puVar4 = (undefined4 *)(param_1 + 0x24);
    for (iVar5 = 0; iVar5 < *(int *)(*(int *)(param_1 + 0x20) + 0xf0); iVar5 = iVar5 + 1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    return;
  }
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  return;
}
