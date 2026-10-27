// rea decompile_all
// name: FUN_0061e30c
// address: 0x61e30c
// body: available
// range: 0x61e30c-0x61e396 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x61e327 (push 0x61e397 followed by fs-segment stack chaining); handler 0x61e397 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0061e30c(undefined4 param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  undefined4 local_8;

  puStack_10 = (undefined1 *)0x61e31c;
  local_8 = param_1;
  thunk_FUN_00407ad0(param_1);
  puStack_14 = &LAB_0061e397;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  iVar2 = FUN_005727b4(local_8);
  if (iVar2 < 0) {
    FUN_0061e1d8(local_8);
  }
  else if ((iVar2 < *(int *)PTR_DAT_00689600) || (*(int *)PTR_DAT_00688e24 < iVar2)) {
    if (iVar2 == *(int *)PTR_DAT_00688f10) {
      PTR_FUN_00688698._0_1_ = 1;
    }
  }
  else if (DAT_00688694 < iVar2 - *(int *)PTR_DAT_00689600) {
    DAT_00688694 = iVar2 - *(int *)PTR_DAT_00689600;
  }
  puVar1 = puStack_10;
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_0061e39e;
  puStack_14 = (undefined1 *)0x61e396;
  thunk_FUN_004072d8(&local_8,uStack_18,puVar1);
  return;
}
