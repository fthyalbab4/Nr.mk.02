// rea decompile_all
// name: FUN_0062c75c
// address: 0x62c75c
// body: available
// range: 0x62c75c-0x62c8a4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char FUN_0062c75c(int param_1,int param_2,undefined4 param_3,undefined1 param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
                 undefined4 param_10)

{
  double dVar1;
  double dVar2;
  char cVar3;
  char cVar4;

  cVar4 = '\0';
  if ((param_2 != 0) && (0.0 < (double)CONCAT44(param_6,param_5))) {
    FUN_0057b024(param_2);
    FUN_0057a928(param_2,0);
    FUN_0057a944(param_2,0);
    FUN_0057b150(param_2);
    cVar4 = '\x01';
    while( true ) {
      dVar1 = *(double *)(param_1 + 0x50);
      dVar2 = *(double *)(param_1 + 0x58);
      cVar3 = FUN_0062c64c(param_1,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10)
      ;
      if (cVar3 != '\0') break;
      if ((*(double *)(param_1 + 0x50) == dVar1) && (*(double *)(param_1 + 0x58) == dVar2)) {
        cVar4 = '\0';
        break;
      }
      FUN_0057b150(param_2);
    }
    if (cVar4 != '\0') {
      FUN_0057b150(param_2);
    }
    FUN_0060ddec(param_1);
    FUN_0060d0ac(param_1);
  }
  return cVar4;
}
