// rea decompile_all
// name: FUN_0051e04c
// address: 0x51e04c
// body: available
// range: 0x51e04c-0x51e0fe inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0051e04c(void)

{
  HWND pHVar1;
  HWND pHVar2;
  uint uVar3;
  HWND in_stack_00000004;
  undefined4 *in_stack_00000008;

  if ((*(char *)(DAT_007882ec + 0xd3) == '\0') || (*(int *)(DAT_007882ec + 0x44) == 0)) {
    pHVar1 = *(HWND *)(DAT_007882ec + 0x170);
  }
  else {
    pHVar1 = (HWND)FUN_004f76a8(*(undefined4 *)(DAT_007882ec + 0x44));
  }
  if (DAT_007882ec == 0) {
    return 0xffffffff;
  }
  pHVar2 = GetWindow(in_stack_00000004,4);
  if (pHVar1 != pHVar2) {
    return 0xffffffff;
  }
  uVar3 = GetWindowLongW(in_stack_00000004,-0x14);
  if (((uVar3 & 8) != 0) &&
     (((*(int *)(DAT_007882ec + 0x44) == 0 || (*(char *)(in_stack_00000008 + 1) != '\0')) ||
      (((*(byte *)(*(int *)(DAT_007882ec + 0x44) + 0x1c) & 8) == 0 &&
       (pHVar1 = (HWND)FUN_004f76a8(*(int *)(DAT_007882ec + 0x44)), in_stack_00000004 != pHVar1)))))
     ) {
    FUN_0043ae88(*(undefined4 *)(DAT_007882ec + 0x90),in_stack_00000004);
    return 0xffffffff;
  }
  *in_stack_00000008 = in_stack_00000004;
  return 0;
}
