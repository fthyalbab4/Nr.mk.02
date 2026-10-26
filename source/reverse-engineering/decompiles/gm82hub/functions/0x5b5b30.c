// rea decompile_all
// name: FUN_005b5b30
// address: 0x5b5b30
// body: available
// range: 0x5b5b30-0x5b5d8f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5b5b4a (push 0x5b5d90 followed by fs-segment stack chaining); handler 0x5b5d90 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005b5b30(int param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_8;

  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  puStack_1c = &LAB_005b5d90;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  if (*(int *)(param_1 + 0x3a0) < 1) {
    uVar2 = FUN_004604a4(*(undefined4 *)(*(int *)(param_1 + 0x388) + 0x1b0));
    FUN_004e1ed8(param_1,uVar2);
  }
  else {
    puStack_18 = &stack0xfffffffc;
    FUN_004e1ed8(param_1,*(int *)(param_1 + 0x3a0));
  }
  FUN_004bac30(*(undefined4 *)(param_1 + 0x38c),0x18);
  FUN_004bac64(*(undefined4 *)(param_1 + 0x38c),0x10);
  iVar3 = FUN_004baf44(param_1);
  FUN_004bac98(*(undefined4 *)(param_1 + 0x38c),iVar3 + -0x30);
  uVar2 = *(undefined4 *)(param_1 + 0x38c);
  FUN_004bb658(uVar2,&local_8);
  FUN_004085b8(&local_8,&DAT_005b5dac);
  FUN_004bb690(uVar2,local_8);
  if (*(int *)(param_1 + 0x3a4) < 1) {
    FUN_004e1f0c(param_1,*(int *)(*(int *)(param_1 + 0x38c) + 0x4c) + 0x30 +
                         *(int *)(DAT_0084f048 + 0x4c));
    if (*(char *)(*(int *)(param_1 + 0x394) + 0x59) != '\0') {
      iVar3 = FUN_004baf84(param_1);
      FUN_004e1f0c(param_1,iVar3 + 0x10 + *(int *)(*(int *)(param_1 + 0x394) + 0x4c));
    }
  }
  else {
    FUN_004e1f0c(param_1,*(int *)(param_1 + 0x3a4));
  }
  FUN_004bac30(DAT_0084f048,0x18);
  iVar3 = FUN_004baf84(param_1);
  FUN_004bac64(DAT_0084f048,(iVar3 + -0x10) - *(int *)(DAT_0084f048 + 0x4c));
  iVar3 = FUN_004baf44(param_1);
  uVar4 = iVar3 - *(int *)(DAT_0084f04c + 0x48);
  iVar3 = (int)uVar4 >> 1;
  if (iVar3 < 0) {
    iVar3 = iVar3 + (uint)((uVar4 & 1) != 0);
  }
  FUN_004bac30(DAT_0084f04c,iVar3);
  iVar3 = FUN_004baf84(param_1);
  FUN_004bac64(DAT_0084f04c,(iVar3 + -0x10) - *(int *)(DAT_0084f04c + 0x4c));
  iVar3 = FUN_004baf44(param_1);
  FUN_004bac30(DAT_0084f050,(iVar3 - *(int *)(DAT_0084f050 + 0x48)) + -0x18);
  iVar3 = FUN_004baf84(param_1);
  FUN_004bac64(DAT_0084f050,(iVar3 + -0x10) - *(int *)(DAT_0084f050 + 0x4c));
  FUN_004bac30(*(undefined4 *)(param_1 + 0x394),0x18);
  iVar3 = FUN_004baf44(param_1);
  FUN_004bac98(*(undefined4 *)(param_1 + 0x394),iVar3 + -0x30);
  FUN_004bac64(*(int *)(param_1 + 0x394),
               (*(int *)(DAT_0084f048 + 0x44) - *(int *)(*(int *)(param_1 + 0x394) + 0x4c)) + -0x10)
  ;
  if (*(int *)(param_1 + 0x398) < 0) {
    iVar3 = FUN_004e86ac(*(undefined4 *)PTR_DAT_00689620);
    uVar4 = iVar3 - *(int *)(DAT_0084f044 + 0x48);
    iVar3 = (int)uVar4 >> 1;
    if (iVar3 < 0) {
      iVar3 = iVar3 + (uint)((uVar4 & 1) != 0);
    }
    FUN_004e7918(DAT_0084f044,iVar3);
  }
  else {
    FUN_004e7918(DAT_0084f044,*(int *)(param_1 + 0x398));
  }
  if (*(int *)(param_1 + 0x39c) < 0) {
    iVar3 = FUN_004e86a0(*(undefined4 *)PTR_DAT_00689620);
    uVar4 = iVar3 - *(int *)(DAT_0084f044 + 0x4c);
    iVar3 = (int)uVar4 >> 1;
    if (iVar3 < 0) {
      iVar3 = iVar3 + (uint)((uVar4 & 1) != 0);
    }
    FUN_004e7954(DAT_0084f044,iVar3);
  }
  else {
    FUN_004e7954(DAT_0084f044,*(int *)(param_1 + 0x39c));
  }
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_005b5d97;
  puStack_1c = (undefined1 *)0x5b5d8f;
  thunk_FUN_004072d8(&local_8,uStack_20,puVar1);
  return;
}
