// rea decompile_all
// name: FUN_0076d708
// address: 0x76d708
// body: available
// range: 0x76d708-0x76d756 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x76d716 (push 0x76d757 followed by fs-segment stack chaining); handler 0x76d757 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0076d708(void)

{
  undefined4 *in_FS_OFFSET;
  bool bVar1;
  undefined4 uStack_10;
  undefined1 *puStack_c;
  undefined1 *puStack_8;

  puStack_8 = &stack0xfffffffc;
  puStack_c = &LAB_0076d757;
  uStack_10 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_10;
  bVar1 = _DAT_0078a1f0 == 0;
  _DAT_0078a1f0 = _DAT_0078a1f0 + -1;
  if (bVar1) {
    DAT_0078a1e8 = 0;
    FUN_0043a4f8(&PTR_FUN_0066d5cc,&PTR_FUN_004e3e3c);
    FUN_0043a4f8(&LAB_0066a37c,&PTR_FUN_004e3e3c);
  }
  *in_FS_OFFSET = uStack_10;
  return;
}
