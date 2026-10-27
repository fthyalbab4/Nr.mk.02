// rea decompile_all
// name: FUN_0047e9f0
// address: 0x47e9f0
// body: available
// range: 0x47e9f0-0x47ea6b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0047e9f0(int param_1,int param_2)

{
  LPRECT lprc;
  uint uVar1;

  lprc = *(LPRECT *)(param_2 + 8);
  InflateRect(lprc,-*(int *)(param_1 + 0x1b8),-*(int *)(param_1 + 0x1b8));
  uVar1 = (uint)(*(char *)(param_1 + 0x271) != '\0');
  if (*(char *)(param_1 + 0x272) != '\0') {
    uVar1 = uVar1 + 1;
  }
  if ((*(byte *)(param_1 + 0x270) & 1) != 0) {
    lprc->left = lprc->left + uVar1;
  }
  if ((*(byte *)(param_1 + 0x270) & 2) != 0) {
    lprc->top = lprc->top + uVar1;
  }
  if ((*(byte *)(param_1 + 0x270) & 4) != 0) {
    lprc->right = lprc->right - uVar1;
  }
  if ((*(byte *)(param_1 + 0x270) & 8) != 0) {
    lprc->bottom = lprc->bottom - uVar1;
  }
  FUN_004c5558(param_1,param_2);
  return;
}
