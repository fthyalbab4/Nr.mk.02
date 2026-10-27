// rea decompile_all
// name: FUN_004f36b4
// address: 0x4f36b4
// body: available
// range: 0x4f36b4-0x4f378c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_004f36b4(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int in_stack_00000004;

  iVar3 = *(int *)(*(int *)(in_stack_00000004 + -4) + 0x20);
  if ((iVar3 == 0) ||
     (cVar1 = FUN_004f36a0(*(int *)(in_stack_00000004 + -8) + 0x264,iVar3 + 0x264), cVar1 == '\0'))
  {
    iVar3 = *(int *)(*(int *)(in_stack_00000004 + -8) + 0x1dc);
    if ((iVar3 != 0) && (iVar3 = *(int *)(iVar3 + 8), -1 < iVar3 + -1)) {
      iVar4 = 0;
      do {
        iVar2 = FUN_0043b048(*(undefined4 *)(*(int *)(in_stack_00000004 + -8) + 0x1dc),iVar4);
        if ((*(char *)(iVar2 + 0x5d) == '\0') && (*(char *)(iVar2 + 99) != '\x03')) {
          return 1;
        }
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    iVar3 = *(int *)(*(int *)(in_stack_00000004 + -8) + 0x1e0);
    if ((iVar3 != 0) && (iVar3 = *(int *)(iVar3 + 8), -1 < iVar3 + -1)) {
      iVar4 = 0;
      do {
        iVar2 = FUN_0043b048(*(undefined4 *)(*(int *)(in_stack_00000004 + -8) + 0x1e0),iVar4);
        if ((*(char *)(iVar2 + 0x5d) == '\0') && (*(char *)(iVar2 + 99) != '\x03')) {
          return 1;
        }
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  return 0;
}
