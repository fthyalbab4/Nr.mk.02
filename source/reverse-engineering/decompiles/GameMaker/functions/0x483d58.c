// rea decompile_all
// name: FUN_00483d58
// address: 0x483d58
// body: available
// range: 0x483d58-0x483e42 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00483d58(int *param_1)

{
  HWND pHVar1;
  HWND hWndInsertAfter;
  int X;
  int Y;
  int iVar2;
  int cy;
  WPARAM wParam;
  UINT UVar3;
  int *lParam;

  iVar2 = param_1[0x12];
  cy = param_1[0x13];
  FUN_004f33c4(param_1);
  UVar3 = 0x14;
  Y = param_1[0x11];
  X = param_1[0x10];
  hWndInsertAfter = (HWND)0x0;
  pHVar1 = (HWND)FUN_004f76a8(param_1);
  SetWindowPos(pHVar1,hWndInsertAfter,X,Y,iVar2,cy,UVar3);
  if (param_1[0xa9] != 0) {
    lParam = param_1 + 0xa9;
    wParam = 1;
    UVar3 = 0x192;
    pHVar1 = (HWND)FUN_004f76a8(param_1);
    SendMessageW(pHVar1,UVar3,wParam,(LPARAM)lParam);
  }
  FUN_0048355c(param_1);
  if (param_1[0xad] != 0) {
    FUN_00484a90(param_1,param_1[0xad]);
  }
  if ((param_1[0xa7] != -1) || (param_1[0xaa] != 0)) {
    if ((byte)((char)param_1[0xa8] - 3U) < 2) {
      FUN_00484920(param_1,param_1[0xa7]);
    }
    if (param_1[0xaa] != 0) {
      (**(code **)(*param_1 + 0x124))(param_1,param_1[0xaa]);
      iVar2 = param_1[0xaa];
      param_1[0xaa] = 0;
      FUN_00405a7c(iVar2);
    }
    FUN_00483ad4(param_1,param_1[0xab]);
    (**(code **)(*param_1 + 0xf0))(param_1,param_1[0xac]);
    param_1[0xa7] = -1;
  }
  return;
}
