// rea decompile_all
// name: FUN_0042b0ac
// address: 0x42b0ac
// body: available
// range: 0x42b0ac-0x42b0f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0042b0ac(int param_1,undefined4 param_2,undefined2 *param_3,undefined4 param_4)

{
  char cVar1;
  int *local_10;
  undefined4 local_c;

  local_c = param_2;
  if (((short)param_4 != *(short *)(param_1 + 4)) &&
     (cVar1 = FUN_0042b560(*param_3,&local_10), cVar1 != '\0')) {
    (**(code **)(*local_10 + 0x1c))(local_10,local_c,param_3,param_4);
    return;
  }
  FUN_0042b4e0(param_1);
  return;
}
