// rea decompile_all
// name: FUN_0043eee4
// address: 0x43eee4
// body: available
// range: 0x43eee4-0x43ef5e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0043eee4(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;

  (**(code **)(*param_1 + 0x94))();
  if (param_1[8] == param_1[9]) {
    FUN_0043ee10(param_1);
  }
  if (param_2 < param_1[8]) {
    FUN_0040450c(param_1[7] + param_2 * 8,param_1[7] + 8 + param_2 * 8,(param_1[8] - param_2) * 8);
  }
  puVar1 = (undefined4 *)(param_1[7] + param_2 * 8);
  *puVar1 = 0;
  puVar1[1] = param_4;
  FUN_00407eb8(puVar1,param_3);
  param_1[8] = param_1[8] + 1;
  (**(code **)(*param_1 + 0x90))();
  return;
}
