// rea decompile_all
// name: FUN_0044616c
// address: 0x44616c
// body: available
// range: 0x44616c-0x4461e2 inclusive
// range: 0x4461ff-0x446468 inclusive
// range: 0x4464ca-0x4464d3 inclusive
// range: 0x4464f5-0x44652c inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x446199 (push 0x44652d followed by fs-segment stack chaining); handler 0x44652d lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x44635c (push 0x4464d4 followed by fs-segment stack chaining); handler 0x4464d4 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4463cc (push 0x4464c3 followed by fs-segment stack chaining); handler 0x4464c3 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x446400 (push 0x446469 followed by fs-segment stack chaining); handler 0x446469 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0044616c(undefined4 param_1,ushort *param_2)

{
  longlong lVar1;
  double dVar2;
  undefined1 *puVar3;
  char cVar4;
  uint uVar5;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 *in_FS_OFFSET;
  float10 in_ST0;
  undefined4 uStack_7c;
  undefined1 *puStack_78;
  undefined1 *puStack_74;
  undefined4 uStack_70;
  undefined1 *puStack_6c;
  undefined1 *puStack_68;
  undefined4 uStack_64;
  undefined1 *puStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined1 *puStack_54;
  undefined1 *puStack_50;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 *local_2c;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 *local_18;
  undefined4 local_14;
  undefined4 *local_10;
  undefined4 local_c;
  int *local_8;

  puStack_50 = &stack0xfffffffc;
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_8 = (int *)0x0;
  puStack_54 = &LAB_0044652d;
  uStack_58 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_58;
  uStack_5c._0_2_ = 0x61a3;
  uStack_5c._2_2_ = 0x44;
  local_c = param_1;
  cVar4 = FUN_0042c3a4(param_2);
  if (cVar4 != '\0') {
    uStack_5c._0_2_ = 0x61b9;
    uStack_5c._2_2_ = 0x44;
    FUN_0041bfec(&PTR_LAB_0042eaf0,1,PTR_PTR_00782010);
    uStack_5c._0_2_ = 0x61be;
    uStack_5c._2_2_ = 0x44;
    FUN_00406618();
  }
  uVar5 = (uint)(*param_2 & 0xfff);
  if (uVar5 < 8) {
    if (uVar5 == 7) {
      uStack_5c._0_2_ = 0x62f4;
      uStack_5c._2_2_ = 0x44;
      FUN_004272e0(param_2);
      dVar2 = (double)in_ST0;
      puStack_60 = SUB84(dVar2,0);
      uStack_5c._0_2_ = (undefined2)((ulonglong)dVar2 >> 0x20);
      uStack_5c._2_2_ = (undefined2)((ulonglong)dVar2 >> 0x30);
      uStack_64 = 0x446303;
      FUN_00444c94(local_c);
      goto LAB_004464f5;
    }
    switch(uVar5) {
    case 0:
      uStack_5c._0_2_ = 0x623e;
      uStack_5c._2_2_ = 0x44;
      FUN_0044699c(local_c,0xd);
      break;
    case 1:
      uStack_5c._0_2_ = 0x624d;
      uStack_5c._2_2_ = 0x44;
      FUN_0044699c(local_c,0);
      break;
    case 2:
    case 3:
switchD_004461dc_caseD_2:
      uStack_5c._0_2_ = 0x628d;
      uStack_5c._2_2_ = 0x44;
      puStack_60 = (undefined1 *)FUN_004261e0(param_2);
      uStack_5c._0_2_ = (undefined2)extraout_EDX;
      uStack_5c._2_2_ = (undefined2)((uint)extraout_EDX >> 0x10);
      uStack_64 = 0x446297;
      FUN_00444e10(local_c);
      break;
    case 4:
      uStack_5c._0_2_ = 0x62a3;
      uStack_5c._2_2_ = 0x44;
      FUN_004272e0(param_2);
      uStack_5c = (undefined1 *)(float)in_ST0;
      puStack_60 = (undefined1 *)0x4462b2;
      FUN_00444c28(local_c);
      break;
    case 5:
      uStack_5c._0_2_ = 0x62be;
      uStack_5c._2_2_ = 0x44;
      FUN_004272e0(param_2);
      uStack_64 = SUB104(in_ST0,0);
      puStack_60 = (undefined1 *)((unkuint10)in_ST0 >> 0x20);
      uStack_5c._0_2_ = (undefined2)((unkuint10)in_ST0 >> 0x40);
      puStack_68 = (undefined1 *)0x4462cd;
      FUN_00444c04(local_c);
      break;
    case 6:
      uStack_5c._0_2_ = 0x62d9;
      uStack_5c._2_2_ = 0x44;
      FUN_00427d04(param_2);
      lVar1 = (longlong)ROUND(in_ST0);
      puStack_60 = (undefined1 *)lVar1;
      uStack_5c._0_2_ = (undefined2)((ulonglong)lVar1 >> 0x20);
      uStack_5c._2_2_ = (undefined2)((ulonglong)lVar1 >> 0x30);
      uStack_64 = 0x4462e8;
      FUN_00444c70(local_c);
      break;
    default:
      goto switchD_004461dc_default;
    }
  }
  else {
    if (uVar5 < 0x10) {
      if (uVar5 == 8) {
        uStack_5c._0_2_ = 0x625c;
        uStack_5c._2_2_ = 0x44;
        FUN_00429418(&local_30,param_2);
        uStack_5c._0_2_ = 0x6267;
        uStack_5c._2_2_ = 0x44;
        FUN_00446994(local_c,local_30);
        goto LAB_004464f5;
      }
      if (uVar5 == 0xb) {
        uStack_5c._0_2_ = 0x630f;
        uStack_5c._2_2_ = 0x44;
        cVar4 = FUN_00426d24(param_2);
        if (cVar4 == '\0') {
          uStack_5c._0_2_ = 0x632c;
          uStack_5c._2_2_ = 0x44;
          FUN_0044699c(local_c,8);
        }
        else {
          uStack_5c._0_2_ = 0x631d;
          uStack_5c._2_2_ = 0x44;
          FUN_0044699c(local_c,9);
        }
        goto LAB_004464f5;
      }
    }
    else {
      if (uVar5 - 0x10 < 3) goto switchD_004461dc_caseD_2;
      if (uVar5 - 0x13 < 2) {
        uStack_5c._0_2_ = 0x6338;
        uStack_5c._2_2_ = 0x44;
        puStack_60 = (undefined1 *)FUN_004261e0(param_2);
        uStack_5c._0_2_ = (undefined2)extraout_EDX_00;
        uStack_5c._2_2_ = (undefined2)((uint)extraout_EDX_00 >> 0x10);
        uStack_64 = 0x44634c;
        local_2c = puStack_60;
        FUN_00444e10(local_c);
        goto LAB_004464f5;
      }
      if (uVar5 == 0x100) {
        uStack_5c._0_2_ = 0x6276;
        uStack_5c._2_2_ = 0x44;
        FUN_00429418(&local_34,param_2);
        uStack_5c._0_2_ = 0x6281;
        uStack_5c._2_2_ = 0x44;
        FUN_004467a8(local_c,local_34);
        goto LAB_004464f5;
      }
    }
switchD_004461dc_default:
    puStack_60 = &LAB_004464d4;
    uStack_64 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_64;
    puStack_68 = (undefined1 *)0x44636a;
    uStack_5c = &stack0xfffffffc;
    cVar4 = FUN_0042c960(*param_2,&local_10);
    if (cVar4 != '\0') {
      puStack_68 = (undefined1 *)0x446376;
      puStack_68 = (undefined1 *)FUN_0040b140(&local_8);
      puStack_6c = (undefined1 *)0x446381;
      FUN_00429a98(&local_38,param_2);
      puVar3 = puStack_68;
      puStack_68 = (undefined1 *)0x44638f;
      cVar4 = FUN_0041ef90(local_38,&DAT_0044653c,puVar3);
      if (cVar4 != '\0') {
        local_18 = (undefined4 *)0x0;
        puStack_68 = (undefined1 *)0x4463be;
        local_14 = FUN_00405a4c(&LAB_00433630,1);
        puStack_6c = &LAB_004464c3;
        uStack_70 = *in_FS_OFFSET;
        *in_FS_OFFSET = &uStack_70;
        puStack_74 = (undefined1 *)0x4463db;
        puStack_68 = &stack0xfffffffc;
        local_18 = (undefined4 *)FUN_00405a4c(&LAB_00433630,1);
        puStack_74 = (undefined1 *)0x400;
        puStack_78 = (undefined1 *)0x4463f2;
        local_1c = FUN_0044077c(&PTR_LAB_00436388,1,local_14);
        puStack_78 = &LAB_00446469;
        uStack_7c = *in_FS_OFFSET;
        *in_FS_OFFSET = &uStack_7c;
        puStack_74 = &stack0xfffffffc;
        (**(code **)(*local_8 + 0x10))(local_8,param_2,local_18);
        local_20 = (**(code **)*local_18)();
        FUN_00405954(*local_10,&local_40);
        FUN_004467a8(local_1c,local_40);
        FUN_00444438(local_1c,&local_20,4);
        FUN_00444438(local_1c,local_18[1],local_20);
        puVar3 = puStack_74;
        *in_FS_OFFSET = uStack_7c;
        puStack_74 = &LAB_00446470;
        puStack_78 = (undefined1 *)0x446468;
        FUN_00405a7c(local_1c,uStack_7c,puVar3);
        return;
      }
    }
    puStack_68 = (undefined1 *)0x44639d;
    FUN_00429418(&local_3c,param_2);
    puStack_68 = (undefined1 *)0x4463a8;
    FUN_004467a8(local_c,local_3c);
    *in_FS_OFFSET = uStack_64;
  }
LAB_004464f5:
  puVar3 = puStack_50;
  *in_FS_OFFSET = uStack_58;
  puStack_50 = &LAB_00446534;
  puStack_54 = (undefined1 *)0x44650f;
  thunk_FUN_00406e80(&local_40,2,puVar3);
  puStack_54 = (undefined1 *)0x446517;
  FUN_0040b140(&local_38);
  puStack_54 = (undefined1 *)0x446524;
  thunk_FUN_00406e80(&local_34,2);
  puStack_54 = (undefined1 *)0x44652c;
  FUN_0040b140(&local_8);
  return;
}
