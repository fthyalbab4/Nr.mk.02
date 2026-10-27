// rea decompile_all
// name: FUN_0041cb24
// address: 0x41cb24
// body: available
// range: 0x41cb24-0x41cbb0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0041cb24(void)

{
  DAT_0068cdbc = FUN_0041be80(&LAB_00411274,1,PTR_LAB_00688b74);
  DAT_0068cdc0 = FUN_0041be80(&LAB_00411a7c,1,PTR_LAB_006890d0);
  *(undefined1 **)PTR_DAT_0068893c = &LAB_0041c664;
  *(undefined1 **)PTR_DAT_00688d04 = &LAB_0041cb14;
  *(undefined1 **)PTR_DAT_00688b20 = &LAB_004109ac;
  *(code **)PTR_DAT_00688cbc = FUN_0041c82c;
  *(undefined1 **)PTR_DAT_00688d1c = &LAB_0041ca18;
  *(undefined1 **)PTR_DAT_00688d6c = &LAB_0041caf0;
  *(undefined1 **)PTR_DAT_00689158 = &LAB_0041c778;
  *(undefined1 **)PTR_DAT_00688900 = &LAB_0041c794;
  return;
}
