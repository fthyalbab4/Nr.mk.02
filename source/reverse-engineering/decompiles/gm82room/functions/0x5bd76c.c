// rea decompile_all
// name: FUN_005bd76c
// address: 0x5bd76c
// body: available
// range: 0x5bd76c-0x5bd7cc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5bd77a (push 0x5bd7cd followed by fs-segment stack chaining); handler 0x5bd7cd lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005bd76c(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_10;
  undefined1 *puStack_c;
  undefined1 *puStack_8;

  puStack_8 = &stack0xfffffffc;
  puStack_c = &LAB_005bd7cd;
  uStack_10 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_10;
  _DAT_0084f57c = _DAT_0084f57c + 1;
  if (_DAT_0084f57c == 0) {
    FUN_00409120(&DAT_0084f518,&DAT_005bd3dc,0xc);
    FUN_00409120(&DAT_0084f548,&DAT_005bd408,0xc);
    FUN_00409e08(&DAT_0084f578,&DAT_005bd474);
  }
  *in_FS_OFFSET = uStack_10;
  return;
}
