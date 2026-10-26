// rea decompile_all
// name: FUN_0056788c
// address: 0x56788c
// body: available
// range: 0x56788c-0x5678ae inclusive
// range: 0x5678b5-0x5678d1 inclusive
// range: 0x567949-0x56798b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0056788c(undefined4 param_1,int param_2)

{
  int unaff_EBP;
  uint uVar1;
  float10 in_ST0;
  float10 fVar2;
  float10 in_ST1;

  uVar1 = DAT_00686450;
  switch(DAT_00686454) {
  case 0:
    fVar2 = in_ST0 - (float10)*(double *)(unaff_EBP + 0x28);
    *(float10 *)(unaff_EBP + -0x24) = fVar2 * fVar2;
    FUN_004048a8();
    *(double *)(unaff_EBP + -8) = (double)in_ST1;
    if (*(double *)(unaff_EBP + -8) != 0.0) {
      if (*(double *)(unaff_EBP + -8) < *(double *)(unaff_EBP + 8)) {
        *(undefined4 *)(unaff_EBP + 8) = *(undefined4 *)(unaff_EBP + -8);
        *(undefined4 *)(unaff_EBP + 0xc) = *(undefined4 *)(unaff_EBP + -4);
      }
      *(double *)(unaff_EBP + -0x10) =
           ((*(double *)(unaff_EBP + 0x18) - *(double *)(unaff_EBP + 0x28)) *
           *(double *)(unaff_EBP + 8)) / *(double *)(unaff_EBP + -8);
      *(double *)(unaff_EBP + -0x18) =
           ((*(double *)(unaff_EBP + 0x10) - *(double *)(unaff_EBP + 0x20)) *
           *(double *)(unaff_EBP + 8)) / *(double *)(unaff_EBP + -8);
      FUN_005663bc();
      FUN_00566840(0);
    }
    return;
  case 1:
    break;
  case 2:
    uVar1 = DAT_00686450 >> 1;
    break;
  case 4:
    uVar1 = (int)DAT_00686450 / 3;
    param_2 = (int)DAT_00686450 % 3;
    break;
  case 5:
  case 6:
    uVar1 = DAT_00686450 - 1;
  case 3:
    uVar1 = uVar1 - 1;
    break;
  default:
    goto switchD_005678ad_default;
  }
  if (uVar1 != 0) {
    FUN_006212b0(DAT_00686458,param_2);
    (**(code **)(**(int **)PTR_DAT_00689570 + 0x130))();
    (**(code **)(**(int **)PTR_DAT_00689570 + 0x120))();
    FUN_006212b0(0xffffffff);
  }
switchD_005678ad_default:
  return;
}
