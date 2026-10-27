// rea decompile_all
// name: FUN_004ed254
// address: 0x4ed254
// body: available
// range: 0x4ed254-0x4ed29d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


HWND FUN_004ed254(int param_1)

{
  HWND local_8;

  local_8 = (HWND)0x0;
  if (*(short *)(param_1 + 0xfa) != 0) {
    (**(code **)(param_1 + 0xf8))(*(undefined4 *)(param_1 + 0xfc),&local_8);
  }
  if (local_8 == (HWND)0x0) {
    local_8 = GetActiveWindow();
  }
  if (local_8 == (HWND)0x0) {
    local_8 = GetLastActivePopup(*(HWND *)(param_1 + 0x170));
  }
  return local_8;
}
