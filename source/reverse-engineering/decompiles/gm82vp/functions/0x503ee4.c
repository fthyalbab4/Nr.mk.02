// rea decompile_all
// name: FUN_00503ee4
// address: 0x503ee4
// body: available
// range: 0x503ee4-0x50447d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x503f17 (push 0x50447e followed by fs-segment stack chaining); handler 0x50447e lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00503ee4(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  undefined2 extraout_var_03;
  undefined2 extraout_var_04;
  undefined2 extraout_var_05;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  local_14 = 4;
  do {
    local_c = 0;
    local_14 = local_14 + -1;
  } while (local_14 != 0);
  LOCK();
  uVar2 = 0;
  UNLOCK();
  local_8 = local_14;
  if ((char)param_2 != '\0') {
    puStack_34 = (undefined1 *)0x503f07;
    param_1 = FUN_00406510(param_1,param_2,0);
    uVar2 = extraout_ECX;
    param_2 = extraout_EDX;
  }
  local_8 = CONCAT13((char)param_2,(undefined3)local_8);
  puStack_38 = &LAB_0050447e;
  uStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_3c;
  puStack_34 = &stack0xfffffffc;
  FUN_004e1260(param_1,0,uVar2,0);
  FUN_0040b9d0(PTR_LAB_00688a3c,&local_c);
  FUN_004bb690(param_1,local_c);
  FUN_004e2e6c(param_1,3);
  FUN_004e1ed8(param_1,0x1a8);
  FUN_004e1f0c(param_1,0xff);
  FUN_004e3784(param_1,4);
  piVar1 = (int *)FUN_00477504(&PTR_LAB_00471160,1,param_1);
  *(int **)(param_1 + 0x38c) = piVar1;
  (**(code **)(*piVar1 + 0x78))(piVar1,param_1);
  (**(code **)(*piVar1 + 0x98))(piVar1,8,0x18,0x14,0x139);
  FUN_004bb578(piVar1,0);
  FUN_004c48a0(piVar1,CONCAT22(extraout_var,1));
  piVar1 = (int *)FUN_00476a18(&PTR_FUN_0046fff8,1,param_1);
  (**(code **)(*piVar1 + 0x78))(piVar1,param_1);
  (**(code **)(*piVar1 + 0x98))(piVar1,8,8,0xd,0x5c);
  FUN_004772e0(piVar1,*(undefined4 *)(param_1 + 0x38c));
  FUN_0040b9d0(PTR_LAB_0068960c,&local_10);
  FUN_004bb690(piVar1,local_10);
  piVar1 = (int *)FUN_00500f84(&PTR_LAB_004fe4e4,1,param_1);
  *(int **)(param_1 + 0x390) = piVar1;
  (**(code **)(*piVar1 + 0x78))(piVar1,param_1);
  (**(code **)(*piVar1 + 0x98))(piVar1,0xe8,0xc0,0x13,0xb9);
  FUN_004c48a0(piVar1,CONCAT22(extraout_var_00,2));
  piVar1[0xa3] = param_1;
  piVar1[0xa2] = (int)&LAB_00504664;
  piVar1 = (int *)FUN_00476a18(&PTR_FUN_0046fff8,1,param_1);
  (**(code **)(*piVar1 + 0x78))(piVar1,param_1);
  (**(code **)(*piVar1 + 0x98))(piVar1,0xe8,0xb0,0xd,0x29);
  FUN_0040b9d0(PTR_LAB_00689650,&local_14);
  FUN_004bb690(piVar1,local_14);
  FUN_004772e0(piVar1,*(undefined4 *)(param_1 + 0x390));
  piVar1 = (int *)func_0x005003a0(&PTR_FUN_004ffb74,1,param_1);
  *(int **)(param_1 + 0x394) = piVar1;
  (**(code **)(*piVar1 + 0x78))(piVar1,param_1);
  (**(code **)(*piVar1 + 0x98))(piVar1,0x78,8,0xd,0xd5);
  piVar1 = (int *)FUN_00501950(&PTR_LAB_004fd64c,1,param_1);
  *(int **)(param_1 + 0x388) = piVar1;
  (**(code **)(*piVar1 + 0x78))(piVar1,param_1);
  (**(code **)(*piVar1 + 0x98))(piVar1,8,0x48,0x8a,0xd5);
  FUN_004c48a0(piVar1,0);
  FUN_004c48b8(piVar1,1);
  FUN_0047ced4(piVar1,0x11);
  FUN_0047ce64(piVar1,1);
  piVar1[0xc3] = param_1;
  piVar1[0xc2] = (int)FUN_005044d8;
  piVar1 = (int *)FUN_00476a18(&PTR_FUN_0046fff8,1,param_1);
  (**(code **)(*piVar1 + 0x78))(piVar1,param_1);
  (**(code **)(*piVar1 + 0x98))(piVar1,8,0x38,0xd,0x42);
  FUN_0040b9d0(PTR_LAB_0068933c,&stack0xffffffe8);
  FUN_004bb690(piVar1,unaff_EBX);
  FUN_004772e0(piVar1,*(undefined4 *)(param_1 + 0x388));
  piVar1 = (int *)FUN_00502af4(&PTR_LAB_004fc870,1,param_1);
  *(int **)(param_1 + 0x3a8) = piVar1;
  (**(code **)(*piVar1 + 0x78))(piVar1,param_1);
  (**(code **)(*piVar1 + 0x98))(piVar1,0xe8,0x48,0x5d,0xb9);
  FUN_004c48a0(piVar1,CONCAT22(extraout_var_01,6));
  FUN_004c48b8(piVar1,1);
  FUN_005036ac(piVar1,0x40);
  FUN_005036d8(piVar1,&DAT_005044b8);
  FUN_0045b790(piVar1[0x19],0xff000011);
  FUN_0047ced4(piVar1,0xd);
  piVar1 = (int *)FUN_00476a18(&PTR_FUN_0046fff8,1,param_1);
  (**(code **)(*piVar1 + 0x78))(piVar1,param_1);
  (**(code **)(*piVar1 + 0x98))(piVar1,0xe8,0x38,0xd,0x39);
  FUN_0040b9d0(PTR_LAB_00688f5c,&stack0xffffffe4);
  FUN_004bb690(piVar1,unaff_ESI);
  FUN_004772e0(piVar1,*(undefined4 *)(param_1 + 0x3a8));
  piVar1 = (int *)FUN_0047b3c8(&PTR_LAB_00474d7c,1,param_1);
  *(int **)(param_1 + 0x3a4) = piVar1;
  (**(code **)(*piVar1 + 0x78))(piVar1,param_1);
  (**(code **)(*piVar1 + 0x98))(piVar1,8,0xe0,0x1b,0x4d);
  FUN_004bb578(piVar1,0);
  FUN_004c48a0(piVar1,CONCAT22(extraout_var_02,3));
  FUN_0040b9d0(PTR_LAB_00688a90,&stack0xffffffe0);
  FUN_004bb690(piVar1,unaff_EDI);
  piVar1[0x45] = param_1;
  piVar1[0x44] = (int)FUN_005048d8;
  piVar1 = (int *)FUN_0047b3c8(&PTR_LAB_00474d7c,1,param_1);
  *(int **)(param_1 + 0x398) = piVar1;
  (**(code **)(*piVar1 + 0x78))(piVar1,param_1);
  (**(code **)(*piVar1 + 0x98))(piVar1,0xac,0xe0,0x1b,0x4d);
  FUN_004c48a0(piVar1,CONCAT22(extraout_var_03,4));
  piVar1[0x45] = param_1;
  piVar1[0x44] = (int)FUN_005048f8;
  FUN_0040b9d0(PTR_LAB_0068894c,&local_24);
  FUN_004bb690(piVar1,local_24);
  piVar1[0xab] = 1;
  FUN_0047b894(piVar1,1);
  piVar1 = (int *)FUN_0047b3c8(&PTR_LAB_00474d7c,1,param_1);
  *(int **)(param_1 + 0x39c) = piVar1;
  (**(code **)(*piVar1 + 0x78))(piVar1,param_1);
  uVar3 = 0x1b;
  (**(code **)(*piVar1 + 0x98))(piVar1,0x100,0xe0,0x1b,0x4d);
  FUN_004c48a0(piVar1,CONCAT22(extraout_var_04,5));
  *(undefined1 *)((int)piVar1 + 0x279) = 1;
  FUN_0040b9d0(PTR_LAB_00689538,&local_28);
  FUN_004bb690(piVar1,local_28);
  piVar1[0xab] = 2;
  piVar1 = (int *)FUN_0047b3c8(&PTR_LAB_00474d7c,1,param_1);
  *(int **)(param_1 + 0x3a0) = piVar1;
  (**(code **)(*piVar1 + 0x78))(piVar1,param_1);
  uVar2 = 0x1b;
  (**(code **)(*piVar1 + 0x98))(piVar1,0x154,0xe0,0x1b,0x4d);
  FUN_004c48a0(piVar1,CONCAT22(extraout_var_05,7));
  FUN_0040b9d0(PTR_LAB_0068913c,&local_2c);
  FUN_004bb690(piVar1,local_2c);
  piVar1[0x45] = param_1;
  piVar1[0x44] = (int)&LAB_005044c0;
  FUN_00504584(param_1,param_1);
  FUN_004e4900(param_1,*(undefined4 *)(param_1 + 0x388));
  *in_FS_OFFSET = uVar2;
  thunk_FUN_004072fc(&local_2c,9,uVar3,&LAB_00504485);
  return;
}
