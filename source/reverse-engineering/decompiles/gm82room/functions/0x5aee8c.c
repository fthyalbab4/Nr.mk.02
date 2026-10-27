// rea decompile_all
// name: FUN_005aee8c
// address: 0x5aee8c
// body: available
// range: 0x5aee8c-0x5aef8a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005aee8c(int *param_1)

{
  int iVar1;
  int *piVar2;

  if (param_1[5] != 100) {
    iVar1 = *param_1;
    *(undefined4 *)(iVar1 + 0x14) = 0x14;
    *(int *)(iVar1 + 0x18) = param_1[5];
    (**(code **)*param_1)();
  }
  if (param_1[0x10] == 0) {
    iVar1 = (**(code **)param_1[1])(param_1,0,0x348);
    param_1[0x10] = iVar1;
  }
  param_1[0xd] = 8;
  FUN_005aed90(param_1,0x4b,1);
  FUN_005aee34(param_1);
  iVar1 = 0;
  piVar2 = param_1 + 0x1d;
  do {
    *(undefined1 *)piVar2 = 0;
    *(undefined1 *)(piVar2 + 4) = 1;
    *(undefined1 *)(piVar2 + 8) = 5;
    iVar1 = iVar1 + 1;
    piVar2 = (int *)((int)piVar2 + 1);
  } while (iVar1 < 0x10);
  param_1[0x2a] = 0;
  param_1[0x29] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  if (8 < param_1[0xd]) {
    param_1[0x2d] = 1;
  }
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 2;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  *(undefined1 *)(param_1 + 0x34) = 1;
  *(undefined1 *)((int)param_1 + 0xd1) = 1;
  *(undefined1 *)((int)param_1 + 0xd2) = 0;
  *(undefined2 *)(param_1 + 0x35) = 1;
  *(undefined2 *)((int)param_1 + 0xd6) = 1;
  FUN_005aef8c(param_1);
  return;
}
