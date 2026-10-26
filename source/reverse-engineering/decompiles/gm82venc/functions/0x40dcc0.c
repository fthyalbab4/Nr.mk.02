// rea decompile_all
// name: ADVAPI32.DLL::RegSetValueExW
// address: 0x40dcc0
// body: available
// range: 0x40dcc0-0x40dcc5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


LSTATUS __stdcall
RegSetValueExW(HKEY hKey,LPCWSTR lpValueName,DWORD Reserved,DWORD dwType,BYTE *lpData,DWORD cbData)

{
  LSTATUS LVar1;

                    /* WARNING: Could not recover jumptable at 0x0040dcc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = RegSetValueExW(hKey,lpValueName,Reserved,dwType,lpData,cbData);
  return LVar1;
}
