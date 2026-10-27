// rea decompile_all
// name: FUN_00479d60
// address: 0x479d60
// body: available
// range: 0x479d60-0x479df5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x479da3 (push 0x479df6 followed by fs-segment stack chaining); handler 0x479df6 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00479d60(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  UINT uFlags;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;

  puStack_10 = (undefined1 *)0x479d73;
  iVar1 = (**(code **)(*param_1 + 300))();
  if (param_1[0x9e] < iVar1) {
    iVar1 = param_1[0x9e];
  }
  if (iVar1 < 1) {
    iVar1 = 1;
  }
  *(undefined1 *)(param_1 + 0xb1) = 1;
  puStack_14 = &LAB_00479df6;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  uFlags = 0x9e;
  puStack_10 = &stack0xfffffffc;
  iVar2 = (**(code **)(*param_1 + 0x124))();
  SetWindowPos((HWND)param_1[0xae],(HWND)0x0,0,0,param_1[0x12],iVar2 * iVar1 + param_1[0x13] + 2,
               uFlags);
  *in_FS_OFFSET = uStack_18;
  *(undefined1 *)(param_1 + 0xb1) = 0;
  return;
}
