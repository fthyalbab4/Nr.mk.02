// rea decompile_all
// name: FUN_0041dbd0
// address: 0x41dbd0
// body: available
// range: 0x41dbd0-0x41dead inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x41dbeb (push 0x41deae followed by fs-segment stack chaining); handler 0x41deae lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0041dbd0(void)

{
  undefined1 *puVar1;
  undefined ***pppuVar2;
  LCID LVar3;
  int iVar4;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  undefined2 extraout_var_03;
  undefined **unaff_EBX;
  undefined4 *in_FS_OFFSET;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  wchar_t *local_38;
  undefined1 *local_34;
  undefined4 *local_30;
  undefined4 local_2c;
  undefined **local_28;
  undefined1 *local_24;
  undefined ***local_20;
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
  local_18 = &LAB_0041deae;
  local_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_1c;
  local_20 = (undefined ***)0x41dbf3;
  FUN_0041db18();
  local_20 = (undefined ***)0x41dbf8;
  FUN_0041b33c();
  if (DAT_0068cd58 != '\0') {
    local_20 = (undefined ***)0x41dc06;
    FUN_0041b664();
  }
  local_20 = (undefined ***)0x41dc0b;
  LVar3 = GetThreadLocale();
  local_20 = (undefined ***)&local_14;
  local_24 = (undefined1 *)0x41dc1f;
  FUN_0041b284(LVar3,0x14,0);
  local_20 = (undefined ***)0x41dc2c;
  FUN_00408194(&DAT_0068cc88,local_14);
  local_20 = (undefined ***)&local_18;
  local_24 = (undefined1 *)0x41dc41;
  FUN_0041b284(LVar3,0x1b,&DAT_0041dec8);
  local_20 = (undefined ***)0x41dc4b;
  DAT_0068cc8c = FUN_0041663c(local_18,0);
  local_20 = (undefined ***)&local_1c;
  local_24 = (undefined1 *)0x41dc65;
  FUN_0041b284(LVar3,0x1c,&DAT_0041dec8);
  local_20 = (undefined ***)0x41dc6f;
  DAT_0068cc8d = FUN_0041663c(local_1c,0);
  local_20 = (undefined ***)0x41dc84;
  DAT_0068cc8e = FUN_0041b2d0(LVar3,0xf,CONCAT22(extraout_var,0x2c));
  local_20 = (undefined ***)0x41dc9a;
  DAT_0068cc90 = FUN_0041b2d0(LVar3,0xe,CONCAT22(extraout_var_00,0x2e));
  local_20 = (undefined ***)&local_20;
  local_24 = (undefined1 *)0x41dcb5;
  FUN_0041b284(LVar3,0x19,&DAT_0041dec8);
  pppuVar2 = local_20;
  local_20 = (undefined ***)0x41dcbf;
  DAT_0068cc92 = FUN_0041663c(pppuVar2,0);
  local_20 = (undefined ***)0x41dcd4;
  DAT_0068cc94 = FUN_0041b2d0(LVar3,0x1d,CONCAT22(extraout_var_01,0x2f));
  local_20 = &local_28;
  local_24 = (undefined1 *)0x41dcef;
  FUN_0041b284(LVar3,0x1f,L"m/d/yy");
  local_20 = (undefined ***)0x41dcfa;
  FUN_0041b718(local_28,&local_24);
  local_20 = (undefined ***)0x41dd07;
  FUN_00408194(&DAT_0068cc98,local_24);
  local_20 = (undefined ***)&local_30;
  local_24 = (undefined1 *)0x41dd1c;
  FUN_0041b284(LVar3,0x20,L"mmmm d, yyyy");
  local_20 = (undefined ***)0x41dd27;
  FUN_0041b718(local_30,&local_2c);
  local_20 = (undefined ***)0x41dd34;
  FUN_00408194(&DAT_0068cc9c,local_2c);
  local_20 = (undefined ***)0x41dd44;
  DAT_0068cca0 = FUN_0041b2d0(LVar3,0x1e,CONCAT22(extraout_var_02,0x3a));
  local_20 = (undefined ***)&local_34;
  local_24 = (undefined1 *)0x41dd5f;
  FUN_0041b284(LVar3,0x28,&PTR_DAT_0041df1c);
  local_20 = (undefined ***)0x41dd6c;
  FUN_00408194(&DAT_0068cca4,local_34);
  local_20 = (undefined ***)&local_38;
  local_24 = (undefined1 *)0x41dd81;
  FUN_0041b284(LVar3,0x29,&PTR_DAT_0041df30);
  local_20 = (undefined ***)0x41dd8e;
  FUN_00408194(&DAT_0068cca8,local_38);
  local_20 = (undefined ***)0x41dd98;
  FUN_004081e8(&local_c,0);
  local_20 = (undefined ***)0x41dda2;
  FUN_004081e8(&stack0xfffffff0,0);
  local_20 = (undefined ***)&local_3c;
  local_24 = (undefined1 *)0x41ddb7;
  FUN_0041b284(LVar3,0x25,&DAT_0041dec8);
  local_20 = (undefined ***)0x41ddc1;
  iVar4 = FUN_0041663c(local_3c,0);
  if (iVar4 == 0) {
    local_20 = (undefined ***)0x41ddd2;
    FUN_004081e8(&local_8,&DAT_0041df44);
  }
  else {
    local_20 = (undefined ***)0x41dde1;
    FUN_004081e8(&local_8,&PTR_DAT_0041df54);
  }
  local_20 = (undefined ***)&local_40;
  local_24 = (undefined1 *)0x41ddf6;
  FUN_0041b284(LVar3,0x23,&DAT_0041dec8);
  local_20 = (undefined ***)0x41de00;
  iVar4 = FUN_0041663c(local_40,0);
  if (iVar4 == 0) {
    local_20 = (undefined ***)&local_44;
    local_24 = (undefined1 *)0x41de19;
    FUN_0041b284(LVar3,0x1005,&DAT_0041dec8);
    local_20 = (undefined ***)0x41de23;
    iVar4 = FUN_0041663c(local_44,0);
    if (iVar4 == 0) {
      local_20 = (undefined ***)0x41de34;
      FUN_004081e8(&stack0xfffffff0,L" AMPM");
    }
    else {
      local_20 = (undefined ***)0x41de43;
      FUN_004081e8(&local_c,L"AMPM ");
    }
  }
  local_20 = (undefined ***)local_c;
  local_24 = local_8;
  local_28 = &PTR_DAT_0041df98;
  local_30 = (undefined **)0x41de60;
  FUN_0040875c(&DAT_0068ccac,4);
  local_30 = local_c;
  local_34 = local_8;
  local_38 = L":mm:ss";
  local_40 = (undefined **)0x41de7d;
  local_3c = unaff_EBX;
  FUN_0040875c(&DAT_0068ccb0,4);
  local_40 = (undefined **)0x41de8d;
  _DAT_0068cd5a = FUN_0041b2d0(LVar3,0xc,CONCAT22(extraout_var_03,0x2c));
  puVar1 = local_34;
  *in_FS_OFFSET = local_3c;
  local_34 = &LAB_0041deb5;
  local_38 = L"\xe9c3謡\xfffe\xebeb譛工Ã뀀Ȅ＀\xffffǿ";
  thunk_FUN_004072fc(&local_44,0x10,puVar1);
  return;
}
