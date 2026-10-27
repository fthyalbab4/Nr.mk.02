// rea decompile_all
// name: FUN_0054d438
// address: 0x54d438
// body: available
// range: 0x54d438-0x54d49e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x54d45c (push 0x54d49f followed by fs-segment stack chaining); handler 0x54d49f lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0054d438(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_24;

  iVar1 = FUN_0043bb30(*(undefined4 *)(param_1 + 0x38));
  uStackY_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_24;
  iVar2 = *(int *)(iVar1 + 8);
  if (-1 < iVar2 + -1) {
    iVar3 = 0;
    do {
      FUN_0043b048(iVar1,iVar3);
      FUN_0054a184();
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  *in_FS_OFFSET = uStackY_24;
  uStackY_24 = 0x54d49e;
  LeaveCriticalSection((LPCRITICAL_SECTION)(*(int *)(param_1 + 0x38) + 8));
  return;
}
