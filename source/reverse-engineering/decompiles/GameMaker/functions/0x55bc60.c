// rea decompile_all
// name: FUN_0055bc60
// address: 0x55bc60
// body: available
// range: 0x55bc60-0x55bd18 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_0055bc60(int *param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  int iVar2;

  if (param_1[5] != 0x66) {
    iVar2 = *param_1;
    *(undefined4 *)(iVar2 + 0x14) = 0x14;
    *(int *)(iVar2 + 0x18) = param_1[5];
    (**(code **)*param_1)();
  }
  if ((uint)param_1[0x37] < (uint)param_1[8]) {
    iVar2 = param_1[2];
    if (iVar2 != 0) {
      *(int *)(iVar2 + 4) = param_1[0x37];
      *(int *)(iVar2 + 8) = param_1[8];
      (**(code **)param_1[2])();
    }
    if (*(int *)(param_1[0x52] + 0xc) != 0) {
      (**(code **)(param_1[0x52] + 4))();
    }
    uVar1 = param_1[0x3a] * 8;
    if (param_3 < uVar1) {
      *(undefined4 *)(*param_1 + 0x14) = 0x17;
      (**(code **)*param_1)();
    }
    iVar2 = (**(code **)(param_1[0x55] + 4))(param_1,param_2);
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    else {
      param_1[0x37] = param_1[0x37] + uVar1;
    }
  }
  else {
    *(undefined4 *)(*param_1 + 0x14) = 0x7b;
    (**(code **)(*param_1 + 4))(param_1,0xffffffff);
    uVar1 = 0;
  }
  return uVar1;
}
