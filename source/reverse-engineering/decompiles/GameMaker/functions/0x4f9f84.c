// rea decompile_all
// name: FUN_004f9f84
// address: 0x4f9f84
// body: available
// range: 0x4f9f84-0x4f9fc3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004f9f84(HWND param_1,int param_2,int param_3,int *param_4)

{
  tagRECT local_1c;
  tagPOINT local_c;

  local_c.x = param_2;
  local_c.y = param_3;
  ClientToScreen(param_1,&local_c);
  GetWindowRect(param_1,&local_1c);
  *param_4 = local_c.x - local_1c.left;
  param_4[1] = local_c.y - local_1c.top;
  return;
}
