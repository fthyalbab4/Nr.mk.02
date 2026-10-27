// rea decompile_all
// name: FUN_0043d598
// address: 0x43d598
// body: available
// range: 0x43d598-0x43d5bc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0043d598(int *param_1,int param_2)

{
  undefined4 uVar1;
  int local_8;

  local_8 = param_2;
  uVar1 = (**(code **)(*param_1 + 0x1c))(param_1,&local_8);
  FUN_0043d3f4(param_1,uVar1,param_1[2]);
  param_1[4] = local_8;
  return;
}
