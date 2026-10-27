// rea decompile_all
// name: FUN_00419b18
// address: 0x419b18
// body: available
// range: 0x419b18-0x419b4b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00419b18(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int in_stack_00000004;

  piVar2 = (int *)(in_stack_00000004 + -0x14);
  iVar1 = *piVar2;
  while (*(short *)*piVar2 == *(short *)(in_stack_00000004 + -0x16)) {
    *piVar2 = *piVar2 + 2;
  }
  iVar3 = *piVar2 - iVar1 >> 1;
  if (iVar3 < 0) {
    iVar3 = iVar3 + (uint)((*piVar2 - iVar1 & 1U) != 0);
  }
  *(int *)(in_stack_00000004 + -0x1c) = iVar3 + 1;
  return;
}
