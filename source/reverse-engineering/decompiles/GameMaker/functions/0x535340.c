// rea decompile_all
// name: FUN_00535340
// address: 0x535340
// body: available
// range: 0x535340-0x5354d4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00535340(int param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
                 double param_10,double param_11,double param_12,undefined4 param_13,
                 undefined4 param_14,undefined4 param_15,undefined4 param_16,undefined4 param_17,
                 undefined4 param_18,int param_19)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  int iVar6;
  undefined4 extraout_EDX;

  if (param_1 != 0) {
    dVar1 = ((double)CONCAT44(param_18,param_17) + param_12 + param_12 +
            (double)CONCAT44(param_9,param_8)) / 4.0;
    dVar2 = ((double)CONCAT44(param_16,param_15) + param_11 + param_11 +
            (double)CONCAT44(param_7,param_6)) / 4.0;
    dVar3 = ((double)CONCAT44(param_14,param_13) + param_10 + param_10 +
            (double)CONCAT44(param_5,param_4)) / 4.0;
    dVar4 = param_12 - (double)CONCAT44(param_18,param_17);
    dVar5 = param_11 - (double)CONCAT44(param_16,param_15);
    if (16.0 < dVar4 * dVar4 + dVar5 * dVar5) {
      iVar6 = param_19;
      FUN_00535340(param_1 + -1,param_2,param_3,dVar3,dVar2,dVar1,
                   (param_10 + (double)CONCAT44(param_14,param_13)) / 2.0,
                   (param_11 + (double)CONCAT44(param_16,param_15)) / 2.0,
                   (param_12 + (double)CONCAT44(param_18,param_17)) / 2.0,param_13,param_14,param_15
                   ,param_16,param_17,param_18);
      param_3 = iVar6;
      param_2 = extraout_EDX;
    }
    FUN_00535260(*(undefined4 *)(param_19 + -4),param_2,param_3,dVar3,dVar2,dVar1);
    param_12 = param_12 - (double)CONCAT44(param_9,param_8);
    param_11 = param_11 - (double)CONCAT44(param_7,param_6);
    if (16.0 < param_12 * param_12 + param_11 * param_11) {
      FUN_00535340(param_1 + -1);
    }
  }
  return;
}
