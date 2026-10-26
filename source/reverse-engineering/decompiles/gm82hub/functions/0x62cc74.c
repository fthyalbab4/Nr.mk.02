// rea decompile_all
// name: FUN_0062cc74
// address: 0x62cc74
// body: available
// range: 0x62cc74-0x62cdd3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char FUN_0062cc74(undefined4 param_1,int param_2,undefined4 param_3,undefined1 param_4,
                 double param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined2 param_11)

{
  char cVar1;
  char cVar2;
  float10 in_ST0;

  cVar2 = '\0';
  if ((param_2 != 0) && (1.0 <= param_5)) {
    if (0.0 < (double)CONCAT44(param_7,param_6)) {
      FUN_004048a8();
      FUN_0057b024(param_2);
      FUN_0057a928(param_2,0);
      FUN_0057a944(param_2,0);
      FUN_0057b150(param_2);
      cVar2 = '\x01';
      do {
        cVar1 = FUN_0062cae4(param_1,param_3,param_4,param_6,param_7,param_8,param_9,param_10,
                             param_11);
        if (cVar1 != '\0') goto LAB_0062cd8b;
        FUN_0057b150(param_2);
      } while (*(double *)(param_2 + 0x20) <= (double)(in_ST0 * (float10)param_5));
      cVar2 = '\0';
LAB_0062cd8b:
      if (cVar2 != '\0') {
        FUN_0057b150(param_2);
      }
      FUN_0060ddec(param_1);
      FUN_0060d0ac(param_1);
    }
  }
  return cVar2;
}
