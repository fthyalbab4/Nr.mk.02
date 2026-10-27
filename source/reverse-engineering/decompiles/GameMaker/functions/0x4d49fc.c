// rea decompile_all
// name: FUN_004d49fc
// address: 0x4d49fc
// body: available
// range: 0x4d49fc-0x4d4ce4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4d4a22 (push 0x4d4d0f followed by fs-segment stack chaining); handler 0x4d4d0f lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4d4a4b (push 0x4d4ce5 followed by fs-segment stack chaining); handler 0x4d4ce5 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004d49fc(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int *in_FS_OFFSET;
  int iVar7;
  int iStack_58;
  undefined1 *puStack_54;
  undefined1 *puStack_50;
  int iStack_4c;
  undefined1 *puStack_48;
  undefined1 *puStack_44;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int *local_14;
  undefined1 local_d;
  undefined4 *local_c;

  puStack_44 = &stack0xfffffffc;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  puStack_48 = &LAB_004d4d0f;
  iStack_4c = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_4c;
  local_d = 0;
  puStack_50 = (undefined1 *)0x4d4a3d;
  local_c = param_3;
  local_14 = (int *)FUN_00514e78(&PTR_LAB_0050eaf4,1,*(undefined4 *)PTR_DAT_00782280);
  puStack_54 = &LAB_004d4ce5;
  iStack_58 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_58;
  puStack_50 = &stack0xfffffffc;
  uVar1 = FUN_005171bc(local_14);
  FUN_0045cd20(uVar1,local_14[0x19]);
  uVar1 = FUN_005171bc(local_14);
  FUN_004d345c(uVar1,&local_1c);
  FUN_00516de0(local_14,3);
  FUN_004ee6d8(local_14,param_1);
  iVar2 = MulDiv(0xb4,local_1c,4);
  FUN_00515e4c(local_14,iVar2);
  FUN_00517714(local_14,1);
  FUN_005176f8(local_14,4);
  piVar3 = (int *)FUN_0047cc38(&LAB_004712ac,1,local_14);
  (**(code **)(*piVar3 + 0x78))(piVar3,local_14);
  FUN_004ee6d8(piVar3,param_2);
  iVar2 = MulDiv(8,local_1c,4);
  FUN_004edc78(piVar3,iVar2);
  iVar2 = MulDiv(8,local_18,8);
  FUN_004edcac(piVar3,iVar2);
  iVar2 = MulDiv(0xa4,local_1c,4);
  FUN_004ece00(piVar3[0x1c],1,iVar2);
  FUN_0047d5a4(piVar3,1);
  piVar4 = (int *)FUN_0047d724(&PTR_LAB_00472414,1,local_14);
  (**(code **)(*piVar4 + 0x78))(piVar4,local_14);
  FUN_004edc78(piVar4,piVar3[0x10]);
  FUN_004edcac(piVar4,piVar3[0x11] + piVar3[0x13] + 5);
  iVar2 = MulDiv(0xa4,local_1c,4);
  FUN_004edce0(piVar4,iVar2);
  FUN_0047d91c(piVar4,0xff);
  FUN_004ee6d8(piVar4,*local_c);
  FUN_0047dc74(piVar4);
  local_20 = piVar4[0x11] + piVar4[0x13] + 0xf;
  local_24 = MulDiv(0x32,local_1c,4);
  local_28 = MulDiv(0xe,local_18,8);
  piVar3 = (int *)FUN_0048165c(&PTR_LAB_00476d5c,1,local_14);
  (**(code **)(*piVar3 + 0x78))(piVar3,local_14);
  FUN_0040b75c(PTR_PTR_00782068,&local_2c);
  FUN_004ee6d8(piVar3,local_2c);
  piVar3[0xab] = 1;
  FUN_00481b28(piVar3,1);
  iVar7 = local_28;
  iVar2 = local_24;
  iVar5 = MulDiv(0x26,local_1c,4);
  (**(code **)(*piVar3 + 0x98))(piVar3,iVar5,local_20,iVar7,iVar2);
  piVar3 = (int *)FUN_0048165c(&PTR_LAB_00476d5c,1,local_14);
  (**(code **)(*piVar3 + 0x78))(piVar3,local_14);
  FUN_0040b75c(PTR_PTR_00781cc8,&local_30);
  FUN_004ee6d8(piVar3,local_30);
  piVar3[0xab] = 2;
  *(undefined1 *)((int)piVar3 + 0x279) = 1;
  iVar2 = local_28;
  iVar5 = local_24;
  iVar6 = MulDiv(0x5c,local_1c,4);
  (**(code **)(*piVar3 + 0x98))(piVar3,iVar6,piVar4[0x11] + piVar4[0x13] + 0xf,iVar2,iVar5);
  FUN_00515e80(local_14,piVar3[0x11] + piVar3[0x13] + 0xd);
  iVar5 = (**(code **)(*local_14 + 0x110))();
  if (iVar5 == 1) {
    FUN_004ee6a0(piVar4,&local_34);
    FUN_00407eb8(local_c,local_34);
    local_d = 1;
  }
  *in_FS_OFFSET = iVar2;
  FUN_00405a7c(local_14,iVar2,iVar7,&LAB_004d4cec);
  return;
}
