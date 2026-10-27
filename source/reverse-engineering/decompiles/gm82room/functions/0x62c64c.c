// rea decompile_all
// name: FUN_0062c64c
// address: 0x62c64c
// body: available
// range: 0x62c64c-0x62c759 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_0062c64c(int param_1,undefined4 param_2,undefined1 param_3,double param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  double dVar1;
  char cVar2;
  float10 in_ST0;
  undefined8 local_24;
  undefined8 local_1c;

  if ((*(double *)(param_1 + 0x50) == (double)CONCAT44(param_8,param_7)) &&
     (*(double *)(param_1 + 0x58) == (double)CONCAT44(param_6,param_5))) {
    return true;
  }
  FUN_004048a8();
  dVar1 = (double)in_ST0;
  if (param_4 < dVar1) {
    local_1c = (((double)CONCAT44(param_8,param_7) - *(double *)(param_1 + 0x50)) * param_4) / dVar1
               + *(double *)(param_1 + 0x50);
    local_24 = (((double)CONCAT44(param_6,param_5) - *(double *)(param_1 + 0x58)) * param_4) / dVar1
               + *(double *)(param_1 + 0x58);
  }
  else {
    local_1c = (double)CONCAT44(param_8,param_7);
    local_24 = (double)CONCAT44(param_6,param_5);
  }
  cVar2 = FUN_0062c43c(param_1,param_2,param_3,(undefined4)local_24,local_24._4_4_,
                       (undefined4)local_1c,(short)((ulonglong)local_1c >> 0x20));
  if (cVar2 != '\0') {
    FUN_0062c498();
    FUN_0060d0ac(param_1);
    FUN_0060ddec(param_1);
  }
  return param_4 >= dVar1;
}
