// rea decompile_all
// name: FUN_004b5148
// address: 0x4b5148
// body: available
// range: 0x4b5148-0x4b51c8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004b5148(int param_1,WPARAM param_2,undefined4 param_3)

{
  HWND pHVar1;
  WPARAM wParam;
  LRESULT LVar2;
  undefined4 uVar3;
  UINT UVar4;
  LPARAM LVar5;
  WPARAM *pWVar6;
  WPARAM local_18;
  int local_14;

  if (-1 < (int)param_2) {
    LVar5 = 0;
    UVar4 = 0xbb;
    pHVar1 = (HWND)FUN_004f76a8(*(undefined4 *)(param_1 + 0x1c));
    wParam = SendMessageW(pHVar1,UVar4,param_2,LVar5);
    if (wParam != 0xffffffff) {
      LVar5 = 0;
      UVar4 = 0xc1;
      local_18 = wParam;
      pHVar1 = (HWND)FUN_004f76a8(*(undefined4 *)(param_1 + 0x1c));
      LVar2 = SendMessageW(pHVar1,UVar4,wParam,LVar5);
      pWVar6 = &local_18;
      local_14 = LVar2 + local_18;
      uVar3 = FUN_004f76a8(*(undefined4 *)(param_1 + 0x1c));
      FUN_0040efb8(uVar3,0x437,0,pWVar6);
      uVar3 = FUN_004f76a8(*(undefined4 *)(param_1 + 0x1c));
      FUN_0040ef5c(uVar3,0xc2,0,param_3);
    }
  }
  return;
}
