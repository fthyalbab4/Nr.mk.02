// rea decompile_all
// name: FUN_0044144c
// address: 0x44144c
// body: available
// range: 0x44144c-0x4414c6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x44146c (push 0x4414c7 followed by fs-segment stack chaining); handler 0x4414c7 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0044144c(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_20;

  iVar1 = FUN_0043bb30(DAT_00787f78);
  uStackY_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_20;
  iVar3 = *(int *)(iVar1 + 8) + -1;
  if (-1 < iVar3) {
    do {
      iVar2 = FUN_0043b048(iVar1,iVar3);
      if ((*(int *)(iVar2 + 4) == *(int *)(param_1 + 4)) &&
         (*(int *)(iVar2 + 0xc) == *(int *)(param_1 + 0xc))) {
        FUN_00405a7c();
        FUN_0043aee0(iVar1,iVar3);
      }
      iVar3 = iVar3 + -1;
    } while (iVar3 != -1);
  }
  *in_FS_OFFSET = uStackY_20;
  uStackY_20 = 0x4414c6;
  LeaveCriticalSection((LPCRITICAL_SECTION)(DAT_00787f78 + 8));
  return;
}
