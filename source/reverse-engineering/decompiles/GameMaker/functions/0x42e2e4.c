// rea decompile_all
// name: FUN_0042e2e4
// address: 0x42e2e4
// body: available
// range: 0x42e2e4-0x42e354 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0042e2e4(int *param_1,int param_2,undefined4 param_3)

{
  code *local_10;

  local_10 = *(code **)(param_2 + 8);
  if (((uint)local_10 & 0xff000000) == 0xff000000) {
    FUN_0040b158(((uint)local_10 & 0xffffff) + (int)param_1,param_3);
  }
  else {
    if (((uint)local_10 & 0xff000000) == 0xfe000000) {
      local_10 = *(code **)(*param_1 + (int)(short)local_10);
    }
    if (*(int *)(param_2 + 0x10) == -0x80000000) {
      (*local_10)(param_1,param_3);
    }
    else {
      (*local_10)(param_1,*(int *)(param_2 + 0x10),param_3);
    }
  }
  return;
}
