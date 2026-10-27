// rea decompile_all
// name: FUN_0041e640
// address: 0x41e640
// body: available
// range: 0x41e640-0x41e69f inclusive
// range: 0x41e6a7-0x41e6ae inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x41e67a (push 0x41e6a0 followed by fs-segment stack chaining); handler 0x41e6a0 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


BOOL FUN_0041e640(HMODULE param_1)

{
  HRSRC hResInfo;
  HGLOBAL hResData;
  BOOL BVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar2;

  hResInfo = FindResourceW(param_1,L"PACKAGEINFO",(LPCWSTR)&DAT_0000000a);
  if (hResInfo != (HRSRC)0x0) {
    hResData = LoadResource(param_1,hResInfo);
    if (hResData != (HGLOBAL)0x0) {
      uVar2 = *in_FS_OFFSET;
      *in_FS_OFFSET = &stack0xffffffe4;
      LockResource(hResData);
      *in_FS_OFFSET = uVar2;
      BVar1 = FreeResource(hResData);
      return BVar1;
    }
  }
  return 0;
}
