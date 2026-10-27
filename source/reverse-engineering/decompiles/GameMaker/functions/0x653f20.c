// rea decompile_all
// name: FUN_00653f20
// address: 0x653f20
// body: available
// range: 0x653f20-0x653fca inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00653f20(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;

  (**(code **)(**(int **)(*(int *)(param_1 + 0x3e4) + 0x2ac) + 0x44))();
  iVar3 = 0x11;
  piVar2 = (int *)PTR_DAT_00781f8c;
  do {
    if (*piVar2 != 0) {
      piVar1 = *(int **)(*(int *)(param_1 + 0x3e4) + 0x2ac);
      (**(code **)(*piVar1 + 0x38))(piVar1,*piVar2);
    }
    piVar2 = piVar2 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  (**(code **)(**(int **)(*(int *)(param_1 + 0x404) + 0x2ac) + 0x44))();
  iVar3 = 0x11;
  piVar2 = (int *)PTR_DAT_00782688;
  do {
    if (*piVar2 != 0) {
      piVar1 = *(int **)(*(int *)(param_1 + 0x404) + 0x2ac);
      (**(code **)(*piVar1 + 0x38))(piVar1,*piVar2);
    }
    piVar2 = piVar2 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  (**(code **)(**(int **)(param_1 + 0x3f8) + 0xf0))(*(int **)(param_1 + 0x3f8),*PTR_DAT_007823b0);
  (**(code **)(**(int **)(param_1 + 0x3fc) + 0xf0))(*(int **)(param_1 + 0x3fc),*PTR_DAT_00782758);
  return;
}
