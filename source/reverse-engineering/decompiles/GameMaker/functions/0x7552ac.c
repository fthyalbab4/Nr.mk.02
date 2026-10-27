// rea decompile_all
// name: FUN_007552ac
// address: 0x7552ac
// body: available
// range: 0x7552ac-0x755342 inclusive
// range: 0x75534a-0x755353 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x7552e1 (push 0x755343 followed by fs-segment stack chaining); handler 0x755343 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


LPCRITICAL_SECTION FUN_007552ac(int param_1)

{
  int iVar1;
  int iVar2;
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_28;

  if (param_1 != 0) {
    iVar1 = FUN_0043bb30(DAT_00826478);
    uStackY_28 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStackY_28;
    iVar4 = *(int *)(iVar1 + 8);
    if (-1 < iVar4 + -1) {
      iVar3 = 0;
      do {
        iVar2 = FUN_0043b048(iVar1,iVar3);
        if (*(int *)(iVar2 + 0x14) == param_1) {
          FUN_00405a7c();
          FUN_0043b1f4(iVar1,iVar3,0);
        }
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    FUN_0043b278(iVar1);
    *in_FS_OFFSET = uStackY_28;
    lpCriticalSection = (LPCRITICAL_SECTION)(DAT_00826478 + 8);
    uStackY_28 = 0x755342;
    LeaveCriticalSection(lpCriticalSection);
    return lpCriticalSection;
  }
  return (LPCRITICAL_SECTION)0x0;
}
