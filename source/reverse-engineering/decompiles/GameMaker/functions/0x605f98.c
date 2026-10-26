// rea decompile_all
// name: FUN_00605f98
// address: 0x605f98
// body: available
// range: 0x605f98-0x606102 inclusive
// range: 0x60612e-0x606157 inclusive
// range: 0x606181-0x606401 inclusive
// range: 0x60642d-0x606436 inclusive
// range: 0x606460-0x606496 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x605fbb (push 0x606497 followed by fs-segment stack chaining); handler 0x606497 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x606025 (push 0x606437 followed by fs-segment stack chaining); handler 0x606437 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6060db (push 0x606103 followed by fs-segment stack chaining); handler 0x606103 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x606354 (push 0x606402 followed by fs-segment stack chaining); handler 0x606402 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x006063b4) */

void FUN_00605f98(int param_1,int *param_2)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  int extraout_ECX;
  uint uVar7;
  uint extraout_ECX_00;
  int extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  int extraout_EDX_02;
  int extraout_EDX_03;
  int iVar8;
  undefined4 unaff_EBX;
  undefined4 unaff_EDI;
  int *in_FS_OFFSET;
  int iStack_60;
  undefined1 *puStack_5c;
  undefined1 *puStack_58;
  undefined1 *puStack_54;
  undefined1 *puStack_50;
  undefined1 *puStack_4c;
  undefined4 uStack_48;
  int *piStack_44;
  int *local_40;
  undefined4 local_3c;
  undefined4 local_38;
  int local_34;
  undefined1 *local_30;
  undefined1 *local_2c;
  int local_28;
  undefined1 *local_24;
  undefined1 *local_20;
  int local_10;
  int local_c;
  int local_8;

  local_20 = &stack0xfffffffc;
  local_10 = 7;
  do {
    local_8 = 0;
    local_10 = local_10 + -1;
  } while (local_10 != 0);
  local_24 = &LAB_00606497;
  local_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&local_28;
  local_2c = (undefined1 *)0x605fd5;
  local_c = param_1;
  (**(code **)(**(int **)(param_1 + 0xac) + 0x50))
            (*(int **)(param_1 + 0xac),*(undefined4 *)(param_1 + 0x90));
  local_2c = (undefined1 *)0x605fed;
  (**(code **)(**(int **)(local_c + 0xac) + 0x54))
            (*(int **)(local_c + 0xac),*(undefined2 *)(local_c + 0x98));
  piVar2 = *(int **)(local_c + 0xac);
  *(undefined1 *)((int)piVar2 + 0x106) = *(undefined1 *)(local_c + 0x9a);
  local_2c = (undefined1 *)0x60601a;
  (**(code **)(*piVar2 + 0x84))();
  local_30 = &LAB_00606437;
  local_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&local_34;
  local_38 = 0xff;
  local_3c = 0x606040;
  local_2c = &stack0xfffffffc;
  FUN_00409be0(&local_8,&DAT_004108f8,1);
  local_38 = 0x606054;
  FUN_00604cfc(local_c,*(undefined4 *)(local_c + 0xac));
  if (*(char *)(local_c + 0x9a) == '\0') {
    local_38 = 0;
    local_3c = 3;
    local_40 = &local_8;
    piStack_44 = &local_10;
    uStack_48 = 0x606082;
    FUN_0060425c(local_c,*(undefined4 *)(local_c + 0xac),L"0.0.0.0");
  }
  else {
    local_38 = 0;
    local_3c = 3;
    local_40 = &local_8;
    piStack_44 = &local_10;
    uStack_48 = 0x6060a6;
    FUN_0060425c(local_c,*(undefined4 *)(local_c + 0xac),&DAT_006064d0);
  }
  uStack_48 = 0;
  puStack_4c = &stack0xffffffec;
  puStack_50 = (undefined1 *)0x6060b9;
  FUN_005e2a28(local_8,local_10,0);
  puStack_50 = (undefined1 *)0x6060d0;
  (**(code **)(**(int **)(local_c + 0xac) + 0x80))(*(int **)(local_c + 0xac),unaff_EBX,0xffffffff);
  puStack_54 = &LAB_00606103;
  puStack_58 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = (int)&puStack_58;
  puStack_5c = (undefined1 *)0x0;
  iStack_60 = 0x6060f9;
  puStack_50 = &stack0xfffffffc;
  (**(code **)(**(int **)(local_c + 0xac) + 0xac))(*(int **)(local_c + 0xac),&local_8,2);
  puVar4 = puStack_54;
  *in_FS_OFFSET = (int)puStack_5c;
  iVar5 = 1;
  if ((local_8 == 0) || (iVar6 = local_8, *(uint *)(local_8 + -4) < 2)) {
    puStack_54 = (undefined1 *)0x606144;
    iVar5 = thunk_FUN_00404478(1,local_8,puVar4);
    iVar6 = extraout_EDX;
  }
  switch(*(undefined1 *)(iVar6 + iVar5)) {
  case 0:
    break;
  case 1:
    puStack_54 = (undefined1 *)0x60618e;
    FUN_0040b75c(PTR_PTR_00781c54,&stack0xffffffe4);
    puStack_54 = (undefined1 *)0x60619d;
    FUN_005df5ec(&PTR_LAB_005fb3a0,1,unaff_EDI);
    puStack_54 = (undefined1 *)0x6061a2;
    FUN_00406618();
    break;
  case 2:
    puStack_54 = (undefined1 *)0x6061b4;
    FUN_0040b75c(PTR_PTR_007816ac,&local_20);
    puStack_54 = (undefined1 *)0x6061c3;
    FUN_005df5ec(&PTR_LAB_005fb460,1,local_20);
    puStack_54 = (undefined1 *)0x6061c8;
    FUN_00406618();
    break;
  case 3:
    puStack_54 = (undefined1 *)0x6061da;
    FUN_0040b75c(PTR_PTR_00781878,&local_24);
    puStack_54 = (undefined1 *)0x6061e9;
    FUN_005df5ec(&PTR_LAB_005fb528,1,local_24);
    puStack_54 = (undefined1 *)0x6061ee;
    FUN_00406618();
    break;
  case 4:
    puStack_54 = (undefined1 *)0x606200;
    FUN_0040b75c(PTR_PTR_00782344,&local_28);
    puStack_54 = (undefined1 *)0x60620f;
    FUN_005df5ec(&PTR_LAB_005fb5f8,1,local_28);
    puStack_54 = (undefined1 *)0x606214;
    FUN_00406618();
    break;
  case 5:
    puStack_54 = (undefined1 *)0x606226;
    FUN_0040b75c(PTR_PTR_00781ca8,&local_2c);
    puStack_54 = (undefined1 *)0x606235;
    FUN_005df5ec(&PTR_LAB_005fb6c8,1,local_2c);
    puStack_54 = (undefined1 *)0x60623a;
    FUN_00406618();
    break;
  case 6:
    puStack_54 = (undefined1 *)0x60624c;
    FUN_0040b75c(PTR_PTR_00781dbc,&local_30);
    puStack_54 = (undefined1 *)0x60625b;
    FUN_005df5ec(&PTR_LAB_005fb7a0,1,local_30);
    puStack_54 = (undefined1 *)0x606260;
    FUN_00406618();
    break;
  case 7:
    puStack_54 = (undefined1 *)0x60626f;
    FUN_0040b75c(PTR_PTR_00781a30,&local_34);
    puStack_54 = (undefined1 *)0x60627e;
    FUN_005df5ec(&PTR_LAB_005fb868,1,local_34);
    puStack_54 = (undefined1 *)0x606283;
    FUN_00406618();
    break;
  case 8:
    puStack_54 = (undefined1 *)0x606292;
    FUN_0040b75c(PTR_PTR_0078276c,&local_38);
    puStack_54 = (undefined1 *)0x6062a1;
    FUN_005df5ec(&PTR_LAB_005fb928,1,local_38);
    puStack_54 = (undefined1 *)0x6062a6;
    FUN_00406618();
    break;
  default:
    puStack_54 = (undefined1 *)0x6062b5;
    FUN_0040b75c(PTR_PTR_007822c0,&local_3c);
    puStack_54 = (undefined1 *)0x6062c4;
    FUN_005df5ec(&PTR_LAB_005fb0bc,1,local_3c);
    puStack_54 = (undefined1 *)0x6062c9;
    FUN_00406618();
  }
  puStack_54 = (undefined1 *)0x0;
  puStack_58 = (undefined1 *)0x6062e4;
  (**(code **)(**(int **)(local_c + 0xac) + 0xac))(*(int **)(local_c + 0xac),&local_8,2);
  iVar5 = 1;
  if ((local_8 == 0) || (iVar6 = local_8, *(uint *)(local_8 + -4) < 2)) {
    puStack_58 = (undefined1 *)0x6062fa;
    iVar5 = thunk_FUN_00404478();
    iVar6 = extraout_EDX_00;
  }
  cVar1 = *(char *)(iVar6 + iVar5);
  if (cVar1 == '\x01') {
    local_10 = 6;
    iVar5 = local_10;
  }
  else if (cVar1 == '\x03') {
    iVar6 = 4;
    if ((local_8 == 0) || (iVar8 = local_8, *(uint *)(local_8 + -4) < 5)) {
      puStack_58 = (undefined1 *)0x60632d;
      iVar6 = thunk_FUN_00404478();
      iVar8 = extraout_EDX_01;
    }
    iVar5 = *(byte *)(iVar8 + iVar6) + 2;
    if (SCARRY4((uint)*(byte *)(iVar8 + iVar6),2)) {
      puStack_58 = (undefined1 *)0x60633b;
      iVar5 = FUN_00405944();
    }
  }
  else {
    iVar5 = local_10;
    if (cVar1 == '\x04') {
      local_10 = 0x12;
      iVar5 = local_10;
    }
  }
  local_10 = iVar5;
  puStack_5c = &LAB_00606402;
  iStack_60 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_60;
  puStack_58 = &stack0xfffffffc;
  (**(code **)(**(int **)(local_c + 0xac) + 0xac))(*(int **)(local_c + 0xac),&local_8,local_10);
  iVar5 = FUN_00405cbc(*(undefined4 *)(local_c + 0xac),&PTR_FUN_00607b34);
  uVar3 = *(undefined4 *)(*(int *)(iVar5 + 0xd8) + 0x1c);
  iVar5 = 4;
  if ((local_8 == 0) || (iVar6 = local_8, *(uint *)(local_8 + -4) < 5)) {
    iVar5 = thunk_FUN_00404478();
    iVar6 = extraout_EDX_02;
  }
  iVar5 = (uint)*(byte *)(iVar6 + iVar5) * 0x100;
  iVar6 = 5;
  if ((local_8 == 0) || (iVar8 = local_8, *(uint *)(local_8 + -4) < 6)) {
    iVar6 = thunk_FUN_00404478();
    iVar5 = extraout_ECX;
    iVar8 = extraout_EDX_03;
  }
  uVar7 = iVar5 + (uint)*(byte *)(iVar8 + iVar6);
  if (SCARRY4(iVar5,(uint)*(byte *)(iVar8 + iVar6))) {
    FUN_00405944();
    uVar7 = extraout_ECX_00;
  }
  if (0xffff < uVar7) {
    thunk_FUN_00404478();
  }
  FUN_005f69d4(param_2,uVar3);
  (**(code **)(*param_2 + 0x24))();
  piVar2 = piStack_44;
  *in_FS_OFFSET = 0;
  *in_FS_OFFSET = (int)puStack_58;
  *in_FS_OFFSET = (int)puStack_4c;
  piStack_44 = (int *)&LAB_0060649e;
  uStack_48 = 0x60647a;
  thunk_FUN_00406e80(&local_40,0xb,piVar2);
  uStack_48 = 0x606488;
  FUN_00409ce0(&stack0xffffffec,&DAT_004108f8);
  uStack_48 = 0x606496;
  FUN_00409ce0(&local_8,&DAT_004108f8);
  return;
}
