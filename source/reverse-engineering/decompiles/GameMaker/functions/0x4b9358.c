// rea decompile_all
// name: FUN_004b9358
// address: 0x4b9358
// body: available
// range: 0x4b9358-0x4b93a1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_004b9358(int param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_14 [8];

  iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 4) + 4) + 0x300);
  iVar4 = *(int *)(*(int *)(iVar1 + 8) + 8);
  do {
    iVar4 = iVar4 + -1;
    if (iVar4 < 0) {
      return iVar4;
    }
    FUN_004b9228(param_1,auStack_14);
    iVar3 = FUN_004b84ac(iVar1,iVar4);
    cVar2 = FUN_0040c15c(iVar3 + 0xc,auStack_14);
  } while (cVar2 == '\0');
  return iVar4;
}
