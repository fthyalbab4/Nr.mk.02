// rea decompile_all
// name: FUN_00408ff8
// address: 0x408ff8
// body: available
// range: 0x408ff8-0x40902a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00408ff8(int param_1,int param_2)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;

  puVar2 = (undefined4 *)(*(byte *)(param_2 + 1) + 10 + param_2);
  iVar3 = *(int *)(*(byte *)(param_2 + 1) + 6 + param_2);
  if (iVar3 != 0) {
    do {
      FUN_0040902c(puVar2[1] + param_1,*(undefined4 *)*puVar2,1);
      puVar2 = puVar2 + 2;
      iVar4 = iVar3 + -1;
      bVar1 = 0 < iVar3;
      iVar3 = iVar4;
    } while (iVar4 != 0 && bVar1);
  }
  return;
}
