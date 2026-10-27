// rea decompile_all
// name: FUN_006050ac
// address: 0x6050ac
// body: available
// range: 0x6050ac-0x6051e7 inclusive
// range: 0x605213-0x60523c inclusive
// range: 0x605266-0x6056a9 inclusive
// range: 0x6056d5-0x6056f4 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6050d4 (push 0x605733 followed by fs-segment stack chaining); handler 0x605733 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6050f3 (push 0x6056f5 followed by fs-segment stack chaining); handler 0x6056f5 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6051c7 (push 0x6051e8 followed by fs-segment stack chaining); handler 0x6051e8 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x605421 (push 0x6056aa followed by fs-segment stack chaining); handler 0x6056aa lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x006055d6) */
/* WARNING: Removing unreachable block (ram,0x0060565f) */
/* WARNING: Removing unreachable block (ram,0x0060552b) */

void FUN_006050ac(int param_1,int *param_2,undefined4 param_3,undefined4 param_4,ushort param_5)

{
  char cVar1;
  undefined4 **ppuVar2;
  undefined1 *puVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int extraout_ECX;
  uint extraout_ECX_00;
  int extraout_ECX_01;
  uint extraout_ECX_02;
  int extraout_ECX_03;
  uint uVar7;
  uint extraout_ECX_04;
  int extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  int extraout_EDX_02;
  int extraout_EDX_03;
  int extraout_EDX_04;
  int extraout_EDX_05;
  int extraout_EDX_06;
  int extraout_EDX_07;
  int iVar8;
  int extraout_EDX_08;
  int extraout_EDX_09;
  int extraout_EDX_10;
  int extraout_EDX_11;
  int *in_FS_OFFSET;
  undefined **local_74;
  undefined4 ***local_70;
  undefined **local_6c;
  undefined4 **local_68;
  uint local_64;
  undefined4 ***local_60;
  undefined **local_5c;
  undefined1 *local_58;
  undefined1 *local_54;
  undefined1 *local_50;
  undefined1 **local_4c;
  undefined4 local_48;
  int *local_44;
  int *local_40;
  undefined4 local_3c;
  uint local_38;
  int local_34;
  undefined1 *puStack_30;
  undefined1 *local_2c;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  int local_10;
  undefined4 local_c;
  int local_8;

  puStack_20 = &stack0xfffffffc;
  local_8 = 0xe;
  do {
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  LOCK();
  UNLOCK();
  local_c = 0;
  puStack_24 = &LAB_00605733;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&uStack_28;
  local_2c = (undefined1 *)0x6050e5;
  piVar4 = (int *)FUN_005e403c(&PTR_FUN_006024d0,1,0);
  puStack_30 = &LAB_006056f5;
  local_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&local_34;
  local_38 = 0xff;
  local_3c = 0x60510e;
  local_2c = &stack0xfffffffc;
  FUN_00409be0(&local_8,&DAT_004108f8,1);
  local_38 = 0x60511f;
  (**(code **)(*param_2 + 0xe4))(param_2,0);
  local_38 = 0x605129;
  (**(code **)(*piVar4 + 0x54))(piVar4,param_2);
  local_38 = 0x60513a;
  (**(code **)(*piVar4 + 0x94))(piVar4,*(undefined4 *)(param_1 + 0x90));
  local_38 = 0x60514c;
  (**(code **)(*piVar4 + 0x9c))(piVar4,*(undefined1 *)(param_1 + 0x9a));
  local_38 = 0x60515e;
  (**(code **)(*piVar4 + 0x98))(piVar4,*(undefined2 *)(param_1 + 0x98));
  local_38 = 0x605169;
  (**(code **)(*piVar4 + 0xa0))();
  local_38 = 0x605175;
  (**(code **)(*param_2 + 0xe4))(param_2,param_1);
  local_38 = 0x60517e;
  FUN_00604cfc(param_1,param_2);
  local_38 = (uint)param_5;
  local_3c = 2;
  local_40 = &local_8;
  local_44 = &local_10;
  local_48 = 0x605199;
  FUN_0060425c(param_1,param_2,local_c);
  local_48 = 0;
  local_4c = &local_2c;
  local_50 = (undefined1 *)0x6051ac;
  FUN_005e2a28(local_8,local_10,0);
  local_50 = (undefined1 *)0x6051bc;
  (**(code **)(*param_2 + 0x80))(param_2,local_2c,0xffffffff);
  local_54 = &LAB_006051e8;
  local_58 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = (int)&local_58;
  local_5c = (undefined **)0x0;
  local_60 = (undefined4 ***)0x6051de;
  local_50 = &stack0xfffffffc;
  (**(code **)(*param_2 + 0xac))(param_2,&local_8,4);
  puVar3 = local_54;
  *in_FS_OFFSET = (int)local_5c;
  iVar5 = 1;
  if ((local_8 == 0) || (iVar6 = local_8, *(uint *)(local_8 + -4) < 2)) {
    local_54 = (undefined1 *)0x605229;
    iVar5 = thunk_FUN_00404478(1,local_8,puVar3);
    iVar6 = extraout_EDX;
  }
  switch(*(undefined1 *)(iVar6 + iVar5)) {
  case 0:
    break;
  case 1:
    local_54 = (undefined1 *)0x605273;
    FUN_0040b75c(PTR_PTR_00781c54,&local_34);
    local_54 = (undefined1 *)0x605282;
    FUN_005df5ec(&PTR_LAB_005fb3a0,1,local_34);
    local_54 = (undefined1 *)0x605287;
    FUN_00406618();
    break;
  case 2:
    local_54 = (undefined1 *)0x605299;
    FUN_0040b75c(PTR_PTR_007816ac,&local_38);
    local_54 = (undefined1 *)0x6052a8;
    FUN_005df5ec(&PTR_LAB_005fb460,1,local_38);
    local_54 = (undefined1 *)0x6052ad;
    FUN_00406618();
    break;
  case 3:
    local_54 = (undefined1 *)0x6052bf;
    FUN_0040b75c(PTR_PTR_00781878,&local_3c);
    local_54 = (undefined1 *)0x6052ce;
    FUN_005df5ec(&PTR_LAB_005fb528,1,local_3c);
    local_54 = (undefined1 *)0x6052d3;
    FUN_00406618();
    break;
  case 4:
    local_54 = (undefined1 *)0x6052e5;
    FUN_0040b75c(PTR_PTR_00782344,&local_40);
    local_54 = (undefined1 *)0x6052f4;
    FUN_005df5ec(&PTR_LAB_005fb5f8,1,local_40);
    local_54 = (undefined1 *)0x6052f9;
    FUN_00406618();
    break;
  case 5:
    local_54 = (undefined1 *)0x60530b;
    FUN_0040b75c(PTR_PTR_00781ca8,&local_44);
    local_54 = (undefined1 *)0x60531a;
    FUN_005df5ec(&PTR_LAB_005fb6c8,1,local_44);
    local_54 = (undefined1 *)0x60531f;
    FUN_00406618();
    break;
  case 6:
    local_54 = (undefined1 *)0x605331;
    FUN_0040b75c(PTR_PTR_00781dbc,&local_48);
    local_54 = (undefined1 *)0x605340;
    FUN_005df5ec(&PTR_LAB_005fb7a0,1,local_48);
    local_54 = (undefined1 *)0x605345;
    FUN_00406618();
    break;
  case 7:
    local_54 = (undefined1 *)0x605354;
    FUN_0040b75c(PTR_PTR_00781a30,&local_4c);
    local_54 = (undefined1 *)0x605363;
    FUN_005df5ec(&PTR_LAB_005fb868,1,local_4c);
    local_54 = (undefined1 *)0x605368;
    FUN_00406618();
    break;
  case 8:
    local_54 = (undefined1 *)0x605377;
    FUN_0040b75c(PTR_PTR_0078276c,&local_50);
    local_54 = (undefined1 *)0x605386;
    FUN_005df5ec(&PTR_LAB_005fb928,1,local_50);
    local_54 = (undefined1 *)0x60538b;
    FUN_00406618();
    break;
  default:
    local_54 = (undefined1 *)0x60539a;
    FUN_0040b75c(PTR_PTR_007822c0,&local_54);
    puVar3 = local_54;
    local_54 = (undefined1 *)0x6053a9;
    FUN_005df5ec(&PTR_LAB_005fb0bc,1,puVar3);
    local_54 = (undefined1 *)0x6053ae;
    FUN_00406618();
  }
  iVar5 = 3;
  if ((local_8 == 0) || (iVar6 = local_8, *(uint *)(local_8 + -4) < 4)) {
    local_54 = (undefined1 *)0x6053c4;
    iVar5 = thunk_FUN_00404478();
    iVar6 = extraout_EDX_00;
  }
  cVar1 = *(char *)(iVar6 + iVar5);
  if (cVar1 == '\x01') {
    local_10 = 6;
  }
  else if (cVar1 == '\x03') {
    iVar5 = 4;
    if ((local_8 == 0) || (iVar6 = local_8, *(uint *)(local_8 + -4) < 5)) {
      local_54 = (undefined1 *)0x6053fc;
      iVar5 = thunk_FUN_00404478();
      iVar6 = extraout_EDX_01;
    }
    local_10 = *(byte *)(iVar6 + iVar5) + 2;
    if (SCARRY4((uint)*(byte *)(iVar6 + iVar5),2)) {
      local_54 = (undefined1 *)0x60540a;
      local_10 = FUN_00405944();
    }
  }
  else if (cVar1 == '\x04') {
    local_10 = 0x12;
  }
  local_58 = &LAB_006056aa;
  local_5c = (undefined **)*in_FS_OFFSET;
  *in_FS_OFFSET = (int)&local_5c;
  local_60 = (undefined4 ****)0x0;
  local_64 = 0x605436;
  local_54 = &stack0xfffffffc;
  (**(code **)(*param_2 + 0xac))(param_2,&local_8,local_10);
  if (cVar1 == '\x01') {
    local_64 = 0;
    iVar5 = 0;
    if ((local_8 == 0) || (iVar6 = local_8, *(int *)(local_8 + -4) == 0)) {
      local_68 = (undefined4 **)0x605468;
      iVar5 = thunk_FUN_00404478();
      iVar6 = extraout_EDX_02;
    }
    local_68 = (undefined4 **)0x605474;
    FUN_0041666c(*(undefined1 *)(iVar6 + iVar5),&local_5c);
    local_68 = (undefined4 **)local_5c;
    local_6c = (undefined **)&DAT_00605750;
    iVar5 = 1;
    if ((local_8 == 0) || (iVar6 = local_8, *(uint *)(local_8 + -4) < 2)) {
      local_70 = (undefined4 ***)0x605492;
      iVar5 = thunk_FUN_00404478();
      iVar6 = extraout_EDX_03;
    }
    local_70 = (undefined4 ***)0x60549e;
    FUN_0041666c(*(undefined1 *)(iVar6 + iVar5),&local_60);
    local_70 = local_60;
    local_74 = (undefined **)&DAT_00605750;
    iVar5 = 2;
    if ((local_8 == 0) || (iVar6 = local_8, *(uint *)(local_8 + -4) < 3)) {
      iVar5 = thunk_FUN_00404478();
      iVar6 = extraout_EDX_04;
    }
    FUN_0041666c(*(undefined1 *)(iVar6 + iVar5),&local_64);
    iVar5 = 3;
    if ((local_8 == 0) || (iVar6 = local_8, *(uint *)(local_8 + -4) < 4)) {
      iVar5 = thunk_FUN_00404478();
      iVar6 = extraout_EDX_05;
    }
    FUN_0041666c(*(undefined1 *)(iVar6 + iVar5),&local_68);
    FUN_00408480(&local_58,7);
    puVar3 = local_58;
    iVar5 = 4;
    if ((local_8 == 0) || (iVar6 = local_8, *(uint *)(local_8 + -4) < 5)) {
      iVar5 = thunk_FUN_00404478();
      iVar6 = extraout_EDX_06;
    }
    iVar5 = (uint)*(byte *)(iVar6 + iVar5) * 0x100;
    iVar6 = 5;
    if ((local_8 == 0) || (iVar8 = local_8, *(uint *)(local_8 + -4) < 6)) {
      iVar6 = thunk_FUN_00404478();
      iVar5 = extraout_ECX;
      iVar8 = extraout_EDX_07;
    }
    uVar7 = iVar5 + (uint)*(byte *)(iVar8 + iVar6);
    if (SCARRY4(iVar5,(uint)*(byte *)(iVar8 + iVar6))) {
      FUN_00405944();
      uVar7 = extraout_ECX_00;
    }
    if (0xffff < uVar7) {
      thunk_FUN_00404478();
    }
    FUN_005f69d4(param_2[0x36],puVar3);
  }
  else if (cVar1 == '\x03') {
    local_64 = (uint)*(byte *)((int)param_2 + 0x106);
    local_68 = &local_6c;
    local_6c = (undefined **)0x0;
    local_70 = &local_70;
    if (SBORROW4(local_10,2)) {
      local_74 = (undefined **)0x605592;
      FUN_00405944();
    }
    local_74 = (undefined **)0x60559c;
    FUN_005e31ac(local_8,0);
    local_6c = (undefined **)0x6055ad;
    FUN_005f407c(*(undefined4 *)PTR_DAT_007826d0,local_70,0);
    local_68 = (undefined4 **)local_6c;
    iVar5 = 4;
    if ((local_8 == 0) || (iVar6 = local_8, *(uint *)(local_8 + -4) < 5)) {
      local_6c = (undefined **)0x6055c7;
      iVar5 = thunk_FUN_00404478();
      iVar6 = extraout_EDX_08;
    }
    iVar5 = (uint)*(byte *)(iVar6 + iVar5) * 0x100;
    iVar6 = 5;
    if ((local_8 == 0) || (iVar8 = local_8, *(uint *)(local_8 + -4) < 6)) {
      local_6c = (undefined **)0x6055f1;
      iVar6 = thunk_FUN_00404478();
      iVar5 = extraout_ECX_01;
      iVar8 = extraout_EDX_09;
    }
    uVar7 = iVar5 + (uint)*(byte *)(iVar8 + iVar6);
    if (SCARRY4(iVar5,(uint)*(byte *)(iVar8 + iVar6))) {
      local_6c = (undefined **)0x6055fe;
      FUN_00405944();
      uVar7 = extraout_ECX_02;
    }
    if (0xffff < uVar7) {
      local_6c = (undefined **)0x60560b;
      thunk_FUN_00404478();
    }
    ppuVar2 = local_68;
    local_68 = (undefined4 **)0x605617;
    FUN_005f69d4(param_2[0x36],ppuVar2);
  }
  else if (cVar1 == '\x04') {
    local_64 = 0x605629;
    FUN_005e2fc4(local_8,(int)&uStack_28 + 2,0);
    local_64 = 1;
    local_68 = (undefined4 **)0x605636;
    FUN_005e1008((int)&uStack_28 + 2,&local_74);
    local_68 = (undefined4 **)local_74;
    iVar5 = 0x10;
    if ((local_8 == 0) || (iVar6 = local_8, *(uint *)(local_8 + -4) < 0x11)) {
      local_6c = (undefined **)0x605650;
      iVar5 = thunk_FUN_00404478();
      iVar6 = extraout_EDX_10;
    }
    iVar5 = (uint)*(byte *)(iVar6 + iVar5) * 0x100;
    iVar6 = 0x11;
    if ((local_8 == 0) || (iVar8 = local_8, *(uint *)(local_8 + -4) < 0x12)) {
      local_6c = (undefined **)0x60567a;
      iVar6 = thunk_FUN_00404478();
      iVar5 = extraout_ECX_03;
      iVar8 = extraout_EDX_11;
    }
    uVar7 = iVar5 + (uint)*(byte *)(iVar8 + iVar6);
    if (SCARRY4(iVar5,(uint)*(byte *)(iVar8 + iVar6))) {
      local_6c = (undefined **)0x605687;
      FUN_00405944();
      uVar7 = extraout_ECX_04;
    }
    if (0xffff < uVar7) {
      local_6c = (undefined **)0x605694;
      thunk_FUN_00404478();
    }
    ppuVar2 = local_68;
    local_68 = (undefined4 **)0x6056a0;
    FUN_005f69d4(param_2[0x36],ppuVar2);
  }
  *in_FS_OFFSET = (int)local_60;
  *in_FS_OFFSET = (int)local_54;
  local_4c = (undefined1 **)&LAB_006056fc;
  local_50 = (undefined1 *)0x6056ec;
  (**(code **)(*piVar4 + 0x54))(piVar4,0);
  local_50 = (undefined1 *)0x6056f4;
  FUN_0041ef80(&stack0xffffffec);
  return;
}
