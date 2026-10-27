// rea decompile_all
// name: FUN_004c016c
// address: 0x4c016c
// body: available
// range: 0x4c016c-0x4c0191 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004c016c(undefined4 param_1,uint param_2)

{
  uint local_10 [4];

  local_10[0] = param_2 & 0xffff;
  local_10[1] = 0;
  local_10[2] = 0;
  local_10[3] = 0;
  FUN_004c00fc(param_1,local_10);
  return;
}
