// rea decompile_all
// name: FUN_00598264
// address: 0x598264
// body: available
// range: 0x598264-0x598334 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00598264(int param_1,int param_2,int param_3)

{
  int local_20 [3];
  undefined4 local_14;

  if (param_3 != param_2) {
    if (*(int *)(param_1 + 0x300) != 0) {
      FUN_00596e9c(param_1 + 0x300,param_2 + 1,param_3 + 1);
      FUN_00596e9c(param_1 + 0x308,param_2 + 1,param_3 + 1);
    }
    FUN_0059ad90(param_1,param_1 + 0x288,param_2,param_3);
    FUN_0059ad90(param_1,param_1 + 0x278,param_2,param_3);
    FUN_0059ad90(param_1,param_1 + 0x2f0,param_2,param_3);
    local_20[1] = 0;
    local_14 = FUN_0059cca0(param_1);
    local_20[0] = param_3;
    local_20[2] = param_2;
    if (param_2 < param_3) {
      local_20[0] = param_2;
      local_20[2] = param_3;
    }
    FUN_0059a734(param_1,local_20);
    FUN_00406268(param_1,param_2,param_3);
    if (*(int *)(param_1 + 0x300) != 0) {
      FUN_00406268(param_1);
    }
    FUN_0059d37c(param_1);
  }
  return;
}
