// rea decompile_all
// name: FUN_00447cd0
// address: 0x447cd0
// body: available
// range: 0x447cd0-0x447d43 inclusive
// range: 0x447d4b-0x447d59 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x447d04 (push 0x447d44 followed by fs-segment stack chaining); handler 0x447d44 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00447cd0(void)

{
  LONG LVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_24;

  uStackY_24 = 0x447ce6;
  LVar1 = InterlockedExchange((LONG *)&DAT_00787f94,0);
  if (LVar1 != 0) {
    iVar2 = FUN_0043bb30(LVar1);
    uStackY_24 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStackY_24;
    iVar3 = *(int *)(iVar2 + 8);
    if (-1 < iVar3 + -1) {
      iVar4 = 0;
      do {
        FUN_0043b048(iVar2,iVar4);
        FUN_00405a7c();
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    *in_FS_OFFSET = uStackY_24;
    uStackY_24 = 0x447d43;
    LeaveCriticalSection((LPCRITICAL_SECTION)(LVar1 + 8));
    return;
  }
  FUN_00405a7c(0);
  return;
}
