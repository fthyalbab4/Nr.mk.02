// rea decompile_all
// name: FUN_00545930
// address: 0x545930
// body: available
// range: 0x545930-0x545966 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00545930(int param_1)

{
  byte bVar1;
  byte bVar2;

  if (*(int *)(*(int *)(param_1 + 0x20) + 8) < 1) {
    bVar2 = *(byte *)(param_1 + 0x2d) & 0x58;
  }
  else {
    bVar2 = 0x80;
    if (*(char *)(*(int *)(param_1 + 0x20) + 0x10) != '\0') {
      bVar2 = 0xa0;
    }
    bVar1 = FUN_00545634(param_1);
    bVar2 = bVar1 & 7 | bVar2;
  }
  *(byte *)(param_1 + 0x2d) = bVar2;
  return;
}
