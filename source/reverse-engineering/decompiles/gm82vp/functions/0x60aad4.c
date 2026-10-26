// rea decompile_all
// name: FUN_0060aad4
// address: 0x60aad4
// body: available
// range: 0x60aad4-0x60ab5f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0060aad4(int param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;

  bVar2 = true;
  if (-1 < *(int *)(param_1 + 0x68) + -2) {
    iVar5 = *(int *)(param_1 + 0x68) + -1;
    iVar4 = 0;
    do {
      if (*(double *)(*(int *)(*(int *)(param_1 + 0x6c) + iVar4 * 4) + 0x48) <
          *(double *)(*(int *)(*(int *)(param_1 + 0x6c) + 4 + iVar4 * 4) + 0x48)) {
        bVar2 = false;
        break;
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  if ((!bVar2) && (iVar4 = *(int *)(param_1 + 0x68) + -1, 0 < iVar4)) {
    iVar5 = 1;
    do {
      iVar3 = iVar5;
      if (0 < iVar5) {
        do {
          iVar1 = *(int *)(*(int *)(param_1 + 0x6c) + iVar3 * 4);
          if (*(double *)(iVar1 + 0x48) <=
              *(double *)(*(int *)(*(int *)(param_1 + 0x6c) + -4 + iVar3 * 4) + 0x48)) break;
          *(undefined4 *)(*(int *)(param_1 + 0x6c) + iVar3 * 4) =
               *(undefined4 *)(*(int *)(param_1 + 0x6c) + -4 + iVar3 * 4);
          *(int *)(*(int *)(param_1 + 0x6c) + -4 + iVar3 * 4) = iVar1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}
