// rea decompile_all
// name: FUN_0076b0dc
// address: 0x76b0dc
// body: available
// range: 0x76b0dc-0x76b159 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x76b0ea (push 0x76b15a followed by fs-segment stack chaining); handler 0x76b15a lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0076b0dc(void)

{
  undefined4 *in_FS_OFFSET;
  bool bVar1;
  undefined4 uStack_10;
  undefined1 *puStack_c;
  undefined1 *puStack_8;

  puStack_8 = &stack0xfffffffc;
  puStack_c = &LAB_0076b15a;
  uStack_10 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_10;
  bVar1 = _DAT_00785db8 == 0;
  _DAT_00785db8 = _DAT_00785db8 + -1;
  if (bVar1) {
    FUN_00406ac0(&DAT_004225b0);
    FUN_00406b04(&DAT_00422728);
    if (DAT_00785c3d != '\0') {
      FUN_00407eb8(&PTR_DAT_00773bd4,&DAT_0076b170);
    }
    FUN_0041cf20();
    FUN_0040afe0(&LAB_0041e528);
    FUN_0041cfc0();
    FUN_0041eac0();
    FUN_0040a93c(0,&DAT_00773e3c);
    FUN_0041dd78();
  }
  *in_FS_OFFSET = uStack_10;
  return;
}
