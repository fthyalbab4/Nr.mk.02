// rea decompile_all
// name: FUN_0060abc0
// address: 0x60abc0
// body: available
// range: 0x60abc0-0x60ace3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0060abc0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;

  iVar4 = 0;
  iVar1 = *(int *)(param_1 + 0x68);
  if (-1 < iVar1 + -1) {
    iVar2 = 0;
    do {
      if (*(char *)(*(int *)(*(int *)(param_1 + 0x6c) + iVar2 * 4) + 0x109) != '\0') {
        iVar4 = iVar4 + 1;
      }
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  iVar2 = 0;
  iVar1 = *(int *)(param_1 + 0x70);
  if (-1 < iVar1 + -1) {
    iVar3 = 0;
    do {
      if (*(char *)(*(int *)(*(int *)(param_1 + 0x74) + iVar3 * 4) + 0x109) == '\0') {
        iVar2 = iVar2 + 1;
      }
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  if ((iVar2 != 0) || (iVar4 != 0)) {
    if (0 < iVar2) {
      FUN_00409dfc(param_1 + 0x6c,&DAT_006080a4,1,iVar2 + *(int *)(param_1 + 0x68));
      iVar2 = 0;
      iVar1 = *(int *)(param_1 + 0x70);
      if (-1 < iVar1 + -1) {
        iVar3 = 0;
        do {
          if (*(char *)(*(int *)(*(int *)(param_1 + 0x74) + iVar3 * 4) + 0x109) == '\0') {
            *(undefined4 *)(*(int *)(param_1 + 0x6c) + *(int *)(param_1 + 0x68) * 4) =
                 *(undefined4 *)(*(int *)(param_1 + 0x74) + iVar3 * 4);
            *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 1;
          }
          else {
            *(undefined4 *)(*(int *)(param_1 + 0x74) + iVar2 * 4) =
                 *(undefined4 *)(*(int *)(param_1 + 0x74) + iVar3 * 4);
            iVar2 = iVar2 + 1;
          }
          iVar3 = iVar3 + 1;
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
      }
      *(int *)(param_1 + 0x70) = iVar2;
    }
    if (0 < iVar4) {
      FUN_00409dfc(param_1 + 0x74,&DAT_006080d4,1,iVar4 + *(int *)(param_1 + 0x70));
      iVar4 = 0;
      iVar1 = *(int *)(param_1 + 0x68);
      if (-1 < iVar1 + -1) {
        iVar2 = 0;
        do {
          iVar3 = *(int *)(*(int *)(param_1 + 0x6c) + iVar2 * 4);
          if (*(char *)(iVar3 + 0x109) == '\0') {
            *(int *)(*(int *)(param_1 + 0x6c) + iVar4 * 4) = iVar3;
            iVar4 = iVar4 + 1;
          }
          else {
            *(int *)(*(int *)(param_1 + 0x74) + *(int *)(param_1 + 0x70) * 4) = iVar3;
            *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
          }
          iVar2 = iVar2 + 1;
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
      }
      *(int *)(param_1 + 0x68) = iVar4;
    }
    FUN_00609080(param_1);
    FUN_00609218(param_1);
  }
  return;
}
