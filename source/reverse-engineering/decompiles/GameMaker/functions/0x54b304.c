// rea decompile_all
// name: FUN_0054b304
// address: 0x54b304
// body: available
// range: 0x54b304-0x54b379 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x54b337 (push 0x54b37a followed by fs-segment stack chaining); handler 0x54b37a lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0054b304(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_24;

  iVar1 = FUN_00406058();
  FUN_0054d544(iVar1);
  iVar2 = FUN_0043bb30(*(undefined4 *)(iVar1 + 0x38));
  uStackY_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_24;
  iVar4 = *(int *)(iVar2 + 8) + -1;
  if (-1 < iVar4) {
    do {
      iVar3 = FUN_0043b048(iVar2,iVar4);
      *(undefined4 *)(iVar3 + 0x40) = 0;
      iVar4 = iVar4 + -1;
    } while (iVar4 != -1);
  }
  *in_FS_OFFSET = uStackY_24;
  uStackY_24 = 0x54b379;
  LeaveCriticalSection((LPCRITICAL_SECTION)(*(int *)(iVar1 + 0x38) + 8));
  return;
}
