// rea decompile_all
// name: FUN_0040ec30
// address: 0x40ec30
// body: available
// range: 0x40ec30-0x40ec86 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


HWND FUN_0040ec30(DWORD param_1,LPCWSTR param_2,LPCWSTR param_3,LPVOID param_4,HINSTANCE param_5,
                 HMENU param_6,HWND param_7,int param_8,int param_9,int param_10,int param_11,
                 DWORD param_12)

{
  undefined4 uVar1;
  HWND pHVar2;

  uVar1 = FUN_0040480c();
  pHVar2 = CreateWindowExW(param_1,param_2,param_3,param_12,param_11,param_10,param_9,param_8,
                           param_7,param_6,param_5,param_4);
  FUN_004047fc(uVar1);
  return pHVar2;
}
