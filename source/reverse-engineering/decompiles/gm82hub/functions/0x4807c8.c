// rea decompile_all
// name: FUN_004807c8
// address: 0x4807c8
// body: available
// range: 0x4807c8-0x48081e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4807db (push 0x48081f followed by fs-segment stack chaining); handler 0x48081f lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004807c8(int param_1)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  undefined4 local_8;

  puStack_10 = &stack0xfffffffc;
  local_8 = 0;
  puStack_14 = &LAB_0048081f;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  FUN_004809cc(param_1);
  if (*(int *)(param_1 + 0x2c) == 0) {
    FUN_0040b9d0(PTR_LAB_00689668,&local_8);
    FUN_0047fa64(local_8);
  }
  puVar1 = puStack_10;
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_00480826;
  puStack_14 = (undefined1 *)0x48081e;
  thunk_FUN_004072d8(&local_8,uStack_18,puVar1);
  return;
}
