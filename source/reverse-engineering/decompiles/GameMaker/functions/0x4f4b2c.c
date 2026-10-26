// rea decompile_all
// name: FUN_004f4b2c
// address: 0x4f4b2c
// body: available
// range: 0x4f4b2c-0x4f4b63 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004f4b2c(int *param_1,undefined4 param_2)

{
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  local_14 = *(undefined4 *)(&DAT_00778b68 + (uint)((*(byte *)((int)param_1 + 0x56) & 1) != 0) * 4);
  local_c = 0;
  local_8 = 0;
  local_10 = param_2;
  (**(code **)(*param_1 + -0x10))(param_1,&local_14);
  return;
}
