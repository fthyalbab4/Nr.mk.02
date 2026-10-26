// rea decompile_all
// name: FUN_005675d8
// address: 0x5675d8
// body: available
// range: 0x5675d8-0x5676f8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005675d8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,double param_8,
                 double param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
                 undefined4 param_13)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined2 uVar4;

  if (param_9 < (double)CONCAT44(param_13,param_12)) {
    uVar2 = param_9._0_4_;
    uVar3 = param_9._4_4_;
    param_9 = (double)CONCAT44(param_13,param_12);
    param_12 = uVar2;
    param_13 = uVar3;
  }
  if (param_8 < (double)CONCAT44(param_11,param_10)) {
    uVar2 = param_8._0_4_;
    uVar3 = param_8._4_4_;
    param_8 = (double)CONCAT44(param_11,param_10);
    param_10 = uVar2;
    param_11 = uVar3;
  }
  iVar1 = FUN_004102e4();
  if ((double)iVar1 == param_9) {
    param_9 = (double)(_DAT_005676fc + (float10)param_9);
  }
  iVar1 = FUN_004102e4();
  if ((double)iVar1 == param_8) {
    param_8 = (double)(_DAT_005676fc + (float10)param_8);
  }
  uVar4 = (undefined2)param_13;
  uVar2 = FUN_0056382c(param_2);
  uVar3 = FUN_0056382c(param_1);
  FUN_00567158(uVar3,uVar2,param_3,param_4,param_5,param_6,param_7,param_8._0_4_,param_8._4_4_,
               param_9._0_4_,param_9._4_4_,param_10,param_11,param_12,uVar4);
  return;
}
