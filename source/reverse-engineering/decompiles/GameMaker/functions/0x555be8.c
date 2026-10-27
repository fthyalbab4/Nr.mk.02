// rea decompile_all
// name: FUN_00555be8
// address: 0x555be8
// body: available
// range: 0x555be8-0x555cf3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00555be8(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;

  iVar1 = param_1[0x73];
  puVar4 = *(undefined4 **)(iVar1 + 0x18);
  if (param_1[0x16] != 0) {
    param_1[0x16] = 2;
  }
  if (param_2 == 0) {
    if (param_1[0x16] == 2) {
      *(code **)(iVar1 + 4) = FUN_00555828;
    }
    else {
      *(code **)(iVar1 + 4) = FUN_0055575c;
    }
    *(undefined **)(iVar1 + 8) = &DAT_00555be4;
    iVar5 = param_1[0x21];
    if (iVar5 < 1) {
      iVar2 = *param_1;
      *(undefined4 *)(iVar2 + 0x14) = 0x38;
      *(undefined4 *)(iVar2 + 0x18) = 1;
      (**(code **)*param_1)();
    }
    if (0x100 < iVar5) {
      iVar5 = *param_1;
      *(undefined4 *)(iVar5 + 0x14) = 0x39;
      *(undefined4 *)(iVar5 + 0x18) = 0x100;
      (**(code **)*param_1)();
    }
    if (param_1[0x16] == 2) {
      iVar5 = param_1[0x1c] * 6 + 0xc;
      if (*(int *)(iVar1 + 0x20) == 0) {
        uVar3 = (**(code **)(param_1[1] + 4))(param_1,1,iVar5);
        *(undefined4 *)(iVar1 + 0x20) = uVar3;
      }
      FUN_0055af80(*(undefined4 *)(iVar1 + 0x20),iVar5);
      if (*(int *)(iVar1 + 0x28) == 0) {
        FUN_00555b2c(param_1);
      }
      *(undefined4 *)(iVar1 + 0x24) = 0;
    }
  }
  else {
    *(undefined1 **)(iVar1 + 4) = &LAB_00554b24;
    *(undefined1 **)(iVar1 + 8) = &LAB_00555bc0;
    *(undefined4 *)(iVar1 + 0x1c) = 1;
  }
  if (*(int *)(iVar1 + 0x1c) != 0) {
    iVar5 = 0;
    do {
      FUN_0055af80(*puVar4,0x1000);
      iVar5 = iVar5 + 1;
      puVar4 = puVar4 + 1;
    } while (iVar5 < 0x20);
    *(undefined4 *)(iVar1 + 0x1c) = 0;
  }
  return;
}
