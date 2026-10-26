// rea decompile_all
// name: FUN_004ebee4
// address: 0x4ebee4
// body: available
// range: 0x4ebee4-0x4ebf1e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_004ebee4(undefined4 param_1)

{
  int iVar1;
  bool bVar2;

  bVar2 = false;
  if (*(int *)(DAT_00788270 + 0x14) != 0) {
    iVar1 = FUN_004ebdb0(*(undefined4 *)(DAT_00788270 + 8),param_1,DAT_00788270,DAT_00788270 + 0xc,
                         *(int *)(DAT_00788270 + 0x14));
    bVar2 = iVar1 != 0;
  }
  return bVar2;
}
