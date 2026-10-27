// rea decompile_all
// name: FUN_00442194
// address: 0x442194
// body: available
// range: 0x442194-0x4421e8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_00442194(void)

{
  int iVar1;
  int iVar2;
  int extraout_EDX;
  int extraout_EDX_00;
  bool bVar3;
  int in_stack_00000004;

  iVar1 = FUN_0042cde4(*(undefined4 *)(in_stack_00000004 + -4),
                       *(undefined4 *)(in_stack_00000004 + -8));
  if (*(char *)(in_stack_00000004 + -9) == '\0') {
    bVar3 = extraout_EDX == 0 && iVar1 == 0;
  }
  else {
    iVar2 = FUN_0042cde4(*(undefined4 *)(in_stack_00000004 + -0x10),
                         *(undefined4 *)(in_stack_00000004 + -8));
    bVar3 = extraout_EDX_00 == extraout_EDX && iVar2 == iVar1;
  }
  return bVar3;
}
