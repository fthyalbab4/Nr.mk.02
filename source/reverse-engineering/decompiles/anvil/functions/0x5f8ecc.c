// rea decompile_all
// name: FUN_005f8ecc
// address: 0x5f8ecc
// body: available
// range: 0x5f8ecc-0x5f8f13 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005f8ecc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 extraout_ECX;

  FUN_0056b8b4(DAT_00688624,param_2,param_3,0,0,0,0);
  FUN_0056b8e8(DAT_00688628,0xffffff,extraout_ECX,param_4,param_5,0,0,0,0x3ff00000,0,0x3ff00000,0,0,
               0,0);
  return;
}
