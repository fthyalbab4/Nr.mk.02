// rea decompile_all
// name: FUN_005b229c
// address: 0x5b229c
// body: available
// range: 0x5b229c-0x5b2610 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005b229c(undefined4 param_1,int param_2,char param_3,undefined1 param_4,undefined4 param_5)

{
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  char local_5;

  local_5 = param_3;
  if (param_3 == '\0') {
    if (param_2 < 2) {
      local_14 = 1;
      local_10 = 1;
      local_c = 1;
      FUN_005b1dc8(param_1,3,1,param_4,param_5,2,&local_14);
      local_14 = 1;
      local_10 = 1;
      local_c = 1;
      FUN_005b1dc8(param_1,1,3,param_4,param_5,2,&local_14);
    }
    if (param_2 == 2) {
      local_28 = 1;
      local_24 = 1;
      local_20 = 1;
      local_1c = 1;
      local_18 = 1;
      FUN_005b1dc8(param_1,5,1,param_4,param_5,4,&local_28);
      local_28 = 1;
      local_24 = 1;
      local_20 = 1;
      local_1c = 1;
      local_18 = 1;
      FUN_005b1dc8(param_1,1,5,param_4,param_5,4,&local_28);
    }
    if (2 < param_2) {
      local_68 = 1;
      local_64 = 1;
      local_60 = 1;
      local_5c = 1;
      local_58 = 1;
      local_54 = 1;
      local_50 = 1;
      local_4c = 1;
      local_48 = 1;
      FUN_005b1dc8(param_1,9,1,param_4,param_5,8,&local_68);
      local_68 = 1;
      local_64 = 1;
      local_60 = 1;
      local_5c = 1;
      local_58 = 1;
      local_54 = 1;
      local_50 = 1;
      local_4c = 1;
      local_48 = 1;
      FUN_005b1dc8(param_1,1,9,param_4,param_5,8,&local_68);
    }
  }
  else {
    if (param_2 < 2) {
      local_14 = 1;
      local_10 = 2;
      local_c = 1;
      FUN_005b1dc8(param_1,3,1,param_4,param_5,2,&local_14);
      local_14 = 1;
      local_10 = 2;
      local_c = 1;
      FUN_005b1dc8(param_1,1,3,param_4,param_5,2,&local_14);
    }
    if (param_2 == 2) {
      local_28 = 1;
      local_24 = 4;
      local_20 = 6;
      local_1c = 4;
      local_18 = 1;
      FUN_005b1dc8(param_1,5,1,param_4,param_5,4,&local_28);
      local_28 = 1;
      local_24 = 4;
      local_20 = 6;
      local_1c = 4;
      local_18 = 1;
      FUN_005b1dc8(param_1,1,5,param_4,param_5,4,&local_28);
    }
    if (2 < param_2) {
      local_44 = 1;
      local_40 = 6;
      local_3c = 0xf;
      local_38 = 0x14;
      local_34 = 0xf;
      local_30 = 6;
      local_2c = 1;
      FUN_005b1dc8(param_1,7,1,param_4,param_5,6,&local_44);
      local_44 = 1;
      local_40 = 6;
      local_3c = 0xf;
      local_38 = 0x14;
      local_34 = 0xf;
      local_30 = 6;
      local_2c = 1;
      FUN_005b1dc8(param_1,1,7,param_4,param_5,6,&local_44);
    }
  }
  return;
}
