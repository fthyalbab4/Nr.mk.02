// rea decompile_all
// name: FUN_0048f438
// address: 0x48f438
// body: available
// range: 0x48f438-0x48f4b2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0048f438(int param_1)

{
  HWND hWnd;
  HDC pHVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  HGDIOBJ pvVar4;
  HRGN hrgnClip;
  DWORD flags;

  flags = 0x412;
  hrgnClip = (HRGN)0x0;
  hWnd = (HWND)FUN_004f76a8(*(undefined4 *)(param_1 + 0x34));
  pHVar1 = GetDCEx(hWnd,hrgnClip,flags);
  *(HDC *)(param_1 + 0x1c8) = pHVar1;
  if (*(char *)(param_1 + 0x1f0) == '\x03') {
    if (*(int *)(param_1 + 0x1b8) == 0) {
      uVar2 = FUN_0045ba60(&LAB_00454f60,1);
      *(undefined4 *)(param_1 + 0x1b8) = uVar2;
      uVar3 = FUN_0046619c(0,0xffffff);
      FUN_0045bbf8(uVar2,uVar3);
    }
    pvVar4 = (HGDIOBJ)FUN_0045bc84(*(undefined4 *)(param_1 + 0x1b8));
    pvVar4 = SelectObject(*(HDC *)(param_1 + 0x1c8),pvVar4);
    *(HGDIOBJ *)(param_1 + 0x1ec) = pvVar4;
  }
  return;
}
