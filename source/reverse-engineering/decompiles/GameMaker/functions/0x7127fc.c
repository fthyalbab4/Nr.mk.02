// rea decompile_all
// name: FUN_007127fc
// address: 0x7127fc
// body: available
// range: 0x7127fc-0x71282f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_007127fc(int param_1,undefined4 param_2)

{
  LPCITEMIDLIST local_214;
  WCHAR local_210 [262];

  SHGetSpecialFolderLocation((HWND)0x0,param_1,&local_214);
  SHGetPathFromIDListW(local_214,local_210);
  FUN_00417b54(local_210,param_2);
  return;
}
