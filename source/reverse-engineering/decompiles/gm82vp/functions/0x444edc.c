// rea decompile_all
// name: FUN_00444edc
// address: 0x444edc
// body: available
// range: 0x444edc-0x444f4f inclusive
// range: 0x444f57-0x444f65 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x444f10 (push 0x444f50 followed by fs-segment stack chaining); handler 0x444f50 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00444edc(void)

{
  LONG LVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_24;

  uStackY_24 = 0x444ef2;
  LVar1 = InterlockedExchange((LONG *)&DAT_0068ef94,0);
  if (LVar1 != 0) {
    iVar2 = FUN_004399ac(LVar1);
    uStackY_24 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStackY_24;
    iVar3 = *(int *)(iVar2 + 8);
    if (-1 < iVar3 + -1) {
      iVar4 = 0;
      do {
        FUN_00438ec4(iVar2,iVar4);
        FUN_00405fdc();
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    *in_FS_OFFSET = uStackY_24;
    uStackY_24 = 0x444f4f;
    LeaveCriticalSection((LPCRITICAL_SECTION)(LVar1 + 8));
    return;
  }
  FUN_00405fdc(0);
  return;
}
