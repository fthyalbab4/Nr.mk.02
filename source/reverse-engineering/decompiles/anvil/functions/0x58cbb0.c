// rea decompile_all
// name: FUN_0058cbb0
// address: 0x58cbb0
// body: available
// range: 0x58cbb0-0x58cc29 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0058cbb0(int param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;

  iVar3 = -1;
  cVar2 = FUN_0058d584(param_1);
  if (cVar2 != '\0') {
    iVar1 = DAT_00686b30 + param_1 * 0x58;
    for (iVar3 = 0;
        (iVar3 < *(int *)(iVar1 + 0x20) &&
        (*(char *)(*(int *)(iVar1 + 0x1c) + iVar3 * 0x30) != '\0')); iVar3 = iVar3 + 1) {
    }
    if (iVar3 == *(int *)(iVar1 + 0x20)) {
      FUN_00409dfc(iVar1 + 0x1c,&DAT_0058b018,1,iVar3 + 1);
      *(int *)(iVar1 + 0x20) = iVar3 + 1;
    }
    *(undefined1 *)(*(int *)(iVar1 + 0x1c) + iVar3 * 0x30) = 1;
    FUN_0058ccec(param_1,iVar3);
  }
  return iVar3;
}
