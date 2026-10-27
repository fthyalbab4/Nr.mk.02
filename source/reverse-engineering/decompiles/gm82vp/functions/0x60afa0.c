// rea decompile_all
// name: FUN_0060afa0
// address: 0x60afa0
// body: available
// range: 0x60afa0-0x60b090 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0060afa0(int param_1,int param_2,int param_3,char param_4)

{
  int iVar1;
  int iVar2;

  iVar1 = *(int *)(param_1 + 0x88);
  if (-1 < iVar1 + -1) {
    iVar2 = 0;
    do {
      if ((((*(double *)(*(int *)(param_1 + 0x8c) + iVar2 * 0x60) <= (double)param_2) &&
           ((double)param_2 <
            (double)*(int *)(*(int *)(param_1 + 0x8c) + 0x1c + iVar2 * 0x60) *
            *(double *)(*(int *)(param_1 + 0x8c) + 0x38 + iVar2 * 0x60) +
            *(double *)(*(int *)(param_1 + 0x8c) + iVar2 * 0x60))) &&
          (*(double *)(*(int *)(param_1 + 0x8c) + 8 + iVar2 * 0x60) <= (double)param_3)) &&
         (((double)param_3 <
           (double)*(int *)(*(int *)(param_1 + 0x8c) + 0x20 + iVar2 * 0x60) *
           *(double *)(*(int *)(param_1 + 0x8c) + 0x40 + iVar2 * 0x60) +
           *(double *)(*(int *)(param_1 + 0x8c) + 8 + iVar2 * 0x60) &&
          (*(double *)(*(int *)(param_1 + 0x8c) + 0x28 + iVar2 * 0x60) < 0.0 == (bool)param_4)))) {
        *(int *)(param_1 + 0x90) = iVar2;
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return -1;
}
