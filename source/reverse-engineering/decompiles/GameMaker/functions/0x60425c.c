// rea decompile_all
// name: FUN_0060425c
// address: 0x60425c
// body: available
// range: 0x60425c-0x60438c inclusive
// range: 0x6043a6-0x60442e inclusive
// range: 0x604444-0x604563 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x604284 (push 0x604564 followed by fs-segment stack chaining); handler 0x604564 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x604352 (push 0x60438d followed by fs-segment stack chaining); handler 0x60438d lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6043f4 (push 0x60442f followed by fs-segment stack chaining); handler 0x60442f lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0060425c(undefined4 param_1,undefined4 param_2,undefined4 param_3,int *param_4,int *param_5
                 ,undefined1 param_6,undefined2 param_7)

{
  undefined1 *puVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int extraout_ECX;
  int extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  int extraout_EDX_02;
  int extraout_EDX_03;
  int extraout_EDX_04;
  int extraout_EDX_05;
  int extraout_EDX_06;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  undefined4 local_8;

  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  local_18 = 0;
  local_1c = 0;
  local_20 = 0;
  puStack_28 = (undefined1 *)0x604279;
  local_8 = param_3;
  thunk_FUN_00407660(param_3);
  puStack_2c = &LAB_00604564;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  iVar4 = 0;
  iVar5 = *param_5;
  if ((iVar5 == 0) || (puStack_28 = &stack0xfffffffc, *(int *)(iVar5 + -4) == 0)) {
    puStack_34 = (undefined1 *)0x60429c;
    puStack_28 = &stack0xfffffffc;
    iVar4 = thunk_FUN_00404478();
    iVar5 = extraout_EDX;
  }
  *(undefined1 *)(iVar5 + iVar4) = 5;
  iVar4 = 1;
  iVar5 = *param_5;
  if ((iVar5 == 0) || (*(uint *)(iVar5 + -4) < 2)) {
    puStack_34 = (undefined1 *)0x6042b8;
    iVar4 = thunk_FUN_00404478();
    iVar5 = extraout_EDX_00;
  }
  *(undefined1 *)(iVar5 + iVar4) = param_6;
  iVar4 = 2;
  iVar5 = *param_5;
  if ((iVar5 == 0) || (*(uint *)(iVar5 + -4) < 3)) {
    puStack_34 = (undefined1 *)0x6042d7;
    iVar4 = thunk_FUN_00404478();
    iVar5 = extraout_EDX_01;
  }
  *(undefined1 *)(iVar5 + iVar4) = 0;
  puStack_34 = (undefined1 *)0x6042e6;
  FUN_005e109c(local_8,&local_10);
  puStack_34 = (undefined1 *)0x6042ee;
  iVar5 = FUN_00408238(local_10);
  if (0 < iVar5) {
    iVar4 = 3;
    iVar5 = *param_5;
    if ((iVar5 == 0) || (*(uint *)(iVar5 + -4) < 4)) {
      puStack_34 = (undefined1 *)0x60430e;
      iVar4 = thunk_FUN_00404478();
      iVar5 = extraout_EDX_02;
    }
    *(undefined1 *)(iVar5 + iVar4) = 4;
    iVar4 = 4;
    iVar5 = *param_5;
    if ((iVar5 == 0) || (*(uint *)(iVar5 + -4) < 5)) {
      puStack_34 = (undefined1 *)0x60432a;
      iVar4 = thunk_FUN_00404478();
      iVar5 = extraout_EDX_03;
    }
    *(undefined1 *)(iVar5 + iVar4) = 0x10;
    *param_4 = 5;
    puStack_34 = (undefined1 *)0x604344;
    local_c = FUN_00603514(&PTR_FUN_00602ee0,local_8);
    puStack_38 = &LAB_0060438d;
    uStack_3c = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_3c;
    puStack_34 = &stack0xfffffffc;
    if (local_c != 0) {
      uVar8 = 4;
      uVar7 = 0x10;
      puStack_34 = &stack0xfffffffc;
      FUN_006032c8(local_c,&local_14);
      FUN_005e0648(local_14,0,param_5,uVar7,uVar8);
    }
    puVar1 = puStack_34;
    *in_FS_OFFSET = uStack_3c;
    puStack_34 = &DAT_00604394;
    puStack_38 = (undefined1 *)0x60438c;
    FUN_0041ef80(&local_c,uStack_3c,puVar1);
    return;
  }
  puStack_34 = (undefined1 *)0x6043b5;
  cVar2 = FUN_005f3f1c(*(undefined4 *)PTR_DAT_007826d0,local_8);
  if (cVar2 != '\0') {
    iVar4 = 3;
    iVar5 = *param_5;
    if ((iVar5 == 0) || (*(uint *)(iVar5 + -4) < 4)) {
      puStack_34 = (undefined1 *)0x6043d5;
      iVar4 = thunk_FUN_00404478();
      iVar5 = extraout_EDX_04;
    }
    *(undefined1 *)(iVar5 + iVar4) = 1;
    puStack_34 = (undefined1 *)0x6043e6;
    local_c = FUN_00603514(&PTR_FUN_00602ee0,local_8);
    puStack_38 = &LAB_0060442f;
    uStack_3c = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_3c;
    puStack_34 = &stack0xfffffffc;
    if (local_c != 0) {
      uVar8 = 4;
      uVar7 = 4;
      puStack_34 = &stack0xfffffffc;
      FUN_006032c8(local_c,&local_18);
      FUN_005e0648(local_18,0,param_5,uVar7,uVar8);
    }
    puVar1 = puStack_34;
    *in_FS_OFFSET = uStack_3c;
    puStack_34 = &DAT_00604436;
    puStack_38 = (undefined1 *)0x60442e;
    FUN_0041ef80(&local_c,uStack_3c,puVar1);
    return;
  }
  iVar4 = 3;
  iVar5 = *param_5;
  if ((iVar5 == 0) || (*(uint *)(iVar5 + -4) < 4)) {
    puStack_34 = (undefined1 *)0x60445c;
    iVar4 = thunk_FUN_00404478();
    iVar5 = extraout_EDX_05;
  }
  *(undefined1 *)(iVar5 + iVar4) = 3;
  puStack_34 = (undefined1 *)0x604468;
  FUN_00407058(&local_8);
  puStack_34 = (undefined1 *)0x60446d;
  uVar6 = FUN_00408238();
  if (0xff < uVar6) {
    puStack_34 = (undefined1 *)0x604479;
    uVar6 = thunk_FUN_00404478();
  }
  uVar3 = (undefined1)uVar6;
  iVar4 = 4;
  iVar5 = *param_5;
  if ((iVar5 == 0) || (*(uint *)(iVar5 + -4) < 5)) {
    puStack_34 = (undefined1 *)0x604491;
    uVar3 = thunk_FUN_00404478();
    iVar5 = extraout_ECX;
    iVar4 = extraout_EDX_06;
  }
  *(undefined1 *)(iVar5 + iVar4) = uVar3;
  *param_4 = 5;
  puStack_34 = (undefined1 *)0x6044a5;
  FUN_00407058(&local_8);
  puStack_34 = (undefined1 *)0x6044aa;
  iVar5 = FUN_00408238();
  if (0 < iVar5) {
    puStack_34 = (undefined1 *)*param_4;
    puStack_38 = (undefined1 *)0x6044bc;
    FUN_00407058(&local_8);
    puStack_38 = (undefined1 *)0x6044c1;
    puStack_38 = (undefined1 *)FUN_00408238();
    uStack_3c = 0x6044cf;
    FUN_005e2694(local_8,0,&local_1c);
    uStack_3c = 0x6044dc;
    FUN_005e0648(local_1c,0,param_5);
  }
  puStack_34 = (undefined1 *)0x6044e4;
  FUN_00407058(&local_8);
  puStack_34 = (undefined1 *)0x6044e9;
  iVar4 = FUN_00408238();
  iVar5 = *param_4;
  *param_4 = *param_4 + iVar4;
  if (SCARRY4(iVar5,iVar4)) {
    puStack_34 = (undefined1 *)0x6044f5;
    FUN_00405944();
  }
  puStack_34 = (undefined1 *)0x604505;
  uVar7 = (**(code **)(**(int **)PTR_DAT_007826d0 + 0x2c))(*(int **)PTR_DAT_007826d0,param_7);
  puStack_34 = (undefined1 *)*param_4;
  puStack_38 = (undefined1 *)0x2;
  uStack_3c = 0x604519;
  FUN_005e29b8(uVar7,&local_20);
  uStack_3c = 0x604526;
  FUN_005e0648(local_20,0,param_5);
  iVar5 = *param_4;
  *param_4 = *param_4 + 2;
  if (SCARRY4(iVar5,2)) {
    puStack_34 = (undefined1 *)0x604533;
    FUN_00405944();
  }
  *in_FS_OFFSET = uStack_30;
  puStack_28 = &LAB_0060456b;
  puStack_2c = (undefined1 *)0x604553;
  FUN_00408e44(&local_20,&DAT_004108f8,4);
  puStack_2c = (undefined1 *)0x60455b;
  thunk_FUN_00406e5c(&local_10);
  puStack_2c = (undefined1 *)0x604563;
  thunk_FUN_00406e5c(&local_8);
  return;
}
