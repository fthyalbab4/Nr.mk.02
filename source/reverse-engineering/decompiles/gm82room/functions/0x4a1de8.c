// rea decompile_all
// name: FUN_004a1de8
// address: 0x4a1de8
// body: available
// range: 0x4a1de8-0x4a20d0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4a1e0e (push 0x4a20fb followed by fs-segment stack chaining); handler 0x4a20fb lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4a1e37 (push 0x4a20d1 followed by fs-segment stack chaining); handler 0x4a20d1 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004a1de8(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

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
  puStack_48 = &LAB_004a20fb;
  iStack_4c = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_4c;
  local_d = 0;
  puStack_50 = (undefined1 *)0x4a1e29;
  local_c = param_3;
  local_14 = (int *)FUN_004e0f04(&PTR_LAB_004daca8,1,*(undefined4 *)PTR_DAT_0068917c);
  puStack_54 = &LAB_004a20d1;
  iStack_58 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_58;
  puStack_50 = &stack0xfffffffc;
  uVar1 = FUN_004e3248(local_14);
  FUN_0045d3e0(uVar1,local_14[0x19]);
  uVar1 = FUN_004e3248(local_14);
  FUN_004a0848(uVar1,&local_1c);
  FUN_004e2e6c(local_14,3);
  FUN_004bb690(local_14,param_1);
  iVar2 = MulDiv(0xb4,local_1c,4);
  FUN_004e1ed8(local_14,iVar2);
  FUN_004e37a0(local_14,1);
  FUN_004e3784(local_14,4);
  piVar3 = (int *)FUN_00476a18(&PTR_FUN_0046fff8,1,local_14);
  (**(code **)(*piVar3 + 0x78))(piVar3,local_14);
  FUN_004bb690(piVar3,param_2);
  iVar2 = MulDiv(8,local_1c,4);
  FUN_004bac30(piVar3,iVar2);
  iVar2 = MulDiv(8,local_18,8);
  FUN_004bac64(piVar3,iVar2);
  iVar2 = MulDiv(0xa4,local_1c,4);
  FUN_004b9db8(piVar3[0x1c],1,iVar2);
  FUN_00477384(piVar3,1);
  piVar4 = (int *)FUN_00477504(&PTR_LAB_00471160,1,local_14);
  (**(code **)(*piVar4 + 0x78))(piVar4,local_14);
  FUN_004bac30(piVar4,piVar3[0x10]);
  FUN_004bac64(piVar4,piVar3[0x11] + piVar3[0x13] + 5);
  iVar2 = MulDiv(0xa4,local_1c,4);
  FUN_004bac98(piVar4,iVar2);
  FUN_004776fc(piVar4,0xff);
  FUN_004bb690(piVar4,*local_c);
  FUN_00477a54(piVar4);
  local_20 = piVar4[0x11] + piVar4[0x13] + 0xf;
  local_24 = MulDiv(0x32,local_1c,4);
  local_28 = MulDiv(0xe,local_18,8);
  piVar3 = (int *)FUN_0047b3c8(&PTR_LAB_00474d7c,1,local_14);
  (**(code **)(*piVar3 + 0x78))(piVar3,local_14);
  FUN_0040b9d0(PTR_LAB_00689000,&local_2c);
  FUN_004bb690(piVar3,local_2c);
  piVar3[0xab] = 1;
  FUN_0047b894(piVar3,1);
  iVar7 = local_28;
  iVar2 = local_24;
  iVar5 = MulDiv(0x26,local_1c,4);
  (**(code **)(*piVar3 + 0x98))(piVar3,iVar5,local_20,iVar7,iVar2);
  piVar3 = (int *)FUN_0047b3c8(&PTR_LAB_00474d7c,1,local_14);
  (**(code **)(*piVar3 + 0x78))(piVar3,local_14);
  FUN_0040b9d0(PTR_LAB_00688d64,&local_30);
  FUN_004bb690(piVar3,local_30);
  piVar3[0xab] = 2;
  *(undefined1 *)((int)piVar3 + 0x279) = 1;
  iVar2 = local_28;
  iVar5 = local_24;
  iVar6 = MulDiv(0x5c,local_1c,4);
  (**(code **)(*piVar3 + 0x98))(piVar3,iVar6,piVar4[0x11] + piVar4[0x13] + 0xf,iVar2,iVar5);
  FUN_004e1f0c(local_14,piVar3[0x11] + piVar3[0x13] + 0xd);
  iVar5 = (**(code **)(*local_14 + 0x110))();
  if (iVar5 == 1) {
    FUN_004bb658(piVar4,&local_34);
    FUN_00408194(local_c,local_34);
    local_d = 1;
  }
  *in_FS_OFFSET = iVar2;
  FUN_00405fdc(local_14,iVar2,iVar7,&LAB_004a20d8);
  return;
}
