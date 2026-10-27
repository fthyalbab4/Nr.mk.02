// rea decompile_all
// name: FUN_006f9a24
// address: 0x6f9a24
// body: available
// range: 0x6f9a24-0x6f9ac2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006f9a24(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;

  iVar2 = (**(code **)(**(int **)(param_1 + 0x394) + 0xec))();
  iVar3 = (**(code **)(**(int **)(param_1 + 0x394) + 0x108))();
  iVar3 = iVar3 + -1;
  if (-1 < iVar3) {
    do {
      cVar1 = FUN_004837a4(*(undefined4 *)(param_1 + 0x394),iVar3);
      if (cVar1 != '\0') {
        FUN_005a529c(*(undefined4 *)(param_1 + 0x434),iVar3);
      }
      iVar3 = iVar3 + -1;
    } while (iVar3 != -1);
  }
  FUN_006f8f10(param_1);
  iVar3 = *(int *)(*(int *)(param_1 + 0x434) + 8);
  if (iVar3 <= iVar2) {
    iVar2 = iVar3 + -1;
  }
  (**(code **)(**(int **)(param_1 + 0x394) + 0xf0))(*(int **)(param_1 + 0x394),iVar2);
  if (-1 < iVar2) {
    FUN_004837f4(*(undefined4 *)(param_1 + 0x394),iVar2,1);
  }
  FUN_006fa7b0(*(undefined4 *)(param_1 + 0x430));
  *(undefined1 *)(param_1 + 0x42c) = 1;
  return;
}
