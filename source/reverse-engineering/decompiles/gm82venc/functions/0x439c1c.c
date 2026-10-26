// rea decompile_all
// name: FUN_00439c1c
// address: 0x439c1c
// body: available
// range: 0x439c1c-0x439cb3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x439c3b (push 0x439cb4 followed by fs-segment stack chaining); handler 0x439cb4 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00439c1c(undefined4 *param_1,undefined4 *param_2)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar2;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 local_14;
  undefined4 local_10;
  undefined1 local_c;
  undefined4 local_8;

  puStack_28 = &stack0xfffffffc;
  local_1c = 0;
  local_8 = 0;
  puStack_2c = &LAB_00439cb4;
  puStack_30 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_30;
  if (param_2 == (undefined4 *)0x0) {
    FUN_004081e8(&local_8,&PTR_DAT_00439cd0);
  }
  else {
    puStack_28 = &stack0xfffffffc;
    FUN_00405eb4(*param_2,&local_8);
  }
  local_18 = local_8;
  local_14 = 0x11;
  FUN_00405eb4(*param_1,&local_1c);
  local_10 = local_1c;
  local_c = 0x11;
  uVar2 = 1;
  FUN_0041bf50(&LAB_00411bb8,1,PTR_LAB_00688e98,1,&local_18);
  FUN_00406ab4();
  puVar1 = puStack_30;
  *in_FS_OFFSET = uVar2;
  puStack_30 = &LAB_00439cbb;
  thunk_FUN_004072d8(&local_1c,uVar2,puVar1);
  thunk_FUN_004072d8(&local_8);
  return;
}
