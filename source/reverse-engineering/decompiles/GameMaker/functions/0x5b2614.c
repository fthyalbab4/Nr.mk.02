// rea decompile_all
// name: FUN_005b2614
// address: 0x5b2614
// body: available
// range: 0x5b2614-0x5b274e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005b2614(undefined4 param_1,int param_2,undefined4 param_3,undefined1 param_4)

{
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  if (param_2 < 2) {
    local_28 = 0xffffffff;
    local_24 = 0xffffffff;
    local_20 = 0xffffffff;
    local_1c = 0xffffffff;
    local_18 = 0x10;
    local_14 = 0xffffffff;
    local_10 = 0xffffffff;
    local_c = 0xffffffff;
    local_8 = 0xffffffff;
    FUN_005b1dc8(param_1,3,3,param_4,param_3,8,&local_28);
  }
  if (param_2 == 2) {
    local_28 = 0xffffffff;
    local_24 = 0xffffffff;
    local_20 = 0xffffffff;
    local_1c = 0xffffffff;
    local_18 = 9;
    local_14 = 0xffffffff;
    local_10 = 0xffffffff;
    local_c = 0xffffffff;
    local_8 = 0xffffffff;
    FUN_005b1dc8(param_1,3,3,param_4,param_3,8,&local_28);
  }
  if (2 < param_2) {
    local_28 = 1;
    local_24 = 1;
    local_20 = 1;
    local_1c = 1;
    local_18 = 0xfffffff9;
    local_14 = 1;
    local_10 = 1;
    local_c = 1;
    local_8 = 1;
    FUN_005b1dc8(param_1,3,3,param_4,param_3,8,&local_28);
  }
  return;
}
