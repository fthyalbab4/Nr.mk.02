// rea decompile_all
// name: FUN_004b6800
// address: 0x4b6800
// body: available
// range: 0x4b6800-0x4b6846 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004b6800(undefined4 param_1,int *param_2)

{
  HWND hWnd;
  LRESULT LVar1;
  undefined4 uVar2;
  UINT Msg;
  WPARAM wParam;
  LPARAM lParam;
  int *piVar3;
  int local_14;
  int local_10;

  lParam = 0;
  wParam = param_2[1];
  Msg = 0xbb;
  hWnd = (HWND)FUN_004f76a8(param_1);
  LVar1 = SendMessageW(hWnd,Msg,wParam,lParam);
  piVar3 = &local_14;
  local_14 = LVar1 + *param_2;
  local_10 = local_14;
  uVar2 = FUN_004f76a8(param_1);
  FUN_0040efb8(uVar2,0x437,0,piVar3);
  return;
}
