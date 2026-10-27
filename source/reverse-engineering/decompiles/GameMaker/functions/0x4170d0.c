// rea decompile_all
// name: FUN_004170d0
// address: 0x4170d0
// body: available
// range: 0x4170d0-0x4170f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004170d0(int param_1)

{
  BOOL BVar1;

  BVar1 = FindNextFileW(*(HANDLE *)(param_1 + 0x1c),(LPWIN32_FIND_DATAW)(param_1 + 0x20));
  if (BVar1 != 0) {
    FUN_00416ffc(param_1);
    return;
  }
  GetLastError();
  return;
}
