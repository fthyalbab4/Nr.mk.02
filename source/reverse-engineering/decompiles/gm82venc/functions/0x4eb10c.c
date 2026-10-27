// rea decompile_all
// name: FUN_004eb10c
// address: 0x4eb10c
// body: available
// range: 0x4eb10c-0x4eb163 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004eb10c(int param_1)

{
  HWND pHVar1;
  BOOL BVar2;

  if ((*(char *)(param_1 + 0xd3) == '\0') || (*(int *)(param_1 + 0x44) == 0)) {
    pHVar1 = *(HWND *)(param_1 + 0x170);
  }
  else {
    pHVar1 = (HWND)FUN_004c45dc(*(undefined4 *)(param_1 + 0x44));
  }
  if (pHVar1 != (HWND)0x0) {
    pHVar1 = GetLastActivePopup(pHVar1);
    if ((pHVar1 != (HWND)0x0) && (pHVar1 != *(HWND *)(param_1 + 0x170))) {
      BVar2 = IsWindowVisible(pHVar1);
      if (BVar2 != 0) {
        BVar2 = IsWindowEnabled(pHVar1);
        if (BVar2 != 0) {
          SetForegroundWindow(pHVar1);
        }
      }
    }
  }
  return;
}
