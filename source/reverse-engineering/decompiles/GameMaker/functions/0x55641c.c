// rea decompile_all
// name: FUN_0055641c
// address: 0x55641c
// body: available
// range: 0x55641c-0x5564f8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0055641c(int *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iStack_1c;
  int iStack_14;

  puVar1 = (undefined4 *)(**(code **)param_1[1])(param_1,1,0x50);
  param_1[0x6a] = (int)puVar1;
  *puVar1 = &LAB_005561f4;
  if (param_2 != 0) {
    *(undefined4 *)(*param_1 + 0x14) = 4;
    (**(code **)*param_1)();
  }
  if (*(int *)(param_1[0x71] + 8) == 0) {
    iStack_14 = param_1[0x4f];
  }
  else {
    if (param_1[0x4f] < 2) {
      *(undefined4 *)(*param_1 + 0x14) = 0x2f;
      (**(code **)*param_1)();
    }
    FUN_00555e24(param_1);
    iStack_14 = param_1[0x4f] + 2;
  }
  iStack_1c = 0;
  iVar3 = param_1[0x36];
  puVar1 = puVar1 + 2;
  for (; iStack_1c < param_1[9]; iStack_1c = iStack_1c + 1) {
    uVar2 = (**(code **)(param_1[1] + 8))
                      (param_1,1,*(int *)(iVar3 + 0x1c) * *(int *)(iVar3 + 0x24),
                       ((*(int *)(iVar3 + 0xc) * *(int *)(iVar3 + 0x24)) / param_1[0x4f]) *
                       iStack_14);
    *puVar1 = uVar2;
    puVar1 = puVar1 + 1;
    iVar3 = iVar3 + 0x54;
  }
  return;
}
