// rea decompile_all
// name: FUN_0042ae08
// address: 0x42ae08
// body: available
// range: 0x42ae08-0x42ae90 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x42ae1b (push 0x42ae91 followed by fs-segment stack chaining); handler 0x42ae91 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0042ae08(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_c;
  undefined4 local_8;

  puStack_14 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  puStack_18 = &LAB_0042ae91;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  if (param_3 == 3) {
    FUN_0040b75c(PTR_PTR_0078290c,&local_8);
    FUN_0041beb8(&PTR_LAB_00411a58,1,local_8);
    FUN_00406618();
  }
  else if (param_3 - 4U < 2) {
    puStack_14 = &stack0xfffffffc;
    FUN_0040b75c(PTR_PTR_00782728,&local_c,param_3 + -6);
    FUN_0041beb8(&PTR_LAB_0041175c,1,local_c);
    FUN_00406618();
  }
  else {
    puStack_14 = &stack0xfffffffc;
    FUN_004249d4();
  }
  puVar1 = puStack_14;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_0042ae98;
  puStack_18 = (undefined1 *)0x42ae90;
  thunk_FUN_00406e80(&local_c,2,puVar1);
  return;
}
