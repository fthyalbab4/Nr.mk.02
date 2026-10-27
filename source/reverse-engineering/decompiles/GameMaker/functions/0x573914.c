// rea decompile_all
// name: FUN_00573914
// address: 0x573914
// body: available
// range: 0x573914-0x573965 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00573914(int param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  HWND hWnd;
  RECT *lpRect;
  BOOL bErase;
  undefined4 local_24;
  undefined4 local_20;
  RECT local_1c;

  FUN_00573acc(param_1,&local_1c);
  local_24 = param_2;
  local_20 = param_3;
  cVar1 = FUN_0040c15c(&local_1c,&local_24);
  if (cVar1 != *(char *)(param_1 + 0x2de)) {
    *(char *)(param_1 + 0x2de) = cVar1;
    bErase = 0;
    lpRect = &local_1c;
    hWnd = (HWND)FUN_004f76a8(param_1);
    InvalidateRect(hWnd,lpRect,bErase);
  }
  return;
}
