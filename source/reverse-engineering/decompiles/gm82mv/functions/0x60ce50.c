// rea decompile_all
// name: FUN_0060ce50
// address: 0x60ce50
// body: available
// range: 0x60ce50-0x60cf41 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0060ce50(int param_1)

{
  undefined4 uVar1;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  float10 in_ST0;
  float10 in_ST1;

  FUN_00404864();
  *(double *)(param_1 + 0xa8) = (double)(in_ST0 * (float10)*(double *)(param_1 + 0x88));
  FUN_00404874();
  *(double *)(param_1 + 0xb0) = (double)(-(float10)*(double *)(param_1 + 0x88) * in_ST1);
  uVar1 = FUN_004048b8();
  if (ABS((float10)*(double *)(param_1 + 0xa8) - (float10)CONCAT44(extraout_EDX,uVar1)) <
      _DAT_0060cf54) {
    uVar1 = FUN_004048b8();
    *(double *)(param_1 + 0xa8) = (double)CONCAT44(extraout_EDX_00,uVar1);
  }
  uVar1 = FUN_004048b8();
  if (ABS((float10)*(double *)(param_1 + 0xb0) - (float10)CONCAT44(extraout_EDX_01,uVar1)) <
      _DAT_0060cf54) {
    uVar1 = FUN_004048b8();
    *(double *)(param_1 + 0xb0) = (double)CONCAT44(extraout_EDX_02,uVar1);
  }
  return;
}
