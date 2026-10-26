// rea decompile_all
// name: FUN_00759054
// address: 0x759054
// body: available
// range: 0x759054-0x759082 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00759054(void)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  int in_stack_00000004;

  piVar3 = (int *)(in_stack_00000004 + -4);
  FUN_00758ea8();
  iVar1 = *piVar3;
  while( true ) {
    cVar2 = FUN_00741020(*(undefined1 *)*piVar3);
    if (cVar2 != '\0') break;
    *piVar3 = *piVar3 + 1;
  }
  return iVar1;
}
