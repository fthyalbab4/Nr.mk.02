// rea decompile_all
// name: FUN_00551424
// address: 0x551424
// body: available
// range: 0x551424-0x551471 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00551424(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int in_stack_00000004;
  undefined1 local_e4 [64];
  int local_a4;

  FUN_005506dc(*(undefined4 *)(in_stack_00000004 + -4),local_e4);
  cVar1 = FUN_005513cc(*(undefined4 *)(in_stack_00000004 + -4));
  if (cVar1 == '\0') {
LAB_00551467:
    uVar3 = 0;
  }
  else {
    if (local_a4 != 0) {
      iVar2 = FUN_0054ff2c(*(undefined4 *)(in_stack_00000004 + -4));
      if (local_a4 != iVar2) goto LAB_00551467;
    }
    uVar3 = 1;
  }
  return uVar3;
}
