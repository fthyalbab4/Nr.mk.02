// rea decompile_all
// name: FUN_004ea0f0
// address: 0x4ea0f0
// body: available
// range: 0x4ea0f0-0x4ea196 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004ea0f0(int param_1,undefined1 param_2)

{
  uint uVar1;
  HWND hWnd;
  int iVar2;
  HWND hWndInsertAfter;
  int X;
  int Y;
  int cx;
  int cy;
  UINT uFlags;
  HWND local_10;
  undefined1 local_c;

  local_10 = *(HWND *)(param_1 + 0x170);
  if (local_10 != (HWND)0x0) {
    if (*(int *)(param_1 + 0x94) == 0) {
      local_c = param_2;
      EnumWindows(FUN_004ea03c,(LPARAM)&local_10);
      if (*(int *)(*(int *)(param_1 + 0x90) + 8) != 0) {
        local_10 = GetWindow(local_10,3);
        uVar1 = GetWindowLongW(local_10,-0x14);
        if ((uVar1 & 8) != 0) {
          local_10 = (HWND)0xfffffffe;
        }
        iVar2 = *(int *)(*(int *)(param_1 + 0x90) + 8) + -1;
        if (-1 < iVar2) {
          do {
            uFlags = 0x213;
            cy = 0;
            cx = 0;
            Y = 0;
            X = 0;
            hWndInsertAfter = local_10;
            hWnd = (HWND)FUN_00438ec4(*(undefined4 *)(param_1 + 0x90),iVar2);
            SetWindowPos(hWnd,hWndInsertAfter,X,Y,cx,cy,uFlags);
            iVar2 = iVar2 + -1;
          } while (iVar2 != -1);
        }
      }
    }
    *(int *)(param_1 + 0x94) = *(int *)(param_1 + 0x94) + 1;
  }
  return;
}
