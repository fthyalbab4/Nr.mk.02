// rea decompile_all
// name: FUN_004ad0b4
// address: 0x4ad0b4
// body: available
// range: 0x4ad0b4-0x4ad0ee inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004ad0b4(int param_1,uint param_2)

{
  HWND hWnd;
  undefined4 local_2c;
  undefined4 local_28;
  uint local_c;

  if (*(char *)(param_1 + 0x24) == '\0') {
    local_2c = 0x40;
    local_28 = *(undefined4 *)(param_1 + 0x10);
    local_c = param_2 & 0x7f;
    hWnd = (HWND)FUN_004ac860();
    SendMessageW(hWnd,0x113f,0,(LPARAM)&local_2c);
  }
  return;
}
