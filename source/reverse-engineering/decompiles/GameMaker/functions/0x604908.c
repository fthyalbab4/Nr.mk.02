// rea decompile_all
// name: FUN_00604908
// address: 0x604908
// body: available
// range: 0x604908-0x604bde inclusive
// range: 0x604c0a-0x604c29 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x604930 (push 0x604c5a followed by fs-segment stack chaining); handler 0x604c5a lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x60494f (push 0x604c2a followed by fs-segment stack chaining); handler 0x604c2a lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x604aa5 (push 0x604bdf followed by fs-segment stack chaining); handler 0x604bdf lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00604b94) */

void FUN_00604908(int param_1,int *param_2,undefined4 param_3,ushort param_4)

{
  char cVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  int extraout_ECX;
  uint uVar5;
  uint extraout_ECX_00;
  int extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  int extraout_EDX_02;
  int extraout_EDX_03;
  int extraout_EDX_04;
  int extraout_EDX_05;
  int iVar6;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_50;
  undefined1 *puStack_4c;
  undefined1 *puStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  uint uStack_3c;
  undefined4 uStack_38;
  undefined1 *puStack_34;
  undefined1 *local_30;
  undefined4 local_2c;
  undefined1 *local_28;
  undefined1 *local_24;
  int local_14;
  undefined4 local_10;
  int *local_c;
  int local_8;

  local_24 = &stack0xfffffffc;
  local_14 = 5;
  do {
    local_c = (int *)0x0;
    local_14 = local_14 + -1;
  } while (local_14 != 0);
  LOCK();
  UNLOCK();
  local_28 = &LAB_00604c5a;
  local_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_2c;
  local_30 = (undefined1 *)0x604941;
  local_8 = local_14;
  local_c = (int *)FUN_005e403c(&PTR_FUN_006024d0,1,0);
  puStack_34 = &LAB_00604c2a;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  uStack_3c = 8;
  uStack_40 = 0x604967;
  local_30 = &stack0xfffffffc;
  FUN_00409be0(&local_8,&DAT_004108f8,1);
  uStack_3c = 0x604976;
  (**(code **)(*param_2 + 0xe4))(param_2,0);
  uStack_3c = 0x604980;
  (**(code **)(*local_c + 0x54))(local_c,param_2);
  uStack_3c = 0x604991;
  (**(code **)(*local_c + 0x94))(local_c,*(undefined4 *)(param_1 + 0x90));
  uStack_3c = 0x6049a3;
  (**(code **)(*local_c + 0x98))(local_c,*(undefined2 *)(param_1 + 0x98));
  uStack_3c = 0x6049ae;
  (**(code **)(*local_c + 0xa0))();
  uStack_3c = 0x6049ba;
  (**(code **)(*param_2 + 0xe4))(param_2,param_1);
  uStack_3c = (uint)param_4;
  uStack_40 = 2;
  uStack_44 = 0x6049cc;
  FUN_00603dd8(param_1,param_2,0);
  uStack_44 = 0;
  puStack_48 = (undefined1 *)0x6049e0;
  (**(code **)(*param_2 + 0xac))(param_2,&local_8,2);
  iVar3 = 1;
  if ((local_8 == 0) || (iVar4 = local_8, *(uint *)(local_8 + -4) < 2)) {
    puStack_48 = (undefined1 *)0x6049f6;
    iVar3 = thunk_FUN_00404478();
    iVar4 = extraout_EDX;
  }
  cVar1 = *(char *)(iVar4 + iVar3);
  if (cVar1 != 'Z') {
    if (cVar1 == '[') {
      puStack_48 = (undefined1 *)0x604a1d;
      FUN_0040b75c(PTR_PTR_00781ffc,&local_10);
      puStack_48 = (undefined1 *)0x604a2c;
      FUN_005df5ec(&PTR_LAB_005fae80,1,local_10);
      puStack_48 = (undefined1 *)0x604a31;
      FUN_00406618();
    }
    else if (cVar1 == '\\') {
      puStack_48 = (undefined1 *)0x604a40;
      FUN_0040b75c(PTR_PTR_007818e0,&local_14);
      puStack_48 = (undefined1 *)0x604a4f;
      FUN_005df5ec(&PTR_LAB_005faf38,1,local_14);
      puStack_48 = (undefined1 *)0x604a54;
      FUN_00406618();
    }
    else if (cVar1 == ']') {
      puStack_48 = (undefined1 *)0x604a63;
      FUN_0040b75c(PTR_PTR_007822c4,&stack0xffffffe8);
      puStack_48 = (undefined1 *)0x604a72;
      FUN_005df5ec(&PTR_LAB_005faffc,1,unaff_EBX);
      puStack_48 = (undefined1 *)0x604a77;
      FUN_00406618();
    }
    else {
      puStack_48 = (undefined1 *)0x604a86;
      FUN_0040b75c(PTR_PTR_007822c0,&stack0xffffffe4);
      puStack_48 = (undefined1 *)0x604a95;
      FUN_005df5ec(&PTR_LAB_005fb0bc,1,unaff_ESI);
      puStack_48 = (undefined1 *)0x604a9a;
      FUN_00406618();
    }
  }
  puStack_4c = &LAB_00604bdf;
  uStack_50 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_50;
  puStack_48 = &stack0xfffffffc;
  (**(code **)(*param_2 + 0xac))(param_2,&local_8,6,0);
  iVar3 = 2;
  if ((local_8 == 0) || (iVar4 = local_8, *(uint *)(local_8 + -4) < 3)) {
    iVar3 = thunk_FUN_00404478();
    iVar4 = extraout_EDX_00;
  }
  FUN_0041666c(*(undefined1 *)(iVar4 + iVar3),&local_24);
  iVar3 = 3;
  if ((local_8 == 0) || (iVar4 = local_8, *(uint *)(local_8 + -4) < 4)) {
    iVar3 = thunk_FUN_00404478();
    iVar4 = extraout_EDX_01;
  }
  FUN_0041666c(*(undefined1 *)(iVar4 + iVar3),&local_28);
  puVar2 = local_28;
  iVar3 = 4;
  if ((local_8 == 0) || (iVar4 = local_8, *(uint *)(local_8 + -4) < 5)) {
    iVar3 = thunk_FUN_00404478();
    iVar4 = extraout_EDX_02;
  }
  FUN_0041666c(*(undefined1 *)(iVar4 + iVar3),&local_2c);
  iVar3 = 5;
  if ((local_8 == 0) || (iVar4 = local_8, *(uint *)(local_8 + -4) < 6)) {
    iVar3 = thunk_FUN_00404478();
    iVar4 = extraout_EDX_03;
  }
  FUN_0041666c(*(undefined1 *)(iVar4 + iVar3),&local_30);
  FUN_00408480(&stack0xffffffe0,7);
  iVar3 = 0;
  if ((local_8 == 0) || (iVar4 = local_8, *(int *)(local_8 + -4) == 0)) {
    iVar3 = thunk_FUN_00404478();
    iVar4 = extraout_EDX_04;
  }
  iVar3 = (uint)*(byte *)(iVar4 + iVar3) * 0x100;
  iVar4 = 1;
  if ((local_8 == 0) || (iVar6 = local_8, *(uint *)(local_8 + -4) < 2)) {
    iVar4 = thunk_FUN_00404478();
    iVar3 = extraout_ECX;
    iVar6 = extraout_EDX_05;
  }
  uVar5 = iVar3 + (uint)*(byte *)(iVar6 + iVar4);
  if (SCARRY4(iVar3,(uint)*(byte *)(iVar6 + iVar4))) {
    FUN_00405944();
    uVar5 = extraout_ECX_00;
  }
  if (0xffff < uVar5) {
    thunk_FUN_00404478();
  }
  FUN_005f69fc(param_2[0x36],unaff_EDI);
  *in_FS_OFFSET = &LAB_00604c78;
  *in_FS_OFFSET = puVar2;
  (**(code **)(*local_c + 0x54))(local_c,0,*local_c,&LAB_00604c31);
  FUN_0041ef80(&local_c);
  return;
}
