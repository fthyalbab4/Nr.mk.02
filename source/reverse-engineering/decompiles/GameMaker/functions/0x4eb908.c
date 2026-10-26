// rea decompile_all
// name: FUN_004eb908
// address: 0x4eb908
// body: available
// range: 0x4eb908-0x4eb982 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004eb908(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;

  iVar4 = param_2[1];
  iVar1 = param_2[3];
  iVar3 = *(int *)(param_1 + 0xc);
  if ((iVar3 < *param_2) || (param_2[2] < iVar3)) {
    iVar3 = FUN_004eb8e4(*param_2 - iVar3,param_2[2] - iVar3);
  }
  else {
    iVar3 = 0;
  }
  iVar2 = *(int *)(param_1 + 0x10);
  if ((iVar2 < iVar4) || (iVar1 < iVar2)) {
    iVar4 = FUN_004eb8e4(iVar4 - iVar2,iVar1 - iVar2);
  }
  else {
    iVar4 = 0;
  }
  if ((iVar3 != 0) || (iVar4 != 0)) {
    FUN_0040c268(param_1 + 0x4c,-iVar3,-iVar4);
  }
  return;
}
