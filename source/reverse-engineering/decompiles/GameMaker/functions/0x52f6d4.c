// rea decompile_all
// name: FUN_0052f6d4
// address: 0x52f6d4
// body: available
// range: 0x52f6d4-0x52f74f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x52f6f2 (push 0x52f750 followed by fs-segment stack chaining); handler 0x52f750 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0052f6d4(undefined4 *param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_10;
  uint local_c;
  undefined4 *local_8;

  puStack_20 = &stack0xfffffffc;
  local_10 = 0;
  puStack_24 = &LAB_0052f750;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  local_8 = param_1;
  FUN_00407eb8(param_2,0);
  iVar2 = (**(code **)*local_8)();
  if (-1 < iVar2 + -1) {
    iVar3 = 0;
    do {
      local_c = (uint)*(byte *)(local_8[1] + iVar3);
      FUN_004168d8(local_c,2,&local_10);
      FUN_004082dc(param_2,local_10);
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  puVar1 = puStack_20;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_0052f757;
  puStack_24 = (undefined1 *)0x52f74f;
  thunk_FUN_00406e5c(&local_10,uStack_28,puVar1);
  return;
}
