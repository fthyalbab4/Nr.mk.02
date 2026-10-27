// rea decompile_all
// name: FUN_0060dea4
// address: 0x60dea4
// body: available
// range: 0x60dea4-0x60dfa5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0060dea4(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 local_c;

  if (*(double *)(param_1 + 0x90) != 0.0) {
    if (*(double *)(param_1 + 0x88) <= 0.0) {
      local_c = *(double *)(param_1 + 0x88) + *(double *)(param_1 + 0x90);
    }
    else {
      local_c = *(double *)(param_1 + 0x88) - *(double *)(param_1 + 0x90);
    }
    if ((*(double *)(param_1 + 0x88) <= 0.0) || (0.0 <= local_c)) {
      if ((0.0 <= *(double *)(param_1 + 0x88)) || (local_c <= 0.0)) {
        if (*(double *)(param_1 + 0x88) != 0.0) {
          FUN_0060d118(param_1,param_2,param_3,(undefined4)local_c,local_c._4_4_);
        }
      }
      else {
        FUN_0060d118(param_1,param_2,param_3,0,0);
      }
    }
    else {
      FUN_0060d118(param_1,param_2,param_3,0,0);
    }
  }
  if (*(double *)(param_1 + 0xa0) != 0.0) {
    FUN_0060de2c(param_1);
  }
  return;
}
