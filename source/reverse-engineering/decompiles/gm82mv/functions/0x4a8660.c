// rea decompile_all
// name: FUN_004a8660
// address: 0x4a8660
// body: available
// range: 0x4a8660-0x4a86a9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004a8660(void)

{
  BOOL BVar1;
  int in_stack_00000004;
  undefined4 local_1fc [54];
  undefined4 local_124;
  undefined4 local_120;

  local_1fc[0] = FUN_0040ee4c();
  BVar1 = SystemParametersInfoW(0x29,0,local_1fc,0);
  if (BVar1 != 0) {
    **(undefined4 **)(in_stack_00000004 + -0x18) = local_124;
    **(undefined4 **)(in_stack_00000004 + 8) = local_120;
  }
  return;
}
