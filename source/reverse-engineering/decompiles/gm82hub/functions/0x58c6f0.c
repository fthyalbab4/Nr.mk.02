// rea decompile_all
// name: FUN_0058c6f0
// address: 0x58c6f0
// body: available
// range: 0x58c6f0-0x58c8ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0058c6f0(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  float10 fVar2;
  char cVar3;
  int iVar4;
  float10 in_ST0;
  float10 in_ST1;
  float10 in_ST2;
  float10 in_ST3;
  float10 in_ST4;
  float10 in_ST5;
  float10 in_ST6;
  float10 fVar5;
  float10 in_ST7;
  double local_1c;
  double local_14;

  cVar3 = FUN_0058c58c(param_1,param_2);
  if (cVar3 != '\0') {
    iVar1 = DAT_00686b30 + param_1 * 0x58;
    if (param_4 < 0) {
      iVar4 = FUN_004047b8(-param_4);
      if (iVar4 != 0) {
        return;
      }
      param_4 = 1;
    }
    iVar4 = FUN_00409c34(*(undefined4 *)(iVar1 + 4));
    if (iVar4 <= *(int *)(iVar1 + 8) + param_4) {
      FUN_00409dfc(iVar1 + 4,&DAT_0058af58,1);
    }
    iVar1 = *(int *)(iVar1 + 0xc) + param_2 * 0x38;
    if (-1 < param_4 + -1) {
LAB_0058c788:
      do {
        FUN_0058b2d0(*(undefined4 *)(iVar1 + 0x28));
        local_14 = (double)in_ST0;
        in_ST0 = in_ST2;
        in_ST2 = in_ST4;
        in_ST4 = in_ST6;
        in_ST6 = in_ST7;
        FUN_0058b2d0(*(undefined4 *)(iVar1 + 0x28));
        local_1c = (double)in_ST1;
        in_ST1 = in_ST3;
        fVar2 = in_ST5;
        if ((*(int *)(iVar1 + 0x28) == 2) && (*(int *)(iVar1 + 0x2c) != 3)) {
          in_ST1 = in_ST5;
          fVar5 = in_ST6;
          FUN_004047d4();
          if ((float10)0.5 <= in_ST0) {
            in_ST0 = in_ST2;
            in_ST2 = in_ST4;
            in_ST4 = in_ST6;
            in_ST6 = fVar5;
            FUN_0058b2d0(0);
            local_1c = (double)in_ST3;
            fVar2 = in_ST7;
            in_ST7 = fVar5;
          }
          else {
            in_ST0 = in_ST2;
            in_ST2 = in_ST4;
            in_ST4 = in_ST6;
            in_ST6 = fVar5;
            FUN_0058b2d0(0);
            local_14 = (double)in_ST3;
            fVar2 = in_ST7;
            in_ST7 = fVar5;
          }
        }
        in_ST5 = in_ST7;
        in_ST3 = fVar2;
        iVar4 = *(int *)(iVar1 + 0x2c);
        if (iVar4 != 0) {
          in_ST7 = in_ST5;
          if (iVar4 == 1) {
            in_ST6 = in_ST5;
            if (_DAT_0058c904 * _DAT_0058c904 <
                ((float10)local_14 - (float10)0.5) * ((float10)local_14 - (float10)0.5) +
                ((float10)local_1c - (float10)0.5) * ((float10)local_1c - (float10)0.5))
            goto LAB_0058c788;
          }
          else if ((iVar4 == 2) &&
                  (in_ST6 = in_ST5, 0.5 < ABS(local_14 - 0.5) + ABS(local_1c - 0.5)))
          goto LAB_0058c788;
        }
        in_ST7 = in_ST6;
        if (*(int *)(iVar1 + 0x2c) == 3) {
          FUN_0058d360(param_1,param_3,1,
                       (*(double *)(iVar1 + 0x20) - *(double *)(iVar1 + 0x18)) * local_14 +
                       *(double *)(iVar1 + 0x18),
                       (*(double *)(iVar1 + 0x10) - *(double *)(iVar1 + 8)) * local_14 +
                       *(double *)(iVar1 + 8));
        }
        else {
          FUN_0058d360(param_1,param_3,1,
                       (*(double *)(iVar1 + 0x20) - *(double *)(iVar1 + 0x18)) * local_1c +
                       *(double *)(iVar1 + 0x18),
                       (*(double *)(iVar1 + 0x10) - *(double *)(iVar1 + 8)) * local_14 +
                       *(double *)(iVar1 + 8));
        }
        param_4 = param_4 + -1;
      } while (param_4 != 0);
    }
  }
                    /* WARNING: Read-only address (ram,0x0058c904) is written */
  return;
}
