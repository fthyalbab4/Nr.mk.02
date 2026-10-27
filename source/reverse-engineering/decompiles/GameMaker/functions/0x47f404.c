// rea decompile_all
// name: FUN_0047f404
// address: 0x47f404
// body: available
// range: 0x47f404-0x47f455 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0047f404(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  LPARAM lParam;
  HWND hWnd;
  UINT Msg;
  WPARAM wParam;
  int *piVar2;
  int local_10;
  int local_c;

  piVar2 = &local_c;
  uVar1 = FUN_004f76a8(param_1,param_2,param_3,piVar2);
  FUN_0040efe8(uVar1,0x140,&local_10,piVar2);
  local_c = param_2 + local_10;
  lParam = CONCAT22((undefined2)local_c,(undefined2)local_10);
  wParam = 0;
  Msg = 0x142;
  hWnd = (HWND)FUN_004f76a8(param_1);
  SendMessageW(hWnd,Msg,wParam,lParam);
  return;
}
