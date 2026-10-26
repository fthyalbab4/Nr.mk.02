// rea decompile_all
// name: FUN_006cc52c
// address: 0x6cc52c
// body: available
// range: 0x6cc52c-0x6cc644 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_006cc52c(undefined4 param_1)

{
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  char cVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  float10 in_ST0;
  float10 fVar12;
  float10 in_ST1;
  float10 in_ST2;
  float10 in_ST3;
  float10 in_ST4;
  float10 in_ST5;
  float10 in_ST6;
  float10 in_ST7;
  undefined1 local_14;

  local_14 = 0;
  FUN_006cc4d0();
  iVar7 = FUN_0052f024(param_1);
  if ((iVar7 == 0x26c) || (iVar7 == 800)) {
    DAT_0077f428 = FUN_0052f024(param_1);
    FUN_00409be0(&DAT_0077f420,&DAT_006cc47c,1,DAT_0077f428);
    FUN_00409be0(&DAT_0077f424,&DAT_006cc4a8,1,DAT_0077f428);
    if (-1 < DAT_0077f428 + -1) {
      iVar10 = 0;
      iVar11 = DAT_0077f428;
      do {
        uVar8 = param_1;
        fVar12 = in_ST1;
        fVar1 = in_ST2;
        fVar2 = in_ST3;
        fVar3 = in_ST4;
        fVar4 = in_ST5;
        fVar5 = in_ST6;
        if (799 < iVar7) {
          uVar8 = FUN_0052f2e4(param_1);
          fVar12 = in_ST1;
          fVar1 = in_ST2;
          fVar2 = in_ST3;
          fVar3 = in_ST4;
          fVar4 = in_ST5;
          fVar5 = in_ST6;
        }
        in_ST6 = in_ST7;
        in_ST5 = fVar5;
        in_ST4 = fVar4;
        in_ST3 = fVar3;
        in_ST2 = fVar2;
        in_ST1 = fVar1;
        FUN_004199b0();
        *(double *)(DAT_0077f424 + iVar10 * 8) = (double)in_ST0;
        in_ST0 = fVar12;
        if (799 < iVar7) {
          in_ST0 = in_ST1;
          in_ST1 = in_ST2;
          in_ST2 = in_ST3;
          in_ST3 = in_ST4;
          in_ST4 = in_ST5;
          in_ST5 = in_ST6;
          FUN_0052f038(uVar8);
          *(double *)(DAT_0077f424 + iVar10 * 8) = (double)fVar12;
        }
        in_ST7 = in_ST6;
        uVar9 = FUN_006ca800(&DAT_006ca360,1);
        *(undefined4 *)(DAT_0077f420 + iVar10 * 4) = uVar9;
        cVar6 = FUN_006ca918(*(undefined4 *)(DAT_0077f420 + iVar10 * 4),uVar8);
        if (cVar6 == '\0') {
          return 0;
        }
        if (799 < iVar7) {
          FUN_00405a7c(uVar8);
        }
        iVar10 = iVar10 + 1;
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
    }
    DAT_007900a0 = 0;
    local_14 = 1;
  }
  return local_14;
}
