// rea decompile_all
// name: FUN_0073cd90
// address: 0x73cd90
// body: available
// range: 0x73cd90-0x73cde9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x73cdb2 (push 0x73cdea followed by fs-segment stack chaining); handler 0x73cdea lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0073cd90(undefined4 param_1,undefined4 param_2,undefined1 param_3)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined1 local_11;
  undefined4 local_10;
  undefined4 local_c;
  undefined1 local_5;

  puStack_18 = (undefined1 *)0x73cda7;
  local_10 = param_2;
  local_c = param_1;
  local_5 = param_3;
  FUN_0043d354(param_1);
  puStack_1c = &LAB_0073cdea;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  if (DAT_00780470 == '\0') {
    puStack_18 = &stack0xfffffffc;
    local_11 = FUN_0073cc64();
  }
  else {
    puStack_18 = &stack0xfffffffc;
    local_11 = FUN_0073cb44();
  }
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_0073cdf1;
  puStack_1c = (undefined1 *)0x73cde9;
  FUN_0043d41c(local_c,uStack_20,puVar1);
  return;
}
