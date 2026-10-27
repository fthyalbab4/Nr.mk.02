// rea decompile_all
// name: FUN_00604cfc
// address: 0x604cfc
// body: available
// range: 0x604cfc-0x604dfd inclusive
// range: 0x604e35-0x604fe0 inclusive
// range: 0x605018-0x60509d inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x604d1b (push 0x60509e followed by fs-segment stack chaining); handler 0x60509e lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x604ddd (push 0x604dfe followed by fs-segment stack chaining); handler 0x604dfe lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x604fc0 (push 0x604fe1 followed by fs-segment stack chaining); handler 0x604fe1 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00604cfc(int param_1,int *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  int extraout_EDX_02;
  int extraout_EDX_03;
  int extraout_EDX_04;
  int extraout_EDX_05;
  int extraout_EDX_06;
  int extraout_EDX_07;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_54;
  undefined1 *puStack_50;
  undefined1 *puStack_4c;
  undefined1 *puStack_48;
  undefined1 *puStack_44;
  undefined4 uStack_40;
  undefined1 *puStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  int local_8;

  puStack_34 = &stack0xfffffffc;
  local_8 = 0;
  uStack_c = 0;
  uStack_10 = 0;
  local_14 = 0;
  local_18 = 0;
  local_1c = 0;
  uStack_20 = 0;
  local_24 = 0;
  puStack_38 = &LAB_0060509e;
  puStack_3c = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_3c;
  uStack_40 = 3;
  puStack_44 = (undefined1 *)0x604d33;
  FUN_00409be0(&local_8,&DAT_004108f8,1);
  if (*(char *)(param_1 + 0xa8) == '\0') {
    iVar2 = 2;
    if ((local_8 == 0) || (iVar5 = local_8, *(uint *)(local_8 + -4) < 3)) {
      uStack_40 = 0x604d55;
      iVar2 = thunk_FUN_00404478();
      iVar5 = extraout_EDX;
    }
    *(undefined1 *)(iVar5 + iVar2) = 0;
  }
  else {
    iVar2 = 2;
    if ((local_8 == 0) || (iVar5 = local_8, *(uint *)(local_8 + -4) < 3)) {
      uStack_40 = 0x604d71;
      iVar2 = thunk_FUN_00404478();
      iVar5 = extraout_EDX_00;
    }
    *(undefined1 *)(iVar5 + iVar2) = 2;
  }
  iVar2 = 2;
  if ((local_8 == 0) || (iVar5 = local_8, *(uint *)(local_8 + -4) < 3)) {
    uStack_40 = 0x604d8b;
    iVar2 = thunk_FUN_00404478();
    iVar5 = extraout_EDX_01;
  }
  uStack_c = CONCAT13(*(undefined1 *)(iVar5 + iVar2),(undefined3)uStack_c);
  iVar2 = 0;
  if ((local_8 == 0) || (iVar5 = local_8, *(int *)(local_8 + -4) == 0)) {
    uStack_40 = 0x604da5;
    iVar2 = thunk_FUN_00404478();
    iVar5 = extraout_EDX_02;
  }
  *(undefined1 *)(iVar5 + iVar2) = 5;
  iVar2 = 1;
  if ((local_8 == 0) || (iVar5 = local_8, *(uint *)(local_8 + -4) < 2)) {
    uStack_40 = 0x604dbf;
    iVar2 = thunk_FUN_00404478();
    iVar5 = extraout_EDX_03;
  }
  *(undefined1 *)(iVar5 + iVar2) = 1;
  uStack_40 = 0;
  puStack_44 = (undefined1 *)0x604dd2;
  FUN_00600970(param_2,local_8,0xffffffff);
  puStack_48 = &LAB_00604dfe;
  puStack_4c = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_4c;
  puStack_50 = (undefined1 *)0x0;
  uStack_54 = 0x604df4;
  puStack_44 = &stack0xfffffffc;
  (**(code **)(*param_2 + 0xac))(param_2,&local_8,2);
  puVar1 = puStack_48;
  *in_FS_OFFSET = puStack_50;
  iVar2 = 1;
  if ((local_8 == 0) || (iVar5 = local_8, *(uint *)(local_8 + -4) < 2)) {
    puStack_48 = (undefined1 *)0x604e4b;
    iVar2 = thunk_FUN_00404478(1,local_8,puVar1);
    iVar5 = extraout_EDX_04;
  }
  if ((*(char *)(iVar5 + iVar2) != uStack_c._3_1_) || (*(char *)(iVar5 + iVar2) == -1)) {
    puStack_48 = (undefined1 *)0x604e65;
    FUN_0040b75c(PTR_PTR_00781738,&local_14);
    puStack_48 = (undefined1 *)0x604e74;
    FUN_005df5ec(&PTR_LAB_005fb234,1,local_14);
    puStack_48 = (undefined1 *)0x604e79;
    FUN_00406618();
  }
  if (*(char *)(param_1 + 0xa8) == '\x01') {
    puStack_48 = (undefined1 *)0x604e91;
    uVar3 = FUN_00408238(*(undefined4 *)(param_1 + 0x9c));
    if (0xff < uVar3) {
      puStack_48 = (undefined1 *)0x604e9d;
      uVar3 = thunk_FUN_00404478();
    }
    uStack_c._0_3_ = CONCAT12((char)uVar3,(undefined2)uStack_c);
    puStack_48 = (undefined1 *)0x604eab;
    uVar3 = FUN_00408238(*(undefined4 *)(param_1 + 0x94));
    if (0xff < uVar3) {
      puStack_48 = (undefined1 *)0x604eb7;
      uVar3 = thunk_FUN_00404478();
    }
    uVar4 = uStack_c;
    uStack_c._0_2_ = CONCAT11((char)uVar3,(undefined1)uStack_c);
    uVar3 = uVar4 >> 0x10 & 0xff;
    iVar2 = uVar3 + 3;
    if (SCARRY4(uVar3,3)) {
      puStack_48 = (undefined1 *)0x604ec8;
      iVar2 = FUN_00405944();
    }
    uVar3 = uStack_c >> 8 & 0xff;
    puStack_48 = (undefined1 *)(iVar2 + uVar3);
    if (SCARRY4(iVar2,uVar3)) {
      puStack_48 = (undefined1 *)0x604ed5;
      puStack_48 = (undefined1 *)FUN_00405944();
    }
    puStack_4c = (undefined1 *)0x604ee9;
    FUN_00409be0(&local_8,&DAT_004108f8,1);
    iVar2 = 0;
    if ((local_8 == 0) || (iVar5 = local_8, *(int *)(local_8 + -4) == 0)) {
      puStack_48 = (undefined1 *)0x604eff;
      iVar2 = thunk_FUN_00404478();
      iVar5 = extraout_EDX_05;
    }
    *(undefined1 *)(iVar5 + iVar2) = 1;
    iVar2 = 1;
    if ((local_8 == 0) || (iVar5 = local_8, *(uint *)(local_8 + -4) < 2)) {
      puStack_48 = (undefined1 *)0x604f19;
      iVar2 = thunk_FUN_00404478();
      iVar5 = extraout_EDX_06;
    }
    *(byte *)(iVar5 + iVar2) = uStack_c._2_1_;
    uVar3 = 2;
    if (uStack_c._2_1_ != 0) {
      puStack_48 = (undefined1 *)0x2;
      puStack_4c = (undefined1 *)(uint)uStack_c._2_1_;
      puStack_50 = (undefined1 *)0x604f41;
      FUN_005e2694(*(undefined4 *)(param_1 + 0x9c),0,&local_18);
      puStack_50 = (undefined1 *)0x604f4e;
      FUN_005e0648(local_18,0,&local_8);
      uVar4 = uStack_c >> 0x10 & 0xff;
      uVar3 = uVar4 + 2;
      if (SCARRY4(uVar4,2)) {
        puStack_48 = (undefined1 *)0x604f5b;
        FUN_00405944();
      }
    }
    if ((local_8 == 0) || (iVar2 = local_8, *(uint *)(local_8 + -4) <= uVar3)) {
      puStack_48 = (undefined1 *)0x604f6c;
      iVar2 = thunk_FUN_00404478();
    }
    *(byte *)(iVar2 + uVar3) = uStack_c._1_1_;
    if (SCARRY4(uVar3,1)) {
      puStack_48 = (undefined1 *)0x604f7d;
      FUN_00405944();
    }
    if (uStack_c._1_1_ != 0) {
      puStack_4c = (undefined1 *)(uint)uStack_c._1_1_;
      puStack_50 = (undefined1 *)0x604f99;
      puStack_48 = (undefined1 *)(uVar3 + 1);
      FUN_005e2694(*(undefined4 *)(param_1 + 0x94),0,&local_1c);
      puStack_50 = (undefined1 *)0x604fa6;
      FUN_005e0648(local_1c,0,&local_8);
    }
    puStack_48 = (undefined1 *)0x0;
    puStack_4c = (undefined1 *)0x604fb5;
    FUN_00600970(param_2,local_8,0xffffffff);
    puStack_50 = &LAB_00604fe1;
    uStack_54 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_54;
    puStack_4c = &stack0xfffffffc;
    (**(code **)(*param_2 + 0xac))(param_2,&local_8,2,0);
    puVar1 = puStack_48;
    *in_FS_OFFSET = puStack_50;
    iVar2 = 1;
    if ((local_8 == 0) || (iVar5 = local_8, *(uint *)(local_8 + -4) < 2)) {
      puStack_48 = (undefined1 *)0x60502e;
      iVar2 = thunk_FUN_00404478(1,local_8,puVar1);
      iVar5 = extraout_EDX_07;
    }
    if (*(char *)(iVar5 + iVar2) != '\0') {
      puStack_48 = (undefined1 *)0x605041;
      FUN_0040b75c(PTR_PTR_00781858,&local_24);
      puStack_48 = (undefined1 *)0x605050;
      FUN_005df5ec(&PTR_LAB_005fb2f0,1,local_24);
      puStack_48 = (undefined1 *)0x605055;
      FUN_00406618();
    }
  }
  puVar1 = puStack_3c;
  *in_FS_OFFSET = puStack_44;
  puStack_3c = &LAB_006050a5;
  uStack_40 = 0x60506f;
  thunk_FUN_00406e80(&local_24,2,puVar1);
  uStack_40 = 0x605082;
  FUN_00408e44(&local_1c,&DAT_004108f8,2);
  uStack_40 = 0x60508f;
  thunk_FUN_00406e80(&local_14,2);
  uStack_40 = 0x60509d;
  FUN_00409ce0(&local_8,&DAT_004108f8);
  return;
}
