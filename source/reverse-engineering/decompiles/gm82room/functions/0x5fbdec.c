// rea decompile_all
// name: FUN_005fbdec
// address: 0x5fbdec
// body: available
// range: 0x5fbdec-0x5fbe4c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005fbdec(void)

{
  char cVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;

  cVar1 = FUN_0058d584(DAT_00688638);
  if (cVar1 == '\0') {
    DAT_00688638 = FUN_0058d51c();
    FUN_0058d75c(DAT_00688638,extraout_EDX,extraout_ECX,0,0x40f86a00);
  }
  cVar1 = FUN_0058d584(DAT_0068863c);
  if (cVar1 == '\0') {
    DAT_0068863c = FUN_0058d51c();
    FUN_0058d75c(DAT_0068863c,extraout_EDX_00,extraout_ECX_00,0,0xc0f86a00);
  }
  if ((char)PTR_FUN_00688634 == '\0') {
    FUN_005fbda8();
  }
  return;
}
