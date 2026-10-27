// rea decompile_all
// name: FUN_0074f718
// address: 0x74f718
// body: available
// range: 0x74f718-0x74f752 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0074f718(int param_1)

{
  char cVar1;
  LPCWSTR lpLibFileName;
  HMODULE pHVar2;
  HANDLE hFile;
  DWORD dwFlags;

  cVar1 = FUN_0074eb4c(param_1);
  if ((cVar1 != '\0') && (*(int *)(param_1 + 0x74) == 0)) {
    dwFlags = 2;
    hFile = (HANDLE)0x0;
    lpLibFileName = (LPCWSTR)FUN_00407f44(*(undefined4 *)(param_1 + 0x14));
    pHVar2 = LoadLibraryExW(lpLibFileName,hFile,dwFlags);
    *(HMODULE *)(param_1 + 0x74) = pHVar2;
    if (pHVar2 == (HMODULE)0x0) {
      FUN_0041e9c8();
    }
  }
  return *(undefined4 *)(param_1 + 0x74);
}
