// rea decompile_all
// name: FUN_00515980
// address: 0x515980
// body: available
// range: 0x515980-0x5159c8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00515980(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;

  bVar1 = false;
  iVar3 = *(int *)(param_1 + 4) * *(int *)(param_1 + 8);
  if (-1 < iVar3 + -1) {
    iVar2 = 0;
    do {
      if (*(char *)(*(int *)(param_1 + 0xc) + 3 + iVar2 * 4) != '\0') {
        bVar1 = true;
        break;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  if ((!bVar1) && (iVar3 = *(int *)(param_1 + 4) * *(int *)(param_1 + 8), -1 < iVar3 + -1)) {
    iVar2 = 0;
    do {
      *(undefined1 *)(*(int *)(param_1 + 0xc) + 3 + iVar2 * 4) = 0xff;
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}
