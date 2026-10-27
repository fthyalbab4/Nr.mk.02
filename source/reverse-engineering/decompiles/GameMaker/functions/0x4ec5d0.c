// rea decompile_all
// name: FUN_004ec5d0
// address: 0x4ec5d0
// body: available
// range: 0x4ec5d0-0x4ec641 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_004ec5d0(void)

{
  char cVar1;
  undefined1 uVar2;
  int in_stack_00000004;

  uVar2 = *(int *)(DAT_00788270 + 0x14) != 0;
  if ((*(char *)(in_stack_00000004 + -1) != '\0') && (DAT_0078828c == '\x02')) {
    cVar1 = (**(code **)(*DAT_0078826c + 0x60))();
    if ((cVar1 == '\0') && (DAT_0078826c[0x24] != 0)) {
      if (DAT_0078826c[0x24] != 0) {
        uVar2 = FUN_00405d08(DAT_0078826c[0x24],*(undefined4 *)(DAT_00788270 + 0x14),DAT_0078826c);
      }
    }
    else {
      uVar2 = 1;
    }
  }
  return uVar2;
}
