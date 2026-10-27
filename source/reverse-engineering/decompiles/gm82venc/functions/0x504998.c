// rea decompile_all
// name: FUN_00504998
// address: 0x504998
// body: available
// range: 0x504998-0x504b4f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5049b7 (push 0x504b6d followed by fs-segment stack chaining); handler 0x504b6d lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5049dc (push 0x504b50 followed by fs-segment stack chaining); handler 0x504b50 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00504998(undefined4 *param_1,byte param_2,int param_3)

{
  undefined1 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_10;
  int *local_c;
  undefined1 local_6;
  byte local_5;

  puStack_1c = &stack0xfffffffc;
  local_10 = 0;
  puStack_20 = &LAB_00504b6d;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puStack_28 = (undefined1 *)0x5049ce;
  local_5 = param_2;
  local_c = (int *)FUN_00503ee4(&PTR_LAB_004ffd8c,1,*(undefined4 *)PTR_DAT_0068917c);
  puStack_2c = &LAB_00504b50;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  puStack_28 = &stack0xfffffffc;
  FUN_005046bc(local_c,*param_1);
  FUN_00504684(local_c,(local_5 & 1) != 0);
  *(bool *)((int)local_c + 0x3ad) = (local_5 & 4) != 0;
  if (*(int *)(*(int *)PTR_DAT_00689620 + 0x44) != 0x60) {
    FUN_004c4044(local_c,*(int *)(*(int *)PTR_DAT_00689620 + 0x44),0x60);
    FUN_004bb78c(local_c[0xea],1);
    uVar2 = FUN_004e86ac(*(undefined4 *)PTR_DAT_00689620);
    iVar4 = (int)uVar2 >> 1;
    if (iVar4 < 0) {
      iVar4 = iVar4 + (uint)((uVar2 & 1) != 0);
    }
    iVar3 = local_c[0x12] >> 1;
    if (iVar3 < 0) {
      iVar3 = iVar3 + (uint)((local_c[0x12] & 1U) != 0);
    }
    FUN_004e7918(local_c,iVar4 - iVar3);
    uVar2 = FUN_004e86a0(*(undefined4 *)PTR_DAT_00689620);
    iVar4 = (int)uVar2 >> 1;
    if (iVar4 < 0) {
      iVar4 = iVar4 + (uint)((uVar2 & 1) != 0);
    }
    iVar3 = local_c[0x13] >> 1;
    if (iVar3 < 0) {
      iVar3 = iVar3 + (uint)((local_c[0x13] & 1U) != 0);
    }
    FUN_004e7954(local_c,iVar4 - iVar3);
    FUN_0045b790(*(undefined4 *)(local_c[0xea] + 100),0xff000011);
  }
  if (param_3 == 0) {
    FUN_004bb578(local_c[0xe8],0);
    FUN_004bac30(local_c[0xe6],*(undefined4 *)(local_c[0xe7] + 0x40));
    FUN_004bac30(local_c[0xe7],*(undefined4 *)(local_c[0xe8] + 0x40));
  }
  else {
    FUN_004bae88(local_c,param_3);
  }
  iVar4 = (**(code **)(*local_c + 0x110))();
  local_6 = iVar4 == 1;
  if ((bool)local_6) {
    FUN_005048a8(local_c,&local_10);
    FUN_00408194(param_1,local_10);
    if ((local_5 & 2) != 0) {
      FUN_00504f78(*param_1);
    }
  }
  puVar1 = puStack_28;
  *in_FS_OFFSET = uStack_30;
  puStack_28 = &LAB_00504b57;
  puStack_2c = (undefined1 *)0x504b4f;
  FUN_00405fdc(local_c,uStack_30,puVar1);
  return;
}
