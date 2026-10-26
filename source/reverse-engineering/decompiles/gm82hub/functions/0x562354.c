// rea decompile_all
// name: FUN_00562354
// address: 0x562354
// body: available
// range: 0x562354-0x56245f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00562354(uint param_1,uint param_2)

{
  int extraout_EDX;
  int extraout_EDX_00;
  uint local_28;
  uint local_10;

  FUN_00561d4c();
  DAT_006863f8 = param_1;
  DAT_006863fc = param_2;
  if (_DAT_00686408 <= 0.0) goto LAB_00562455;
  local_28 = FUN_004048b8();
  if (extraout_EDX == (int)DAT_006863f8 >> 0x1f) {
    if (local_28 <= DAT_006863f8) {
LAB_005623d2:
      local_28 = DAT_006863f8;
    }
  }
  else if (extraout_EDX <= (int)DAT_006863f8 >> 0x1f) goto LAB_005623d2;
  DAT_006863f8 = local_28;
  local_10 = FUN_004048b8();
  if (extraout_EDX_00 == (int)DAT_006863fc >> 0x1f) {
    if (local_10 <= DAT_006863fc) {
LAB_0056243c:
      local_10 = DAT_006863fc;
    }
  }
  else if (extraout_EDX_00 <= (int)DAT_006863fc >> 0x1f) goto LAB_0056243c;
  DAT_006863fc = local_10;
LAB_00562455:
  FUN_00561dd0();
  return;
}
