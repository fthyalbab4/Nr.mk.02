// rea decompile_all
// name: FUN_0043cf60
// address: 0x43cf60
// body: available
// range: 0x43cf60-0x43d023 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0043cf60(undefined4 param_1,int param_2)

{
  int local_14;
  int local_10;

  if (param_2 < 0) {
    local_14 = FUN_0043c834(param_1);
    local_14 = local_14 + param_2;
    FUN_0043c854(param_1);
    FUN_0043ca88(param_1,&local_10,4);
    local_14 = (local_14 - local_10) + 4;
    FUN_0043c854(param_1);
    FUN_0043cac0(param_1,&local_14,4);
    FUN_0043c854(param_1);
  }
  else {
    local_14 = FUN_0043c834(param_1);
    local_14 = local_14 - param_2;
    FUN_0043c854(param_1);
    FUN_0043cac0(param_1,&local_14,4);
    FUN_0043c854(param_1);
  }
  return;
}
