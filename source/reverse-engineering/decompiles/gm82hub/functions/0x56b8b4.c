// rea decompile_all
// name: FUN_0056b8b4
// address: 0x56b8b4
// body: available
// range: 0x56b8b4-0x56b8e6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0056b8b4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  char cVar1;
  undefined4 extraout_ECX;

  cVar1 = FUN_0056b4d0(param_1);
  if (cVar1 != '\0') {
    FUN_006218d4(*(undefined4 *)(DAT_0084527c + param_1 * 0x14),DAT_0084527c,extraout_ECX,param_4,
                 param_5,param_6,param_7);
  }
  return;
}
