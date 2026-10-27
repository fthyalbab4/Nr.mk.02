// rea decompile_all
// name: FUN_00597750
// address: 0x597750
// body: available
// range: 0x597750-0x5977fd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00597750(int *param_1,int *param_2,char param_3)

{
  bool bVar1;
  char cVar2;
  HWND pHVar3;
  BOOL BVar4;
  int cy;
  int cx;
  HWND hWndInsertAfter;
  int X;
  int Y;
  UINT uFlags;

  cVar2 = FUN_0040c490(param_2);
  if (cVar2 != '\0') {
    FUN_005976a8(param_1);
    return;
  }
  (**(code **)(*param_1 + 0xa8))();
  if (param_3 == '\0') {
    pHVar3 = (HWND)FUN_004c45dc(param_1);
    BVar4 = IsWindowVisible(pHVar3);
    if (BVar4 != 0) {
      bVar1 = false;
      goto LAB_00597796;
    }
  }
  bVar1 = true;
LAB_00597796:
  FUN_00597624(param_1);
  uFlags = 0x48;
  cy = param_2[3] - param_2[1];
  X = *param_2;
  cx = param_2[2] - X;
  Y = param_2[1];
  hWndInsertAfter = (HWND)0x0;
  pHVar3 = (HWND)FUN_004c45dc(param_1);
  SetWindowPos(pHVar3,hWndInsertAfter,X,Y,cx,cy,uFlags);
  (**(code **)(*param_1 + 0x124))();
  if (bVar1) {
    FUN_00597624(param_1);
  }
  cVar2 = FUN_00406268(param_1[0xb0]);
  if (cVar2 != '\0') {
    pHVar3 = (HWND)FUN_004c45dc(param_1);
    SetFocus(pHVar3);
  }
  return;
}
