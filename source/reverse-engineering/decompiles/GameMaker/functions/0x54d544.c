// rea decompile_all
// name: FUN_0054d544
// address: 0x54d544
// body: available
// range: 0x54d544-0x54d5e2 inclusive
// range: 0x54d685-0x54d68a inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x54d55a (push 0x54d67e followed by fs-segment stack chaining); handler 0x54d67e lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x54d575 (push 0x54d5e3 followed by fs-segment stack chaining); handler 0x54d5e3 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0054d544(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_4c;
  undefined4 uStack_40;
  undefined1 *puStack_3c;
  undefined1 *puStack_38;

  puStack_38 = &stack0xfffffffc;
  puStack_3c = &LAB_0054d67e;
  uStack_40 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_40;
  iVar1 = FUN_0043bb30(*(undefined4 *)(param_1 + 0x38));
  uStackY_4c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_4c;
  if (*(int *)(iVar1 + 8) == 0) {
    FUN_0040670c();
    FUN_0040670c();
    return;
  }
  iVar2 = *(int *)(iVar1 + 8) + -1;
  if (-1 < iVar2) {
    do {
      FUN_0043b048(iVar1,iVar2);
      FUN_0043b048(iVar1,iVar2);
      FUN_0054a190();
      iVar2 = iVar2 + -1;
    } while (iVar2 != -1);
  }
  *in_FS_OFFSET = uStackY_4c;
  uStackY_4c = 0x54d5e2;
  LeaveCriticalSection((LPCRITICAL_SECTION)(*(int *)(param_1 + 0x38) + 8));
  return;
}
