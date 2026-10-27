// rea decompile_all
// name: FUN_0062cae4
// address: 0x62cae4
// body: available
// range: 0x62cae4-0x62cc6e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_0062cae4(int param_1,undefined4 param_2,undefined1 param_3,double param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  char cVar1;
  undefined4 uVar2;
  float10 in_ST0;
  double local_2c;

  if ((*(double *)(param_1 + 0x50) == (double)CONCAT44(param_8,param_7)) &&
     (*(double *)(param_1 + 0x58) == (double)CONCAT44(param_6,param_5))) {
    uVar2 = 1;
  }
  else {
    FUN_004048a8();
    if (param_4 < (double)in_ST0) {
      FUN_0062c498();
      uVar2 = 0;
      for (local_2c = 0.0; local_2c < 180.0; local_2c = local_2c + _DAT_006887fc) {
        cVar1 = FUN_0062c968();
        if (cVar1 != '\0') {
          return 0;
        }
        cVar1 = FUN_0062c968();
        if (cVar1 != '\0') {
          return 0;
        }
      }
      if (DAT_0068880c != '\0') {
        FUN_0060d0ac(param_1);
      }
    }
    else {
      cVar1 = FUN_0062c43c(param_1,param_2,param_3,param_5,param_6,param_7,(short)param_8);
      if (cVar1 != '\0') {
        FUN_0062c498();
        FUN_0060d0ac(param_1);
        FUN_0060ddec(param_1);
      }
      uVar2 = 1;
    }
  }
  return uVar2;
}
