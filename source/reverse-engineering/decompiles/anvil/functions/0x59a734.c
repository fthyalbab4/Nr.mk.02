// rea decompile_all
// name: FUN_0059a734
// address: 0x59a734
// body: available
// range: 0x59a734-0x59a77b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0059a734(undefined4 param_1,undefined4 *param_2)

{
  char cVar1;
  HWND hWnd;
  RECT *lpRect;
  BOOL bErase;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  RECT local_1c;

  local_2c = *param_2;
  uStack_28 = param_2[1];
  uStack_24 = param_2[2];
  uStack_20 = param_2[3];
  cVar1 = FUN_004c4988(param_1);
  if (cVar1 != '\0') {
    FUN_0059a5a0(param_1,&local_2c,&local_1c,1);
    bErase = 0;
    lpRect = &local_1c;
    hWnd = (HWND)FUN_004c45dc(param_1);
    InvalidateRect(hWnd,lpRect,bErase);
  }
  return;
}
