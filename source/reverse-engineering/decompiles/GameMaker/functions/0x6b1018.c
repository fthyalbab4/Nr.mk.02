// rea decompile_all
// name: FUN_006b1018
// address: 0x6b1018
// body: available
// range: 0x6b1018-0x6b118a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006b1018(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;

  if (((((*PTR_DAT_00781888 == '\0') || (*(int *)(param_1 + 0x33c) != 0)) ||
       (*(int *)(param_1 + 0x340) < 0)) ||
      ((param_2 == 4 || (*(int *)(**(int **)(param_1 + 0x334) + 4) != param_2)))) &&
     (*(int *)(param_1 + 0x338) != 0)) {
    iVar3 = *(int *)(param_1 + 0x33c);
    if (0 < iVar3) {
      if (-1 < iVar3 + -1) {
        iVar2 = 0;
        do {
          FUN_006b0d2c(param_1,*(undefined4 *)(*(int *)(param_1 + 0x334) + iVar2 * 4));
          iVar2 = iVar2 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      iVar3 = *(int *)(param_1 + 0x33c);
      if (iVar3 <= *(int *)(param_1 + 0x338)) {
        iVar2 = (*(int *)(param_1 + 0x338) - iVar3) + 1;
        do {
          *(undefined4 *)(*(int *)(param_1 + 0x334) + (iVar3 - *(int *)(param_1 + 0x33c)) * 4) =
               *(undefined4 *)(*(int *)(param_1 + 0x334) + iVar3 * 4);
          iVar3 = iVar3 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      iVar3 = *(int *)(param_1 + 0x338);
      iVar2 = (iVar3 - *(int *)(param_1 + 0x33c)) + 1;
      if (iVar2 <= iVar3) {
        iVar3 = (iVar3 - iVar2) + 1;
        do {
          *(undefined4 *)(*(int *)(param_1 + 0x334) + iVar2 * 4) = 0;
          iVar2 = iVar2 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      *(int *)(param_1 + 0x340) = *(int *)(param_1 + 0x340) - *(int *)(param_1 + 0x33c);
      *(undefined4 *)(param_1 + 0x33c) = 0;
    }
    FUN_006b0d2c(param_1,*(undefined4 *)(*(int *)(param_1 + 0x334) + *(int *)(param_1 + 0x338) * 4))
    ;
    iVar3 = *(int *)(param_1 + 0x338);
    if (0 < iVar3) {
      do {
        *(undefined4 *)(*(int *)(param_1 + 0x334) + iVar3 * 4) =
             *(undefined4 *)(*(int *)(param_1 + 0x334) + -4 + iVar3 * 4);
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    uVar1 = FUN_006b0c48(param_1,param_2,param_3,param_4,param_5,param_6);
    **(undefined4 **)(param_1 + 0x334) = uVar1;
    iVar3 = FUN_00409a18(*(undefined4 *)(param_1 + 0x334));
    if (*(int *)(param_1 + 0x340) < iVar3 + -1) {
      *(int *)(param_1 + 0x340) = *(int *)(param_1 + 0x340) + 1;
    }
    *(undefined1 *)(param_1 + 0x344) = 1;
    *(undefined1 *)(param_1 + 0x345) = 0;
  }
  return;
}
