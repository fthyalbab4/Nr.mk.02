// rea decompile_all
// name: FUN_00440f9c
// address: 0x440f9c
// body: available
// range: 0x440f9c-0x441040 inclusive
// range: 0x441048-0x44104e inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x440fcf (push 0x441041 followed by fs-segment stack chaining); handler 0x441041 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00440f9c(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_28;

  if (DAT_00787f78 == 0) {
    return;
  }
  iVar2 = FUN_0043bb30(DAT_00787f78);
  uStackY_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_28;
  iVar4 = *(int *)(iVar2 + 8) + -1;
  if (-1 < iVar4) {
    do {
      iVar3 = FUN_0043b048(iVar2,iVar4);
      if ((param_1 == 0) || (*(int *)(iVar3 + 8) == param_1)) {
        if (param_2 != 0) {
          cVar1 = FUN_00415a34(param_2,*(undefined4 *)(iVar3 + 0x10));
          if (cVar1 == '\0') goto LAB_00441019;
        }
        FUN_0043aee0(iVar2,iVar4);
        FUN_00405a7c(iVar3);
      }
LAB_00441019:
      iVar4 = iVar4 + -1;
    } while (iVar4 != -1);
  }
  *in_FS_OFFSET = uStackY_28;
  uStackY_28 = 0x441040;
  LeaveCriticalSection((LPCRITICAL_SECTION)(DAT_00787f78 + 8));
  return;
}
