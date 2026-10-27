// rea decompile_all
// name: FUN_004d0aa0
// address: 0x4d0aa0
// body: available
// range: 0x4d0aa0-0x4d0aed inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004d0aa0(undefined4 param_1,undefined4 param_2,uint *param_3,undefined4 param_4,
                 undefined4 *param_5)

{
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  uint local_10;
  uint local_c;
  uint local_8;

  local_20 = *param_5;
  uStack_1c = param_5[1];
  uStack_18 = param_5[2];
  uStack_14 = param_5[3];
  local_10 = *param_3;
  local_c = param_3[1];
  local_8 = param_3[2];
  FUN_004d09b4(param_1,local_10 & 0xff,param_3,param_2,local_c,local_8,&local_20,param_4);
  (**(code **)PTR_DAT_00688d2c)();
  return;
}
