// rea decompile_all
// name: FUN_00524db0
// address: 0x524db0
// body: available
// range: 0x524db0-0x524e23 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00524db0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined1 param_6,undefined1 param_7,undefined4 param_8,
                 undefined4 param_9,undefined1 param_10,undefined4 param_11,undefined4 param_12)

{
  undefined1 local_14 [8];
  undefined4 local_c;

  local_c = param_3;
  FUN_00524a1c(param_1,param_2,param_3,param_5,param_4,local_14,param_8,param_9,param_10,param_11,
               param_12);
  FUN_00524588(param_1,param_2,local_14,param_6,param_7);
  FUN_00524950(param_1,param_2,param_11,param_5,param_7,param_4);
  return;
}
