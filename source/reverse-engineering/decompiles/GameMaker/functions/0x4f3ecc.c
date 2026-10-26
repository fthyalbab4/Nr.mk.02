// rea decompile_all
// name: FUN_004f3ecc
// address: 0x4f3ecc
// body: available
// range: 0x4f3ecc-0x4f3f12 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4f3ee1 (push 0x4f3f24 followed by fs-segment stack chaining); handler 0x4f3f24 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4f3eef (push 0x4f3f13 followed by fs-segment stack chaining); handler 0x4f3f13 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004f3ecc(int param_1)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;

  puStack_18 = &stack0xfffffffc;
  puStack_24 = &stack0xfffffffc;
  puStack_1c = &LAB_004f3f24;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puStack_28 = &LAB_004f3f13;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  (**(code **)(param_1 + 0x38))(*(undefined4 *)(param_1 + 0x3c));
  puVar1 = puStack_24;
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_004f3f1a;
  puStack_28 = (undefined1 *)0x4f3f0d;
  FUN_004ecb70(0,uStack_2c,puVar1);
  puStack_28 = (undefined1 *)0x4f3f12;
  FUN_00461334();
  return;
}
