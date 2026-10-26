// rea decompile_all
// name: FUN_005f0d44
// address: 0x5f0d44
// body: available
// range: 0x5f0d44-0x5f0dd6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5f0d66 (push 0x5f0dd7 followed by fs-segment stack chaining); handler 0x5f0dd7 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005f0d44(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  undefined1 local_10;
  undefined4 local_c;
  undefined1 local_8;

  puStack_2c = &stack0xfffffffc;
  local_18 = 0;
  local_1c = 0;
  puStack_30 = &LAB_005f0dd7;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  if (param_2 == 0x2af9) {
    local_10 = 0;
    puStack_2c = &stack0xfffffffc;
    local_14 = param_2;
    FUN_0040b75c(PTR_PTR_007819cc,&local_18);
    local_c = local_18;
    local_8 = 0x11;
    FUN_0040b75c(PTR_PTR_007815e0,&local_1c);
    FUN_005e1dd0(local_1c,&local_14,1);
    uStack_38 = param_3;
  }
  else {
    uStack_38 = 0x5f0dbc;
    FUN_005f4560(param_1,param_2,param_3);
  }
  puVar1 = puStack_30;
  *in_FS_OFFSET = uStack_38;
  puStack_30 = &LAB_005f0dde;
  uStack_34 = 0x5f0dd6;
  thunk_FUN_00406e80(&local_1c,2,puVar1);
  return;
}
