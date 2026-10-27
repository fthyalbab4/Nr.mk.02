// rea decompile_all
// name: FUN_00704ec4
// address: 0x704ec4
// body: available
// range: 0x704ec4-0x704efb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00704ec4(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;

  iVar3 = *(int *)(param_1 + 0x14);
  iVar2 = FUN_0062ca94();
  iVar2 = iVar2 + 1;
  if (0 < iVar2) {
    do {
      if (iVar3 < 0) {
        return 0;
      }
      cVar1 = FUN_0062ca9c(iVar3);
      if (cVar1 == '\0') {
        return 0;
      }
      iVar3 = FUN_0062cd94(iVar3);
      iVar3 = *(int *)(iVar3 + 0x14);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return 1;
}
