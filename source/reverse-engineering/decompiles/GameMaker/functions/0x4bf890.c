// rea decompile_all
// name: FUN_004bf890
// address: 0x4bf890
// body: available
// range: 0x4bf890-0x4bf8f1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004bf890(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  HWND pHVar2;
  RECT *lpRect;
  int iVar3;
  int iVar4;
  BOOL bErase;

  FUN_00503a6c();
  cVar1 = FUN_00503b78();
  if (cVar1 == '\0') {
    FUN_004f54bc(param_1,param_2);
  }
  else {
    iVar3 = 1;
    pHVar2 = (HWND)FUN_004f76a8(param_1);
    iVar3 = GetScrollPos(pHVar2,iVar3);
    FUN_004f54bc(param_1,param_2);
    iVar4 = 1;
    pHVar2 = (HWND)FUN_004f76a8(param_1);
    iVar4 = GetScrollPos(pHVar2,iVar4);
    if (iVar4 != iVar3) {
      bErase = -1;
      lpRect = (RECT *)0x0;
      pHVar2 = (HWND)FUN_004f76a8(param_1);
      InvalidateRect(pHVar2,lpRect,bErase);
    }
  }
  return;
}
