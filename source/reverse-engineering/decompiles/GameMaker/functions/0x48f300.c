// rea decompile_all
// name: FUN_0048f300
// address: 0x48f300
// body: available
// range: 0x48f300-0x48f33f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0048f300(int *param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;

  FUN_004f6948(param_1);
  iVar3 = *(int *)(param_1[0x9e] + 8);
  if (-1 < iVar3 + -1) {
    iVar4 = 0;
    do {
      uVar1 = (**(code **)(*param_1 + 0x5c))();
      piVar2 = (int *)FUN_0043b048(param_1[0x9e],iVar4);
      (**(code **)(*piVar2 + 0x74))(piVar2,uVar1);
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}
