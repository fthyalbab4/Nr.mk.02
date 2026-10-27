// rea decompile_all
// name: FUN_00589f2c
// address: 0x589f2c
// body: available
// range: 0x589f2c-0x589f94 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00589f2c(int param_1,int param_2)

{
  int iVar1;

  if (*(int *)(param_1 + 8) <= param_2) {
    return 10000000;
  }
  iVar1 = FUN_0060fdc0(param_1,param_2);
  if (*(int *)(iVar1 + 0xc) == 1) {
    param_2 = FUN_00589efc(param_1,param_2);
  }
  else {
    iVar1 = FUN_0060fdc0(param_1,param_2);
    if (*(char *)(iVar1 + 0x11) == '\0') {
      iVar1 = FUN_0060fdc0(param_1,param_2);
      if (*(int *)(iVar1 + 0xc) == 5) {
        param_2 = FUN_00589f2c(param_1,param_2 + 1);
      }
      else {
        param_2 = param_2 + 1;
      }
    }
    else {
      param_2 = FUN_00589f2c(param_1,param_2 + 1);
    }
  }
  return param_2;
}
