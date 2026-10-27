// rea decompile_all
// name: FUN_006128fc
// address: 0x6128fc
// body: available
// range: 0x6128fc-0x612c71 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x612924 (push 0x612c72 followed by fs-segment stack chaining); handler 0x612c72 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006128fc(int *param_1,int *param_2)

{
  short sVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined4 *in_FS_OFFSET;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 *local_28;
  undefined1 *local_24;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;

  local_24 = &stack0xfffffffc;
  local_14 = 10;
  do {
    local_c = 0;
    local_14 = local_14 + -1;
  } while (local_14 != 0);
  LOCK();
  UNLOCK();
  local_28 = &LAB_00612c72;
  local_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_2c;
  local_30 = 0x61292e;
  local_8 = local_14;
  FUN_006119f0(0);
  sVar1 = *(short *)(*param_1 + -2 + *param_2 * 2);
  if (sVar1 == 0x7b) {
    local_30 = 0;
    local_34 = 0x612948;
    FUN_00408310(&local_8,0x7b);
    local_34 = 0x612957;
    FUN_00611a0c(0xb,local_8,*param_2);
  }
  else if (sVar1 == 0x7d) {
    local_30 = 0;
    local_34 = 0x61296d;
    FUN_00408310(&local_c,0x7d);
    local_34 = 0x61297c;
    FUN_00611a0c(0xc,local_c,*param_2);
  }
  else if (sVar1 == 0x3d) {
    local_30 = 0;
    local_34 = 0x612992;
    FUN_00408310(&local_10,0x3d);
    local_34 = 0x6129a1;
    FUN_00611a0c(0x65,local_10,*param_2);
  }
  else if (sVar1 == 0x28) {
    local_30 = 0;
    local_34 = 0x6129b7;
    FUN_00408310(&local_14,0x28);
    local_34 = 0x6129c6;
    FUN_00611a0c(0x6a,local_14,*param_2);
  }
  else if (sVar1 == 0x29) {
    local_30 = 0;
    local_34 = 0x6129dc;
    FUN_00408310(&stack0xffffffe8,0x29);
    local_34 = 0x6129eb;
    FUN_00611a0c(0x6b,unaff_EBX,*param_2);
  }
  else if (sVar1 == 0x5b) {
    local_30 = 0;
    local_34 = 0x612a01;
    FUN_00408310(&stack0xffffffe4,0x5b);
    local_34 = 0x612a10;
    FUN_00611a0c(0x6e,unaff_ESI,*param_2);
  }
  else if (sVar1 == 0x5d) {
    local_30 = 0;
    local_34 = 0x612a26;
    FUN_00408310(&stack0xffffffe0,0x5d);
    local_34 = 0x612a35;
    FUN_00611a0c(0x6f,unaff_EDI,*param_2);
  }
  else if (sVar1 == 0x3b) {
    local_30 = 0;
    local_34 = 0x612a4b;
    FUN_00408310(&local_24,0x3b);
    local_34 = 0x612a5a;
    FUN_00611a0c(0x6c,local_24,*param_2);
  }
  else if (sVar1 == 0x3a) {
    local_30 = 0;
    local_34 = 0x612a70;
    FUN_00408310(&local_28,0x3a);
    local_34 = 0x612a7f;
    FUN_00611a0c(0x71,local_28,*param_2);
  }
  else if (sVar1 == 0x2c) {
    local_30 = 0;
    local_34 = 0x612a95;
    FUN_00408310(&local_2c,0x2c);
    local_34 = 0x612aa4;
    FUN_00611a0c(0x6d,local_2c,*param_2);
  }
  else if (sVar1 == 0x3c) {
    local_30 = 0;
    local_34 = 0x612aba;
    FUN_00408310(&local_30,0x3c);
    local_34 = 0x612ac9;
    FUN_00611a0c(0xcc,local_30,*param_2);
  }
  else if (sVar1 == 0x3e) {
    local_30 = 0;
    local_34 = 0x612adf;
    FUN_00408310(&local_34,0x3e);
    uVar2 = local_34;
    local_34 = 0x612aee;
    FUN_00611a0c(0xd1,uVar2,*param_2);
  }
  else if (sVar1 == 0x2b) {
    local_30 = 0;
    local_34 = 0x612b04;
    FUN_00408310(&local_38,0x2b);
    local_34 = 0x612b13;
    FUN_00611a0c(0xd2,local_38,*param_2);
  }
  else if (sVar1 == 0x2d) {
    local_30 = 0;
    local_34 = 0x612b29;
    FUN_00408310(&local_3c,0x2d);
    local_34 = 0x612b38;
    FUN_00611a0c(0xd3,local_3c,*param_2);
  }
  else if (sVar1 == 0x2a) {
    local_30 = 0;
    local_34 = 0x612b4e;
    FUN_00408310(&local_40,0x2a);
    local_34 = 0x612b5d;
    FUN_00611a0c(0xd4,local_40,*param_2);
  }
  else if (sVar1 == 0x2f) {
    local_30 = 0;
    local_34 = 0x612b73;
    FUN_00408310(&local_44,0x2f);
    local_34 = 0x612b82;
    FUN_00611a0c(0xd5,local_44,*param_2);
  }
  else if (sVar1 == 0x21) {
    local_30 = 0;
    local_34 = 0x612b98;
    FUN_00408310(&local_48,0x21);
    local_34 = 0x612ba7;
    FUN_00611a0c(0xcb,local_48,*param_2);
  }
  else if (sVar1 == 0x2e) {
    local_30 = 0;
    local_34 = 0x612bbd;
    FUN_00408310(&local_4c,0x2e);
    local_34 = 0x612bcc;
    FUN_00611a0c(0x70,local_4c,*param_2);
  }
  else if (sVar1 == 0x7c) {
    local_30 = 0;
    local_34 = 0x612be2;
    FUN_00408310(&local_50,0x7c);
    local_34 = 0x612bf1;
    FUN_00611a0c(0xd9,local_50,*param_2);
  }
  else if (sVar1 == 0x26) {
    local_30 = 0;
    local_34 = 0x612c04;
    FUN_00408310(&local_54,0x26);
    local_34 = 0x612c13;
    FUN_00611a0c(0xda,local_54,*param_2);
  }
  else if (sVar1 == 0x5e) {
    local_30 = 0;
    local_34 = 0x612c26;
    FUN_00408310(&local_58,0x5e);
    local_34 = 0x612c35;
    FUN_00611a0c(0xdb,local_58,*param_2);
  }
  else if (sVar1 == 0x7e) {
    local_30 = 0;
    local_34 = 0x612c48;
    FUN_00408310(&local_5c,0x7e);
    local_34 = 0x612c57;
    FUN_00611a0c(0xdc,local_5c,*param_2);
  }
  puVar3 = local_28;
  *in_FS_OFFSET = local_30;
  local_28 = &LAB_00612c79;
  local_2c = 0x612c71;
  thunk_FUN_004072fc(&local_5c,0x16,puVar3);
  return;
}
