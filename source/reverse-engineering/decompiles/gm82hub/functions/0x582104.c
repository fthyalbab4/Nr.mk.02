// rea decompile_all
// name: FUN_00582104
// address: 0x582104
// body: available
// range: 0x582104-0x58213b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00582104(void)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;

  if (-1 < DAT_00686b00 + -1) {
    iVar3 = 0;
    iVar4 = DAT_00686b00;
    do {
      iVar1 = *(int *)(DAT_00686afc + iVar3 * 4);
      if ((iVar1 != 0) && (cVar2 = FUN_005849e8(iVar1), cVar2 == '\0')) {
        return 0;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return 1;
}
