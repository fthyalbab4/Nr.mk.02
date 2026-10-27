// rea decompile_all
// name: FUN_004fa5a8
// address: 0x4fa5a8
// body: available
// range: 0x4fa5a8-0x4fa65d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_004fa5a8(int param_1,char param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;

  if ((param_1 == *(int *)(*(int *)(param_1 + 0x1c) + 100)) ||
     (((iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + 100), iVar3 = param_1,
       iVar2 == *(int *)(param_1 + 0x14) && (*(int *)(param_1 + 4) != 0)) &&
      (iVar2 = FUN_004fa438(iVar2), iVar2 == 1)))) {
    piVar1 = *(int **)(*(int *)(param_1 + 0x1c) + 0x14);
    (**(code **)(*piVar1 + 0x54))(piVar1,&iStack_20);
    piVar1 = *(int **)(*(int *)(param_1 + 0x1c) + 0x14);
    (**(code **)(*piVar1 + 0xa0))(piVar1,&iStack_20);
    if (param_2 == '\x01') {
      iStack_14 = iStack_14 - iStack_1c;
    }
    else {
      iStack_14 = iStack_18 - iStack_20;
    }
  }
  else {
    for (; iVar3 != *(int *)(*(int *)(param_1 + 0x1c) + 100); iVar3 = *(int *)(iVar3 + 0x14)) {
      if (param_2 == *(char *)(*(int *)(iVar3 + 0x14) + 0x10)) {
        iVar2 = FUN_004fa980(iVar3);
        iVar3 = FUN_004fa494(iVar3);
        return iVar2 - iVar3;
      }
    }
    iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + 100);
    if (param_2 == *(char *)(iVar2 + 0x10)) {
      iStack_14 = *(int *)(*(int *)(param_1 + 0x1c) + 0x68);
    }
    else {
      iStack_14 = FUN_004fa980(iVar2);
    }
  }
  return iStack_14;
}
