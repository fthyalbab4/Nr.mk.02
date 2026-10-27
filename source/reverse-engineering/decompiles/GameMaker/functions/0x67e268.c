// rea decompile_all
// name: FUN_0067e268
// address: 0x67e268
// body: available
// range: 0x67e268-0x67e2a8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0067e268(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char local_9;
  undefined4 local_8;

  local_9 = '\x01';
  local_8 = param_3;
  if (*(short *)((int)param_1 + 0x6a) != 0) {
    (*(code *)param_1[0x1a])(param_1[0x1b],param_1,param_2,&local_9);
  }
  if (local_9 != '\0') {
    (**(code **)(*param_1 + 0x44))(param_1,local_8,param_4);
  }
  return;
}
