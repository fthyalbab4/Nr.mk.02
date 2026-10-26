// rea decompile_all
// name: FUN_0041f278
// address: 0x41f278
// body: available
// range: 0x41f278-0x41f2cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x41f295 (push 0x41f2ea followed by fs-segment stack chaining); handler 0x41f2ea lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x41f2a6 (push 0x41f2cc followed by fs-segment stack chaining); handler 0x41f2cc lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0041f278(undefined4 param_1,UINT param_2)

{
  LPCWSTR lpLibFileName;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 uStack_20;
  undefined1 *puStack_1c;

  puStack_1c = (undefined1 *)0x41f287;
  SetErrorMode(param_2);
  puStack_1c = &LAB_0041f2ea;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puStack_28 = &LAB_0041f2cc;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  puStack_24 = &stack0xfffffffc;
  lpLibFileName = (LPCWSTR)FUN_00408220(param_1);
  LoadLibraryW(lpLibFileName);
  *in_FS_OFFSET = uStack_2c;
  return;
}
