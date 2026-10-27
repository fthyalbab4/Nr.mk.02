// rea decompile_all
// name: FUN_00571aa0
// address: 0x571aa0
// body: available
// range: 0x571aa0-0x571b13 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00571aa0(int *param_1,uint param_2)

{
  uint local_8;

  if (param_2 != param_1[0xad]) {
    local_8 = param_2;
    if ((param_2 & 0x1000) != 0) {
      local_8 = param_2 & 0xffffdfff;
    }
    param_1[0xad] = local_8;
    if (*(char *)((int)param_1 + 0x2fd) == '\0') {
      if ((local_8 & 0x2000) == 0) {
        FUN_0056c994(param_1);
      }
      else {
        FUN_0056c9a4(param_1);
      }
    }
    if ((local_8 & 0x1000) != 0) {
      FUN_0056f840(param_1,param_1[0xa2],param_1[0xa3],0,1);
    }
    (**(code **)(*param_1 + 0x90))();
  }
  return;
}
