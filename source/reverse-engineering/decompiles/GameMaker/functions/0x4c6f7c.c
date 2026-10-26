// rea decompile_all
// name: FUN_004c6f7c
// address: 0x4c6f7c
// body: available
// range: 0x4c6f7c-0x4c6fdc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004c6f7c(int param_1,undefined1 param_2)

{
  char cVar1;
  uint uVar2;
  HWND hWnd;
  uint *puVar3;
  uint lParam;
  bool bVar4;
  UINT Msg;
  WPARAM wParam;

  lParam = 0;
  *(undefined1 *)(param_1 + 0x301) = param_2;
  cVar1 = FUN_004f7a54(param_1);
  if (cVar1 != '\0') {
    uVar2 = 0;
    puVar3 = &DAT_00778628;
    do {
      bVar4 = (byte)uVar2 < 7;
      if ((byte)uVar2 < 8) {
        bVar4 = (*(byte *)(param_1 + 0x301) >> (uVar2 & 0x1f) & 1) != 0;
      }
      if (bVar4) {
        lParam = lParam | *puVar3;
      }
      uVar2 = uVar2 + 1;
      puVar3 = puVar3 + 1;
    } while ((char)uVar2 != '\x05');
    wParam = 0;
    Msg = 0x40e;
    hWnd = (HWND)FUN_004f76a8(param_1);
    SendMessageW(hWnd,Msg,wParam,lParam);
  }
  return;
}
