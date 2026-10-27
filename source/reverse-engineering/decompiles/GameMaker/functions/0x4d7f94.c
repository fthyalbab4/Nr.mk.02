// rea decompile_all
// name: FUN_004d7f94
// address: 0x4d7f94
// body: available
// range: 0x4d7f94-0x4d7fcb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_004d7f94(uint param_1,ushort param_2)

{
  uint uVar1;

  uVar1 = 0;
  if ((char)(param_1 >> 8) == '\0') {
    uVar1 = param_1;
    if ((param_2 & 1) != 0) {
      uVar1 = (uint)(ushort)((short)param_1 + 0x2000);
    }
    if ((param_2 & 4) != 0) {
      uVar1 = (uint)(ushort)((short)uVar1 + 0x4000);
    }
    if ((param_2 & 2) != 0) {
      uVar1 = (uint)(ushort)((short)uVar1 + 0x8000);
    }
  }
  return uVar1;
}
