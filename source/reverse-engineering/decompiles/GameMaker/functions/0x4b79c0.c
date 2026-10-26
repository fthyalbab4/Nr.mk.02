// rea decompile_all
// name: FUN_004b79c0
// address: 0x4b79c0
// body: available
// range: 0x4b79c0-0x4b7a2b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004b79c0(int *param_1,char param_2)

{
  char cVar1;
  HWND hWnd;
  UINT Msg;
  WPARAM wParam;
  LPARAM lParam;

  if (param_2 != *(char *)((int)param_1 + 0x2a1)) {
    *(char *)((int)param_1 + 0x2a1) = param_2;
    if ((*(ushort *)(param_1 + 7) & 0x41) == 0) {
      (**(code **)(*param_1 + 0x98))
                (param_1,param_1[0x10],param_1[0x11],param_1[0x12],param_1[0x13]);
    }
    cVar1 = FUN_004f7a54(param_1);
    if (cVar1 != '\0') {
      lParam = 0;
      wParam = 0;
      Msg = 0x469;
      hWnd = (HWND)FUN_004f76a8(param_1);
      SendMessageW(hWnd,Msg,wParam,lParam);
    }
    FUN_004f3af0(param_1);
  }
  return;
}
