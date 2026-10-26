// rea decompile_all
// name: FUN_0049b520
// address: 0x49b520
// body: available
// range: 0x49b520-0x49b557 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0049b520(void)

{
  undefined4 uVar1;

  if ((*(char *)(*(int *)PTR_DAT_0068917c + 0xd3) != '\0') &&
     (*(int *)(*(int *)PTR_DAT_0068917c + 0x44) != 0)) {
    uVar1 = FUN_004ed2a0(*(undefined4 *)PTR_DAT_0068917c);
    return uVar1;
  }
  return *(undefined4 *)(*(int *)PTR_DAT_0068917c + 0x170);
}
