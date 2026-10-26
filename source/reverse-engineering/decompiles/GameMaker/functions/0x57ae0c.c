// rea decompile_all
// name: FUN_0057ae0c
// address: 0x57ae0c
// body: available
// range: 0x57ae0c-0x57aeb4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_0057ae0c(int *param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  int iVar2;

  if (param_1[4] != 0xce) {
    iVar2 = *param_1;
    *(undefined4 *)(iVar2 + 0x14) = 0x12;
    *(int *)(iVar2 + 0x18) = param_1[4];
    (**(code **)*param_1)();
  }
  if ((uint)param_1[0x22] < (uint)param_1[0x1c]) {
    iVar2 = param_1[2];
    if (iVar2 != 0) {
      *(int *)(iVar2 + 4) = param_1[0x22];
      *(int *)(iVar2 + 8) = param_1[0x1c];
      (**(code **)param_1[2])();
    }
    uVar1 = *(int *)((int)param_1 + 0x12a) * *(int *)((int)param_1 + 0x12e);
    if (param_3 <= uVar1 && uVar1 - param_3 != 0) {
      *(undefined4 *)(*param_1 + 0x14) = 0x15;
      (**(code **)*param_1)();
    }
    iVar2 = (**(code **)(*(int *)((int)param_1 + 0x19e) + 0xc))(param_1,param_2);
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    else {
      param_1[0x22] = param_1[0x22] + uVar1;
    }
  }
  else {
    *(undefined4 *)(*param_1 + 0x14) = 0x77;
    (**(code **)(*param_1 + 4))(param_1,0xffffffff);
    uVar1 = 0;
  }
  return uVar1;
}
