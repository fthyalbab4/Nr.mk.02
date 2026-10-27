// rea decompile_all
// name: FUN_00547448
// address: 0x547448
// body: available
// range: 0x547448-0x547499 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_00547448(void)

{
  bool bVar1;
  int iVar2;
  int in_stack_00000004;

  iVar2 = *(int *)(*(int *)(*(int *)(in_stack_00000004 + -4) + 0x20) + 8);
  if (0 < iVar2) {
    return iVar2 < 0x100;
  }
  iVar2 = FUN_0054ce78(*(undefined4 *)(*(int *)(in_stack_00000004 + -4) + 4));
  if (*(int *)(iVar2 + 8) < 1) {
    bVar1 = false;
  }
  else {
    iVar2 = FUN_0054ce78(*(undefined4 *)(*(int *)(in_stack_00000004 + -4) + 4));
    bVar1 = *(int *)(iVar2 + 8) < 0x100;
  }
  return bVar1;
}
