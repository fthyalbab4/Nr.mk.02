// rea decompile_all
// name: FUN_004b8ea0
// address: 0x4b8ea0
// body: available
// range: 0x4b8ea0-0x4b8eb0 inclusive
// range: 0x4b8ec5-0x4b8f0f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_004b8ea0(undefined4 param_1,undefined4 param_2)

{
  HWND hWnd;
  WPARAM wParam;
  uint uVar1;
  uint lParam;

  switch(param_2) {
  case 0:
    lParam = 4;
    break;
  case 1:
    lParam = 8;
    break;
  case 2:
    lParam = 1;
    break;
  case 3:
    lParam = 2;
    break;
  case 4:
    lParam = 0x20;
    break;
  default:
    lParam = 0;
  }
  hWnd = (HWND)FUN_004b8b7c(param_1);
  wParam = FUN_004b920c(param_1);
  uVar1 = SendMessageW(hWnd,0x102c,wParam,lParam);
  return (lParam & uVar1) != 0;
}
