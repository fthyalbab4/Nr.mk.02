// rea decompile_all
// name: FUN_004ed748
// address: 0x4ed748
// body: available
// range: 0x4ed748-0x4ed7a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


byte FUN_004ed748(int param_1,char param_2)

{
  byte bVar1;

  bVar1 = 1;
  if (param_2 == '\0') {
    return *(char *)(*(int *)(param_1 + 0xac) + 0x10) != '\x10';
  }
  if (param_2 == '\x01') {
    return *(char *)(*(int *)(param_1 + 0xac) + 0x11) != '\x10';
  }
  if (param_2 == '\x02') {
    return *(byte *)(*(int *)(param_1 + 0xac) + 0x18) ^ 1;
  }
  if (param_2 == '\x03') {
    bVar1 = *(byte *)(*(int *)(param_1 + 0xac) + 0x18) ^ 1;
  }
  return bVar1;
}
