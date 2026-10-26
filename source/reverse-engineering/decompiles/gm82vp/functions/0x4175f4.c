// rea decompile_all
// name: FUN_004175f4
// address: 0x4175f4
// body: available
// range: 0x4175f4-0x417621 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_004175f4(char *param_1)

{
  undefined2 uVar1;
  undefined2 *puVar2;
  byte bVar3;
  byte bVar4;

  if (*param_1 == '\0') {
    return 0;
  }
  puVar2 = (undefined2 *)((uint)(param_1 + 1) & 0xfffffffe);
  while( true ) {
    do {
      uVar1 = *puVar2;
      puVar2 = puVar2 + 1;
      bVar3 = (byte)uVar1;
      bVar4 = (byte)((ushort)uVar1 >> 8);
    } while ((bVar3 & bVar4) != 0);
    if (bVar3 == 0) break;
    if (bVar4 == 0) {
      return -(int)param_1 + -1 + (int)puVar2;
    }
  }
  return -(int)param_1 + -2 + (int)puVar2;
}
