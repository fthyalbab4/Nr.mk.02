// rea decompile_all
// name: FUN_0062c8ac
// address: 0x62c8ac
// body: available
// range: 0x62c8ac-0x62c961 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0062c8ac(undefined1 param_1,undefined4 param_2,undefined4 param_3,double param_4,
                 double param_5,double param_6)

{
  undefined8 local_1c;
  undefined8 local_14;
  undefined8 local_c;

  if (1.0 <= (float)param_6) {
    local_c = param_6;
  }
  else {
    local_c = 1.0;
  }
  _DAT_006887f4 = (undefined4)local_c;
  _DAT_006887f8 = local_c._4_4_;
  if (1.0 <= (float)param_5) {
    local_14 = param_5;
  }
  else {
    local_14 = 1.0;
  }
  _DAT_006887fc = (undefined4)local_14;
  _DAT_00688800 = local_14._4_4_;
  if (1.0 <= (float)param_4) {
    local_1c = param_4;
  }
  else {
    local_1c = 1.0;
  }
  _DAT_00688804 = (undefined4)local_1c;
  _DAT_00688808 = local_1c._4_4_;
  DAT_0068880c = param_1;
  return;
}
