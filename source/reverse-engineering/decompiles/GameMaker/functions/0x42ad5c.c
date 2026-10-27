// rea decompile_all
// name: FUN_0042ad5c
// address: 0x42ad5c
// body: available
// range: 0x42ad5c-0x42ae04 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0042ad5c(short *param_1,short *param_2,int param_3)

{
  char cVar1;

  if (param_3 == 8) {
    if (*param_1 == 1) {
      if ((*param_2 != 1) && (cVar1 = FUN_00426988(param_2), cVar1 == '\0')) {
        FUN_00424d3c(param_1,param_2);
        return;
      }
      FUN_00424724(param_1);
    }
    else {
      cVar1 = FUN_00426988(param_1);
      if ((cVar1 != '\0') && (*param_2 == 1)) {
        FUN_00424724(param_1);
        return;
      }
    }
  }
  else if (param_3 == 9) {
    if (*param_1 == 1) {
      if ((*param_2 != 1) && (cVar1 = FUN_00426988(param_2), cVar1 != '\0')) {
        FUN_00424d3c(param_1,param_2);
        return;
      }
      FUN_00424724(param_1);
    }
    else {
      cVar1 = FUN_00426988(param_1);
      if ((cVar1 == '\0') && (*param_2 == 1)) {
        FUN_00424724(param_1);
        return;
      }
    }
  }
  else {
    FUN_00424724(param_1);
  }
  return;
}
