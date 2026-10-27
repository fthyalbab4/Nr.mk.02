// rea decompile_all
// name: FUN_004102e4
// address: 0x4102e4
// body: available
// range: 0x4102e4-0x410315 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_004102e4(void)

{
  int iVar1;
  float10 fVar2;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined2 in_stack_0000000c;

  fVar2 = (float10)CONCAT28(in_stack_0000000c,CONCAT44(in_stack_00000008,in_stack_00000004));
  iVar1 = FUN_004048c4();
  FUN_00404814();
  if (fVar2 < (float10)0.0) {
    iVar1 = iVar1 + -1;
  }
  return iVar1;
}
