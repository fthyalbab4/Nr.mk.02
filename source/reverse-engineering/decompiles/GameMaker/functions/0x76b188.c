// rea decompile_all
// name: FUN_0076b188
// address: 0x76b188
// body: available
// range: 0x76b188-0x76b228 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x76b196 (push 0x76b229 followed by fs-segment stack chaining); handler 0x76b229 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0076b188(void)

{
  undefined4 *in_FS_OFFSET;
  bool bVar1;
  undefined4 uStack_10;
  undefined1 *puStack_c;
  undefined1 *puStack_8;

  puStack_8 = &stack0xfffffffc;
  puStack_c = &LAB_0076b229;
  uStack_10 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_10;
  bVar1 = _DAT_00787f34 == 0;
  _DAT_00787f34 = _DAT_00787f34 + -1;
  if (bVar1) {
    FUN_0042c354(&DAT_00787f14);
    _DAT_00787f24 = FUN_004246d0;
    DAT_00787f28 = FUN_00424220;
    DAT_00787f2c = FUN_00424130;
    DAT_00787f30 = FUN_00424220;
    *(code **)PTR_DAT_00782070 = FUN_004249e8;
    *(code **)PTR_DAT_00781670 = FUN_0042bcec;
    *(code **)PTR_DAT_00782294 = FUN_00424d3c;
    *(code **)PTR_DAT_00782880 = FUN_0042843c;
    *(code **)PTR_DAT_0078232c = FUN_00428cf0;
    InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_00787f3c);
  }
  *in_FS_OFFSET = uStack_10;
  return;
}
