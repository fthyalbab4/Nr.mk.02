// rea decompile_all
// name: FUN_00416d4c
// address: 0x416d4c
// body: available
// range: 0x416d4c-0x416d98 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


DWORD FUN_00416d4c(undefined4 param_1,uint param_2,int param_3)

{
  LPCWSTR lpFileName;
  HANDLE pvVar1;
  DWORD DVar2;
  LPWIN32_FIND_DATAW lpFindFileData;

  *(uint *)(param_3 + 0x18) = ~param_2 & 0x16;
  lpFindFileData = (LPWIN32_FIND_DATAW)(param_3 + 0x20);
  lpFileName = (LPCWSTR)FUN_00408220(param_1);
  pvVar1 = FindFirstFileW(lpFileName,lpFindFileData);
  *(HANDLE *)(param_3 + 0x1c) = pvVar1;
  if (pvVar1 == (HANDLE)0xffffffff) {
    DVar2 = GetLastError();
  }
  else {
    DVar2 = FUN_00416cc8(param_3);
    if (DVar2 != 0) {
      FUN_00416dc0(param_3);
    }
  }
  return DVar2;
}
