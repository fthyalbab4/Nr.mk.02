// rea decompile_all
// name: FUN_0041f2fc
// address: 0x41f2fc
// body: available
// range: 0x41f2fc-0x41f366 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0041f2fc(undefined4 param_1,undefined4 *param_2)

{
  LPCWSTR lpName;
  LPWSTR lpBuffer;
  WCHAR *lpBuffer_00;
  DWORD DVar1;
  WCHAR local_810 [1024];

  lpBuffer_00 = local_810;
  FUN_00408194(param_2,0);
  DVar1 = 0x400;
  lpName = (LPCWSTR)FUN_00408220(param_1);
  DVar1 = GetEnvironmentVariableW(lpName,lpBuffer_00,DVar1);
  if ((int)DVar1 < 0x400) {
    FUN_004082d0(param_2,local_810,DVar1);
  }
  else {
    FUN_00408520(param_2,DVar1 - 1);
    lpBuffer = (LPWSTR)FUN_00408220(*param_2);
    GetEnvironmentVariableW(lpName,lpBuffer,DVar1);
  }
  return;
}
