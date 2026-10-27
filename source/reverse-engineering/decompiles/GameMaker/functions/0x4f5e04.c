// rea decompile_all
// name: FUN_004f5e04
// address: 0x4f5e04
// body: available
// range: 0x4f5e04-0x4f5e5e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004f5e04(int param_1,undefined4 param_2,LPRECT param_3,undefined4 param_4,
                 undefined4 *param_5)

{
  HWND hWnd;
  LPRECT lpRect;
  undefined4 local_c;
  undefined4 uStack_8;

  local_c = *param_5;
  uStack_8 = param_5[1];
  lpRect = param_3;
  hWnd = (HWND)FUN_004f76a8(param_1);
  GetWindowRect(hWnd,lpRect);
  InflateRect(param_3,10,10);
  if (*(short *)(param_1 + 0x212) != 0) {
    (**(code **)(param_1 + 0x210))
              (*(undefined4 *)(param_1 + 0x214),param_1,param_2,param_4,&local_c,param_3);
  }
  return;
}
