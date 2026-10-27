// rea decompile_all
// name: FUN_00406884
// address: 0x406884
// body: available
// range: 0x406884-0x4068a9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00406884(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *in_FS_OFFSET;

  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 != (int *)0x0) {
    piVar2 = (int *)*in_FS_OFFSET;
    if (piVar1 == piVar2) {
      *in_FS_OFFSET = *piVar1;
      return;
    }
    for (; piVar2 != (int *)0xffffffff; piVar2 = (int *)*piVar2) {
      if ((int *)*piVar2 == piVar1) {
        *piVar2 = *piVar1;
        return;
      }
    }
  }
  return;
}
