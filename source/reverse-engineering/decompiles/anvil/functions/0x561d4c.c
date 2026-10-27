// rea decompile_all
// name: FUN_00561d4c
// address: 0x561d4c
// body: available
// range: 0x561d4c-0x561dcd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00561d4c(void)

{
  undefined4 uStack_c;
  undefined4 uStack_8;

  if (((char)PTR_FUN_006863e8 == '\0') && ((char)PTR_FUN_00686410 == '\0')) {
    (**(code **)(*DAT_006863dc + 0x50))(DAT_006863dc,&uStack_c);
    _DAT_006863f0 = uStack_c;
    (**(code **)(*DAT_006863dc + 0x50))(DAT_006863dc,&uStack_c);
    _DAT_006863f4 = uStack_8;
    DAT_006863f8 = FUN_004baf44(DAT_006863dc);
    DAT_006863fc = FUN_004baf84(DAT_006863dc);
    _DAT_00686414 = FUN_004baf44(DAT_006863dc);
    _DAT_00686414 = DAT_006863dc[0x12] - _DAT_00686414;
    _DAT_00686418 = FUN_004baf84(DAT_006863dc);
    _DAT_00686418 = DAT_006863dc[0x13] - _DAT_00686418;
  }
  return;
}
