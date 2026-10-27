// rea decompile_all
// name: FUN_005677d0
// address: 0x5677d0
// body: available
// range: 0x5677d0-0x567827 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005677d0(void)

{
  int iVar1;
  double in_stack_00000004;
  double in_stack_0000000c;
  double in_stack_00000014;
  double in_stack_0000001c;

  if (DAT_00686450 < 0x3e9) {
    iVar1 = DAT_00686450 * 0x18;
    *(float *)(&DAT_0083f4a0 + iVar1) = (float)in_stack_0000001c;
    *(float *)(&DAT_0083f4a4 + iVar1) = (float)in_stack_00000014;
    *(float *)(&DAT_0083f4a8 + iVar1) = (float)*(double *)PTR_DAT_00689120;
    *(undefined4 *)(&DAT_0083f4ac + iVar1) = DAT_00686444;
    *(float *)(&DAT_0083f4b0 + iVar1) = (float)in_stack_0000000c;
    *(float *)(&DAT_0083f4b4 + iVar1) = (float)in_stack_00000004;
    DAT_00686450 = DAT_00686450 + 1;
  }
  return;
}
