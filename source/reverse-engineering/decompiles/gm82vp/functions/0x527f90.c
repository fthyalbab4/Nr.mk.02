// rea decompile_all
// name: FUN_00527f90
// address: 0x527f90
// body: available
// range: 0x527f90-0x527ff6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00527f90(int param_1)

{
  char cVar1;
  int iVar2;

  if ((*(int **)(param_1 + 8) != (int *)0x0) &&
     (iVar2 = (**(code **)(**(int **)(param_1 + 8) + 0x28))(), iVar2 != 0)) {
    iVar2 = (**(code **)(**(int **)(param_1 + 8) + 0x28))();
    return iVar2;
  }
  iVar2 = *(int *)(param_1 + 0x14);
  if (iVar2 == 0) {
    cVar1 = FUN_0053065c(*(undefined4 *)(param_1 + 4));
    if (cVar1 == '\0') {
      if (*(int *)(*(int *)(param_1 + 0x20) + 8) < 1) {
        iVar2 = (**(code **)(**(int **)(param_1 + 4) + 0x28))();
      }
      else {
        iVar2 = FUN_005246a8(*(int *)(param_1 + 0x20));
        *(int *)(param_1 + 0x14) = iVar2;
      }
    }
    else {
      iVar2 = FUN_0051ec34();
      *(int *)(param_1 + 0x14) = iVar2;
    }
  }
  return iVar2;
}
