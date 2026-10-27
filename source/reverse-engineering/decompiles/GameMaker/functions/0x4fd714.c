// rea decompile_all
// name: FUN_004fd714
// address: 0x4fd714
// body: available
// range: 0x4fd714-0x4fd879 inclusive
// range: 0x4fd881-0x4fd884 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4fd740 (push 0x4fd87a followed by fs-segment stack chaining); handler 0x4fd87a lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004fd714(void)

{
  UINT uMode;
  undefined4 *in_FS_OFFSET;
  HMODULE pHStack_20;
  undefined4 uStack_18;
  undefined1 *puStack_14;

  if (PTR_DAT_00782974[0xc] != '\0') {
    puStack_14 = (undefined1 *)0x4fd732;
    uMode = SetErrorMode(0x8000);
    puStack_14 = &LAB_004fd87a;
    uStack_18 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_18;
    if (DAT_007882a8 == 0) {
      pHStack_20 = GetModuleHandleW(L"USER32");
      DAT_007882a8 = FUN_0040dcb4();
    }
    if (DAT_00778c50 == (HMODULE)0x0) {
      DAT_00778c50 = LoadLibraryW(L"imm32.dll");
      if (DAT_00778c50 != (HMODULE)0x0) {
        DAT_007882ac = FUN_0040dcb4();
        DAT_007882b0 = FUN_0040dcb4();
        DAT_007882b4 = FUN_0040dcb4();
        DAT_007882b8 = FUN_0040dcb4();
        DAT_007882bc = FUN_0040dcb4();
        DAT_007882c0 = FUN_0040dcb4();
        DAT_007882c4 = FUN_0040dcb4();
        _DAT_007882c8 = FUN_0040dcb4();
        DAT_007882cc = FUN_0040dcb4();
        _DAT_007882d0 = FUN_0040dcb4();
      }
    }
    *in_FS_OFFSET = pHStack_20;
    uStack_18 = 0x4fd881;
    SetErrorMode(uMode);
    return;
  }
  return;
}
