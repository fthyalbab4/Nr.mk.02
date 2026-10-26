// rea decompile_all
// name: FUN_0055ec00
// address: 0x55ec00
// body: available
// range: 0x55ec00-0x55f01c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x55ec61 (push 0x55f01d followed by fs-segment stack chaining); handler 0x55f01d lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0055ec00(int param_1,char param_2,char param_3,int *param_4,char param_5,char param_6)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int *in_FS_OFFSET;
  undefined4 *puVar5;
  int *piVar6;
  int iStack_10c;
  undefined1 *puStack_108;
  undefined1 *puStack_104;
  undefined4 local_f4;
  int local_f0;
  undefined4 local_ec;
  int local_e8;
  undefined1 local_e4;
  int local_e0;
  undefined1 local_dc;
  undefined4 local_d8;
  undefined1 local_d4;
  int local_d0;
  undefined1 local_cc;
  int local_c8;
  undefined1 local_c4;
  int local_c0;
  undefined1 local_bc;
  undefined4 local_b8;
  undefined1 local_b4;
  int local_b0;
  undefined1 local_ac;
  int local_a8;
  undefined1 local_a4;
  int local_a0;
  undefined1 local_9c;
  int local_98;
  undefined1 local_94;
  undefined4 local_90;
  undefined1 local_8c;
  undefined4 local_88;
  undefined1 local_84;
  undefined4 local_80;
  undefined1 local_7c;
  int local_78;
  undefined1 local_74;
  undefined4 local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  char local_5a;
  char local_59;
  undefined1 local_58 [16];
  int local_48;
  int local_34;
  int local_30;
  undefined4 local_2c;
  int local_28;
  int local_24;
  int local_20;
  undefined4 local_1c;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;

  local_ec = 0;
  local_f0 = 0;
  local_f4 = 0;
  local_70 = 0;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  puStack_104 = (undefined1 *)0x55ec48;
  local_5a = param_3;
  local_59 = param_2;
  FUN_00408ff8(&local_34,&DAT_0055915c);
  puStack_104 = (undefined1 *)0x55ec56;
  FUN_00408ff8(local_58,&DAT_0055915c);
  puStack_108 = &LAB_0055f01d;
  iStack_10c = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_10c;
  puStack_104 = &stack0xfffffffc;
  FUN_004081e8(&local_8,0);
  uVar3 = FUN_004090d0(&local_34,&DAT_0055915c);
  cVar2 = FUN_0055eb58(param_1,uVar3);
  if (cVar2 == '\0') {
    local_74 = 5;
    piVar6 = param_4;
    local_78 = param_1;
    FUN_00417c88(L"[%p]",&local_78,0,param_4);
    param_5 = '\x01';
    goto LAB_0055ef34;
  }
  FUN_004081e8(&local_10,local_2c);
  FUN_00408678(&local_70,local_30,&DAT_0055f03c);
  piVar6 = (int *)0x55ecb3;
  iVar4 = FUN_00408d44(local_70,local_10);
  if (iVar4 == 1) {
    local_64 = local_30;
    if (local_30 != 0) {
      local_64 = *(int *)(local_30 + -4);
    }
    local_68 = local_10;
    if ((local_10 != 0) && (*(short *)(local_10 + -10) != 2)) {
      local_68 = FUN_00407488(&local_10,local_10);
    }
    if (local_68 != 0) {
      local_68 = *(int *)(local_68 + -4);
    }
    local_6c = local_30;
    if (local_30 != 0) {
      local_6c = *(int *)(local_30 + -4);
    }
    piVar6 = &local_10;
    FUN_00408984(local_10,local_64 + 2,(local_68 - local_6c) + -1);
  }
  if (local_24 < 1) {
    if (local_5a != '\0') {
      local_78 = local_28;
      local_74 = 0;
      FUN_00417c88(L" + $%x",&local_78,0,&local_8);
    }
    if (local_30 == 0) {
      local_e4 = 5;
      local_e0 = local_10;
      local_dc = 0x11;
      local_d8 = local_8;
      local_d4 = 0x11;
      local_e8 = param_1;
      FUN_00417c88(L"[%p] %s%s",&local_e8,2,param_4);
    }
    else {
      local_cc = 5;
      local_c8 = local_30;
      local_c4 = 0x11;
      local_c0 = local_10;
      local_bc = 0x11;
      local_b8 = local_8;
      local_b4 = 0x11;
      local_d0 = param_1;
      FUN_00417c88(L"[%p] %s.%s%s",&local_d0,3,param_4);
    }
    goto LAB_0055ef34;
  }
  if (param_6 == '\0') {
LAB_0055ed85:
    FUN_004081e8(&local_c,0);
  }
  else {
    uVar3 = FUN_004090d0(local_58,&DAT_0055915c);
    cVar2 = FUN_0055eb58(local_34 - local_28,uVar3);
    if ((cVar2 == '\0') || (local_48 < 1)) goto LAB_0055ed85;
    local_78 = local_24 - local_48;
    local_74 = 0;
    FUN_00417c88(L" + %d",&local_78,0,&local_c);
  }
  if (local_5a != '\0') {
    if (local_20 < 0) {
      local_78 = -local_20;
      local_74 = 0;
      FUN_00417c88(L" - $%x",&local_78,0,&local_8);
    }
    else {
      local_78 = local_20;
      local_74 = 0;
      FUN_00417c88(L" + $%x",&local_78,0,&local_8);
    }
  }
  local_ac = 5;
  local_a8 = local_30;
  local_a4 = 0x11;
  local_a0 = local_10;
  local_9c = 0x11;
  local_98 = local_24;
  local_94 = 0;
  local_90 = local_1c;
  local_8c = 0x11;
  local_88 = local_c;
  local_84 = 0x11;
  local_80 = local_8;
  local_7c = 0x11;
  local_b0 = param_1;
  FUN_00417c88(L"[%p] %s.%s (Line %u, \"%s\"%s)%s",&local_b0,6,param_4);
LAB_0055ef34:
  if (local_59 != '\0' || param_5 != '\0') {
    local_60 = FUN_0053f67c(param_1);
    if (param_5 != '\0') {
      local_78 = (param_1 - local_60) + -0x1000;
      local_74 = 5;
      FUN_00417c88(L"(%p) ",&local_78,0,&local_8);
      FUN_00408678(param_4,local_8,*param_4);
    }
    if (local_59 != '\0') {
      puVar5 = &local_ec;
      FUN_00538a38(local_60,&local_f4);
      FUN_004172fc(local_f4,&local_f0);
      local_78 = local_f0;
      local_74 = 0x11;
      FUN_00417c88(L"{%-12s}",&local_78,0,puVar5);
      FUN_00408ac8(local_ec,param_4,0xb);
    }
  }
  puVar1 = puStack_108;
  *in_FS_OFFSET = (int)piVar6;
  puStack_108 = &LAB_0055f024;
  iStack_10c = 0x55eff4;
  thunk_FUN_004072fc(&local_f4,3,puVar1);
  iStack_10c = 0x55effc;
  thunk_FUN_004072d8(&local_70);
  iStack_10c = 0x55f00f;
  FUN_00409120(local_58,&DAT_0055915c,2);
  iStack_10c = 0x55f01c;
  thunk_FUN_004072fc(&local_10,3);
  return;
}
