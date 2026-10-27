// rea decompile_all
// name: FUN_00408d90
// address: 0x408d90
// body: available
// range: 0x408d90-0x408e0a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00408d90(byte param_1,undefined4 param_2)

{
  WCHAR local_424 [4];
  WCHAR local_41c [261];
  WCHAR local_212 [261];

  if (param_1 != 0) {
    local_424[0] = (ushort)param_1 + L'@';
    local_424[1] = 0x3a;
    local_424[2] = 0;
    GetCurrentDirectoryW(0x105,local_212);
    SetCurrentDirectoryW(local_424);
  }
  GetCurrentDirectoryW(0x105,local_41c);
  if (param_1 != 0) {
    SetCurrentDirectoryW(local_212);
  }
  FUN_004083a4(param_2,local_41c,0x105);
  return;
}
