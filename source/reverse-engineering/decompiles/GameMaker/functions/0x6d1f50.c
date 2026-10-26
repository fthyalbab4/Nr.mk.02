// rea decompile_all
// name: FUN_006d1f50
// address: 0x6d1f50
// body: available
// range: 0x6d1f50-0x6d1fe8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6d1f65 (push 0x6d1fe9 followed by fs-segment stack chaining); handler 0x6d1fe9 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006d1f50(undefined4 param_1)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_8;

  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  puStack_1c = &LAB_006d1fe9;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  iVar2 = FUN_00696cb8();
  if (-1 < iVar2 + -1) {
    iVar3 = 0;
    do {
      uStack_20 = 0x80;
      FUN_00696cc0(iVar3,&local_8);
      FUN_006d1af4(param_1,local_8,0xffffffff);
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  iVar2 = *(int *)PTR_DAT_00781d24;
  if (-1 < iVar2 + -1) {
    iVar3 = 0;
    do {
      uStack_20 = 0xff;
      FUN_006d1af4(param_1,*(undefined4 *)(*(int *)PTR_DAT_00781664 + iVar3 * 4),0xffffffff);
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_006d194c(param_1);
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_006d1ff0;
  puStack_1c = (undefined1 *)0x6d1fe8;
  thunk_FUN_00406e5c(&local_8,uStack_20,puVar1);
  return;
}
