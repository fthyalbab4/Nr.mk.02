// rea decompile_all
// name: FUN_004f260c
// address: 0x4f260c
// body: available
// range: 0x4f260c-0x4f265b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004f260c(void)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int in_stack_00000004;

  puVar3 = (undefined4 *)(in_stack_00000004 + -4);
  iVar1 = FUN_004f3124(*puVar3);
  iVar1 = iVar1 + -1;
  if (-1 < iVar1) {
    do {
      iVar2 = FUN_004f30e8(*puVar3,iVar1);
      if (*(char *)(iVar2 + 0x5d) != '\0') {
        return 1;
      }
      iVar2 = FUN_004f30e8(*puVar3,iVar1);
      if (*(char *)(iVar2 + 99) != '\x03') {
        return 1;
      }
      iVar1 = iVar1 + -1;
    } while (iVar1 != -1);
  }
  return 0;
}
