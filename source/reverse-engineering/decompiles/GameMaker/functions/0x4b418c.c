// rea decompile_all
// name: FUN_004b418c
// address: 0x4b418c
// body: available
// range: 0x4b418c-0x4b41d1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004b418c(undefined4 param_1,int param_2)

{
  undefined1 auStack_7c [4];
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_68;

  FUN_004b3f80(param_1,auStack_7c);
  local_78 = 0x40000000;
  if (param_2 == -0xfffff8) {
    local_74 = 0x40000000;
  }
  else {
    local_68 = FUN_0045aa34(param_2);
  }
  FUN_004b4098(param_1,auStack_7c);
  return;
}
