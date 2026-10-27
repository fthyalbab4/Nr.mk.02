// rea decompile_all
// name: FUN_0041dfbc
// address: 0x41dfbc
// body: available
// range: 0x41dfbc-0x41e281 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x41dfdd (push 0x41e282 followed by fs-segment stack chaining); handler 0x41e282 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0041dfbc(LCID param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  undefined2 uVar2;
  BOOL BVar3;
  LCID LVar4;
  int iVar5;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  undefined2 extraout_var_03;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined4 *in_FS_OFFSET;
  undefined4 local_44;
  wchar_t *local_40;
  undefined1 *local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined **local_30;
  undefined4 uVar6;
  undefined1 *puVar7;
  undefined4 local_24;
  undefined1 *local_20;
  undefined1 *local_1c;
  undefined4 local_c;
  undefined4 local_8;

  local_1c = &stack0xfffffffc;
  iVar5 = 8;
  do {
    local_8 = 0;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  local_20 = &LAB_0041e282;
  local_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_24;
  local_30 = (undefined **)0x41dfe8;
  BVar3 = IsValidLocale(param_1,1);
  LVar4 = param_1;
  if (BVar3 == 0) {
    LVar4 = GetThreadLocale();
  }
  FUN_0041b4a0(param_1,param_2);
  FUN_0041b284(LVar4,0x14,0);
  FUN_00408194(param_2 + 0x10,unaff_ESI);
  FUN_0041b284(LVar4,0x1b,&DAT_0041e29c);
  uVar1 = FUN_0041663c(unaff_EDI,0);
  *param_2 = uVar1;
  FUN_0041b284(LVar4,0x1c,&DAT_0041e29c);
  uVar1 = FUN_0041663c(local_1c,0);
  param_2[1] = uVar1;
  uVar2 = FUN_0041b2d0(LVar4,0xf,CONCAT22(extraout_var,0x2c));
  *(undefined2 *)(param_2 + 2) = uVar2;
  uVar2 = FUN_0041b2d0(LVar4,0xe,CONCAT22(extraout_var_00,0x2e));
  *(undefined2 *)(param_2 + 4) = uVar2;
  FUN_0041b284(LVar4,0x19,&DAT_0041e29c);
  uVar1 = FUN_0041663c(local_20,0);
  param_2[6] = uVar1;
  uVar2 = FUN_0041b2d0(LVar4,0x1d,CONCAT22(extraout_var_01,0x2f));
  *(undefined2 *)(param_2 + 8) = uVar2;
  puVar7 = &stack0xffffffd8;
  FUN_0041b284(LVar4,0x1f,L"m/d/yy");
  FUN_0041b718(puVar7,&local_24);
  FUN_00408194(param_2 + 0x14,local_24);
  uVar6 = 0x41e0fe;
  FUN_0041b284(LVar4,0x20,L"mmmm d, yyyy");
  FUN_0041b718(local_30,&stack0xffffffd4);
  FUN_00408194(param_2 + 0x18,uVar6);
  uVar2 = FUN_0041b2d0(LVar4,0x1e,CONCAT22(extraout_var_02,0x3a));
  *(undefined2 *)(param_2 + 10) = uVar2;
  FUN_0041b284(LVar4,0x28,&PTR_DAT_0041e2f0);
  FUN_00408194(param_2 + 0x1c,local_34);
  FUN_0041b284(LVar4,0x29,&PTR_DAT_0041e304);
  FUN_00408194(param_2 + 0x20,local_38);
  FUN_004081e8(&local_c,0);
  FUN_004081e8(&stack0xfffffff0,0);
  FUN_0041b284(LVar4,0x25,&DAT_0041e29c);
  iVar5 = FUN_0041663c(local_3c,0);
  if (iVar5 == 0) {
    FUN_004081e8(&local_8,&DAT_0041e318);
  }
  else {
    FUN_004081e8(&local_8,&PTR_DAT_0041e328);
  }
  FUN_0041b284(LVar4,0x23,&DAT_0041e29c);
  iVar5 = FUN_0041663c(local_40,0);
  if (iVar5 == 0) {
    FUN_0041b284(LVar4,0x1005,&DAT_0041e29c);
    iVar5 = FUN_0041663c(local_44,0);
    if (iVar5 == 0) {
      FUN_004081e8(&stack0xfffffff0,L" AMPM");
    }
    else {
      FUN_004081e8(&local_c,L"AMPM ");
    }
  }
  local_30 = &PTR_DAT_0041e36c;
  local_38 = 0x41e238;
  FUN_0040875c(param_2 + 0x24,4);
  local_38 = local_c;
  local_3c = (undefined1 *)local_8;
  local_40 = L":mm:ss";
  local_44 = unaff_EBX;
  FUN_0040875c(param_2 + 0x28,4);
  uVar2 = FUN_0041b2d0(LVar4,0xc,CONCAT22(extraout_var_03,0x2c));
  puVar7 = local_3c;
  *(undefined2 *)(param_2 + 0xc) = uVar2;
  *in_FS_OFFSET = local_44;
  local_3c = &LAB_0041e289;
  local_40 = L"\xe9c3蝍\xfffe\xebeb幟譛工냃Ȅ＀\xffffǿ";
  thunk_FUN_004072fc(&local_44,0x10,puVar7);
  return;
}
