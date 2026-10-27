// rea decompile_all
// name: FUN_0056cd34
// address: 0x56cd34
// body: available
// range: 0x56cd34-0x56cdb4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0056cd34(int param_1,int param_2,int param_3)

{
  if (*(int *)(param_1 + 0x304) != 0) {
    FUN_0056b858(param_1 + 0x304,param_2 + 1,param_3 + 1);
  }
  FUN_0056f788(param_1,param_1 + 0x28c,param_2,param_3);
  FUN_0056f788(param_1,param_1 + 0x27c,param_2,param_3);
  FUN_0056f788(param_1,param_1 + 0x2f4,param_2,param_3);
  FUN_00405d08(param_1,param_2,param_3);
  if (*(int *)(param_1 + 0x304) != 0) {
    FUN_00405d08(param_1);
  }
  FUN_00571d74(param_1);
  return;
}
