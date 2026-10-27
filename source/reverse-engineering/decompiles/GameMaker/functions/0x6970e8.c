// rea decompile_all
// name: FUN_006970e8
// address: 0x6970e8
// body: available
// range: 0x6970e8-0x697120 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_006970e8(int param_1)

{
  undefined4 uVar1;

  if (499999 < param_1) {
    uVar1 = FUN_007135c4(param_1 + -500000);
    return uVar1;
  }
  if (param_1 < 100000) {
    if ((param_1 < 0) || (DAT_0077f3d4 <= param_1)) {
      uVar1 = 0xffffff9c;
    }
    else {
      uVar1 = *(undefined4 *)(&DAT_0078e0c4 + param_1 * 4);
    }
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}
