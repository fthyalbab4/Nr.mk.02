// rea decompile_all
// name: FUN_00639b8c
// address: 0x639b8c
// body: available
// range: 0x639b8c-0x639bf9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00639b8c(int param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  char cVar1;
  int iVar2;

  *param_4 = 0;
  iVar2 = FUN_004048b8();
  if ((iVar2 == -1) && (param_1 != 0)) {
    iVar2 = *(int *)(param_1 + 4);
  }
  if ((iVar2 == -2) && (param_2 != 0)) {
    iVar2 = *(int *)(param_2 + 4);
  }
  cVar1 = FUN_005b8408(iVar2);
  *(double *)(param_4 + 2) = (double)(int)cVar1;
  return;
}
