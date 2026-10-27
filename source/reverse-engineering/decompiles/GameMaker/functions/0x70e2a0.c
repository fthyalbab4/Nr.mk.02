// rea decompile_all
// name: FUN_0070e2a0
// address: 0x70e2a0
// body: available
// range: 0x70e2a0-0x70e388 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0070e2a0(char param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  float10 in_ST0;
  float10 fVar5;
  float10 in_ST1;
  float10 in_ST2;
  float10 in_ST3;
  float10 in_ST4;
  float10 in_ST5;
  float10 in_ST6;
  float10 in_ST7;

  if ((param_1 != '\0') && (-1 < DAT_007909b0 + -1)) {
    iVar3 = 0;
    iVar4 = DAT_007909b0;
    do {
      fVar5 = in_ST0;
      if (*(char *)(DAT_007909a4 + iVar3) != '\0') {
        iVar1 = FUN_006cc880(*(undefined4 *)(DAT_007909a8 + iVar3 * 4));
        fVar5 = in_ST0;
        if (*(int *)(DAT_007909a0 + iVar3 * 4) != 0) {
          if ((iVar1 < 0) || (DAT_0079083c == 4)) {
            uVar2 = FUN_006cc6e4();
            FUN_006cc974(uVar2);
            uVar2 = FUN_006cc9a8(uVar2);
            FUN_006ca890(uVar2,*(undefined4 *)(DAT_007909a0 + iVar3 * 4));
            fVar5 = in_ST0;
          }
          else if (DAT_0079083c == 2) {
LAB_0070e34c:
            FUN_006cc974(iVar1);
            uVar2 = FUN_006cc9a8(iVar1);
            FUN_006ca890(uVar2,*(undefined4 *)(DAT_007909a0 + iVar3 * 4));
          }
          else if (DAT_0079083c == 3) {
            fVar5 = in_ST1;
            in_ST1 = in_ST2;
            in_ST2 = in_ST3;
            in_ST3 = in_ST4;
            in_ST4 = in_ST5;
            in_ST5 = in_ST6;
            in_ST6 = in_ST7;
            FUN_006cc900(iVar1);
            in_ST7 = in_ST6;
            if (in_ST0 < (float10)*(double *)(DAT_007909ac + iVar3 * 8)) goto LAB_0070e34c;
          }
          *PTR_DAT_00781e88 = 1;
        }
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
      in_ST0 = fVar5;
    } while (iVar4 != 0);
  }
  return;
}
