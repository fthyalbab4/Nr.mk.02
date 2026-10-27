// rea decompile_all
// name: FUN_004b3db0
// address: 0x4b3db0
// body: available
// range: 0x4b3db0-0x4b3e57 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004b3db0(int param_1,char param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint wParam;
  HWND hWnd;
  UINT Msg;
  LPARAM lParam;

  if (param_2 != *(char *)(param_1 + 0x290)) {
    *(char *)(param_1 + 0x290) = param_2;
    if (param_2 == '\x01') {
      uVar2 = FUN_004b3a88(param_1);
      *(undefined4 *)(param_1 + 0x280) = uVar2;
      FUN_004f5ff8(param_1,0);
    }
    iVar3 = FUN_00503a6c();
    if (*(char *)(iVar3 + 5) != '\0') {
      cVar1 = FUN_0041d030(5,1);
      if (cVar1 != '\0') {
        cVar1 = FUN_004f7a54(param_1);
        if ((cVar1 != '\0') && ((*(byte *)(param_1 + 0x1c) & 0x10) == 0)) {
          lParam = *(LPARAM *)(param_1 + 0x28c);
          wParam = (uint)(*(char *)(param_1 + 0x290) == '\x01');
          Msg = 0x40a;
          hWnd = (HWND)FUN_004f76a8(param_1);
          SendMessageW(hWnd,Msg,wParam,lParam);
        }
      }
    }
    FUN_004f3af0(param_1);
    if (*(char *)(param_1 + 0x290) == '\0') {
      FUN_004b3c98(param_1,*(undefined4 *)(param_1 + 0x280));
    }
  }
  return;
}
