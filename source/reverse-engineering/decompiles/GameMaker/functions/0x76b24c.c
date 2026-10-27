// rea decompile_all
// name: FUN_0076b24c
// address: 0x76b24c
// body: available
// range: 0x76b24c-0x76b2cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x76b25a (push 0x76b2d0 followed by fs-segment stack chaining); handler 0x76b2d0 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0076b24c(void)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  bool bVar2;
  undefined4 uStack_10;
  undefined1 *puStack_c;
  undefined1 *puStack_8;

  puStack_8 = &stack0xfffffffc;
  puStack_c = &LAB_0076b2d0;
  uStack_10 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_10;
  bVar2 = _DAT_00787f68 == 0;
  _DAT_00787f68 = _DAT_00787f68 + -1;
  if (bVar2) {
    FUN_0040afd0(&LAB_0044a47c);
    iVar1 = FUN_0041ecac(&DAT_00412d1c,1);
    if (iVar1 != 0) {
      iVar1 = iVar1 + 0x2c;
    }
    FUN_0040b158(&DAT_00787f5c,iVar1);
    DAT_00787f70 = FUN_00439bd0(&DAT_00439170,1);
    DAT_00787f6c = FUN_0043b990(&LAB_0042fb58,1);
    DAT_00787f78 = FUN_0043b990(&LAB_0042fb58,1);
  }
  *in_FS_OFFSET = uStack_10;
  return;
}
