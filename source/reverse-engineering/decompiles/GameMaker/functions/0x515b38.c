// rea decompile_all
// name: FUN_00515b38
// address: 0x515b38
// body: available
// range: 0x515b38-0x515b92 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00515b38(int *param_1)

{
  char cVar1;
  LPARAM lParam;
  HWND hWnd;
  int iVar2;
  UINT Msg;
  WPARAM wParam;

  if (*PTR_DAT_00781e70 == '\0') {
    FUN_004f76a8(param_1);
    iVar2 = FUN_005130e4();
    if (iVar2 != 0) {
      (**(code **)(*param_1 + 0x90))();
    }
  }
  else {
    cVar1 = FUN_004f7a54(param_1);
    if ((cVar1 != '\0') && (*(char *)((int)param_1 + 0x299) != '\x03')) {
      lParam = FUN_00518f4c(param_1);
      wParam = 1;
      Msg = 0x80;
      hWnd = (HWND)FUN_004f76a8(param_1);
      SendMessageW(hWnd,Msg,wParam,lParam);
      return;
    }
  }
  return;
}
