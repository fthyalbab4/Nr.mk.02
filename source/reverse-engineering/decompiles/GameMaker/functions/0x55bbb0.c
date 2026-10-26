// rea decompile_all
// name: FUN_0055bbb0
// address: 0x55bbb0
// body: available
// range: 0x55bbb0-0x55bc5d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_0055bbb0(int *param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  uint uStack_10;

  uStack_10 = param_3;
  if (param_1[5] != 0x65) {
    iVar1 = *param_1;
    *(undefined4 *)(iVar1 + 0x14) = 0x14;
    *(int *)(iVar1 + 0x18) = param_1[5];
    (**(code **)*param_1)();
  }
  if ((uint)param_1[8] <= (uint)param_1[0x37]) {
    *(undefined4 *)(*param_1 + 0x14) = 0x7b;
    (**(code **)(*param_1 + 4))(param_1,0xffffffff);
  }
  iVar1 = param_1[2];
  if (iVar1 != 0) {
    *(int *)(iVar1 + 4) = param_1[0x37];
    *(int *)(iVar1 + 8) = param_1[8];
    (**(code **)param_1[2])();
  }
  if (*(int *)(param_1[0x52] + 0xc) != 0) {
    (**(code **)(param_1[0x52] + 4))();
  }
  if ((uint)(param_1[8] - param_1[0x37]) < param_3) {
    param_3 = param_1[8] - param_1[0x37];
  }
  uStack_10 = 0;
  (**(code **)(param_1[0x53] + 4))(param_1,param_2,&uStack_10);
  param_1[0x37] = param_1[0x37] + param_3;
  return param_3;
}
