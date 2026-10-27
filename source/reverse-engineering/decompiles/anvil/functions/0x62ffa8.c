// rea decompile_all
// name: FUN_0062ffa8
// address: 0x62ffa8
// body: available
// range: 0x62ffa8-0x630021 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0062ffa8(void)

{
  int iVar1;
  undefined4 *puVar2;

  if (DAT_00688810 < 0) {
    DAT_00688810 = FUN_0058d51c();
  }
  FUN_0058d60c(DAT_00688810);
  FUN_004048b8();
  FUN_0058d75c(DAT_00688810);
  iVar1 = 0x10;
  puVar2 = &DAT_00883594;
  do {
    *puVar2 = 0xffffffff;
    puVar2 = puVar2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  iVar1 = 0x10;
  puVar2 = &DAT_008835d4;
  do {
    *puVar2 = 0xffffffff;
    puVar2 = puVar2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}
