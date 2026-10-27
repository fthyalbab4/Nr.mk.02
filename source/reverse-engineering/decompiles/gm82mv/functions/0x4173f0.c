// rea decompile_all
// name: FUN_004173f0
// address: 0x4173f0
// body: available
// range: 0x4173f0-0x417480 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004173f0(undefined4 param_1,int *param_2)

{
  LPCWSTR lpFileName;
  LPWSTR lpBuffer;
  int iVar1;
  DWORD DVar2;
  WCHAR *lpBuffer_00;
  LPWSTR *ppWVar3;
  LPWSTR pWStack_220;
  WCHAR local_21c [260];
  int local_14;

  ppWVar3 = &pWStack_220;
  lpBuffer_00 = local_21c;
  DVar2 = 0x104;
  lpFileName = (LPCWSTR)FUN_00408220(param_1);
  DVar2 = GetFullPathNameW(lpFileName,DVar2,lpBuffer_00,ppWVar3);
  ppWVar3 = &pWStack_220;
  if ((int)DVar2 < 0x105) {
    FUN_004082d0(param_2,local_21c,DVar2);
  }
  else if (0 < (int)DVar2) {
    FUN_00408520(param_2,DVar2);
    lpBuffer = (LPWSTR)FUN_00408220(*param_2);
    DVar2 = GetFullPathNameW(lpFileName,DVar2,lpBuffer,ppWVar3);
    local_14 = *param_2;
    iVar1 = 0;
    if (local_14 != 0) {
      iVar1 = *(int *)(local_14 + -4);
    }
    if ((int)DVar2 < iVar1) {
      FUN_00408520(param_2,DVar2);
    }
  }
  return;
}
