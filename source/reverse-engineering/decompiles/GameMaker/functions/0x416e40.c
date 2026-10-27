// rea decompile_all
// name: FUN_00416e40
// address: 0x416e40
// body: available
// range: 0x416e40-0x416e87 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_00416e40(undefined4 param_1)

{
  char cVar1;
  LPCWSTR lpFileName;
  DWORD DVar2;

  lpFileName = (LPCWSTR)FUN_00407f44(param_1);
  DVar2 = GetFileAttributesW(lpFileName);
  if (DVar2 != 0xffffffff) {
    return (DVar2 & 0x10) == 0;
  }
  DVar2 = GetLastError();
  if ((((DVar2 != 2) && (DVar2 != 3)) && (DVar2 != 0x7b)) &&
     (cVar1 = FUN_00416e00(param_1), cVar1 != '\0')) {
    return true;
  }
  return false;
}
