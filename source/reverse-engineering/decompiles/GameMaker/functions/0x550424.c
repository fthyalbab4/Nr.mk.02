// rea decompile_all
// name: FUN_00550424
// address: 0x550424
// body: available
// range: 0x550424-0x550565 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00550424(int *param_1,int *param_2,uint param_3,int param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;

  uVar4 = param_3 + param_5;
  if ((((uint)param_2[1] < uVar4) || ((uint)param_2[3] < param_5)) || (*param_2 == 0)) {
    *(undefined4 *)(*param_1 + 0x14) = 0x16;
    (**(code **)*param_1)();
  }
  if ((param_3 < (uint)param_2[6]) || ((uint)(param_2[6] + param_2[4]) < uVar4)) {
    if (param_2[10] == 0) {
      *(undefined4 *)(*param_1 + 0x14) = 0x45;
      (**(code **)*param_1)();
    }
    if (param_2[9] != 0) {
      FUN_005502c8(param_1,param_2,1);
      param_2[9] = 0;
    }
    if ((uint)param_2[6] < param_3) {
      param_2[6] = param_3;
    }
    else {
      iVar2 = uVar4 - param_2[4];
      if (iVar2 < 0) {
        iVar2 = 0;
      }
      param_2[6] = iVar2;
    }
    FUN_005502c8(param_1,param_2,0);
  }
  if ((uint)param_2[7] < uVar4) {
    if ((uint)param_2[7] < param_3) {
      uVar3 = param_3;
      if (param_4 != 0) {
        *(undefined4 *)(*param_1 + 0x14) = 0x16;
        (**(code **)*param_1)();
      }
    }
    else {
      uVar3 = param_2[7];
    }
    if (param_4 != 0) {
      param_2[7] = uVar4;
    }
    if (param_2[8] == 0) {
      if (param_4 == 0) {
        *(undefined4 *)(*param_1 + 0x14) = 0x16;
        (**(code **)*param_1)();
      }
    }
    else {
      iVar2 = param_2[2];
      iVar1 = param_2[6];
      for (uVar3 = uVar3 - iVar1; uVar3 < uVar4 - iVar1; uVar3 = uVar3 + 1) {
        FUN_0055af80(*(undefined4 *)(*param_2 + uVar3 * 4),iVar2);
      }
    }
  }
  if (param_4 != 0) {
    param_2[9] = 1;
  }
  return (param_3 - param_2[6]) * 4 + *param_2;
}
