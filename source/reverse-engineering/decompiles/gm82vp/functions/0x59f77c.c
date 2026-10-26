// rea decompile_all
// name: FUN_0059f77c
// address: 0x59f77c
// body: available
// range: 0x59f77c-0x59f7ba inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x59f78d (push 0x59f7bb followed by fs-segment stack chaining); handler 0x59f7bb lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0059f77c(void)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  undefined4 local_8;

  puStack_10 = &stack0xfffffffc;
  local_8 = 0;
  puStack_14 = &LAB_0059f7bb;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  FUN_0040b9d0(PTR_LAB_0068899c,&local_8);
  FUN_00596aa4(local_8);
  puVar1 = puStack_10;
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_0059f7c2;
  puStack_14 = (undefined1 *)0x59f7ba;
  thunk_FUN_004072d8(&local_8,uStack_18,puVar1);
  return;
}
