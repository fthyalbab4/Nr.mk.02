// rea decompile_all
// name: FUN_005397c0
// address: 0x5397c0
// body: available
// range: 0x5397c0-0x539840 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005397c0(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int in_stack_00000004;

  iVar2 = in_stack_00000004;
  FUN_0053930c();
  cVar1 = FUN_00415880(*(undefined4 *)(in_stack_00000004 + -4),&PTR_DAT_00539850,iVar2);
  if (cVar1 != '\0') {
    FUN_00409dfc(*(int *)(in_stack_00000004 + -0x1c) + 0x20,&DAT_0053778c,1,
                 *(ushort *)(in_stack_00000004 + -0xe) >> 2);
    iVar2 = FUN_00409c34(*(undefined4 *)(*(int *)(in_stack_00000004 + -0x1c) + 0x20));
    if (-1 < iVar2 + -1) {
      iVar3 = 0;
      do {
        *(undefined4 *)(*(int *)(*(int *)(in_stack_00000004 + -0x1c) + 0x20) + iVar3 * 4) =
             **(undefined4 **)(in_stack_00000004 + -8);
        *(int *)(in_stack_00000004 + -8) = *(int *)(in_stack_00000004 + -8) + 4;
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  return;
}
