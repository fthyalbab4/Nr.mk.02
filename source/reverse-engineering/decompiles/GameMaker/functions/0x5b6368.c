// rea decompile_all
// name: FUN_005b6368
// address: 0x5b6368
// body: available
// range: 0x5b6368-0x5b63d9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5b638d (push 0x5b63da followed by fs-segment stack chaining); handler 0x5b63da lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005b6368(int param_1,char param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7)

{
  undefined1 *puVar1;
  undefined4 extraout_ECX;
  undefined4 *in_FS_OFFSET;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 local_8;

  local_8 = 0;
  if (param_2 != '\0') {
    puStack_28 = (undefined1 *)0x5b637c;
    param_1 = FUN_00405fb0();
    param_3 = extraout_ECX;
  }
  puStack_2c = &LAB_005b63da;
  puStack_30 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_30;
  puStack_28 = &stack0xfffffffc;
  FUN_005b6238(param_3,&local_8);
  FUN_005b6294(param_1,0,local_8,param_4,param_7);
  FUN_00407eb8(param_1 + 0x1c,param_6);
  FUN_00407eb8(param_1 + 0x20,param_5);
  puVar1 = puStack_30;
  *in_FS_OFFSET = param_4;
  puStack_30 = &LAB_005b63e1;
  thunk_FUN_00406e5c(&local_8,param_4,puVar1);
  return;
}
