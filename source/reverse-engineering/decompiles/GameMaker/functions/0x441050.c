// rea decompile_all
// name: FUN_00441050
// address: 0x441050
// body: available
// range: 0x441050-0x4410d2 inclusive
// range: 0x4410da-0x4410e0 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x44107c (push 0x4410d3 followed by fs-segment stack chaining); handler 0x4410d3 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00441050(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_24;

  if (DAT_00787f78 != 0) {
    iVar1 = FUN_0043bb30(DAT_00787f78);
    uStackY_24 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStackY_24;
    iVar3 = *(int *)(iVar1 + 8) + -1;
    if (-1 < iVar3) {
      do {
        iVar2 = FUN_0043b048(iVar1,iVar3);
        if (*(int *)(iVar2 + 4) == param_1) {
          FUN_0043aee0(iVar1,iVar3);
          FUN_00405a7c(iVar2);
        }
        iVar3 = iVar3 + -1;
      } while (iVar3 != -1);
    }
    *in_FS_OFFSET = uStackY_24;
    uStackY_24 = 0x4410d2;
    LeaveCriticalSection((LPCRITICAL_SECTION)(DAT_00787f78 + 8));
    return;
  }
  return;
}
