// rea decompile_all
// name: FUN_005662a8
// address: 0x5662a8
// body: available
// range: 0x5662a8-0x56631b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005662a8(void)

{
  double in_stack_00000004;
  double in_stack_0000000c;

  DAT_0083b1fc = (float)in_stack_0000000c;
  DAT_0083b200 = (float)in_stack_00000004;
  DAT_0083b204 = (float)*(double *)PTR_DAT_00689120;
  DAT_0083b208 = DAT_00686444;
  (**(code **)(**(int **)PTR_DAT_00689570 + 0xf4))();
  (**(code **)(**(int **)PTR_DAT_00689570 + 0x130))();
  (**(code **)(**(int **)PTR_DAT_00689570 + 0x120))();
  return;
}
