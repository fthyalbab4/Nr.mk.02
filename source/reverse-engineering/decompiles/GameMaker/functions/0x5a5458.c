// rea decompile_all
// name: FUN_005a5458
// address: 0x5a5458
// body: available
// range: 0x5a5458-0x5a5612 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005a5458(uint param_1,undefined1 *param_2,undefined1 *param_3,undefined1 *param_4,
                 undefined1 *param_5)

{
  undefined1 uVar1;
  float10 in_ST0;
  float10 in_ST1;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  uint local_48;
  double local_44;
  double local_3c;
  double local_34;
  double local_2c;
  undefined8 local_24;
  undefined8 local_1c;
  undefined8 local_14;
  undefined4 local_8;

  local_14 = (double)((float)(param_1 >> 0x10 & 0xff) / 255.0);
  local_1c = (double)((float)(param_1 >> 8 & 0xff) / 255.0);
  local_48 = param_1 & 0xff;
  local_24 = (double)((float)local_48 / 255.0);
  local_8 = param_1;
  local_60 = local_14;
  local_58 = local_1c;
  local_50 = local_24;
  FUN_00410630(&local_60,2);
  local_3c = (double)in_ST0;
  local_60._0_4_ = (undefined4)local_14;
  local_60._4_4_ = local_14._4_4_;
  local_58._0_4_ = (undefined4)local_1c;
  local_58._4_4_ = local_1c._4_4_;
  local_50._0_4_ = (undefined4)local_24;
  local_50._4_4_ = local_24._4_4_;
  FUN_004105f4(&local_60,2);
  local_44 = (double)((float10)local_3c - in_ST1);
  if (local_3c == 0.0) {
    local_34 = 0.0;
  }
  else {
    local_34 = local_44 / local_3c;
  }
  if (local_34 == 0.0) {
    local_2c = 0.0;
  }
  else if (local_14 == local_3c) {
    local_2c = ((local_1c - local_24) * 60.0) / local_44;
  }
  else if (local_1c == local_3c) {
    local_2c = ((local_24 - local_14) * 60.0) / local_44 + 120.0;
  }
  else {
    local_2c = ((local_14 - local_1c) * 60.0) / local_44 + 240.0;
  }
  if (local_2c < 0.0) {
    local_2c = local_2c + 360.0;
  }
  uVar1 = FUN_00404884();
  *param_5 = uVar1;
  uVar1 = FUN_00404884();
  *param_3 = uVar1;
  uVar1 = FUN_00404884();
  *param_2 = uVar1;
  *param_4 = local_8._3_1_;
  return;
}
