// rea decompile_all
// name: FUN_0059b368
// address: 0x59b368
// body: available
// range: 0x59b368-0x59b3e6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0059b368(ushort param_1,int param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  HWND pHVar2;
  int iVar3;
  uint nBar;
  uint nBar_00;
  BOOL bRedraw;

  cVar1 = FUN_00406268(*(undefined4 *)(param_4 + -4));
  if ((cVar1 != '\0') && (param_1 == 0)) {
    if (*(int *)(*(int *)(param_4 + -4) + 0x284) == 1) {
      param_2 = (*(int *)(param_4 + -8) - *(int *)(param_4 + -0xc)) - param_2;
    }
    else {
      param_2 = 0x7f - param_2;
    }
  }
  nBar = (uint)param_1;
  nBar_00 = nBar;
  pHVar2 = (HWND)FUN_004c45dc(*(undefined4 *)(param_4 + -4));
  iVar3 = GetScrollPos(pHVar2,nBar_00);
  if (param_2 != iVar3) {
    bRedraw = -1;
    pHVar2 = (HWND)FUN_004c45dc(*(undefined4 *)(param_4 + -4));
    SetScrollPos(pHVar2,nBar,param_2,bRedraw);
  }
  return;
}
