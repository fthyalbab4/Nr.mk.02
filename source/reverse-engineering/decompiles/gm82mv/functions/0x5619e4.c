// rea decompile_all
// name: FUN_005619e4
// address: 0x5619e4
// body: available
// range: 0x5619e4-0x561a75 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_005619e4(DWORD param_1,DWORD param_2,DWORD param_3,DWORD param_4)

{
  LONG LVar1;
  DEVMODEW local_e0;

  FUN_00404f38(&local_e0,0xdc,0);
  local_e0.dmSize = 0xdc;
  if (0 < (int)param_1) {
    local_e0.dmFields = local_e0.dmFields | 0x80000;
    local_e0.dmPelsWidth = param_1;
  }
  if (0 < (int)param_2) {
    local_e0.dmFields = local_e0.dmFields | 0x100000;
    local_e0.dmPelsHeight = param_2;
  }
  if (0 < (int)param_4) {
    local_e0.dmFields = local_e0.dmFields | 0x40000;
    local_e0.dmBitsPerPel = param_4;
  }
  if (0 < (int)param_3) {
    local_e0.dmFields = local_e0.dmFields | 0x400000;
    local_e0.dmDisplayFrequency = param_3;
  }
  LVar1 = ChangeDisplaySettingsW(&local_e0,2);
  return LVar1 == 0;
}
