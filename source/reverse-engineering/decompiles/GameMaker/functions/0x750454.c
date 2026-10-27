// rea decompile_all
// name: FUN_00750454
// address: 0x750454
// body: available
// range: 0x750454-0x7504ae inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00750454(void)

{
  byte *pbVar1;
  int iVar2;
  int in_stack_00000004;

  iVar2 = FUN_00417914(*(undefined4 *)(in_stack_00000004 + -0x10),&DAT_007504b0,4);
  if (iVar2 == 0) {
    *(int *)(in_stack_00000004 + -0x10) = *(int *)(in_stack_00000004 + -0x10) + 4;
    **(undefined1 **)(in_stack_00000004 + -0x18) = 4;
    *(undefined1 *)(in_stack_00000004 + -1) = 0;
    FUN_007503dc();
    if (*(char *)(in_stack_00000004 + -1) != '\0') {
      pbVar1 = (byte *)(*(int *)(in_stack_00000004 + -0x18) + 1);
      *pbVar1 = *pbVar1 | 1;
      return;
    }
  }
  else {
    *(undefined1 *)(in_stack_00000004 + -0x19) = 3;
  }
  return;
}
