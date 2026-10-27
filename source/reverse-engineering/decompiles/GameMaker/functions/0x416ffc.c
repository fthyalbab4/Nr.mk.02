// rea decompile_all
// name: FUN_00416ffc
// address: 0x416ffc
// body: available
// range: 0x416ffc-0x41707e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


DWORD FUN_00416ffc(LPWORD param_1)

{
  BOOL BVar1;
  DWORD DVar2;
  _FILETIME local_10;

  do {
    if ((*(uint *)(param_1 + 0x10) & *(uint *)(param_1 + 0xc)) == 0) {
      FileTimeToLocalFileTime((FILETIME *)(param_1 + 0x1a),&local_10);
      FileTimeToDosDateTime(&local_10,param_1 + 1,param_1);
      *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 0x20);
      *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_1 + 0x1e);
      *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 0x10);
      FUN_004080c8(param_1 + 10,param_1 + 0x26,0x104);
      return 0;
    }
    BVar1 = FindNextFileW(*(HANDLE *)(param_1 + 0xe),(LPWIN32_FIND_DATAW)(param_1 + 0x10));
  } while (BVar1 != 0);
  DVar2 = GetLastError();
  return DVar2;
}
