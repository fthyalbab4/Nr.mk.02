// rea decompile_all
// name: FUN_00758c60
// address: 0x758c60
// body: available
// range: 0x758c60-0x758ce1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00758c60(undefined4 param_1,char *param_2,char param_3,undefined4 param_4)

{
  char cVar1;
  char *pcVar2;

  if (param_2 == (char *)0x0) {
    FUN_00407eb8(param_4,0);
  }
  else {
    if (*param_2 == '(') {
      param_2 = param_2 + 1;
      pcVar2 = param_2;
      while ((*pcVar2 != ')' && (cVar1 = FUN_00740f40(*pcVar2), cVar1 == '\0'))) {
        pcVar2 = pcVar2 + 1;
      }
    }
    else {
      pcVar2 = param_2;
      if (param_3 == '\0') {
        while ((*pcVar2 != '(' && (cVar1 = FUN_00741020(*pcVar2), cVar1 == '\0'))) {
          pcVar2 = pcVar2 + 1;
        }
      }
      else {
        while ((*pcVar2 != '(' && (cVar1 = FUN_00740f40(*pcVar2), cVar1 == '\0'))) {
          pcVar2 = pcVar2 + 1;
        }
      }
    }
    FUN_00407fe4(param_4,param_2,(int)pcVar2 - (int)param_2);
  }
  return;
}
