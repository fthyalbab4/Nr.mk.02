// rea decompile_all
// name: FUN_0059ce48
// address: 0x59ce48
// body: available
// range: 0x59ce48-0x59ce66 inclusive
// range: 0x59ce7b-0x59cff3 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0059ce48(undefined4 param_1,undefined1 param_2,char *param_3,int param_4,int param_5,
                 char *param_6,char *param_7)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  int local_10;

  switch(param_2) {
  case 0:
    FUN_0040450c(param_3,param_6,param_4);
    break;
  case 1:
    FUN_0040450c(param_3,param_6,param_5);
    param_3 = param_3 + param_5;
    pcVar2 = param_6 + param_5;
    for (param_4 = param_4 - param_5; 0 < param_4; param_4 = param_4 + -1) {
      *pcVar2 = *param_6 + *param_3;
      param_3 = param_3 + 1;
      param_6 = param_6 + 1;
      pcVar2 = pcVar2 + 1;
    }
    break;
  case 2:
    for (; 0 < param_4; param_4 = param_4 + -1) {
      *param_6 = *param_7 + *param_3;
      param_3 = param_3 + 1;
      param_7 = param_7 + 1;
      param_6 = param_6 + 1;
    }
    break;
  case 3:
    if (-1 < param_5 + -1) {
      local_10 = param_5;
      do {
        cVar1 = FUN_00410538();
        *param_6 = cVar1 + *param_3;
        param_3 = param_3 + 1;
        param_6 = param_6 + 1;
        local_10 = local_10 + -1;
      } while (local_10 != 0);
    }
    for (param_4 = param_4 - param_5; 0 < param_4; param_4 = param_4 + -1) {
      cVar1 = FUN_00410538();
      *param_6 = cVar1 + *param_3;
      param_3 = param_3 + 1;
      param_6 = param_6 + 1;
    }
    break;
  case 4:
    pcVar2 = param_6;
    pcVar3 = param_7;
    if (-1 < param_5 + -1) {
      local_10 = param_5;
      do {
        cVar1 = FUN_0059cde0(0,*pcVar3,0);
        *pcVar2 = cVar1 + *param_3;
        param_3 = param_3 + 1;
        pcVar3 = pcVar3 + 1;
        pcVar2 = pcVar2 + 1;
        local_10 = local_10 + -1;
      } while (local_10 != 0);
    }
    for (param_4 = param_4 - param_5; 0 < param_4; param_4 = param_4 + -1) {
      cVar1 = FUN_0059cde0(*param_6,*pcVar3,*param_7);
      *pcVar2 = cVar1 + *param_3;
      param_3 = param_3 + 1;
      param_6 = param_6 + 1;
      pcVar3 = pcVar3 + 1;
      param_7 = param_7 + 1;
      pcVar2 = pcVar2 + 1;
    }
  }
  return;
}
