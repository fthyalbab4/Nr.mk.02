// rea decompile_all
// name: FUN_005bfff0
// address: 0x5bfff0
// body: available
// range: 0x5bfff0-0x5c0138 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_005bfff0(int *param_1,int *param_2,uint param_3,int param_4,uint param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;

  uVar3 = param_3 + param_5;
  if ((((uint)param_2[1] < uVar3) || ((uint)param_2[3] < param_5)) || (*param_2 == 0)) {
    *(undefined4 *)(*param_1 + 0x14) = 0x14;
    (**(code **)*param_1)();
  }
  if ((param_3 < (uint)param_2[6]) || ((uint)(param_2[6] + param_2[4]) < uVar3)) {
    if (param_2[10] == 0) {
      *(undefined4 *)(*param_1 + 0x14) = 0x44;
      (**(code **)*param_1)();
    }
    if (param_2[9] != 0) {
      FUN_005bfe94(param_1,param_2,1);
      param_2[9] = 0;
    }
    if ((uint)param_2[6] < param_3) {
      param_2[6] = param_3;
    }
    else {
      iVar1 = uVar3 - param_2[4];
      if (iVar1 < 0) {
        iVar1 = 0;
      }
      param_2[6] = iVar1;
    }
    FUN_005bfe94(param_1,param_2,0);
  }
  if ((uint)param_2[7] < uVar3) {
    if ((uint)param_2[7] < param_3) {
      uVar2 = param_3;
      if (param_4 != 0) {
        *(undefined4 *)(*param_1 + 0x14) = 0x14;
        (**(code **)*param_1)();
      }
    }
    else {
      uVar2 = param_2[7];
    }
    if (param_4 != 0) {
      param_2[7] = uVar3;
    }
    if (param_2[8] == 0) {
      if (param_4 == 0) {
        *(undefined4 *)(*param_1 + 0x14) = 0x14;
        (**(code **)*param_1)();
      }
    }
    else {
      iVar1 = param_2[6];
      for (uVar2 = uVar2 - iVar1; uVar2 < uVar3 - iVar1; uVar2 = uVar2 + 1) {
        FUN_005bf288();
      }
    }
  }
  if (param_4 != 0) {
    param_2[9] = 1;
  }
  return (param_3 - param_2[6]) * 4 + *param_2;
}
