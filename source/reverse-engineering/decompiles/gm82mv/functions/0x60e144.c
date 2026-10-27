// rea decompile_all
// name: FUN_0060e144
// address: 0x60e144
// body: available
// range: 0x60e144-0x60e581 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0060e144(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  float10 in_ST0;
  float10 fVar4;
  float10 in_ST1;
  float10 in_ST2;
  float10 in_ST3;
  float10 in_ST4;
  float10 in_ST5;
  float10 in_ST6;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  double local_28;
  double local_20;
  float10 local_18;

  uVar3 = 0;
  if (-1 < *(int *)(param_1 + 0x10c)) {
    iVar2 = FUN_0057bed8();
    if (((iVar2 != 0) && (0.0 < *(double *)(iVar2 + 0x20))) && (*(double *)(param_1 + 0x120) != 0.0)
       ) {
      local_38 = (double)((_DAT_0060e588 * (float10)*(double *)(param_1 + 0x130)) / (float10)180.0);
      FUN_0057b2c0(iVar2,&local_60,&local_58,&local_40,*(undefined4 *)(param_1 + 0x110),
                   (short)*(undefined4 *)(param_1 + 0x114));
      local_40 = (double)((float)local_40 / ((float)*(double *)(param_1 + 0x128) * 100.0));
      *(double *)(param_1 + 0x110) =
           (*(double *)(param_1 + 0x120) * local_40) / *(double *)(iVar2 + 0x20) +
           *(double *)(param_1 + 0x110);
      if ((1.0 <= *(double *)(param_1 + 0x110)) || (*(double *)(param_1 + 0x110) <= 0.0)) {
        uVar3 = 1;
        iVar1 = *(int *)(param_1 + 0x138);
        if (iVar1 == 0) {
          *(undefined4 *)(param_1 + 0x110) = 0;
          *(undefined4 *)(param_1 + 0x114) = 0x3ff00000;
          *(undefined4 *)(param_1 + 0x10c) = 0xffffffff;
        }
        else if (iVar1 == 1) {
          if (0.0 <= *(double *)(param_1 + 0x110)) {
            *(double *)(param_1 + 0x110) = *(double *)(param_1 + 0x110) - 1.0;
          }
          else {
            *(double *)(param_1 + 0x110) = *(double *)(param_1 + 0x110) + 1.0;
          }
        }
        else if (iVar1 == 2) {
          fVar4 = in_ST6;
          FUN_0057b538(iVar2);
          local_20 = (double)in_ST0;
          in_ST0 = fVar4;
          FUN_0057b538(iVar2);
          local_60 = (double)((float10)local_20 - in_ST1);
          in_ST1 = in_ST0;
          FUN_0057b568(iVar2);
          local_20 = (double)in_ST2;
          in_ST2 = in_ST1;
          FUN_0057b568(iVar2);
          local_58 = (double)((float10)local_20 - in_ST3);
          in_ST3 = in_ST2;
          FUN_00404864();
          local_18 = in_ST4 * (float10)local_60;
          FUN_00404874();
          local_30 = (double)((local_18 + in_ST5 * (float10)local_58) *
                             (float10)*(double *)(param_1 + 0x128));
          in_ST4 = in_ST3;
          in_ST5 = in_ST3;
          FUN_00404864();
          local_18 = in_ST6 * (float10)local_58;
          FUN_00404874();
          local_28 = (double)((local_18 - fVar4 * (float10)local_60) *
                             (float10)*(double *)(param_1 + 0x128));
          if (0.0 <= *(double *)(param_1 + 0x110)) {
            *(double *)(param_1 + 0x140) = *(double *)(param_1 + 0x140) + local_30;
            *(double *)(param_1 + 0x148) = *(double *)(param_1 + 0x148) + local_28;
            *(double *)(param_1 + 0x110) = *(double *)(param_1 + 0x110) - 1.0;
          }
          else {
            *(double *)(param_1 + 0x140) = *(double *)(param_1 + 0x140) - local_30;
            *(double *)(param_1 + 0x148) = *(double *)(param_1 + 0x148) - local_28;
            *(double *)(param_1 + 0x110) = *(double *)(param_1 + 0x110) + 1.0;
          }
        }
        else if (iVar1 == 3) {
          if (0.0 <= *(double *)(param_1 + 0x110)) {
            *(double *)(param_1 + 0x110) = (double)(2.0 - (float)*(double *)(param_1 + 0x110));
            *(double *)(param_1 + 0x120) = -ABS(*(double *)(param_1 + 0x120));
          }
          else {
            *(double *)(param_1 + 0x110) = -*(double *)(param_1 + 0x110);
            *(double *)(param_1 + 0x120) = ABS(*(double *)(param_1 + 0x120));
          }
        }
        else {
          *(undefined4 *)(param_1 + 0x110) = 0;
          *(undefined4 *)(param_1 + 0x114) = 0x3ff00000;
          *(undefined4 *)(param_1 + 0x10c) = 0xffffffff;
        }
      }
      FUN_0057b2c0(iVar2,&local_60,&local_58,&local_40,*(undefined4 *)(param_1 + 0x110),
                   (short)*(undefined4 *)(param_1 + 0x114));
      FUN_0057b538(iVar2);
      local_60 = (double)((float10)local_60 - in_ST0);
      FUN_0057b568(iVar2);
      local_58 = (double)((float10)local_58 - in_ST1);
      FUN_00404864();
      local_18 = in_ST2 * (float10)local_60;
      FUN_00404874();
      local_50 = (double)((local_18 + in_ST3 * (float10)local_58) *
                          (float10)*(double *)(param_1 + 0x128) +
                         (float10)*(double *)(param_1 + 0x140));
      FUN_00404864();
      local_18 = in_ST4 * (float10)local_58;
      FUN_00404874();
      local_48 = (double)((local_18 - in_ST5 * (float10)local_60) *
                          (float10)*(double *)(param_1 + 0x128) +
                         (float10)*(double *)(param_1 + 0x148));
      FUN_0060d14c(param_1);
      FUN_0060d180(param_1);
      FUN_0060d118(param_1);
      FUN_0060ddec(param_1);
    }
  }
  return uVar3;
}
