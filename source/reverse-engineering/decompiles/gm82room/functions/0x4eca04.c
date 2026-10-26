// rea decompile_all
// name: FUN_004eca04
// address: 0x4eca04
// body: available
// range: 0x4eca04-0x4eca74 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004eca04(int param_1)

{
  char cVar1;
  HWND pHVar2;
  BOOL BVar3;
  int nCmdShow;

  if (*(int *)(param_1 + 0x84) != 0) {
    cVar1 = FUN_004c4988(*(int *)(param_1 + 0x84));
    if (cVar1 != '\0') {
      pHVar2 = (HWND)FUN_004c45dc(*(undefined4 *)(param_1 + 0x84));
      BVar3 = IsWindowVisible(pHVar2);
      if (BVar3 != 0) {
        cVar1 = (**(code **)(**(int **)(param_1 + 0x84) + 0xfc))();
        if (cVar1 == '\0') {
          FUN_004ec83c(param_1,*(undefined4 *)(param_1 + 0x74),1);
        }
        else {
          nCmdShow = 0;
          pHVar2 = (HWND)FUN_004c45dc(*(undefined4 *)(param_1 + 0x84));
          ShowWindow(pHVar2,nCmdShow);
          FUN_004bb578(*(undefined4 *)(param_1 + 0x84),0);
        }
      }
    }
  }
  return;
}
