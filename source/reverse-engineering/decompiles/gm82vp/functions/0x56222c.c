// rea decompile_all
// name: FUN_0056222c
// address: 0x56222c
// body: available
// range: 0x56222c-0x56232f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0056222c(undefined4 param_1,undefined4 param_2,uint param_3,uint param_4)

{
  int extraout_EDX;
  int extraout_EDX_00;
  uint local_34;
  uint local_1c;

  FUN_00561d4c();
  DAT_006863fc = param_4;
  _DAT_006863f0 = param_1;
  _DAT_006863f4 = param_2;
  DAT_006863f8 = param_3;
  if (_DAT_00686408 <= 0.0) goto LAB_00562322;
  local_1c = FUN_004048b8();
  if (extraout_EDX == (int)DAT_006863f8 >> 0x1f) {
    if (local_1c <= DAT_006863f8) {
LAB_005622b5:
      local_1c = DAT_006863f8;
    }
  }
  else if (extraout_EDX <= (int)DAT_006863f8 >> 0x1f) goto LAB_005622b5;
  DAT_006863f8 = local_1c;
  local_34 = FUN_004048b8();
  if (extraout_EDX_00 == (int)DAT_006863fc >> 0x1f) {
    if (local_34 <= DAT_006863fc) {
LAB_0056230e:
      local_34 = DAT_006863fc;
    }
  }
  else if (extraout_EDX_00 <= (int)DAT_006863fc >> 0x1f) goto LAB_0056230e;
  DAT_006863fc = local_34;
LAB_00562322:
  FUN_00561dd0();
  return;
}
