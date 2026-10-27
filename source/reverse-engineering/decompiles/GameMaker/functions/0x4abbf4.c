// rea decompile_all
// name: FUN_004abbf4
// address: 0x4abbf4
// body: available
// range: 0x4abbf4-0x4abc41 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004abbf4(undefined4 param_1,undefined4 param_2,char param_3,char param_4)

{
  char local_5;

  local_5 = param_3;
  if (param_4 != '\0') {
    FUN_004eaa44(&local_5);
  }
  if (local_5 == '\x01') {
    FUN_004087ec(&DAT_004abc60,param_2,1);
  }
  else if (local_5 == '\x02') {
    FUN_004087ec(&DAT_004abc50,param_2,1);
  }
  return;
}
