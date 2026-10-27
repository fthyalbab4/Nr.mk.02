// rea decompile_all
// name: FUN_0055d14c
// address: 0x55d14c
// body: available
// range: 0x55d14c-0x55d2e6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0055d14c(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;

  iVar1 = param_1[0x52];
  iVar2 = *(int *)(iVar1 + 0x14);
  if (iVar2 == 0) {
    FUN_0055ceb0(param_1);
    FUN_0055cfa0(param_1);
    if (param_1[0x2b] == 0) {
      (**(code **)param_1[0x57])();
      (**(code **)param_1[0x58])();
      (**(code **)param_1[0x54])(param_1,0);
    }
    (**(code **)param_1[0x59])();
    (**(code **)param_1[0x5a])(param_1,param_1[0x2d]);
    if (*(int *)(iVar1 + 0x1c) < 2) {
      uVar3 = 0;
    }
    else {
      uVar3 = 3;
    }
    (**(code **)param_1[0x55])(param_1,uVar3);
    (**(code **)param_1[0x53])(param_1,0);
    if (param_1[0x2d] == 0) {
      *(undefined4 *)(iVar1 + 0xc) = 1;
    }
    else {
      *(undefined4 *)(iVar1 + 0xc) = 0;
    }
  }
  else {
    if (iVar2 == 1) {
      FUN_0055ceb0(param_1);
      FUN_0055cfa0(param_1);
      if (((param_1[0x4e] != 0) || (param_1[0x50] == 0)) || (param_1[0x2c] != 0)) {
        (**(code **)param_1[0x5a])(param_1,1);
        (**(code **)param_1[0x55])(param_1,2);
        *(undefined4 *)(iVar1 + 0xc) = 0;
        goto LAB_0055d2c1;
      }
      *(undefined4 *)(iVar1 + 0x14) = 2;
      *(int *)(iVar1 + 0x18) = *(int *)(iVar1 + 0x18) + 1;
    }
    else if (iVar2 != 2) {
      *(undefined4 *)(*param_1 + 0x14) = 0x30;
      (**(code **)*param_1)();
      goto LAB_0055d2c1;
    }
    if (param_1[0x2d] == 0) {
      FUN_0055ceb0(param_1);
      FUN_0055cfa0(param_1);
    }
    (**(code **)param_1[0x5a])(param_1,0);
    (**(code **)param_1[0x55])(param_1,2);
    if (*(int *)(iVar1 + 0x20) == 0) {
      (**(code **)(param_1[0x56] + 4))();
    }
    (**(code **)(param_1[0x56] + 8))();
    *(undefined4 *)(iVar1 + 0xc) = 0;
  }
LAB_0055d2c1:
  *(uint *)(iVar1 + 0x10) = (uint)(*(int *)(iVar1 + 0x1c) + -1 == *(int *)(iVar1 + 0x18));
  iVar2 = param_1[2];
  if (iVar2 != 0) {
    *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(iVar1 + 0x18);
    *(undefined4 *)(iVar2 + 0x10) = *(undefined4 *)(iVar1 + 0x1c);
  }
  return;
}
