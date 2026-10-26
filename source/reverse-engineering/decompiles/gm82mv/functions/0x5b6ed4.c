// rea decompile_all
// name: FUN_005b6ed4
// address: 0x5b6ed4
// body: available
// range: 0x5b6ed4-0x5b6fa5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_005b6ed4(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;

  iVar3 = 0;
  if (param_1 == -3) {
    iVar2 = *(int *)(*(int *)PTR_DAT_0068939c + 0x68);
    if (-1 < iVar2 + -1) {
      iVar4 = 0;
      do {
        iVar1 = FUN_00608fec(*(undefined4 *)PTR_DAT_0068939c,iVar4);
        if (*(char *)(iVar1 + 0x108) == '\0') {
          iVar3 = iVar3 + 1;
        }
        iVar4 = iVar4 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  else if (param_1 < 100000) {
    iVar2 = FUN_0060aa64(*(undefined4 *)PTR_DAT_0068939c,param_1);
    if (-1 < iVar2 + -1) {
      iVar4 = 0;
      do {
        iVar1 = FUN_0060aa90(*(undefined4 *)PTR_DAT_0068939c,param_1,iVar4);
        if (*(char *)(iVar1 + 0x108) == '\0') {
          iVar3 = iVar3 + 1;
        }
        iVar4 = iVar4 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  else {
    iVar2 = *(int *)(*(int *)PTR_DAT_0068939c + 0x68);
    if (-1 < iVar2 + -1) {
      iVar4 = 0;
      do {
        iVar1 = FUN_00608fec(*(undefined4 *)PTR_DAT_0068939c,iVar4);
        if ((*(char *)(iVar1 + 0x108) == '\0') &&
           (iVar1 = FUN_00608fec(*(undefined4 *)PTR_DAT_0068939c,iVar4),
           param_1 == *(int *)(iVar1 + 4))) {
          return 1;
        }
        iVar4 = iVar4 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  return iVar3;
}
