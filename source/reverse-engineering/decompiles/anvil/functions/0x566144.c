// rea decompile_all
// name: FUN_00566144
// address: 0x566144
// body: available
// range: 0x566144-0x5661c5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00566144(undefined4 param_1,undefined4 param_2,undefined4 param_3,double param_4)

{
  undefined4 local_14;
  undefined4 local_10;
  undefined8 local_c;

  if (0.0 <= (float)param_4) {
    local_c = param_4;
  }
  else {
    local_c = 0.0;
  }
  if ((float)local_c <= 1.0) {
    local_14 = (undefined4)local_c;
    local_10 = local_c._4_4_;
  }
  else {
    local_14 = 0;
    local_10 = 0x3ff00000;
  }
  DAT_00686448 = local_14;
  DAT_0068644c = local_10;
  DAT_00686444 = FUN_005638d8(DAT_00686444,param_2,param_3,local_14,local_10);
  return;
}
