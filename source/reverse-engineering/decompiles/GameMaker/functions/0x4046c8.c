// rea decompile_all
// name: FUN_004046c8
// address: 0x4046c8
// body: available
// range: 0x4046c8-0x404718 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4046da (push 0x404719 followed by fs-segment stack chaining); handler 0x404719 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004046c8(void)

{
  undefined1 *puVar1;
  LPWSTR pWVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  int local_8;

  puStack_14 = &stack0xfffffffc;
  local_8 = 0;
  puStack_18 = &LAB_00404719;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  pWVar2 = GetCommandLineW();
  uVar3 = FUN_0040460c(pWVar2,&local_8);
  do {
    uVar3 = FUN_0040460c(uVar3,&local_8);
    puVar1 = puStack_14;
  } while (local_8 != 0);
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_00404720;
  puStack_18 = (undefined1 *)0x404718;
  thunk_FUN_00406e5c(&local_8,uStack_1c,puVar1);
  return;
}
