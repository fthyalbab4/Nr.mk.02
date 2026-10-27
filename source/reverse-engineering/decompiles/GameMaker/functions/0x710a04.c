// rea decompile_all
// name: FUN_00710a04
// address: 0x710a04
// body: available
// range: 0x710a04-0x710a55 inclusive
// range: 0x710a63-0x710a78 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x710a26 (push 0x710a79 followed by fs-segment stack chaining); handler 0x710a79 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x710a3f (push 0x710a56 followed by fs-segment stack chaining); handler 0x710a56 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00710a04(int param_1)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 local_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  int local_8;

  puStack_1c = (undefined1 *)0x710a1b;
  local_8 = param_1;
  thunk_FUN_00407660(param_1);
  puStack_20 = &LAB_00710a79;
  local_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_24;
  puStack_1c = &stack0xfffffffc;
  if (local_8 != 0) {
    puStack_2c = &LAB_00710a56;
    uStack_30 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_30;
    puStack_28 = &stack0xfffffffc;
    puStack_1c = &stack0xfffffffc;
    FUN_00416900(local_8);
    *in_FS_OFFSET = uStack_30;
  }
  puVar1 = puStack_1c;
  *in_FS_OFFSET = local_24;
  puStack_1c = &LAB_00710a80;
  puStack_20 = (undefined1 *)0x710a78;
  thunk_FUN_00406e5c(&local_8,local_24,puVar1);
  return;
}
