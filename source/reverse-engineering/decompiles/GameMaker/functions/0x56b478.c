// rea decompile_all
// name: FUN_0056b478
// address: 0x56b478
// body: available
// range: 0x56b478-0x56b4dc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0056b478(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;

  iVar1 = *param_2;
  iVar2 = param_2[1];
  iVar3 = *param_1;
  iVar4 = param_1[1];
  *param_3 = iVar1;
  if (iVar3 < iVar1) {
    *param_3 = iVar3;
  }
  param_3[2] = iVar3;
  if (iVar3 < iVar1) {
    param_3[2] = iVar1;
  }
  param_3[1] = iVar2;
  if (iVar4 < iVar2) {
    param_3[1] = iVar4;
  }
  param_3[3] = iVar4;
  if (iVar4 < iVar2) {
    param_3[3] = iVar2;
  }
  return;
}
