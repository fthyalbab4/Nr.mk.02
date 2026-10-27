// rea decompile_all
// name: FUN_006f8f10
// address: 0x6f8f10
// body: available
// range: 0x6f8f10-0x6f8f59 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006f8f10(int param_1)

{
  int *piVar1;
  int iVar2;

  (**(code **)(**(int **)(*(int *)(param_1 + 0x394) + 0x280) + 0x44))();
  if (((*(int *)(param_1 + 0x420) != 0) && (*(int *)(param_1 + 0x434) != 0)) &&
     (iVar2 = *(int *)(*(int *)(param_1 + 0x434) + 8), -1 < iVar2 + -1)) {
    do {
      piVar1 = *(int **)(*(int *)(param_1 + 0x394) + 0x280);
      (**(code **)(*piVar1 + 0x38))(piVar1,0);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}
