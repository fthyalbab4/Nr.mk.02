// rea decompile_all
// name: FUN_0059ea78
// address: 0x59ea78
// body: available
// range: 0x59ea78-0x59eab4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0059ea78(int param_1,ushort *param_2,ushort param_3)

{
  int local_c;

  local_c = param_1;
  FUN_00404358(&local_c,(uint)param_3 * 4);
  FUN_00404f38(local_c + (uint)*param_2 * 4,((uint)param_3 - (uint)*param_2) * 4,0);
  *param_2 = param_3;
  return local_c;
}
