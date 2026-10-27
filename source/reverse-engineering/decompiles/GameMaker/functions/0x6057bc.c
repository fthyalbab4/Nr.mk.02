// rea decompile_all
// name: FUN_006057bc
// address: 0x6057bc
// body: available
// range: 0x6057bc-0x605854 inclusive
// range: 0x60587e-0x605cc4 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6057e2 (push 0x605cc5 followed by fs-segment stack chaining); handler 0x605cc5 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00605bd2) */
/* WARNING: Removing unreachable block (ram,0x00605c5b) */
/* WARNING: Removing unreachable block (ram,0x00605b29) */

void FUN_006057bc(undefined4 param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 **ppuVar2;
  undefined1 *puVar3;
  char cVar4;
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
  undefined4 *in_FS_OFFSET;
  undefined4 *local_64;
  undefined4 local_60;
  undefined4 *local_5c;
  undefined4 *local_58;
  undefined4 local_54;
  undefined4 *local_50;
  undefined4 *local_4c;
  undefined4 *local_48;
  undefined4 local_44;
  undefined1 *local_40;
  undefined4 *local_3c;
  undefined1 *local_38;
  undefined4 **local_34;
  uint local_30;
  undefined4 local_2c;
  undefined1 *local_28;
  undefined1 *local_24;
  int local_c;
  int local_8;

  local_24 = &stack0xfffffffc;
  local_8 = 0xb;
  do {
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  LOCK();
  UNLOCK();
  local_28 = &LAB_00605cc5;
  local_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_2c;
  local_30 = 0xff;
  local_34 = (undefined4 **)0x6057fd;
  FUN_00409be0(&local_8,&DAT_004108f8,1);
  local_30 = 0x60580d;
  cVar4 = FUN_005f6bf4(param_2[0x36],0);
  if (cVar4 != '\0') {
    local_30 = 0;
    local_34 = (undefined4 **)0x60582b;
    (**(code **)(*param_2 + 0xac))(param_2,&local_8,4);
    iVar5 = 1;
    if ((local_8 == 0) || (iVar6 = local_8, *(uint *)(local_8 + -4) < 2)) {
      local_34 = (undefined4 **)0x605841;
      iVar5 = thunk_FUN_00404478();
      iVar6 = extraout_EDX;
    }
    switch(*(undefined1 *)(iVar6 + iVar5)) {
    case 0:
      break;
    case 1:
      local_34 = (undefined4 **)0x60588b;
      FUN_0040b75c(PTR_PTR_00781c54,&local_24);
      local_34 = (undefined4 **)0x60589a;
      FUN_005df5ec(&PTR_LAB_005fb3a0,1,local_24);
      local_34 = (undefined4 **)0x60589f;
      FUN_00406618();
      break;
    case 2:
      local_34 = (undefined4 **)0x6058b1;
      FUN_0040b75c(PTR_PTR_007816ac,&local_28);
      local_34 = (undefined4 **)0x6058c0;
      FUN_005df5ec(&PTR_LAB_005fb460,1,local_28);
      local_34 = (undefined4 **)0x6058c5;
      FUN_00406618();
      break;
    case 3:
      local_34 = (undefined4 **)0x6058d7;
      FUN_0040b75c(PTR_PTR_00781878,&local_2c);
      local_34 = (undefined4 **)0x6058e6;
      FUN_005df5ec(&PTR_LAB_005fb528,1,local_2c);
      local_34 = (undefined4 **)0x6058eb;
      FUN_00406618();
      break;
    case 4:
      local_34 = (undefined4 **)0x6058fd;
      FUN_0040b75c(PTR_PTR_00782344,&local_30);
      local_34 = (undefined4 **)0x60590c;
      FUN_005df5ec(&PTR_LAB_005fb5f8,1,local_30);
      local_34 = (undefined4 **)0x605911;
      FUN_00406618();
      break;
    case 5:
      local_34 = (undefined4 **)0x605923;
      FUN_0040b75c(PTR_PTR_00781ca8,&local_34);
      ppuVar2 = local_34;
      local_34 = (undefined4 **)0x605932;
      FUN_005df5ec(&PTR_LAB_005fb6c8,1,ppuVar2);
      local_34 = (undefined4 **)0x605937;
      FUN_00406618();
      break;
    case 6:
      local_34 = (undefined4 **)0x605949;
      FUN_0040b75c(PTR_PTR_00781dbc,&local_38);
      local_34 = (undefined4 **)0x605958;
      FUN_005df5ec(&PTR_LAB_005fb7a0,1,local_38);
      local_34 = (undefined4 **)0x60595d;
      FUN_00406618();
      break;
    case 7:
      local_34 = (undefined4 **)0x60596c;
      FUN_0040b75c(PTR_PTR_00781a30,&local_3c);
      local_34 = (undefined4 **)0x60597b;
      FUN_005df5ec(&PTR_LAB_005fb868,1,local_3c);
      local_34 = (undefined4 **)0x605980;
      FUN_00406618();
      break;
    case 8:
      local_34 = (undefined4 **)0x60598f;
      FUN_0040b75c(PTR_PTR_0078276c,&local_40);
      local_34 = (undefined4 **)0x60599e;
      FUN_005df5ec(&PTR_LAB_005fb928,1,local_40);
      local_34 = (undefined4 **)0x6059a3;
      FUN_00406618();
      break;
    default:
      local_34 = (undefined4 **)0x6059b2;
      FUN_0040b75c(PTR_PTR_007822c0,&local_44);
      local_34 = (undefined4 **)0x6059c1;
      FUN_005df5ec(&PTR_LAB_005fb0bc,1,local_44);
      local_34 = (undefined4 **)0x6059c6;
      FUN_00406618();
    }
    iVar5 = 3;
    if ((local_8 == 0) || (iVar6 = local_8, *(uint *)(local_8 + -4) < 4)) {
      local_34 = (undefined4 **)0x6059dc;
      iVar5 = thunk_FUN_00404478();
      iVar6 = extraout_EDX_00;
    }
    cVar4 = *(char *)(iVar6 + iVar5);
    if (cVar4 == '\x01') {
      local_c = 6;
    }
    else if (cVar4 == '\x03') {
      iVar5 = 4;
      if ((local_8 == 0) || (iVar6 = local_8, *(uint *)(local_8 + -4) < 5)) {
        local_34 = (undefined4 **)0x605a10;
        iVar5 = thunk_FUN_00404478();
        iVar6 = extraout_EDX_01;
      }
      local_c = *(byte *)(iVar6 + iVar5) + 2;
      if (SCARRY4((uint)*(byte *)(iVar6 + iVar5),2)) {
        local_34 = (undefined4 **)0x605a1e;
        local_c = FUN_00405944();
      }
    }
    else {
      local_c = 0x12;
    }
    local_34 = (undefined4 **)0x0;
    local_38 = (undefined1 *)0x605a3c;
    (**(code **)(*param_2 + 0xac))(param_2,&local_8,local_c);
    if (cVar4 == '\x01') {
      local_30 = 0;
      iVar5 = 0;
      if ((local_8 == 0) || (iVar6 = local_8, *(int *)(local_8 + -4) == 0)) {
        local_34 = (undefined4 **)0x605a66;
        iVar5 = thunk_FUN_00404478();
        iVar6 = extraout_EDX_02;
      }
      local_34 = (undefined4 **)0x605a72;
      FUN_0041666c(*(undefined1 *)(iVar6 + iVar5),&local_4c);
      local_34 = (undefined4 **)local_4c;
      local_38 = &LAB_00605ce4;
      iVar5 = 1;
      if ((local_8 == 0) || (iVar6 = local_8, *(uint *)(local_8 + -4) < 2)) {
        local_3c = (undefined4 *)0x605a90;
        iVar5 = thunk_FUN_00404478();
        iVar6 = extraout_EDX_03;
      }
      local_3c = (undefined4 *)0x605a9c;
      FUN_0041666c(*(undefined1 *)(iVar6 + iVar5),&local_50);
      local_3c = local_50;
      local_40 = &LAB_00605ce4;
      iVar5 = 2;
      if ((local_8 == 0) || (iVar6 = local_8, *(uint *)(local_8 + -4) < 3)) {
        local_44 = 0x605aba;
        iVar5 = thunk_FUN_00404478();
        iVar6 = extraout_EDX_04;
      }
      local_44 = 0x605ac6;
      FUN_0041666c(*(undefined1 *)(iVar6 + iVar5),&local_54);
      local_44 = local_54;
      local_48 = (undefined4 *)&LAB_00605ce4;
      iVar5 = 3;
      if ((local_8 == 0) || (iVar6 = local_8, *(uint *)(local_8 + -4) < 4)) {
        local_4c = (undefined4 *)0x605ae4;
        iVar5 = thunk_FUN_00404478();
        iVar6 = extraout_EDX_05;
      }
      local_4c = (undefined4 *)0x605af0;
      FUN_0041666c(*(undefined1 *)(iVar6 + iVar5),&local_58);
      local_4c = local_58;
      local_50 = (undefined4 *)0x605b00;
      FUN_00408480(&local_48,7);
      local_50 = local_48;
      iVar5 = 4;
      if ((local_8 == 0) || (iVar6 = local_8, *(uint *)(local_8 + -4) < 5)) {
        local_54 = 0x605b1a;
        iVar5 = thunk_FUN_00404478();
        iVar6 = extraout_EDX_06;
      }
      iVar5 = (uint)*(byte *)(iVar6 + iVar5) * 0x100;
      iVar6 = 5;
      if ((local_8 == 0) || (iVar8 = local_8, *(uint *)(local_8 + -4) < 6)) {
        local_54 = 0x605b44;
        iVar6 = thunk_FUN_00404478();
        iVar5 = extraout_ECX;
        iVar8 = extraout_EDX_07;
      }
      uVar7 = iVar5 + (uint)*(byte *)(iVar8 + iVar6);
      if (SCARRY4(iVar5,(uint)*(byte *)(iVar8 + iVar6))) {
        local_54 = 0x605b51;
        FUN_00405944();
        uVar7 = extraout_ECX_00;
      }
      if (0xffff < uVar7) {
        local_54 = 0x605b5e;
        thunk_FUN_00404478();
      }
      puVar1 = local_50;
      local_50 = (undefined4 *)0x605b6a;
      FUN_005f69d4(param_2[0x36],puVar1);
    }
    else if (cVar4 == '\x03') {
      local_30 = (uint)*(byte *)((int)param_2 + 0x106);
      local_34 = &local_5c;
      local_38 = (undefined1 *)0x0;
      local_3c = &local_60;
      if (SBORROW4(local_c,2)) {
        local_40 = (undefined1 *)0x605b8e;
        FUN_00405944();
      }
      local_40 = (undefined1 *)0x605b98;
      FUN_005e31ac(local_8,0);
      local_38 = (undefined1 *)0x605ba9;
      FUN_005f407c(*(undefined4 *)PTR_DAT_007826d0,local_60,0);
      local_34 = (undefined4 **)local_5c;
      iVar5 = 4;
      if ((local_8 == 0) || (iVar6 = local_8, *(uint *)(local_8 + -4) < 5)) {
        local_38 = (undefined1 *)0x605bc3;
        iVar5 = thunk_FUN_00404478();
        iVar6 = extraout_EDX_08;
      }
      iVar5 = (uint)*(byte *)(iVar6 + iVar5) * 0x100;
      iVar6 = 5;
      if ((local_8 == 0) || (iVar8 = local_8, *(uint *)(local_8 + -4) < 6)) {
        local_38 = (undefined1 *)0x605bed;
        iVar6 = thunk_FUN_00404478();
        iVar5 = extraout_ECX_01;
        iVar8 = extraout_EDX_09;
      }
      uVar7 = iVar5 + (uint)*(byte *)(iVar8 + iVar6);
      if (SCARRY4(iVar5,(uint)*(byte *)(iVar8 + iVar6))) {
        local_38 = (undefined1 *)0x605bfa;
        FUN_00405944();
        uVar7 = extraout_ECX_02;
      }
      if (0xffff < uVar7) {
        local_38 = (undefined1 *)0x605c07;
        thunk_FUN_00404478();
      }
      ppuVar2 = local_34;
      local_34 = (undefined4 **)0x605c13;
      FUN_005f69d4(param_2[0x36],ppuVar2);
    }
    else {
      local_30 = 0x605c25;
      FUN_005e2fc4(local_8,&stack0xffffffe2,0);
      local_30 = 1;
      local_34 = (undefined4 **)0x605c32;
      FUN_005e1008(&stack0xffffffe2,&local_64);
      local_34 = (undefined4 **)local_64;
      iVar5 = 0x10;
      if ((local_8 == 0) || (iVar6 = local_8, *(uint *)(local_8 + -4) < 0x11)) {
        local_38 = (undefined1 *)0x605c4c;
        iVar5 = thunk_FUN_00404478();
        iVar6 = extraout_EDX_10;
      }
      iVar5 = (uint)*(byte *)(iVar6 + iVar5) * 0x100;
      iVar6 = 0x11;
      if ((local_8 == 0) || (iVar8 = local_8, *(uint *)(local_8 + -4) < 0x12)) {
        local_38 = (undefined1 *)0x605c76;
        iVar6 = thunk_FUN_00404478();
        iVar5 = extraout_ECX_03;
        iVar8 = extraout_EDX_11;
      }
      uVar7 = iVar5 + (uint)*(byte *)(iVar8 + iVar6);
      if (SCARRY4(iVar5,(uint)*(byte *)(iVar8 + iVar6))) {
        local_38 = (undefined1 *)0x605c83;
        FUN_00405944();
        uVar7 = extraout_ECX_04;
      }
      if (0xffff < uVar7) {
        local_38 = (undefined1 *)0x605c90;
        thunk_FUN_00404478();
      }
      ppuVar2 = local_34;
      local_34 = (undefined4 **)0x605c9c;
      FUN_005f69d4(param_2[0x36],ppuVar2);
    }
  }
  puVar3 = local_24;
  *in_FS_OFFSET = local_2c;
  local_24 = &LAB_00605ccc;
  local_28 = (undefined1 *)0x605cb6;
  thunk_FUN_00406e80(&local_64,0x11,puVar3);
  local_28 = (undefined1 *)0x605cc4;
  FUN_00409ce0(&local_8,&DAT_004108f8);
  return;
}
