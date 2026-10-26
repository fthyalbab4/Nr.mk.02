// rea decompile_all
// name: FUN_006b49f8
// address: 0x6b49f8
// body: available
// range: 0x6b49f8-0x6b4af9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006b49f8(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iStack_14;

  if (((*(char *)(param_1 + 0x330) == '\0') && (cVar1 = FUN_00405d08(param_1), cVar1 == '\0')) &&
     (*(char *)(*(int *)(param_1 + 0x350) + 0x29d) == '\0')) {
    return;
  }
  iVar2 = (*(int *)(param_1 + 0x2ec) - *(int *)(param_1 + 0x2f4)) * *(int *)(param_1 + 0x2e0);
  iVar3 = *(int *)(param_1 + 0x2dc);
  iVar4 = (*(int *)(param_1 + 0x2f0) - *(int *)(param_1 + 0x2f8)) * iVar3 + -1;
  if ((*PTR_DAT_007823a4 == '\0') ||
     (iVar4 = iVar4 + iVar3 * 5, *(int *)(param_1 + 0x2dc) * 5 + -1 <= iVar4)) {
    iStack_14 = 2;
    if (*(char *)(param_1 + 0x32f) != '\0') {
      iVar4 = iVar4 + 1;
      iStack_14 = iVar3;
    }
    FUN_0045b850(*(undefined4 *)(*(int *)(param_1 + 0x270) + 0x44),0xffffff);
    FUN_0045b954(*(undefined4 *)(*(int *)(param_1 + 0x270) + 0x44),0xe);
    if (-1 < iStack_14 + -1) {
      iVar3 = 0;
      do {
        (**(code **)(**(int **)(param_1 + 0x270) + 0x5c))
                  (*(int **)(param_1 + 0x270),iVar3 + iVar4,iVar2);
        (**(code **)(**(int **)(param_1 + 0x270) + 0x58))
                  (*(int **)(param_1 + 0x270),iVar3 + iVar4,iVar2 + *(int *)(param_1 + 0x2e0));
        iVar3 = iVar3 + 1;
        iStack_14 = iStack_14 + -1;
      } while (iStack_14 != 0);
    }
    *(byte *)(param_1 + 0x330) = *(byte *)(param_1 + 0x330) ^ 1;
  }
  return;
}
