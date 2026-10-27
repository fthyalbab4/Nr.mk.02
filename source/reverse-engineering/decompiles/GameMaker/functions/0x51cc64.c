// rea decompile_all
// name: FUN_0051cc64
// address: 0x51cc64
// body: available
// range: 0x51cc64-0x51cd0b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0051cc64(int param_1,short param_2)

{
  POINT Point;
  HWND hWnd;
  DWORD DVar1;
  DWORD DVar2;
  uint uVar3;
  HCURSOR hCursor;
  tagPOINT local_20;
  uint local_18;
  int local_14;

  if (param_2 != *(short *)(param_1 + 0x48)) {
    *(short *)(param_1 + 0x48) = param_2;
    if (param_2 == 0) {
      GetCursorPos(&local_20);
      Point.y = local_20.y;
      Point.x = local_20.x;
      hWnd = WindowFromPoint(Point);
      if (hWnd != (HWND)0x0) {
        DVar1 = GetWindowThreadProcessId(hWnd,(LPDWORD)0x0);
        DVar2 = GetCurrentThreadId();
        if (DVar1 == DVar2) {
          local_18 = local_20.x;
          local_14 = local_20.y;
          uVar3 = SendMessageW(hWnd,0x84,0,local_20.x & 0xffffU | local_20.y << 0x10);
          SendMessageW(hWnd,0x20,(WPARAM)hWnd,uVar3 & 0xffff | 0x2000000);
          return;
        }
      }
    }
    hCursor = (HCURSOR)FUN_0051cc38(param_1,(int)param_2);
    SetCursor(hCursor);
  }
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
  return;
}
