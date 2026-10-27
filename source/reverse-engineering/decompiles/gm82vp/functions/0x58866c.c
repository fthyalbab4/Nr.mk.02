// rea decompile_all
// name: FUN_0058866c
// address: 0x58866c
// body: available
// range: 0x58866c-0x58869b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0058866c(void)

{
  undefined4 uVar1;
  undefined4 extraout_ECX;
  undefined4 in_stack_00000004;

  uVar1 = FUN_00588488();
  if ((char)uVar1 == '\0') {
    FUN_0061156c(*(undefined4 *)PTR_DAT_00689674,0,extraout_ECX,in_stack_00000004);
    *PTR_PTR_00688e10 = 0;
  }
  return uVar1;
}
