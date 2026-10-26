// rea decompile_all
// name: FUN_0056479c
// address: 0x56479c
// body: available
// range: 0x56479c-0x56485c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0056479c(undefined4 param_1,uint param_2)

{
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  uint local_70;
  undefined4 local_6c;
  float local_68;
  float local_64;
  float local_60;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;

  FUN_00404f38(&local_6c,0x68,0);
  local_6c = 3;
  local_68 = (float)(param_2 & 0xff) / 255.0;
  local_64 = (float)(param_2 >> 8 & 0xff) / 255.0;
  local_70 = param_2 >> 0x10 & 0xff;
  local_60 = (float)local_70 / 255.0;
  FUN_00531620(&local_7c);
  local_2c = local_7c;
  local_28 = local_78;
  local_24 = local_74;
  (**(code **)(**(int **)PTR_DAT_00689570 + 0xb0))();
  return;
}
