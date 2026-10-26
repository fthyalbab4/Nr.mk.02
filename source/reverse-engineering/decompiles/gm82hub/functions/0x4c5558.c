// rea decompile_all
// name: FUN_004c5558
// address: 0x4c5558
// body: available
// range: 0x4c5558-0x4c55e8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004c5558(int *param_1,int param_2)

{
  LPRECT lprc;
  int iVar1;

  (**(code **)(*param_1 + -0x10))(param_1,param_2);
  lprc = *(LPRECT *)(param_2 + 8);
  InflateRect(lprc,-param_1[0x6e],-param_1[0x6e]);
  if (*(char *)((int)param_1 + 0x1b1) != '\0') {
    iVar1 = 0;
    if (*(char *)((int)param_1 + 0x1af) != '\0') {
      iVar1 = param_1[0x6d];
    }
    if ((char)param_1[0x6c] != '\0') {
      iVar1 = iVar1 + param_1[0x6d];
    }
    if ((*(byte *)((int)param_1 + 0x1ae) & 1) != 0) {
      lprc->left = lprc->left + iVar1;
    }
    if ((*(byte *)((int)param_1 + 0x1ae) & 2) != 0) {
      lprc->top = lprc->top + iVar1;
    }
    if ((*(byte *)((int)param_1 + 0x1ae) & 4) != 0) {
      lprc->right = lprc->right - iVar1;
    }
    if ((*(byte *)((int)param_1 + 0x1ae) & 8) != 0) {
      lprc->bottom = lprc->bottom - iVar1;
    }
  }
  return;
}
