// rea decompile_all
// name: FUN_006605b0
// address: 0x6605b0
// body: available
// range: 0x6605b0-0x660643 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006605b0(int param_1)

{
  char cVar1;
  WPARAM WVar2;
  HWND pHVar3;
  UINT UVar4;
  LPARAM LVar5;
  int nCmdShow;

  cVar1 = *(char *)(param_1 + 0xb0);
  if (cVar1 == '\0') {
    LVar5 = 0;
    WVar2 = FUN_004f76a8(*(undefined4 *)(param_1 + 0xa0));
    UVar4 = 0x222;
    pHVar3 = (HWND)FUN_004f76a8(*(undefined4 *)(param_1 + 0xa0));
    pHVar3 = GetParent(pHVar3);
    SendMessageW(pHVar3,UVar4,WVar2,LVar5);
    return;
  }
  if (cVar1 == '\x01') {
    FUN_0051a7e8(*(undefined4 *)(param_1 + 0xa0));
    return;
  }
  if (cVar1 == '\x02') {
    LVar5 = 0;
    WVar2 = FUN_004f76a8(*(undefined4 *)(param_1 + 0xa0));
    UVar4 = 0x223;
    pHVar3 = (HWND)FUN_004f76a8(*(undefined4 *)(param_1 + 0xa0));
    pHVar3 = GetParent(pHVar3);
    SendMessageW(pHVar3,UVar4,WVar2,LVar5);
    return;
  }
  if (cVar1 == '\x03') {
    nCmdShow = 6;
    pHVar3 = (HWND)FUN_004f76a8(*(undefined4 *)(param_1 + 0xa0));
    ShowWindow(pHVar3,nCmdShow);
  }
  return;
}
