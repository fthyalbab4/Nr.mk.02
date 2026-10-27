// rea decompile_all
// name: FUN_004b4268
// address: 0x4b4268
// body: available
// range: 0x4b4268-0x4b42b2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


byte FUN_004b4268(undefined4 param_1)

{
  byte bVar1;
  undefined1 auStack_7c [8];
  uint local_74;

  FUN_004b4058(param_1,auStack_7c);
  bVar1 = (local_74 & 1) != 0;
  if ((local_74 & 2) != 0) {
    bVar1 = bVar1 | 2;
  }
  if ((local_74 & 4) != 0) {
    bVar1 = bVar1 | 4;
  }
  if ((local_74 & 8) != 0) {
    bVar1 = bVar1 | 8;
  }
  return bVar1;
}
