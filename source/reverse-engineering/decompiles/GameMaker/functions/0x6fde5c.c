// rea decompile_all
// name: FUN_006fde5c
// address: 0x6fde5c
// body: available
// range: 0x6fde5c-0x6fe0d2 inclusive
// range: 0x6fe113-0x6fe3ec inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6fde7f (push 0x6fe3ed followed by fs-segment stack chaining); handler 0x6fe3ed lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006fde5c(int param_1,int param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 unaff_EDI;
  undefined4 *in_FS_OFFSET;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  int local_40;
  undefined4 local_3c;
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 *local_24;
  undefined1 *local_20;
  undefined4 local_8;

  local_20 = &stack0xfffffffc;
  iVar6 = 0xe;
  do {
    local_8 = 0;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  local_24 = &LAB_006fe3ed;
  local_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_28;
  local_2c = 0x6fde93;
  uVar2 = FUN_00714e30(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8));
  local_2c = 0x6fde9e;
  iVar6 = FUN_00561ccc(uVar2,param_2);
  *(int *)(&DAT_007901c0 + param_2 * 4) = iVar6;
  if (iVar6 == 1) {
    *(undefined4 *)(&DAT_007901c0 + param_2 * 4) = 0;
  }
  if (*(int *)(&DAT_007901c0 + param_2 * 4) == 2) {
    *(undefined4 *)(&DAT_007901c0 + param_2 * 4) = 0;
  }
  local_2c = 0x6fded0;
  FUN_0041666c(param_2,&local_20);
  local_2c = 0x6fdee0;
  FUN_0040839c(&stack0xffffffe4,L"ValueText",local_20);
  local_2c = 0x6fdeed;
  uVar3 = FUN_0044959c(DAT_007901a0,unaff_EDI);
  local_2c = 0x6fdefa;
  FUN_0041666c(param_2,&local_28);
  local_2c = 0x6fdf0a;
  FUN_0040839c(&local_24,L"ValueVal",local_28);
  local_2c = 0x6fdf17;
  iVar6 = FUN_0044959c(DAT_007901a0,local_24);
  local_2c = 0x6fdf24;
  FUN_0041666c(param_2,&local_30);
  local_2c = 0x6fdf34;
  FUN_0040839c(&local_2c,L"MenuBtn",local_30);
  uVar4 = local_2c;
  local_2c = 0x6fdf41;
  uVar4 = FUN_0044959c(DAT_007901a0,uVar4);
  if (*(int *)(&DAT_007901c0 + param_2 * 4) == 4) {
    *(undefined4 *)(&DAT_007907d8 + param_2 * 4) = 0;
    iVar7 = 1;
    while( true ) {
      local_2c = 0x6fdffb;
      FUN_00561cec(uVar2,param_2,&local_44);
      local_2c = 0x6fe003;
      iVar5 = FUN_00408238(local_44);
      if ((iVar5 < iVar7) || (0x3f < *(int *)(&DAT_007907d8 + param_2 * 4))) break;
      local_2c = 0x6fdf6f;
      FUN_00407f0c(&local_8,0);
      while( true ) {
        local_2c = 0x6fdfa5;
        FUN_00561cec(uVar2,param_2,&local_3c);
        local_2c = 0x6fdfad;
        iVar5 = FUN_00408238(local_3c);
        if (iVar5 < iVar7) break;
        local_2c = 0x6fdfbd;
        FUN_00561cec(uVar2,param_2,&local_40);
        if (*(short *)(local_40 + -2 + iVar7 * 2) == 0x7c) break;
        local_2c = 0x6fdf7d;
        FUN_00561cec(uVar2,param_2,&local_38);
        local_2c = 0x6fdf8d;
        FUN_00408034(&local_34,*(undefined2 *)(local_38 + -2 + iVar7 * 2));
        local_2c = 0x6fdf98;
        FUN_004082dc(&local_8,local_34);
        iVar7 = iVar7 + 1;
      }
      *(int *)(&DAT_007907d8 + param_2 * 4) = *(int *)(&DAT_007907d8 + param_2 * 4) + 1;
      local_2c = 0x6fdfee;
      FUN_00407eb8(param_2 * 0x100 + 0x7901d4 + *(int *)(&DAT_007907d8 + param_2 * 4) * 4,local_8);
      iVar7 = iVar7 + 1;
    }
  }
  local_2c = 0x6fe01f;
  FUN_004ee5c0(uVar3,1);
  local_2c = 0x6fe02b;
  FUN_00561cb4(uVar2,param_2,&local_48);
  local_2c = 0x6fe036;
  FUN_004ee6d8(uVar3,local_48);
  local_2c = 0x6fe040;
  FUN_004ee5c0(iVar6,1);
  local_2c = 0x6fe04d;
  FUN_004ee858(iVar6,0xffffff);
  local_2c = 0x6fe066;
  (**(code **)(**(int **)(iVar6 + 100) + 8))
            (*(int **)(iVar6 + 100),*(undefined4 *)(*(int *)(DAT_007901a0 + 0x3c0) + 100));
  if ((*(int *)(&DAT_007901c0 + param_2 * 4) != 0) && (*(int *)(&DAT_007901c0 + param_2 * 4) != 0xf)
     ) {
    local_2c = 0x6fe083;
    FUN_007104b0(param_1,param_2,&local_4c);
    local_2c = 0x6fe08e;
    uVar2 = FUN_006fdca8(local_4c,0xffffffff);
    *(undefined4 *)(&DAT_007901a8 + param_2 * 4) = uVar2;
  }
  local_2c = 0x6fe0a8;
  FUN_0047daa0(iVar6,*(int *)(&DAT_007901c0 + param_2 * 4) != 0);
  *(bool *)(iVar6 + 0x27e) = *(int *)(&DAT_007901c0 + param_2 * 4) == 0;
  switch(*(undefined4 *)(&DAT_007901c0 + param_2 * 4)) {
  case 0:
    local_2c = 0x6fe120;
    FUN_007104b0(param_1,param_2,&local_50);
    local_2c = 0x6fe12b;
    FUN_004ee6d8(iVar6,local_50);
    break;
  case 3:
    if (*(int *)(&DAT_007901a8 + param_2 * 4) < 1) {
      local_2c = 0x6fe147;
      FUN_004ee6d8(iVar6,L"false");
    }
    else {
      local_2c = 0x6fe159;
      FUN_004ee6d8(iVar6,L"true");
    }
    break;
  case 4:
    local_2c = 0x6fe17c;
    FUN_004ee6d8(iVar6,*(undefined4 *)
                        (&DAT_007901d8 + *(int *)(&DAT_007901a8 + param_2 * 4) * 4 + param_2 * 0x100
                        ));
    break;
  case 5:
    if (*(int *)(&DAT_007901a8 + param_2 * 4) < 0) {
      local_2c = 0x6fe22b;
      FUN_004ee6d8(iVar6,L"No sprite");
    }
    else {
      local_2c = 0x6fe23a;
      FUN_006f5920(*(int *)(&DAT_007901a8 + param_2 * 4),&local_5c);
      local_2c = 0x6fe245;
      FUN_004ee6d8(iVar6,local_5c);
    }
    break;
  case 6:
    if (*(int *)(&DAT_007901a8 + param_2 * 4) < 0) {
      local_2c = 0x6fe262;
      FUN_004ee6d8(iVar6,L"No sound");
    }
    else {
      local_2c = 0x6fe271;
      FUN_006522c0(*(int *)(&DAT_007901a8 + param_2 * 4),&local_60);
      local_2c = 0x6fe27c;
      FUN_004ee6d8(iVar6,local_60);
    }
    break;
  case 7:
    if (*(int *)(&DAT_007901a8 + param_2 * 4) < 0) {
      local_2c = 0x6fe2d0;
      FUN_004ee6d8(iVar6,L"No background");
    }
    else {
      local_2c = 0x6fe2df;
      FUN_0064de38(*(int *)(&DAT_007901a8 + param_2 * 4),&local_68);
      local_2c = 0x6fe2ea;
      FUN_004ee6d8(iVar6,local_68);
    }
    break;
  case 8:
    if (*(int *)(&DAT_007901a8 + param_2 * 4) < 0) {
      local_2c = 0x6fe33e;
      FUN_004ee6d8(iVar6,L"No path");
    }
    else {
      local_2c = 0x6fe34a;
      FUN_00722840(*(int *)(&DAT_007901a8 + param_2 * 4),&local_70);
      local_2c = 0x6fe355;
      FUN_004ee6d8(iVar6,local_70);
    }
    break;
  case 9:
    if (*(int *)(&DAT_007901a8 + param_2 * 4) < 0) {
      local_2c = 0x6fe307;
      FUN_004ee6d8(iVar6,L"No script");
    }
    else {
      local_2c = 0x6fe316;
      FUN_00655b40(*(int *)(&DAT_007901a8 + param_2 * 4),&local_6c);
      local_2c = 0x6fe321;
      FUN_004ee6d8(iVar6,local_6c);
    }
    break;
  case 10:
    if (*(int *)(&DAT_007901a8 + param_2 * 4) < 0) {
      local_2c = 0x6fe1f4;
      FUN_004ee6d8(iVar6,L"No object");
    }
    else {
      local_2c = 0x6fe203;
      FUN_0062cabc(*(int *)(&DAT_007901a8 + param_2 * 4),&local_58);
      local_2c = 0x6fe20e;
      FUN_004ee6d8(iVar6,local_58);
    }
    break;
  case 0xb:
    if (*(int *)(&DAT_007901a8 + param_2 * 4) < 0) {
      local_2c = 0x6fe299;
      FUN_004ee6d8(iVar6,L"No room");
    }
    else {
      local_2c = 0x6fe2a8;
      FUN_00692f24(*(int *)(&DAT_007901a8 + param_2 * 4),&local_64);
      local_2c = 0x6fe2b3;
      FUN_004ee6d8(iVar6,local_64);
    }
    break;
  case 0xc:
    if (*(int *)(&DAT_007901a8 + param_2 * 4) < 0) {
      local_2c = 0x6fe36f;
      FUN_004ee6d8(iVar6,L"No font");
    }
    else {
      local_2c = 0x6fe37b;
      FUN_006fcc58(*(int *)(&DAT_007901a8 + param_2 * 4),&local_74);
      local_2c = 0x6fe386;
      FUN_004ee6d8(iVar6,local_74);
    }
    break;
  case 0xd:
    local_2c = 0x6fe18b;
    FUN_004ee6d8(iVar6,0);
    local_2c = 0x6fe19a;
    FUN_004ee858(iVar6,*(undefined4 *)(&DAT_007901a8 + param_2 * 4));
    break;
  case 0xe:
    if (*(int *)(&DAT_007901a8 + param_2 * 4) < 0) {
      local_2c = 0x6fe3a0;
      FUN_004ee6d8(iVar6,L"No time line");
    }
    else {
      local_2c = 0x6fe3ac;
      FUN_006fa608(*(int *)(&DAT_007901a8 + param_2 * 4),&local_78);
      local_2c = 0x6fe3b7;
      FUN_004ee6d8(iVar6,local_78);
    }
    break;
  case 0xf:
    local_2c = 0x6fe1ac;
    FUN_004ee6d8(iVar6,L"AaBbCcDd");
    local_2c = 0x6fe1b9;
    FUN_007104b0(param_1,param_2,&local_54);
    local_2c = 0x6fe1c1;
    uVar2 = FUN_00700b54(local_54);
    local_2c = 0x6fe1d0;
    (**(code **)(**(int **)(iVar6 + 100) + 8))(*(int **)(iVar6 + 100),uVar2);
    local_2c = 0x6fe1d7;
    FUN_00405a7c(uVar2);
  }
  local_2c = 0x6fe3ca;
  FUN_004ee5c0(uVar4,*(int *)(&DAT_007901c0 + param_2 * 4) != 0);
  puVar1 = local_20;
  *in_FS_OFFSET = local_28;
  local_20 = &LAB_006fe3f4;
  local_24 = (undefined1 *)0x6fe3e4;
  thunk_FUN_00406e80(&local_78,0x18,puVar1);
  local_24 = (undefined1 *)0x6fe3ec;
  thunk_FUN_00406e5c(&local_8);
  return;
}
