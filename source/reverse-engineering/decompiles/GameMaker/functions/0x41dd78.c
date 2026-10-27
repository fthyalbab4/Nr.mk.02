// rea decompile_all
// name: FUN_0041dd78
// address: 0x41dd78
// body: available
// range: 0x41dd78-0x41e055 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x41dd93 (push 0x41e056 followed by fs-segment stack chaining); handler 0x41e056 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0041dd78(void)

{
  undefined1 *puVar1;
  wchar_t **ppwVar2;
  LCID LVar3;
  int iVar4;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  undefined2 extraout_var_03;
  wchar_t *unaff_EBX;
  undefined4 *in_FS_OFFSET;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  wchar_t *local_38;
  undefined1 *local_34;
  undefined4 *local_30;
  undefined4 local_2c;
  undefined *local_28;
  undefined1 *local_24;
  wchar_t **local_20;
  undefined4 local_1c;
  undefined1 *local_18;
  undefined1 *local_14;
  undefined4 *local_c;
  undefined1 *local_8;

  local_14 = &stack0xfffffffc;
  iVar4 = 8;
  do {
    local_8 = (undefined1 *)0x0;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  local_18 = &LAB_0041e056;
  local_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_1c;
  local_20 = (wchar_t **)0x41dd9b;
  FUN_0041dcc0();
  local_20 = (wchar_t **)0x41dda0;
  FUN_0041b5f8();
  if (DAT_00785d58 != '\0') {
    local_20 = (wchar_t **)0x41ddae;
    FUN_0041b7d0();
  }
  local_20 = (wchar_t **)0x41ddb3;
  LVar3 = GetThreadLocale();
  local_20 = (wchar_t **)&local_14;
  local_24 = (undefined1 *)0x41ddc7;
  FUN_0041b540(LVar3,0x14,0);
  local_20 = (wchar_t **)0x41ddd4;
  FUN_00407eb8(&DAT_00785c88,local_14);
  local_20 = (wchar_t **)&local_18;
  local_24 = (undefined1 *)0x41dde9;
  FUN_0041b540(LVar3,0x1b,&DAT_0041e070);
  local_20 = (wchar_t **)0x41ddf3;
  DAT_00785c8c = FUN_0041693c(local_18,0);
  local_20 = (wchar_t **)&local_1c;
  local_24 = (undefined1 *)0x41de0d;
  FUN_0041b540(LVar3,0x1c,&DAT_0041e070);
  local_20 = (wchar_t **)0x41de17;
  DAT_00785c8d = FUN_0041693c(local_1c,0);
  local_20 = (wchar_t **)0x41de2c;
  DAT_00785c8e = FUN_0041b58c(LVar3,0xf,CONCAT22(extraout_var,0x2c));
  local_20 = (wchar_t **)0x41de42;
  DAT_00785c90 = FUN_0041b58c(LVar3,0xe,CONCAT22(extraout_var_00,0x2e));
  local_20 = (wchar_t **)&local_20;
  local_24 = (undefined1 *)0x41de5d;
  FUN_0041b540(LVar3,0x19,&DAT_0041e070);
  ppwVar2 = local_20;
  local_20 = (wchar_t **)0x41de67;
  DAT_00785c92 = FUN_0041693c(ppwVar2,0);
  local_20 = (wchar_t **)0x41de7c;
  DAT_00785c94 = FUN_0041b58c(LVar3,0x1d,CONCAT22(extraout_var_01,0x2f));
  local_20 = (wchar_t **)&local_28;
  local_24 = (undefined1 *)0x41de97;
  FUN_0041b540(LVar3,0x1f,L"m/d/yy");
  local_20 = (wchar_t **)0x41dea2;
  FUN_0041b884(local_28,&local_24);
  local_20 = (wchar_t **)0x41deaf;
  FUN_00407eb8(&DAT_00785c98,local_24);
  local_20 = (wchar_t **)&local_30;
  local_24 = (undefined1 *)0x41dec4;
  FUN_0041b540(LVar3,0x20,L"mmmm d, yyyy");
  local_20 = (wchar_t **)0x41decf;
  FUN_0041b884(local_30,&local_2c);
  local_20 = (wchar_t **)0x41dedc;
  FUN_00407eb8(&DAT_00785c9c,local_2c);
  local_20 = (wchar_t **)0x41deec;
  DAT_00785ca0 = FUN_0041b58c(LVar3,0x1e,CONCAT22(extraout_var_02,0x3a));
  local_20 = (wchar_t **)&local_34;
  local_24 = (undefined1 *)0x41df07;
  FUN_0041b540(LVar3,0x28,&DAT_0041e0c4);
  local_20 = (wchar_t **)0x41df14;
  FUN_00407eb8(&DAT_00785ca4,local_34);
  local_20 = &local_38;
  local_24 = (undefined1 *)0x41df29;
  FUN_0041b540(LVar3,0x29,&DAT_0041e0d8);
  local_20 = (wchar_t **)0x41df36;
  FUN_00407eb8(&DAT_00785ca8,local_38);
  local_20 = (wchar_t **)0x41df40;
  FUN_00407f0c(&local_c,0);
  local_20 = (wchar_t **)0x41df4a;
  FUN_00407f0c(&stack0xfffffff0,0);
  local_20 = (wchar_t **)&local_3c;
  local_24 = (undefined1 *)0x41df5f;
  FUN_0041b540(LVar3,0x25,&DAT_0041e070);
  local_20 = (wchar_t **)0x41df69;
  iVar4 = FUN_0041693c(local_3c,0);
  if (iVar4 == 0) {
    local_20 = (wchar_t **)0x41df7a;
    FUN_00407f0c(&local_8,&DAT_0041e0ec);
  }
  else {
    local_20 = (wchar_t **)0x41df89;
    FUN_00407f0c(&local_8,&DAT_0041e0fc);
  }
  local_20 = (wchar_t **)&local_40;
  local_24 = (undefined1 *)0x41df9e;
  FUN_0041b540(LVar3,0x23,&DAT_0041e070);
  local_20 = (wchar_t **)0x41dfa8;
  iVar4 = FUN_0041693c(local_40,0);
  if (iVar4 == 0) {
    local_20 = (wchar_t **)&local_44;
    local_24 = (undefined1 *)0x41dfc1;
    FUN_0041b540(LVar3,0x1005,&DAT_0041e070);
    local_20 = (wchar_t **)0x41dfcb;
    iVar4 = FUN_0041693c(local_44,0);
    if (iVar4 == 0) {
      local_20 = (wchar_t **)0x41dfdc;
      FUN_00407f0c(&stack0xfffffff0,L" AMPM");
    }
    else {
      local_20 = (wchar_t **)0x41dfeb;
      FUN_00407f0c(&local_c,L"AMPM ");
    }
  }
  local_20 = (wchar_t **)local_c;
  local_24 = local_8;
  local_28 = &DAT_0041e140;
  local_30 = (undefined4 *)0x41e008;
  FUN_00408480(&DAT_00785cac,4);
  local_30 = local_c;
  local_34 = local_8;
  local_38 = L":mm:ss";
  local_40 = L"륦,಺";
  local_3c = unaff_EBX;
  FUN_00408480(&DAT_00785cb0,4);
  local_40 = L"ꍦ嵚x쀳奚摙ႉ嵨䇠贀쁅Ⴚ";
  _DAT_00785d5a = FUN_0041b58c(LVar3,0xc,CONCAT22(extraout_var_03,0x2c));
  puVar1 = local_34;
  *in_FS_OFFSET = local_3c;
  local_34 = &LAB_0041e05d;
  local_38 = L"\xe9c3萙\xfffe\xebeb譛工Ã뀀Ȅ＀\xffffǿ";
  thunk_FUN_00406e80(&local_44,0x10,puVar1);
  return;
}
