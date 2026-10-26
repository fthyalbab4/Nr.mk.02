// rea decompile_all
// name: FUN_00514ce0
// address: 0x514ce0
// body: available
// range: 0x514ce0-0x514d40 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x514d00 (push 0x514d41 followed by fs-segment stack chaining); handler 0x514d41 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00514ce0(undefined4 param_1,int param_2)

{
  char cVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_10;
  int local_c;
  undefined4 local_8;

  puStack_14 = &stack0xfffffffc;
  local_10 = *(undefined4 *)(param_2 + 4);
  puStack_18 = &LAB_00514d41;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  local_c = param_2;
  local_8 = param_1;
  cVar1 = FUN_00405c98(param_1,&PTR_LAB_0050c034);
  if (cVar1 == '\0') {
    *(undefined4 *)(local_c + 4) = 1;
  }
  FUN_004f67a4(local_8,local_c);
  *in_FS_OFFSET = uStack_1c;
  *(undefined4 *)(local_c + 4) = local_10;
  return;
}
