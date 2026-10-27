// rea decompile_all
// name: FUN_004424b4
// address: 0x4424b4
// body: available
// range: 0x4424b4-0x4424f5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004424b4(undefined4 param_1)

{
  char cVar1;
  undefined4 local_c [2];

  cVar1 = FUN_0044175c(param_1);
  if (cVar1 == '\x13') {
    FUN_004435d8(param_1);
    FUN_00441780(param_1,local_c,8);
  }
  else {
    local_c[0] = FUN_00442448(param_1);
  }
  return local_c[0];
}
