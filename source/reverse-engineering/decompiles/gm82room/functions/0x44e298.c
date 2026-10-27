// rea decompile_all
// name: FUN_0044e298
// address: 0x44e298
// body: available
// range: 0x44e298-0x44e326 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x44e2a6 (push 0x44e327 followed by fs-segment stack chaining); handler 0x44e327 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044e298(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_10;
  undefined1 *puStack_c;
  undefined1 *puStack_8;

  puStack_8 = &stack0xfffffffc;
  puStack_c = &LAB_0044e327;
  uStack_10 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_10;
  _DAT_0068f0f4 = _DAT_0068f0f4 + 1;
  if (_DAT_0068f0f4 == 0) {
    thunk_FUN_004072d8(&PTR_DAT_0067d1c4);
    thunk_FUN_004072d8(&PTR_DAT_0067d1c8);
    thunk_FUN_004072d8(&PTR_u______0067d1cc);
    thunk_FUN_004072d8(&PTR_u_____UNC__0067d1d0);
    FUN_00409e08(&DAT_0068f0e0,&DAT_00412e00);
    FUN_00409e08(&DAT_0068f0e4,&DAT_00412e00);
    FUN_00409e08(&DAT_0068f0e8,&DAT_00412e00);
    FUN_00409e08(&DAT_0068f0ec,&DAT_00412e00);
  }
  *in_FS_OFFSET = uStack_10;
  return;
}
