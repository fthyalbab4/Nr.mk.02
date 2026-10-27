// rea decompile_all
// name: FUN_0063de8c
// address: 0x63de8c
// body: available
// range: 0x63de8c-0x63ded8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0063de8c(int param_1)

{
  int *piVar1;
  char cVar2;

  piVar1 = *(int **)(param_1 + 0x390);
  piVar1[0x1a] = *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x394) + 0x1b4) + 0x10) + 0x14);
  cVar2 = (**(code **)(*piVar1 + 0x40))();
  if (cVar2 != '\0') {
    FUN_0045bc24(*(undefined4 *)(*(int *)(param_1 + 0x394) + 0x1b4),
                 *(undefined4 *)(*(int *)(param_1 + 0x390) + 0x68));
  }
  return;
}
