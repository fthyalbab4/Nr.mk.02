// rea decompile_all
// name: FUN_006d2414
// address: 0x6d2414
// body: available
// range: 0x6d2414-0x6d2458 inclusive
// range: 0x6d25b3-0x6d2b46 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6d244b (push 0x6d2b47 followed by fs-segment stack chaining); handler 0x6d2b47 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006d2414(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  wchar_t *pwVar2;
  char cVar3;
  int iVar4;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined4 *puVar5;
  undefined4 *in_FS_OFFSET;
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
  undefined4 local_40;
  undefined4 local_3c;
  wchar_t *local_38;
  undefined4 local_34;
  wchar_t *local_30;
  undefined4 local_2c;
  undefined1 *local_28;
  undefined1 *local_24;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  local_14 = 0xd;
  do {
    local_c = 0;
    local_14 = local_14 + -1;
  } while (local_14 != 0);
  LOCK();
  UNLOCK();
  local_8 = 0;
  local_24 = (undefined1 *)0x6d243a;
  thunk_FUN_00407660(0);
  puVar5 = (undefined4 *)(param_4 + -4);
  local_28 = &LAB_006d2b47;
  local_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_2c;
  switch(param_1) {
  default:
    local_30 = L"䖋\xe8fc\xf00c\xffff삄⑴橖棿";
    local_24 = &stack0xfffffffc;
    FUN_00407f0c(&local_c,L"Internal Error");
    break;
  case 1:
    local_30 = L"Sprite name \"";
    local_34 = local_8;
    local_38 = L"\" is ";
    local_3c = 0x6d24a6;
    local_24 = &stack0xfffffffc;
    FUN_00408480(&local_c,3);
    break;
  case 2:
    local_30 = L"Sound name \"";
    local_34 = local_8;
    local_38 = L"\" is ";
    local_3c = 0x6d24c5;
    local_24 = &stack0xfffffffc;
    FUN_00408480(&local_c,3);
    break;
  case 3:
    local_30 = L"Background name \"";
    local_34 = local_8;
    local_38 = L"\" is ";
    local_3c = 0x6d24e4;
    local_24 = &stack0xfffffffc;
    FUN_00408480(&local_c,3);
    break;
  case 4:
    local_30 = L"Path name \"";
    local_34 = local_8;
    local_38 = L"\" is ";
    local_3c = 0x6d2503;
    local_24 = &stack0xfffffffc;
    FUN_00408480(&local_c,3);
    break;
  case 5:
    local_30 = L"Script name \"";
    local_34 = local_8;
    local_38 = L"\" is ";
    local_3c = 0x6d2522;
    local_24 = &stack0xfffffffc;
    FUN_00408480(&local_c,3);
    break;
  case 6:
    local_30 = L"Font name \"";
    local_34 = local_8;
    local_38 = L"\" is ";
    local_3c = 0x6d2541;
    local_24 = &stack0xfffffffc;
    FUN_00408480(&local_c,3);
    break;
  case 7:
    local_30 = L"Time line name \"";
    local_34 = local_8;
    local_38 = L"\" is ";
    local_3c = 0x6d255d;
    local_24 = &stack0xfffffffc;
    FUN_00408480(&local_c,3);
    break;
  case 8:
    local_30 = L"Object name \"";
    local_34 = local_8;
    local_38 = L"\" is ";
    local_3c = 0x6d2579;
    local_24 = &stack0xfffffffc;
    FUN_00408480(&local_c,3);
    break;
  case 9:
    local_30 = L"Room name \"";
    local_34 = local_8;
    local_38 = L"\" is ";
    local_3c = 0x6d2595;
    local_24 = &stack0xfffffffc;
    FUN_00408480(&local_c,3);
    break;
  case 10:
    local_30 = L"Trigger name \"";
    local_34 = local_8;
    local_38 = L"\" is ";
    local_3c = 0x6d25b1;
    local_24 = &stack0xfffffffc;
    FUN_00408480(&local_c,3);
  }
  local_3c = 0x6d25c8;
  cVar3 = FUN_006d15d4(local_8);
  if (cVar3 != '\0') {
    local_40 = 0xffffffff;
    local_44 = 0x800000;
    local_48 = 0x6d25e4;
    local_3c = param_2;
    FUN_0040839c(&local_10,local_c,L"invalid.");
    local_48 = 0x6d25f0;
    FUN_006d1af4(*puVar5,local_10,param_1);
  }
  if (param_1 == 1) {
    local_3c = 0x6d25fd;
    iVar4 = FUN_006f5a0c(local_8);
    if (iVar4 != *(int *)(param_4 + -8)) {
      local_40 = 0xffffffff;
      local_44 = 0x80;
      local_48 = 0x6d261d;
      local_3c = param_2;
      FUN_0040839c(&local_14,local_c,L"used twice.");
      local_48 = 0x6d2629;
      FUN_006d1af4(*puVar5,local_14,1);
    }
  }
  if (param_1 == 2) {
    local_3c = 0x6d2636;
    iVar4 = FUN_006523ac(local_8);
    if (iVar4 != *(int *)(param_4 + -8)) {
      local_40 = 0xffffffff;
      local_44 = 0x80;
      local_48 = 0x6d2656;
      local_3c = param_2;
      FUN_0040839c(&stack0xffffffe8,local_c,L"used twice.");
      local_48 = 0x6d2662;
      FUN_006d1af4(*puVar5,unaff_EBX,2);
    }
  }
  if (param_1 == 3) {
    local_3c = 0x6d266f;
    iVar4 = FUN_0064df24(local_8);
    if (iVar4 != *(int *)(param_4 + -8)) {
      local_40 = 0xffffffff;
      local_44 = 0x80;
      local_48 = 0x6d268f;
      local_3c = param_2;
      FUN_0040839c(&stack0xffffffe4,local_c,L"used twice.");
      local_48 = 0x6d269b;
      FUN_006d1af4(*puVar5,unaff_ESI,3);
    }
  }
  if (param_1 == 4) {
    local_3c = 0x6d26a8;
    iVar4 = FUN_0072292c(local_8);
    if (iVar4 != *(int *)(param_4 + -8)) {
      local_40 = 0xffffffff;
      local_44 = 0x80;
      local_48 = 0x6d26c8;
      local_3c = param_2;
      FUN_0040839c(&stack0xffffffe0,local_c,L"used twice.");
      local_48 = 0x6d26d4;
      FUN_006d1af4(*puVar5,unaff_EDI,4);
    }
  }
  if (param_1 == 5) {
    local_3c = 0x6d26e1;
    iVar4 = FUN_00655c2c(local_8);
    if (iVar4 != *(int *)(param_4 + -8)) {
      local_40 = 0xffffffff;
      local_44 = 0x80;
      local_48 = 0x6d2701;
      local_3c = param_2;
      FUN_0040839c(&local_24,local_c,L"used twice.");
      local_48 = 0x6d270d;
      FUN_006d1af4(*puVar5,local_24,5);
    }
  }
  if (param_1 == 6) {
    local_3c = 0x6d271a;
    iVar4 = FUN_006fcd44(local_8);
    if (iVar4 != *(int *)(param_4 + -8)) {
      local_40 = 0xffffffff;
      local_44 = 0x80;
      local_48 = 0x6d273a;
      local_3c = param_2;
      FUN_0040839c(&local_28,local_c,L"used twice.");
      local_48 = 0x6d2746;
      FUN_006d1af4(*puVar5,local_28,6);
    }
  }
  if (param_1 == 7) {
    local_3c = 0x6d2753;
    iVar4 = FUN_006fa6f4(local_8);
    if (iVar4 != *(int *)(param_4 + -8)) {
      local_40 = 0xffffffff;
      local_44 = 0x80;
      local_48 = 0x6d2773;
      local_3c = param_2;
      FUN_0040839c(&local_2c,local_c,L"used twice.");
      local_48 = 0x6d277f;
      FUN_006d1af4(*puVar5,local_2c,7);
    }
  }
  if (param_1 == 8) {
    local_3c = 0x6d278c;
    iVar4 = FUN_0062cc14(local_8);
    if (iVar4 != *(int *)(param_4 + -8)) {
      local_40 = 0xffffffff;
      local_44 = 0x80;
      local_48 = 0x6d27ac;
      local_3c = param_2;
      FUN_0040839c(&local_30,local_c,L"used twice.");
      local_48 = 0x6d27b8;
      FUN_006d1af4(*puVar5,local_30,8);
    }
  }
  if (param_1 == 9) {
    local_3c = 0x6d27c5;
    iVar4 = FUN_00693010(local_8);
    if (iVar4 != *(int *)(param_4 + -8)) {
      local_40 = 0xffffffff;
      local_44 = 0x80;
      local_48 = 0x6d27e5;
      local_3c = param_2;
      FUN_0040839c(&local_34,local_c,L"used twice.");
      local_48 = 0x6d27f1;
      FUN_006d1af4(*puVar5,local_34,9);
    }
  }
  if (param_1 == 10) {
    local_3c = 0x6d27fe;
    iVar4 = FUN_006bcde0(local_8);
    if (iVar4 != *(int *)(param_4 + -8)) {
      local_40 = 0xffffffff;
      local_44 = 0x80;
      local_48 = 0x6d281e;
      local_3c = param_2;
      FUN_0040839c(&local_38,local_c,L"used twice.");
      local_48 = 0x6d282a;
      FUN_006d1af4(*puVar5,local_38,10);
    }
  }
  if (param_1 != 1) {
    local_3c = 0x6d2837;
    iVar4 = FUN_006f5a0c(local_8);
    if (-1 < iVar4) {
      local_40 = 0xffffffff;
      local_44 = 0x80;
      local_48 = 0x6d2853;
      local_3c = param_2;
      FUN_0040839c(&local_3c,local_c,L"equal to a sprite name.");
      local_48 = 0x6d285f;
      FUN_006d1af4(*puVar5,local_3c,param_1);
    }
  }
  if (param_1 != 2) {
    local_3c = 0x6d286c;
    iVar4 = FUN_006523ac(local_8);
    if (-1 < iVar4) {
      local_40 = 0xffffffff;
      local_44 = 0x80;
      local_48 = 0x6d2888;
      local_3c = param_2;
      FUN_0040839c(&local_40,local_c,L"equal to a sound name.");
      local_48 = 0x6d2894;
      FUN_006d1af4(*puVar5,local_40,param_1);
    }
  }
  if (param_1 != 3) {
    local_3c = 0x6d28a1;
    iVar4 = FUN_0064df24(local_8);
    if (-1 < iVar4) {
      local_40 = 0xffffffff;
      local_44 = 0x80;
      local_48 = 0x6d28bd;
      local_3c = param_2;
      FUN_0040839c(&local_44,local_c,L"equal to a background name.");
      local_48 = 0x6d28c9;
      FUN_006d1af4(*puVar5,local_44,param_1);
    }
  }
  if (param_1 != 4) {
    local_3c = 0x6d28d6;
    iVar4 = FUN_0072292c(local_8);
    if (-1 < iVar4) {
      local_40 = 0xffffffff;
      local_44 = 0x80;
      local_48 = 0x6d28f2;
      local_3c = param_2;
      FUN_0040839c(&local_48,local_c,L"equal to a path name.");
      uVar1 = local_48;
      local_48 = 0x6d28fe;
      FUN_006d1af4(*puVar5,uVar1,param_1);
    }
  }
  if (param_1 != 5) {
    local_3c = 0x6d290b;
    iVar4 = FUN_00655c2c(local_8);
    if (-1 < iVar4) {
      local_40 = 0xffffffff;
      local_44 = 0x80;
      local_48 = 0x6d2927;
      local_3c = param_2;
      FUN_0040839c(&local_4c,local_c,L"equal to a script name.");
      local_48 = 0x6d2933;
      FUN_006d1af4(*puVar5,local_4c,param_1);
    }
  }
  if (param_1 != 6) {
    local_3c = 0x6d2940;
    iVar4 = FUN_006fcd44(local_8);
    if (-1 < iVar4) {
      local_40 = 0xffffffff;
      local_44 = 0x80;
      local_48 = 0x6d295c;
      local_3c = param_2;
      FUN_0040839c(&local_50,local_c,L"equal to a font name.");
      local_48 = 0x6d2968;
      FUN_006d1af4(*puVar5,local_50,param_1);
    }
  }
  if (param_1 != 7) {
    local_3c = 0x6d2975;
    iVar4 = FUN_006fa6f4(local_8);
    if (-1 < iVar4) {
      local_40 = 0xffffffff;
      local_44 = 0x80;
      local_48 = 0x6d2991;
      local_3c = param_2;
      FUN_0040839c(&local_54,local_c,L"equal to a time line name.");
      local_48 = 0x6d299d;
      FUN_006d1af4(*puVar5,local_54,param_1);
    }
  }
  if (param_1 != 8) {
    local_3c = 0x6d29aa;
    iVar4 = FUN_0062cc14(local_8);
    if (-1 < iVar4) {
      local_40 = 0xffffffff;
      local_44 = 0x80;
      local_48 = 0x6d29c6;
      local_3c = param_2;
      FUN_0040839c(&local_58,local_c,L"equal to an object name.");
      local_48 = 0x6d29d2;
      FUN_006d1af4(*puVar5,local_58,param_1);
    }
  }
  if (param_1 != 9) {
    local_3c = 0x6d29df;
    iVar4 = FUN_00693010(local_8);
    if (-1 < iVar4) {
      local_40 = 0xffffffff;
      local_44 = 0x80;
      local_48 = 0x6d29fb;
      local_3c = param_2;
      FUN_0040839c(&local_5c,local_c,L"equal to a room name.");
      local_48 = 0x6d2a07;
      FUN_006d1af4(*puVar5,local_5c,param_1);
    }
  }
  if (param_1 != 10) {
    local_3c = 0x6d2a14;
    iVar4 = FUN_006bcde0(local_8);
    if (-1 < iVar4) {
      local_40 = 0xffffffff;
      local_44 = 0x80;
      local_48 = 0x6d2a30;
      local_3c = param_2;
      FUN_0040839c(&local_60,local_c,L"equal to a trigger name.");
      local_48 = 0x6d2a3c;
      FUN_006d1af4(*puVar5,local_60,param_1);
    }
  }
  local_3c = 0x6d2a44;
  cVar3 = FUN_0069340c(local_8);
  if (cVar3 != '\0') {
    local_40 = 0xffffffff;
    local_44 = 0x8000;
    local_48 = 0x6d2a60;
    local_3c = param_2;
    FUN_0040839c(&local_64,local_c,L"equal to a local variable name.");
    local_48 = 0x6d2a6c;
    FUN_006d1af4(*puVar5,local_64,param_1);
  }
  local_3c = 0x6d2a74;
  cVar3 = FUN_0069347c(local_8);
  if (cVar3 != '\0') {
    local_40 = 0xffffffff;
    local_44 = 0x8000;
    local_48 = 0x6d2a90;
    local_3c = param_2;
    FUN_0040839c(&local_68,local_c,L"equal to a global variable name.");
    local_48 = 0x6d2a9c;
    FUN_006d1af4(*puVar5,local_68,param_1);
  }
  local_3c = 0x6d2aa4;
  cVar3 = FUN_00697070(local_8);
  if (cVar3 != '\0') {
    local_40 = 0xffffffff;
    local_44 = 0x8000;
    local_48 = 0x6d2ac0;
    local_3c = param_2;
    FUN_0040839c(&local_6c,local_c,L"equal to a function name.");
    local_48 = 0x6d2acc;
    FUN_006d1af4(*puVar5,local_6c,param_1);
  }
  local_3c = 0x6d2ad4;
  cVar3 = FUN_00696df0(local_8);
  if (cVar3 != '\0') {
    local_40 = 0xffffffff;
    local_44 = 0x8000;
    local_48 = 0x6d2af0;
    local_3c = param_2;
    FUN_0040839c(&local_70,local_c,L"equal to a constant name.");
    local_48 = 0x6d2afc;
    FUN_006d1af4(*puVar5,local_70,param_1);
  }
  local_3c = 0x6d2b04;
  cVar3 = FUN_006d105c(local_8);
  if (cVar3 != '\0') {
    local_40 = 0xffffffff;
    local_44 = 0x8000;
    local_48 = 0x6d2b20;
    local_3c = param_2;
    FUN_0040839c(&local_74,local_c,L"equal to a keyword.");
    local_48 = 0x6d2b2c;
    FUN_006d1af4(*puVar5,local_74,param_1);
  }
  pwVar2 = local_30;
  *in_FS_OFFSET = local_38;
  local_30 = L"幟譛工Ã";
  local_34 = 0x6d2b46;
  thunk_FUN_00406e80(&local_74,0x1c,pwVar2);
  return;
}
