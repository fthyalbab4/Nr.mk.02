// rea decompile_all
// name: FUN_004ab09c
// address: 0x4ab09c
// body: available
// range: 0x4ab09c-0x4ab107 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004ab09c(undefined4 param_1,int param_2)

{
  char cVar1;
  SHORT SVar2;
  HWND hWnd;
  HWND hWndParent;
  BOOL BVar3;

  cVar1 = FUN_00405d08(param_1);
  if (cVar1 == '\0') {
    hWnd = GetFocus();
    hWndParent = (HWND)FUN_004f76a8(param_1);
    BVar3 = IsChild(hWndParent,hWnd);
    if (BVar3 == 0) goto LAB_004ab0fb;
  }
  if ((*(short *)(param_2 + 4) == 9) && (SVar2 = GetKeyState(0x11), SVar2 < 0)) {
    SVar2 = GetKeyState(0x10);
    FUN_004aae78(param_1,-1 < SVar2,1);
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
LAB_004ab0fb:
  FUN_004f68d8(param_1,param_2);
  return;
}
