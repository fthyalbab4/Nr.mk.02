// rea decompile_all
// name: FUN_005b7a9c
// address: 0x5b7a9c
// body: available
// range: 0x5b7a9c-0x5b7b79 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005b7a9c(int param_1,undefined4 param_2,undefined4 param_3,double param_4)

{
  double dVar1;
  char cVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar3;
  undefined4 extraout_ECX_01;
  int iVar4;
  float10 in_ST0;
  float10 fVar5;
  float10 in_ST1;

  if (0.0 < param_4) {
    fVar5 = (float10)param_4;
    iVar4 = FUN_004048b8();
  }
  else {
    iVar4 = 1000;
    fVar5 = in_ST0;
    in_ST0 = in_ST1;
  }
  FUN_00404864();
  FUN_00404874();
  cVar2 = FUN_005b7a6c(param_1,param_2,extraout_ECX,*(undefined4 *)(param_1 + 0x58),
                       *(undefined4 *)(param_1 + 0x5c),*(undefined4 *)(param_1 + 0x50),
                       (short)*(undefined4 *)(param_1 + 0x54));
  if ((cVar2 != '\0') && (uVar3 = extraout_ECX_00, 0 < iVar4)) {
    do {
      dVar1 = *(double *)(param_1 + 0x50) + (double)fVar5;
      cVar2 = FUN_005b7a6c(param_1,param_2,uVar3,*(double *)(param_1 + 0x58) + (double)-in_ST0,
                           SUB84(dVar1,0),(short)((ulonglong)dVar1 >> 0x20));
      if (cVar2 == '\0') {
        return;
      }
      FUN_0060ddec(param_1);
      iVar4 = iVar4 + -1;
      uVar3 = extraout_ECX_01;
    } while (iVar4 != 0);
  }
                    /* WARNING: Read-only address (ram,0x005b7b80) is written */
  return;
}
