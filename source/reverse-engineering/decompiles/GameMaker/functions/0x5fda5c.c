// rea decompile_all
// name: FUN_005fda5c
// address: 0x5fda5c
// body: available
// range: 0x5fda5c-0x5fdaa5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5fda6e (push 0x5fdaa6 followed by fs-segment stack chaining); handler 0x5fdaa6 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005fda5c(int *param_1)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_14;
  undefined1 *puStack_10;
  undefined1 *puStack_c;
  int *local_8;

  puStack_c = &stack0xfffffffc;
  puStack_10 = &LAB_005fdaa6;
  uStack_14 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_14;
  puVar1 = &stack0xfffffffc;
  local_8 = param_1;
  if ((int *)param_1[0x29] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x29] + 0x3c))();
    puVar1 = puStack_c;
  }
  puStack_c = puVar1;
  puVar1 = puStack_c;
  *in_FS_OFFSET = uStack_14;
  puStack_c = &LAB_005fdaad;
  *(undefined1 *)(local_8 + 0x2d) = 0;
  puStack_10 = (undefined1 *)0x5fdaa5;
  (**(code **)(*local_8 + 0xc0))(local_8,*local_8,puVar1);
  return;
}
