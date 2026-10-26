// rea decompile_all
// name: FUN_004040b4
// address: 0x4040b4
// body: available
// range: 0x4040b4-0x4040f5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004040b4(void)

{
  uint uVar1;
  ushort *puVar2;
  int iVar3;
  uint uVar4;

  iVar3 = 0;
  puVar2 = &DAT_00773086;
  uVar1 = 0;
  do {
    if ((DAT_00783a2a == '\0') || (uVar4 = uVar1, (*puVar2 & 0xf) == 0)) {
      uVar4 = (uint)(*puVar2 >> 3);
      for (; uVar1 < uVar4; uVar1 = uVar1 + 1) {
        (&DAT_007838e4)[uVar1] = (char)iVar3 * '\x04';
      }
    }
    iVar3 = iVar3 + 1;
    puVar2 = puVar2 + 0x10;
    uVar1 = uVar4;
  } while (iVar3 != 0x37);
  return;
}
