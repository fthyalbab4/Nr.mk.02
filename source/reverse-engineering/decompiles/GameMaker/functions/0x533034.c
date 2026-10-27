// rea decompile_all
// name: FUN_00533034
// address: 0x533034
// body: available
// range: 0x533034-0x533080 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00533034(int param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;

  iVar3 = FUN_004b416c(*(undefined4 *)(*(int *)(param_1 + 0x388) + 0x2ac));
  piVar1 = *(int **)(param_1 + 0x3dc);
  piVar1[0x1a] = iVar3;
  cVar2 = (**(code **)(*piVar1 + 0x40))();
  if (cVar2 != '\0') {
    FUN_004b418c(*(undefined4 *)(*(int *)(param_1 + 0x388) + 0x2ac),
                 *(undefined4 *)(*(int *)(param_1 + 0x3dc) + 0x68));
    FUN_00532994(param_1);
  }
  return;
}
