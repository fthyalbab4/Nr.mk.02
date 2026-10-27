// rea decompile_all
// name: FUN_0053622c
// address: 0x53622c
// body: available
// range: 0x53622c-0x536341 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0053622c(int param_1,undefined4 param_2,undefined4 param_3,double param_4)

{
  int iVar1;
  float10 in_ST0;
  float10 fVar2;
  float10 in_ST1;
  float10 in_ST2;
  float10 in_ST3;
  float10 in_ST4;
  float10 fVar3;
  float10 in_ST5;
  float10 in_ST6;
  int local_30;
  undefined1 local_2c [8];
  undefined1 local_24 [8];
  double local_1c;
  undefined4 local_14;
  undefined4 uStack_10;
  undefined4 local_c;
  undefined4 uStack_8;

  FUN_00535f8c(param_1,local_24,local_2c);
  FUN_005363e0(param_1);
  local_30 = *(int *)(param_1 + 8);
  if (-1 < local_30 + -1) {
    iVar1 = 0;
    do {
      local_c = *(undefined4 *)(*(int *)(param_1 + 4) + iVar1 * 0x18);
      uStack_8 = *(undefined4 *)(*(int *)(param_1 + 4) + 4 + iVar1 * 0x18);
      local_14 = *(undefined4 *)(*(int *)(param_1 + 4) + 8 + iVar1 * 0x18);
      uStack_10 = *(undefined4 *)(*(int *)(param_1 + 4) + 0xc + iVar1 * 0x18);
      local_1c = (double)((_DAT_00536344 * (float10)param_4) / (float10)180.0);
      fVar3 = in_ST6;
      FUN_00404834();
      fVar2 = in_ST0 * (float10)(double)CONCAT44(uStack_8,local_c);
      in_ST0 = in_ST4;
      FUN_00404844();
      *(double *)(*(int *)(param_1 + 4) + iVar1 * 0x18) =
           (double)(fVar2 + in_ST1 * (float10)(double)CONCAT44(uStack_10,local_14));
      in_ST1 = in_ST5;
      in_ST4 = fVar3;
      in_ST5 = fVar3;
      FUN_00404834();
      fVar2 = in_ST2 * (float10)(double)CONCAT44(uStack_10,local_14);
      in_ST2 = in_ST6;
      FUN_00404844();
      *(double *)(*(int *)(param_1 + 4) + 8 + iVar1 * 0x18) =
           (double)(fVar2 - in_ST3 * (float10)(double)CONCAT44(uStack_8,local_c));
      iVar1 = iVar1 + 1;
      local_30 = local_30 + -1;
      in_ST3 = fVar3;
      in_ST6 = in_ST5;
    } while (local_30 != 0);
  }
  FUN_005363e0(param_1);
  FUN_0053578c(param_1);
  return;
}
