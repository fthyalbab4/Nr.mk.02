// rea decompile_all
// name: FUN_004220dc
// address: 0x4220dc
// body: available
// range: 0x4220dc-0x42211b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_004220dc(void)

{
  LONG Exchange;
  LONG LVar1;

  if (DAT_0068cda4 == 0) {
    Exchange = FUN_004222f8(&PTR_FUN_00414aa0,1,0,0,0);
    LVar1 = InterlockedCompareExchange(&DAT_0068cda4,Exchange,0);
    if (LVar1 != 0) {
      FUN_00405fdc(Exchange);
    }
  }
  return DAT_0068cda4;
}
