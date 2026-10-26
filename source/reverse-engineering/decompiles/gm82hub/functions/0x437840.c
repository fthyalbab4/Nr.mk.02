// rea decompile_all
// name: FUN_00437840
// address: 0x437840
// body: available
// range: 0x437840-0x43789c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00437840(int param_1,int param_2)

{
  int iVar1;
  int iVar2;

  if ((*(int *)(param_1 + 4) != 0) && (iVar1 = FUN_00437680(param_1,param_2), iVar1 != -1)) {
    (**(code **)(**(int **)(param_1 + 4) + 0x48))(*(int **)(param_1 + 4),iVar1);
  }
  if (*(int **)(param_1 + 8) != (int *)0x0) {
    iVar1 = (**(code **)(**(int **)(param_1 + 8) + 0x14))();
    iVar1 = iVar1 + -1;
    if (-1 < iVar1) {
      do {
        iVar2 = (**(code **)(**(int **)(param_1 + 8) + 0x18))(*(int **)(param_1 + 8),iVar1);
        if (iVar2 == param_2) {
          (**(code **)(**(int **)(param_1 + 8) + 0x48))(*(int **)(param_1 + 8),iVar1);
        }
        iVar1 = iVar1 + -1;
      } while (iVar1 != -1);
    }
  }
  return;
}
