// rea decompile_all
// name: FUN_004c7edc
// address: 0x4c7edc
// body: available
// range: 0x4c7edc-0x4c807f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004c7edc(int param_1,int param_2,int param_3,char param_4,undefined1 param_5)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;

  iVar1 = FUN_004c72d4(&DAT_004b55e8,1,param_1);
  *(undefined1 *)(iVar1 + 0x10) = param_5;
  if (param_3 == 0) {
    *(undefined4 *)(iVar1 + 0x20) = *(undefined4 *)(param_1 + 0x68);
    uVar2 = FUN_004c786c(*(undefined4 *)(param_1 + 100));
    *(undefined4 *)(param_1 + 0x68) = uVar2;
    *(undefined1 *)(param_1 + 0x48) = param_5;
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x44) = 0x3fe00000;
    if (param_4 == '\0') {
      *(int *)(iVar1 + 8) = param_2;
      iVar4 = *(int *)(param_1 + 100);
      *(int *)(iVar4 + 0x14) = iVar1;
      *(int *)(iVar4 + 0x18) = param_2;
      *(int *)(param_2 + 0xc) = iVar4;
      *(int *)(param_2 + 0x14) = iVar1;
      *(int *)(param_1 + 100) = iVar1;
      FUN_004c7c28(param_1,*(undefined4 *)(iVar1 + 8));
      uVar3 = FUN_004c786c(*(undefined4 *)(param_1 + 100));
      iVar4 = (int)uVar3 >> 1;
      if (iVar4 < 0) {
        iVar4 = iVar4 + (uint)((uVar3 & 1) != 0);
      }
      *(int *)(param_1 + 0x4c) = iVar4;
      FUN_004c7c28(param_1,*(undefined4 *)(iVar1 + 8));
      uVar3 = FUN_004c786c(*(undefined4 *)(param_1 + 100));
      iVar4 = (int)uVar3 >> 1;
      if (iVar4 < 0) {
        iVar4 = iVar4 + (uint)((uVar3 & 1) != 0);
      }
      *(int *)(param_2 + 0x20) = iVar4;
    }
    else {
      *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(param_1 + 100);
      iVar4 = *(int *)(param_1 + 100);
      *(int *)(iVar4 + 0x14) = iVar1;
      *(int *)(iVar4 + 0xc) = param_2;
      *(int *)(param_2 + 0x18) = iVar4;
      *(int *)(param_2 + 0x14) = iVar1;
      *(int *)(param_1 + 100) = iVar1;
      FUN_004c7c28(param_1,*(undefined4 *)(iVar1 + 8));
    }
    FUN_004c7c28(param_1,0);
  }
  else {
    uVar2 = FUN_004c786c(param_3);
    *(undefined4 *)(iVar1 + 0x20) = uVar2;
    *(undefined4 *)(iVar1 + 0x14) = *(undefined4 *)(param_3 + 0x14);
    iVar4 = *(int *)(param_3 + 0x18);
    *(int *)(iVar1 + 0x18) = iVar4;
    if (iVar4 != 0) {
      *(int *)(iVar4 + 0xc) = iVar1;
    }
    iVar4 = *(int *)(param_3 + 0xc);
    *(int *)(iVar1 + 0xc) = iVar4;
    if (iVar4 != 0) {
      *(int *)(iVar4 + 0x18) = iVar1;
    }
    if (param_3 == *(int *)(*(int *)(iVar1 + 0x14) + 8)) {
      *(int *)(*(int *)(iVar1 + 0x14) + 8) = iVar1;
    }
    *(int *)(param_2 + 0x14) = iVar1;
    *(int *)(param_3 + 0x14) = iVar1;
    if (param_4 == '\0') {
      *(int *)(iVar1 + 8) = param_2;
      *(int *)(param_3 + 0x18) = param_2;
      *(undefined4 *)(param_3 + 0xc) = 0;
      *(int *)(param_2 + 0xc) = param_3;
    }
    else {
      *(int *)(iVar1 + 8) = param_3;
      *(undefined4 *)(param_3 + 0x18) = 0;
      *(int *)(param_3 + 0xc) = param_2;
      *(int *)(param_2 + 0x18) = param_3;
    }
  }
  FUN_004c754c(iVar1);
  FUN_004c78e4(iVar1);
  FUN_004c7c28(param_1,0);
  return;
}
