// rea decompile_all
// name: FUN_004f3b08
// address: 0x4f3b08
// body: available
// range: 0x4f3b08-0x4f3b63 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4f3b36 (push 0x4f3b64 followed by fs-segment stack chaining); handler 0x4f3b64 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004f3b08(int *param_1)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;

  puStack_14 = (undefined1 *)0x4f3b1e;
  FUN_00405d08(param_1);
  puStack_14 = (undefined1 *)0x4f3b2b;
  FUN_004f95a4(param_1,1);
  puStack_18 = &LAB_004f3b64;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  puStack_14 = &stack0xfffffffc;
  (**(code **)(*param_1 + 0xc0))();
  FUN_004f3cf4(param_1);
  puVar1 = puStack_14;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_004f3b6b;
  puStack_18 = (undefined1 *)0x4f3b63;
  FUN_004f95a4(param_1,0,puVar1);
  return;
}
