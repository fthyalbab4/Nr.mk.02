// rea decompile_all
// name: FUN_004d0c98
// address: 0x4d0c98
// body: available
// range: 0x4d0c98-0x4d0cc2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004d0c98(void)

{
  undefined4 uVar1;
  int in_stack_00000004;

  if (*(short *)(*(int *)(in_stack_00000004 + 0xc) + 0x8a) == 0) {
    uVar1 = 0x80004001;
  }
  else {
    uVar1 = FUN_00405d08(*(int *)(in_stack_00000004 + 0xc));
  }
  return uVar1;
}
