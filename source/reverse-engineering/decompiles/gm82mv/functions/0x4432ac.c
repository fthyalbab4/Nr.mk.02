// rea decompile_all
// name: FUN_004432ac
// address: 0x4432ac
// body: available
// range: 0x4432ac-0x443322 inclusive
// range: 0x44333f-0x4435a8 inclusive
// range: 0x44360a-0x443613 inclusive
// range: 0x443635-0x44366c inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4432d9 (push 0x44366d followed by fs-segment stack chaining); handler 0x44366d lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x44349c (push 0x443614 followed by fs-segment stack chaining); handler 0x443614 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x44350c (push 0x443603 followed by fs-segment stack chaining); handler 0x443603 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x443540 (push 0x4435a9 followed by fs-segment stack chaining); handler 0x4435a9 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004432ac(undefined4 param_1,ushort *param_2)

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
  puStack_54 = &LAB_0044366d;
  uStack_58 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_58;
  uStack_5c._0_2_ = 0x32e3;
  uStack_5c._2_2_ = 0x44;
  local_c = param_1;
  cVar4 = FUN_0042afa4(param_2);
  if (cVar4 != '\0') {
    uStack_5c._0_2_ = 0x32f9;
    uStack_5c._2_2_ = 0x44;
    FUN_0041be80(&LAB_0042d6ac,1,PTR_LAB_00688fb8);
    uStack_5c._0_2_ = 0x32fe;
    uStack_5c._2_2_ = 0x44;
    FUN_00406ab4();
  }
  uVar5 = (uint)(*param_2 & 0xfff);
  if (uVar5 < 8) {
    if (uVar5 == 7) {
      uStack_5c._0_2_ = 0x3434;
      uStack_5c._2_2_ = 0x44;
      FUN_00427158(param_2);
      dVar2 = (double)in_ST0;
      puStack_60 = SUB84(dVar2,0);
      uStack_5c._0_2_ = (undefined2)((ulonglong)dVar2 >> 0x20);
      uStack_5c._2_2_ = (undefined2)((ulonglong)dVar2 >> 0x30);
      uStack_64 = 0x443443;
      FUN_00441dd4(local_c);
      goto LAB_00443635;
    }
    switch(uVar5) {
    case 0:
      uStack_5c._0_2_ = 0x337e;
      uStack_5c._2_2_ = 0x44;
      FUN_00443adc(local_c,0xd);
      break;
    case 1:
      uStack_5c._0_2_ = 0x338d;
      uStack_5c._2_2_ = 0x44;
      FUN_00443adc(local_c,0);
      break;
    case 2:
    case 3:
switchD_0044331c_caseD_2:
      uStack_5c._0_2_ = 0x33cd;
      uStack_5c._2_2_ = 0x44;
      puStack_60 = (undefined1 *)FUN_00426058(param_2);
      uStack_5c._0_2_ = (undefined2)extraout_EDX;
      uStack_5c._2_2_ = (undefined2)((uint)extraout_EDX >> 0x10);
      uStack_64 = 0x4433d7;
      FUN_00441f50(local_c);
      break;
    case 4:
      uStack_5c._0_2_ = 0x33e3;
      uStack_5c._2_2_ = 0x44;
      FUN_00427158(param_2);
      uStack_5c = (undefined1 *)(float)in_ST0;
      puStack_60 = (undefined1 *)0x4433f2;
      FUN_00441d68(local_c);
      break;
    case 5:
      uStack_5c._0_2_ = 0x33fe;
      uStack_5c._2_2_ = 0x44;
      FUN_00427158(param_2);
      uStack_64 = SUB104(in_ST0,0);
      puStack_60 = (undefined1 *)((unkuint10)in_ST0 >> 0x20);
      uStack_5c._0_2_ = (undefined2)((unkuint10)in_ST0 >> 0x40);
      puStack_68 = (undefined1 *)0x44340d;
      FUN_00441d44(local_c);
      break;
    case 6:
      uStack_5c._0_2_ = 0x3419;
      uStack_5c._2_2_ = 0x44;
      FUN_00427b7c(param_2);
      lVar1 = (longlong)ROUND(in_ST0);
      puStack_60 = (undefined1 *)lVar1;
      uStack_5c._0_2_ = (undefined2)((ulonglong)lVar1 >> 0x20);
      uStack_5c._2_2_ = (undefined2)((ulonglong)lVar1 >> 0x30);
      uStack_64 = 0x443428;
      FUN_00441db0(local_c);
      break;
    default:
      goto switchD_0044331c_default;
    }
  }
  else {
    if (uVar5 < 0x10) {
      if (uVar5 == 8) {
        uStack_5c._0_2_ = 0x339c;
        uStack_5c._2_2_ = 0x44;
        FUN_00429290(&local_30,param_2);
        uStack_5c._0_2_ = 0x33a7;
        uStack_5c._2_2_ = 0x44;
        FUN_00443ad4(local_c,local_30);
        goto LAB_00443635;
      }
      if (uVar5 == 0xb) {
        uStack_5c._0_2_ = 0x344f;
        uStack_5c._2_2_ = 0x44;
        cVar4 = FUN_00426b9c(param_2);
        if (cVar4 == '\0') {
          uStack_5c._0_2_ = 0x346c;
          uStack_5c._2_2_ = 0x44;
          FUN_00443adc(local_c,8);
        }
        else {
          uStack_5c._0_2_ = 0x345d;
          uStack_5c._2_2_ = 0x44;
          FUN_00443adc(local_c,9);
        }
        goto LAB_00443635;
      }
    }
    else {
      if (uVar5 - 0x10 < 3) goto switchD_0044331c_caseD_2;
      if (uVar5 - 0x13 < 2) {
        uStack_5c._0_2_ = 0x3478;
        uStack_5c._2_2_ = 0x44;
        puStack_60 = (undefined1 *)FUN_00426058(param_2);
        uStack_5c._0_2_ = (undefined2)extraout_EDX_00;
        uStack_5c._2_2_ = (undefined2)((uint)extraout_EDX_00 >> 0x10);
        uStack_64 = 0x44348c;
        local_2c = puStack_60;
        FUN_00441f50(local_c);
        goto LAB_00443635;
      }
      if (uVar5 == 0x100) {
        uStack_5c._0_2_ = 0x33b6;
        uStack_5c._2_2_ = 0x44;
        FUN_00429290(&local_34,param_2);
        uStack_5c._0_2_ = 0x33c1;
        uStack_5c._2_2_ = 0x44;
        FUN_004438e8(local_c,local_34);
        goto LAB_00443635;
      }
    }
switchD_0044331c_default:
    puStack_60 = &LAB_00443614;
    uStack_64 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_64;
    puStack_68 = (undefined1 *)0x4434aa;
    uStack_5c = &stack0xfffffffc;
    cVar4 = FUN_0042b560(*param_2,&local_10);
    if (cVar4 != '\0') {
      puStack_68 = (undefined1 *)0x4434b6;
      puStack_68 = (undefined1 *)FUN_0040b268(&local_8);
      puStack_6c = (undefined1 *)0x4434c1;
      FUN_00429910(&local_38,param_2);
      puVar3 = puStack_68;
      puStack_68 = (undefined1 *)0x4434cf;
      cVar4 = FUN_0041f1bc(local_38,&DAT_0044367c,puVar3);
      if (cVar4 != '\0') {
        local_18 = (undefined4 *)0x0;
        puStack_68 = (undefined1 *)0x4434fe;
        local_14 = FUN_00405fac(&LAB_004319cc,1);
        puStack_6c = &LAB_00443603;
        uStack_70 = *in_FS_OFFSET;
        *in_FS_OFFSET = &uStack_70;
        puStack_74 = (undefined1 *)0x44351b;
        puStack_68 = &stack0xfffffffc;
        local_18 = (undefined4 *)FUN_00405fac(&LAB_004319cc,1);
        puStack_74 = (undefined1 *)0x400;
        puStack_78 = (undefined1 *)0x443532;
        local_1c = FUN_0043d8bc(&PTR_LAB_00434234,1,local_14);
        puStack_78 = &LAB_004435a9;
        uStack_7c = *in_FS_OFFSET;
        *in_FS_OFFSET = &uStack_7c;
        puStack_74 = &stack0xfffffffc;
        (**(code **)(*local_8 + 0x10))(local_8,param_2,local_18);
        local_20 = (**(code **)*local_18)();
        FUN_00405eb4(*local_10,&local_40);
        FUN_004438e8(local_1c,local_40);
        FUN_00441578(local_1c,&local_20,4);
        FUN_00441578(local_1c,local_18[1],local_20);
        puVar3 = puStack_74;
        *in_FS_OFFSET = uStack_7c;
        puStack_74 = &LAB_004435b0;
        puStack_78 = (undefined1 *)0x4435a8;
        FUN_00405fdc(local_1c,uStack_7c,puVar3);
        return;
      }
    }
    puStack_68 = (undefined1 *)0x4434dd;
    FUN_00429290(&local_3c,param_2);
    puStack_68 = (undefined1 *)0x4434e8;
    FUN_004438e8(local_c,local_3c);
    *in_FS_OFFSET = uStack_64;
  }
LAB_00443635:
  puVar3 = puStack_50;
  *in_FS_OFFSET = uStack_58;
  puStack_50 = &LAB_00443674;
  puStack_54 = (undefined1 *)0x44364f;
  thunk_FUN_004072fc(&local_40,2,puVar3);
  puStack_54 = (undefined1 *)0x443657;
  FUN_0040b268(&local_38);
  puStack_54 = (undefined1 *)0x443664;
  thunk_FUN_004072fc(&local_34,2);
  puStack_54 = (undefined1 *)0x44366c;
  FUN_0040b268(&local_8);
  return;
}
