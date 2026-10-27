// rea decompile_all
// name: FUN_004f7a60
// address: 0x4f7a60
// body: available
// range: 0x4f7a60-0x4f7b7a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004f7a60(int param_1)

{
  LONG LVar1;
  BOOL BVar2;
  uint uVar3;
  HWND hWnd;
  tagPOINT local_50;
  tagRECT local_48;
  WINDOWPLACEMENT local_38;

  BVar2 = IsIconic(*(HWND *)(param_1 + 600));
  if (BVar2 == 0) {
    GetWindowRect(*(HWND *)(param_1 + 600),&local_48);
  }
  else {
    local_38.length = 0x2c;
    GetWindowPlacement(*(HWND *)(param_1 + 600),&local_38);
    local_48.left = local_38.rcNormalPosition.left;
    local_48.top = local_38.rcNormalPosition.top;
    local_48.right = local_38.rcNormalPosition.right;
    local_48.bottom = local_38.rcNormalPosition.bottom;
  }
  uVar3 = GetWindowLongW(*(HWND *)(param_1 + 600),-0x10);
  if ((uVar3 & 0x40000000) != 0) {
    hWnd = (HWND)GetWindowLongW(*(HWND *)(param_1 + 600),-8);
    if (hWnd != (HWND)0x0) {
      uVar3 = GetWindowLongW(hWnd,-0x14);
      LVar1 = local_48.left;
      if ((uVar3 & 0x400000) != 0) {
        local_48.left = local_48.right;
        local_48.right = LVar1;
      }
      local_50.x = local_48.left;
      local_50.y = local_48.top;
      ScreenToClient(hWnd,&local_50);
      local_48.left = local_50.x;
      local_48.top = local_50.y;
      local_50.x = local_48.right;
      local_50.y = local_48.bottom;
      ScreenToClient(hWnd,&local_50);
      local_48.right = local_50.x;
      local_48.bottom = local_50.y;
    }
  }
  *(LONG *)(param_1 + 0x40) = local_48.left;
  *(LONG *)(param_1 + 0x44) = local_48.top;
  *(LONG *)(param_1 + 0x48) = local_48.right - local_48.left;
  *(LONG *)(param_1 + 0x4c) = local_48.bottom - local_48.top;
  FUN_004edaf4(param_1);
  return;
}
