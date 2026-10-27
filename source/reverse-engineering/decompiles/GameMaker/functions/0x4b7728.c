// rea decompile_all
// name: FUN_004b7728
// address: 0x4b7728
// body: available
// range: 0x4b7728-0x4b777b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004b7728(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  WPARAM wParam;
  HWND hWnd;
  UINT Msg;
  LPARAM lParam;

  iVar1 = *(int *)(param_2 + 0x48);
  iVar2 = *(int *)(param_2 + 0x40);
  lParam = 0;
  wParam = FUN_004f76a8(param_2);
  Msg = 0x469;
  hWnd = (HWND)FUN_004f76a8(param_1);
  SendMessageW(hWnd,Msg,wParam,lParam);
  iVar3 = *(int *)(param_2 + 0x40);
  FUN_004edce0(param_2,iVar1 * 2 - *(int *)(param_2 + 0x48));
  FUN_004edc78(param_2,iVar2 - (iVar3 - iVar2));
  return;
}
