// rea decompile_all
// name: FUN_006bc078
// address: 0x6bc078
// body: available
// range: 0x6bc078-0x6bc116 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006bc078(int param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;

  *(undefined4 *)(param_1 + 0xa020) = 0;
  iVar3 = FUN_006bcca0();
  if (-1 < iVar3 + -1) {
    iVar5 = 0;
    do {
      cVar2 = FUN_006bcca8(iVar5);
      if (cVar2 != '\0') {
        *(int *)(param_1 + 0x3dc + *(int *)(param_1 + 0xa020) * 4) = iVar5;
        *(int *)(param_1 + 0xa020) = *(int *)(param_1 + 0xa020) + 1;
      }
      iVar5 = iVar5 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  (**(code **)(**(int **)(*(int *)(param_1 + 0x388) + 0x280) + 0x44))();
  iVar3 = *(int *)(param_1 + 0xa020);
  if (-1 < iVar3 + -1) {
    iVar5 = 0;
    do {
      iVar4 = FUN_006bccc8(*(undefined4 *)(param_1 + 0x3dc + iVar5 * 4));
      piVar1 = *(int **)(*(int *)(param_1 + 0x388) + 0x280);
      (**(code **)(*piVar1 + 0x38))(piVar1,*(undefined4 *)(iVar4 + 4));
      iVar5 = iVar5 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  iVar3 = *(int *)(param_1 + 0xa020) + -1;
  if (0 < iVar3) {
    iVar3 = 0;
  }
  FUN_006bc118(param_1,iVar3);
  return;
}
