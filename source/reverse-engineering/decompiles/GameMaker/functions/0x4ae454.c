// rea decompile_all
// name: FUN_004ae454
// address: 0x4ae454
// body: available
// range: 0x4ae454-0x4ae4a6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004ae454(int param_1,int param_2)

{
  char cVar1;
  HWND hWnd;
  RECT *lpRect;
  BOOL bErase;
  RECT local_18;

  lpRect = &local_18;
  if (*(int *)(param_1 + 8) < 1) {
    while ((param_2 != 0 && (cVar1 = FUN_004ad880(param_2), cVar1 == '\0'))) {
      param_2 = FUN_004ad0f0(param_2);
    }
    if (param_2 != 0) {
      FUN_004ad8ec(param_2,0,&local_18);
      bErase = -1;
      hWnd = (HWND)FUN_004f76a8(*(undefined4 *)(param_1 + 4));
      InvalidateRect(hWnd,lpRect,bErase);
    }
  }
  return;
}
