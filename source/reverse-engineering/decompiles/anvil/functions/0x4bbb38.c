// rea decompile_all
// name: FUN_004bbb38
// address: 0x4bbb38
// body: available
// range: 0x4bbb38-0x4bbbca inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004bbb38(int param_1,char param_2,char param_3)

{
  byte bVar1;
  char cVar2;
  HWND hWnd;
  RECT *lpRect;
  int bErase;
  RECT local_18;
  int local_8;

  if (param_2 == '\0') {
    if ((*(byte *)(param_1 + 0x1c) & 0x10) == 0) {
      return;
    }
    if ((*(byte *)(param_1 + 0x55) & 8) != 0) {
      return;
    }
    if ((*(byte *)(param_1 + 0x51) & 4) != 0) {
      return;
    }
  }
  if (*(int *)(param_1 + 0x34) == 0) {
    return;
  }
  local_8 = param_1;
  cVar2 = FUN_004c4988(*(undefined4 *)(param_1 + 0x34));
  if (cVar2 != '\0') {
    FUN_004baee8(local_8,&local_18);
    if (((param_3 == '\0') && ((*(byte *)(*(int *)(local_8 + 0x34) + 0x50) & 0x40) == 0)) &&
       (cVar2 = FUN_004bbab0(), cVar2 == '\0')) {
      bVar1 = 1;
    }
    else {
      bVar1 = 0;
    }
    bErase = -(uint)bVar1;
    lpRect = &local_18;
    hWnd = (HWND)FUN_004c45dc(*(undefined4 *)(local_8 + 0x34));
    InvalidateRect(hWnd,lpRect,bErase);
    return;
  }
  return;
}
