// rea decompile_all
// name: FUN_0042afac
// address: 0x42afac
// body: available
// range: 0x42afac-0x42afd1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_0042afac(ushort *param_1,char param_2)

{
  uint uVar1;
  undefined1 auStack_8 [4];
  undefined1 local_4 [4];

  if (param_2 != '\0') {
    uVar1 = FUN_0042af60(param_1,auStack_8,local_4);
    return uVar1;
  }
  return (uint)CONCAT11((char)((*param_1 & 0x2000) >> 8),(*param_1 & 0x2000) == 0x2000);
}
