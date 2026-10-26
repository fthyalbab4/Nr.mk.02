// rea decompile_all
// name: FUN_0060cc58
// address: 0x60cc58
// body: available
// range: 0x60cc58-0x60ce28 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0060cc58(int param_1)

{
  double dVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  float10 in_ST0;
  float10 fVar4;

  if (*(double *)(param_1 + 0xa8) == 0.0) {
    if (*(double *)(param_1 + 0xb0) <= 0.0) {
      if (0.0 <= *(double *)(param_1 + 0xb0)) {
        *(undefined4 *)(param_1 + 0x80) = 0;
        *(undefined4 *)(param_1 + 0x84) = 0;
      }
      else {
        *(undefined4 *)(param_1 + 0x80) = 0;
        *(undefined4 *)(param_1 + 0x84) = 0x40568000;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x80) = 0;
      *(undefined4 *)(param_1 + 0x84) = 0x4070e000;
    }
  }
  else {
    FUN_0041025c();
    fVar4 = (in_ST0 * (float10)180.0) / _DAT_0060ce34;
    dVar1 = (double)fVar4;
    if (0.0 < dVar1) {
      *(double *)(param_1 + 0x80) = (double)(360.0 - (float)fVar4);
    }
    else {
      *(double *)(param_1 + 0x80) = -dVar1;
    }
  }
  fVar4 = (float10)*(double *)(param_1 + 0x80);
  uVar2 = FUN_004048b8();
  if (ABS((float10)*(double *)(param_1 + 0x80) - (float10)CONCAT44(extraout_EDX,uVar2)) <
      _DAT_0060ce44) {
    fVar4 = (float10)*(double *)(param_1 + 0x80);
    uVar2 = FUN_004048b8();
    *(double *)(param_1 + 0x80) = (double)CONCAT44(extraout_EDX_00,uVar2);
  }
  iVar3 = FUN_004102e4();
  *(double *)(param_1 + 0x80) = *(double *)(param_1 + 0x80) - (double)(iVar3 * 0x168);
  FUN_004048a8();
  *(double *)(param_1 + 0x88) = (double)fVar4;
  uVar2 = FUN_004048b8();
  if (ABS((float10)*(double *)(param_1 + 0x88) - (float10)CONCAT44(extraout_EDX_01,uVar2)) <
      _DAT_0060ce44) {
    uVar2 = FUN_004048b8();
    *(double *)(param_1 + 0x88) = (double)CONCAT44(extraout_EDX_02,uVar2);
  }
  return;
}
