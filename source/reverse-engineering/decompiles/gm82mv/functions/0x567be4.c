// rea decompile_all
// name: FUN_00567be4
// address: 0x567be4
// body: available
// range: 0x567be4-0x567e54 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00567be4(undefined4 param_1,undefined4 param_2,undefined4 param_3,char param_4,char param_5
                 ,int param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
                 undefined4 param_10,undefined4 param_11,undefined4 param_12,undefined4 param_13,
                 undefined4 param_14,undefined4 param_15,undefined4 param_16,undefined4 param_17)

{
  double dVar1;
  undefined4 uVar2;
  undefined8 local_2c;
  undefined8 local_24;
  undefined8 local_1c;
  undefined8 local_14;

  if (param_5 != '\0') {
    FUN_00566bf0(param_1,param_1,param_1,0,param_1,param_10,param_11,param_12,param_13,param_14,
                 param_15,param_16,param_17);
    if (param_4 != '\0') {
      FUN_00566bf0(0,0,0,1,0,param_10,param_11,param_12,param_13,param_14,param_15,param_16,param_17
                  );
    }
  }
  if ((double)CONCAT44(param_9,param_8) < 0.0) {
    param_8 = 0;
    param_9 = 0;
  }
  if (100.0 < (double)CONCAT44(param_9,param_8)) {
    param_8 = 0;
    param_9 = 0x40590000;
  }
  dVar1 = (double)CONCAT44(param_9,param_8) / 100.0;
  if (param_6 == 0) {
    local_14 = (double)CONCAT44(param_17,param_16);
    local_24 = (double)CONCAT44(param_15,param_14);
    local_1c = ((double)CONCAT44(param_13,param_12) - (double)CONCAT44(param_17,param_16)) * dVar1 +
               (double)CONCAT44(param_17,param_16);
    local_2c = (double)CONCAT44(param_11,param_10);
  }
  else if (param_6 == 1) {
    local_14 = (double)CONCAT44(param_13,param_12) -
               ((double)CONCAT44(param_13,param_12) - (double)CONCAT44(param_17,param_16)) * dVar1;
    local_24 = (double)CONCAT44(param_15,param_14);
    local_1c = (double)CONCAT44(param_13,param_12);
    local_2c = (double)CONCAT44(param_11,param_10);
  }
  else if (param_6 == 2) {
    local_14 = (double)CONCAT44(param_17,param_16);
    local_24 = (double)CONCAT44(param_15,param_14);
    local_1c = (double)CONCAT44(param_13,param_12);
    local_2c = ((double)CONCAT44(param_11,param_10) - (double)CONCAT44(param_15,param_14)) * dVar1 +
               (double)CONCAT44(param_15,param_14);
  }
  else if (param_6 == 3) {
    local_14 = (double)CONCAT44(param_17,param_16);
    local_24 = (double)CONCAT44(param_11,param_10) -
               ((double)CONCAT44(param_11,param_10) - (double)CONCAT44(param_15,param_14)) * dVar1;
    local_1c = (double)CONCAT44(param_13,param_12);
    local_2c = (double)CONCAT44(param_11,param_10);
  }
  else {
    local_14 = (double)CONCAT44(param_17,param_16);
    local_24 = (double)CONCAT44(param_15,param_14);
    local_1c = ((double)CONCAT44(param_13,param_12) - (double)CONCAT44(param_17,param_16)) * dVar1 +
               (double)CONCAT44(param_17,param_16);
    local_2c = (double)CONCAT44(param_11,param_10);
  }
  if ((double)CONCAT44(param_9,param_8) <= 50.0) {
    uVar2 = FUN_00563990(param_2,param_3);
  }
  else {
    uVar2 = FUN_00563990(param_3,param_7);
  }
  FUN_00566bf0(uVar2,uVar2,uVar2,0,uVar2,(undefined4)local_2c,local_2c._4_4_,(undefined4)local_1c,
               local_1c._4_4_,(undefined4)local_24,local_24._4_4_,(undefined4)local_14,
               local_14._4_4_);
  if (param_4 != '\0') {
    FUN_00566bf0(0,0,0,1,0,(undefined4)local_2c,local_2c._4_4_,(undefined4)local_1c,local_1c._4_4_,
                 (undefined4)local_24,local_24._4_4_,(undefined4)local_14,local_14._4_4_);
  }
  return;
}
