// rea decompile_all
// name: FUN_0043bca4
// address: 0x43bca4
// body: available
// range: 0x43bca4-0x43bd12 inclusive
// range: 0x43bd1a-0x43bd20 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x43bccc (push 0x43bd13 followed by fs-segment stack chaining); handler 0x43bd13 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0043bca4(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_24;

  if (*(int *)(param_1 + 0xc) != 0) {
    piVar1 = (int *)FUN_0043bb30();
    uStackY_24 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStackY_24;
    iVar2 = piVar1[2];
    if (-1 < iVar2 + -1) {
      iVar3 = 0;
      do {
        FUN_0040b140(piVar1[1] + iVar3 * 4);
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    (**(code **)(*piVar1 + 8))();
    *in_FS_OFFSET = uStackY_24;
    uStackY_24 = 0x43bd12;
    LeaveCriticalSection((LPCRITICAL_SECTION)(*(int *)(param_1 + 0xc) + 8));
    return;
  }
  return;
}
