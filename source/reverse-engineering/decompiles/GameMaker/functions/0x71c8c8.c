// rea decompile_all
// name: FUN_0071c8c8
// address: 0x71c8c8
// body: available
// range: 0x71c8c8-0x71c90b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0071c8c8(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;

  DAT_007a463c = 0;
  FUN_0071c878(param_2);
  FUN_0052f12c(param_1,DAT_007a463c);
  if (-1 < DAT_007a463c + -1) {
    puVar1 = &DAT_0079a9f8;
    iVar2 = DAT_007a463c;
    do {
      FUN_0052f12c(param_1,*puVar1);
      puVar1 = puVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}
