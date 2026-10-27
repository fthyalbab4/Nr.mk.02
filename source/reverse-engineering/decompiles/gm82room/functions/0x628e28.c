// rea decompile_all
// name: FUN_00628e28
// address: 0x628e28
// body: available
// range: 0x628e28-0x628e8c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00628e28(void)

{
  char *pcVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;

  iVar2 = 0;
  if (DAT_006887d0 <= DAT_006887cc + -1) {
    iVar4 = ((DAT_006887cc + -1) - DAT_006887d0) + 1;
    pcVar1 = &DAT_008825a4 + DAT_006887d0;
    puVar3 = &DAT_0085b47c + DAT_006887d0 * 0x28;
    do {
      if (*pcVar1 == '\0') {
        FUN_00409360(&DAT_0085b47c + iVar2 * 0x28,puVar3,&DAT_00628dc0);
        (&DAT_008825a4)[iVar2] = 0;
        iVar2 = iVar2 + 1;
      }
      puVar3 = puVar3 + 0x28;
      pcVar1 = pcVar1 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  DAT_006887cc = iVar2;
  DAT_006887d0 = 0;
  return;
}
