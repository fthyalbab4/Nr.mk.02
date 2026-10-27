// rea decompile_all
// name: FUN_0053f81c
// address: 0x53f81c
// body: available
// range: 0x53f81c-0x53f86a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0053f81c(int param_1,int *param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int *piVar3;

  piVar3 = (int *)(param_4 + -4);
  if (param_3 != 0) {
    param_2[*(int *)(*piVar3 + 0x44)] = param_2[*(int *)(*piVar3 + 0x44)] + param_3 * 2;
    param_2[-*(int *)(*piVar3 + 0x44)] = param_2[-*(int *)(*piVar3 + 0x44)] + param_3 * 2;
    iVar2 = param_3 * 4;
    piVar1 = (int *)(param_1 + *(int *)(*piVar3 + 0x44) * 4);
    *piVar1 = *piVar1 + iVar2;
    param_2[-*(int *)(*piVar3 + 4)] = param_2[-*(int *)(*piVar3 + 4)] + iVar2;
    param_2[*(int *)(*piVar3 + 4)] = param_2[*(int *)(*piVar3 + 4)] + iVar2;
    piVar3 = (int *)(param_1 + *(int *)(*piVar3 + 4) * 4);
    *piVar3 = *piVar3 + param_3 * 8;
    *param_2 = *param_2 + param_3 * 8;
  }
  return;
}
