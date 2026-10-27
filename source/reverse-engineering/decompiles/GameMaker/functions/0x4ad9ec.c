// rea decompile_all
// name: FUN_004ad9ec
// address: 0x4ad9ec
// body: available
// range: 0x4ad9ec-0x4ada2b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004ad9ec(int param_1)

{
  HWND hWnd;

  FUN_004aebe0(*(undefined4 *)(param_1 + 4));
  if (*(char *)(param_1 + 0x24) == '\0') {
    FUN_004ac874(param_1);
    hWnd = (HWND)FUN_004f76a8();
    SendMessageW(hWnd,0x1102,0x8001,*(LPARAM *)(param_1 + 0x10));
  }
  FUN_004ad0b4(param_1,0);
  return;
}
