// rea decompile_all
// name: FUN_00517cb4
// address: 0x517cb4
// body: available
// range: 0x517cb4-0x517d21 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


HWND FUN_00517cb4(HWND param_1)

{
  HWND pHVar1;
  uint uVar2;
  int nIndex;

  pHVar1 = GetParent(param_1);
  while ((pHVar1 != (HWND)0x0 && (uVar2 = GetWindowLongW(pHVar1,-0x14), (uVar2 & 0x80) == 0x80))) {
    pHVar1 = GetParent(pHVar1);
  }
  if (pHVar1 == (HWND)0x0) {
    if (*(int *)(DAT_007882ec + 0x44) != 0) {
      nIndex = -0x14;
      pHVar1 = (HWND)FUN_004f76a8(*(int *)(DAT_007882ec + 0x44));
      uVar2 = GetWindowLongW(pHVar1,nIndex);
      if ((uVar2 & 0x80) == 0) {
        pHVar1 = (HWND)FUN_004f76a8(*(undefined4 *)(DAT_007882ec + 0x44));
        return pHVar1;
      }
    }
    pHVar1 = *(HWND *)(DAT_007882ec + 0x170);
  }
  return pHVar1;
}
