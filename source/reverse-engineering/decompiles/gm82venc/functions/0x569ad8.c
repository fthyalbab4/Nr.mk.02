// rea decompile_all
// name: FUN_00569ad8
// address: 0x569ad8
// body: available
// range: 0x569ad8-0x569b3c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


code * FUN_00569ad8(uint param_1,byte *param_2,undefined4 param_3)

{
  byte *pbVar1;
  code *pcVar2;

  if (param_2 == (byte *)0x0) {
    if ((char)param_1 == '\0') {
      pcVar2 = (code *)FUN_0056939c(0,param_3);
    }
    else if ((char)param_1 == '\x01') {
      pcVar2 = (code *)FUN_005693c8(0,param_3);
    }
    else {
      FUN_00404480(4);
      pcVar2 = (code *)0x0;
    }
  }
  else {
    pbVar1 = &DAT_00686840 + (uint)*param_2 * 8 + (param_1 & 0x7f) * 0xb0;
    pcVar2 = *(code **)(pbVar1 + 4);
    if ((*pbVar1 & 2) != 0) {
      pcVar2 = (code *)(*pcVar2)(param_2,param_3);
    }
    if ((*pbVar1 & 1) != 0) {
      pcVar2 = (code *)FUN_00568cf8(pcVar2,param_3);
    }
  }
  return pcVar2;
}
