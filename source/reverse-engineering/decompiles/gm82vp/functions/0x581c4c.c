// rea decompile_all
// name: FUN_00581c4c
// address: 0x581c4c
// body: available
// range: 0x581c4c-0x581c90 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00581c4c(void)

{
  char cVar1;
  int iVar2;
  int iVar3;

  if (-1 < DAT_00686af4 + -1) {
    iVar3 = 0;
    iVar2 = DAT_00686af4;
    do {
      if (*(int *)(DAT_00686aec + iVar3 * 4) != 0) {
        *(int *)PTR_DAT_00689034 = iVar3;
        cVar1 = FUN_005816ec(*(undefined4 *)(DAT_00686aec + iVar3 * 4));
        if (cVar1 == '\0') {
          return 0;
        }
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return 1;
}
