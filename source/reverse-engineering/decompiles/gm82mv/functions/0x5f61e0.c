// rea decompile_all
// name: FUN_005f61e0
// address: 0x5f61e0
// body: available
// range: 0x5f61e0-0x5f6275 inclusive
// range: 0x5f62f3-0x5f6380 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5f620a (push 0x5f6381 followed by fs-segment stack chaining); handler 0x5f6381 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5f624b (push 0x5f6276 followed by fs-segment stack chaining); handler 0x5f6276 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005f61e0(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 unaff_EDI;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 local_18;
  undefined4 local_14;
  undefined1 local_d;
  int local_c;
  undefined4 local_8;

  local_18 = 0;
  local_14 = 0;
  puStack_28 = (undefined1 *)0x5f61ff;
  local_c = param_2;
  local_8 = param_1;
  thunk_FUN_00407ad0(param_1);
  puStack_2c = &LAB_005f6381;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  local_d = 1;
  puStack_34 = (undefined1 *)0x5f6216;
  puStack_28 = &stack0xfffffffc;
  FUN_005f57a4();
  puStack_34 = (undefined1 *)0x5f6228;
  FUN_004ba900(DAT_008506c8[0xe9],5);
  puStack_34 = (undefined1 *)0x5f6240;
  FUN_005ef574(DAT_008506c8[0xe9],0x192,0xffffffff);
  puStack_38 = &LAB_005f6276;
  uStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_3c;
  puStack_34 = &stack0xfffffffc;
  FUN_00408420(&local_14,local_8);
  uStack_3c = 0x5f626c;
  FUN_005f4804(DAT_008506c8[0xe9],local_14);
  uVar1 = uStack_30;
  *in_FS_OFFSET = puStack_38;
  uStack_30 = 0x5f630a;
  FUN_004847fc(DAT_008506c8[0xe6],0 < local_c,uVar1);
  if (0 < local_c) {
    uStack_30 = 0x5f6323;
    FUN_0048480c(DAT_008506c8[0xe6],local_c);
  }
  if (DAT_006885d0 == '\0') {
    if (DAT_006885f0 == '\0') {
      uStack_30 = 0x5f634e;
      FUN_004e6d64(DAT_008506c8);
    }
    else {
      uStack_30 = 0x5f6342;
      (**(code **)(*DAT_008506c8 + 0x110))();
    }
  }
  else {
    while ((char)PTR_FUN_0068861c != '\0') {
      uStack_30 = 0x5f6355;
      FUN_00628b78();
    }
  }
  *in_FS_OFFSET = puStack_2c;
  puStack_28 = (undefined1 *)0x5f6378;
  FUN_00407de8(&local_18,2,unaff_EDI);
  puStack_28 = (undefined1 *)0x5f6380;
  thunk_FUN_004072d8(&local_8);
  return;
}
