// rea decompile_all
// name: FUN_005e8994
// address: 0x5e8994
// body: available
// range: 0x5e8994-0x5e89e8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005e8994(void)

{
  int *piVar1;
  int in_stack_00000004;

  piVar1 = (int *)(in_stack_00000004 + -0xc);
  *(undefined1 *)(*piVar1 + 8) = 0;
  if ((byte)(*(char *)(*piVar1 + 0x2c) - 1U) < 7) {
    *(int *)(*piVar1 + 0x28) = *(int *)(*piVar1 + 0x28) + 1;
  }
  *(undefined1 *)(*piVar1 + 0x2c) = 8;
  *(undefined4 *)(*piVar1 + 0x20) = *(undefined4 *)(*piVar1 + 0x14);
  if (*(byte *)(*piVar1 + 0x18) < 8) {
    *(undefined1 *)(*piVar1 + 0x18) = 0;
  }
  if ((*(char *)(*piVar1 + 0x2d) != '\0') && ((*(byte *)(*piVar1 + 0x28) & 1) != 0)) {
    *(int *)(*piVar1 + 0x28) = *(int *)(*piVar1 + 0x28) + 1;
  }
  return;
}
