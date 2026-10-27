// rea decompile_all
// name: FUN_004dfc48
// address: 0x4dfc48
// body: available
// range: 0x4dfc48-0x4dfc7f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004dfc48(int param_1)

{
  HWND hWnd;
  uint uVar1;
  uint uVar2;
  int nIndex;

  uVar2 = 0x100000;
  if (*(char *)(param_1 + 0x18) == '\x01') {
    uVar2 = 0x200000;
  }
  if (*(char *)(param_1 + 0x1c) != '\0') {
    nIndex = -0x10;
    hWnd = (HWND)FUN_004c45dc(*(undefined4 *)(param_1 + 4));
    uVar1 = GetWindowLongW(hWnd,nIndex);
    if ((uVar1 & uVar2) != 0) {
      return 1;
    }
  }
  return 0;
}
