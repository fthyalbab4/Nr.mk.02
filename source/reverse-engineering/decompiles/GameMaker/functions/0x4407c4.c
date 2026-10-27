// rea decompile_all
// name: FUN_004407c4
// address: 0x4407c4
// body: available
// range: 0x4407c4-0x4407eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004407c4(void)

{
  int iVar1;
  char extraout_DL;

  iVar1 = FUN_00406058();
  if (*(int *)(iVar1 + 8) != 0) {
    FUN_00404338(*(int *)(iVar1 + 8),*(undefined4 *)(iVar1 + 0xc));
  }
  if ('\0' < extraout_DL) {
    FUN_00406000(iVar1);
  }
  return;
}
