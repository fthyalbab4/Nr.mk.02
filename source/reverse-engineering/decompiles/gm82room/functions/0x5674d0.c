// rea decompile_all
// name: FUN_005674d0
// address: 0x5674d0
// body: available
// range: 0x5674d0-0x5675cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005674d0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,double param_8,
                 double param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
                 undefined4 param_13)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;

  if (param_9 < (double)CONCAT44(param_13,param_12)) {
    uVar1 = param_9._0_4_;
    uVar2 = param_9._4_4_;
    param_9 = (double)CONCAT44(param_13,param_12);
    param_12 = uVar1;
    param_13 = uVar2;
  }
  if (param_8 < (double)CONCAT44(param_11,param_10)) {
    uVar1 = param_8._0_4_;
    uVar2 = param_8._4_4_;
    param_8 = (double)CONCAT44(param_11,param_10);
    param_10 = uVar1;
    param_11 = uVar2;
  }
  iVar3 = FUN_004102e4();
  if ((double)iVar3 == param_9) {
    param_9 = (double)(_DAT_005675cc + (float10)param_9);
  }
  iVar3 = FUN_004102e4();
  if ((double)iVar3 == param_8) {
    param_8 = (double)(_DAT_005675cc + (float10)param_8);
  }
  FUN_00567158(DAT_00686444,DAT_00686444,param_1,param_4,param_5,param_6,param_7,param_8._0_4_,
               param_8._4_4_,param_9._0_4_,param_9._4_4_,param_10,param_11,param_12,(short)param_13)
  ;
  return;
}
