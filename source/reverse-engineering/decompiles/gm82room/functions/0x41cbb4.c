// rea decompile_all
// name: FUN_0041cbb4
// address: 0x41cbb4
// body: available
// range: 0x41cbb4-0x41cc30 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0041cbb4(void)

{
  if (DAT_0068cdbc != (int *)0x0) {
    *(undefined1 *)(DAT_0068cdbc + 6) = 1;
    (**(code **)(*DAT_0068cdbc + -8))();
    DAT_0068cdbc = (int *)0x0;
  }
  if (DAT_0068cdc0 != 0) {
    *(undefined1 *)(DAT_0068cdc0 + 0x18) = 1;
    FUN_00405fdc(DAT_0068cdc0);
    DAT_0068cdc0 = 0;
  }
  *(undefined4 *)PTR_DAT_0068893c = 0;
  *(undefined4 *)PTR_DAT_00688d04 = 0;
  *(undefined4 *)PTR_DAT_00688b20 = 0;
  *(undefined4 *)PTR_DAT_00688cbc = 0;
  *(undefined4 *)PTR_DAT_00688d1c = 0;
  *(undefined4 *)PTR_DAT_00689158 = 0;
  return;
}
