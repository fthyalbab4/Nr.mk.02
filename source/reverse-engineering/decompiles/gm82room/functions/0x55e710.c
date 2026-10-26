// rea decompile_all
// name: FUN_0055e710
// address: 0x55e710
// body: available
// range: 0x55e710-0x55e86e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0055e710(void)

{
  DAT_00686398 = FUN_0041f278(&PTR_DAT_0055e87c,0x8000);
  if (DAT_00686398 != 0) {
    DAT_0068639c = FUN_0040deb0();
    DAT_006863a0 = FUN_0040deb0();
    DAT_006863a4 = FUN_0040deb0();
    DAT_006863a8 = FUN_0040deb0();
    DAT_006863ac = FUN_0040deb0();
    DAT_006863b0 = FUN_0040deb0();
    DAT_006863b4 = FUN_0040deb0();
    DAT_006863b8 = FUN_0040deb0();
    DAT_006863bc = FUN_0040deb0();
    DAT_006863c0 = FUN_0040deb0();
    DAT_006863c4 = FUN_0040deb0();
    DAT_006863c8 = FUN_0040deb0();
  }
  if ((((((DAT_00686398 != 0) && (DAT_006863a4 != 0)) && (DAT_006863a8 != 0)) &&
       ((DAT_006863ac != 0 && (DAT_006863c0 != 0)))) && ((DAT_0068639c != 0 || (DAT_006863a0 != 0)))
      ) && (((DAT_006863b0 != 0 || (DAT_006863b4 != 0)) &&
            ((DAT_006863b8 != 0 || (DAT_006863bc != 0)))))) {
    return 1;
  }
  return 0;
}
