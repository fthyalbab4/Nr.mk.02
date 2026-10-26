// rea decompile_all
// name: FUN_004ca600
// address: 0x4ca600
// body: available
// range: 0x4ca600-0x4ca765 inclusive
// range: 0x4ca76d-0x4ca770 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4ca62c (push 0x4ca766 followed by fs-segment stack chaining); handler 0x4ca766 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004ca600(void)

{
  UINT uMode;
  undefined4 *in_FS_OFFSET;
  HMODULE pHStack_20;
  undefined4 uStack_18;
  undefined1 *puStack_14;

  if (PTR_DAT_00689688[0xc] != '\0') {
    puStack_14 = (undefined1 *)0x4ca61e;
    uMode = SetErrorMode(0x8000);
    puStack_14 = &LAB_004ca766;
    uStack_18 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_18;
    if (DAT_0068f2a4 == 0) {
      pHStack_20 = GetModuleHandleW(L"USER32");
      DAT_0068f2a4 = FUN_0040deb0();
    }
    if (DAT_006819e8 == (HMODULE)0x0) {
      DAT_006819e8 = LoadLibraryW(L"imm32.dll");
      if (DAT_006819e8 != (HMODULE)0x0) {
        DAT_0068f2a8 = FUN_0040deb0();
        DAT_0068f2ac = FUN_0040deb0();
        DAT_0068f2b0 = FUN_0040deb0();
        DAT_0068f2b4 = FUN_0040deb0();
        DAT_0068f2b8 = FUN_0040deb0();
        _DAT_0068f2bc = FUN_0040deb0();
        _DAT_0068f2c0 = FUN_0040deb0();
        _DAT_0068f2c4 = FUN_0040deb0();
        DAT_0068f2c8 = FUN_0040deb0();
        _DAT_0068f2cc = FUN_0040deb0();
      }
    }
    *in_FS_OFFSET = pHStack_20;
    uStack_18 = 0x4ca76d;
    SetErrorMode(uMode);
    return;
  }
  return;
}
