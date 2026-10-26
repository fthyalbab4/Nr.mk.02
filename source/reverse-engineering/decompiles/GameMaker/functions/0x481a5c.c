// rea decompile_all
// name: FUN_00481a5c
// address: 0x481a5c
// body: available
// range: 0x481a5c-0x481ae5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00481a5c(int param_1,uint param_2)

{
  char cVar1;
  HWND pHVar2;
  uint uVar3;
  uint wParam;
  UINT Msg;
  int nIndex;
  LPARAM lParam;

  cVar1 = FUN_004f7a54(param_1);
  if (cVar1 != '\0') {
    if (*(int *)PTR_DAT_00781bfc < 6) {
      wParam = *(uint *)(&DAT_007782a0 + (param_2 & 0xff) * 4);
    }
    else if (*(char *)(param_1 + 0x2b8) == '\x01') {
      wParam = *(uint *)(&DAT_007782a8 + (param_2 & 0xff) * 4);
    }
    else if (*(char *)(param_1 + 0x2b8) == '\x02') {
      wParam = *(uint *)(&DAT_007782b0 + (param_2 & 0xff) * 4);
    }
    else {
      wParam = *(uint *)(&DAT_007782a0 + (param_2 & 0xff) * 4);
    }
    nIndex = -0x10;
    pHVar2 = (HWND)FUN_004f76a8(param_1);
    uVar3 = GetWindowLongW(pHVar2,nIndex);
    if (wParam != (uVar3 & 0xf)) {
      lParam = 1;
      Msg = 0xf4;
      pHVar2 = (HWND)FUN_004f76a8(param_1);
      SendMessageW(pHVar2,Msg,wParam,lParam);
    }
  }
  return;
}
