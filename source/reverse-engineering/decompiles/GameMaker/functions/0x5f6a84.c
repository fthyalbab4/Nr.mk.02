// rea decompile_all
// name: FUN_005f6a84
// address: 0x5f6a84
// body: available
// range: 0x5f6a84-0x5f6af7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5f6aa0 (push 0x5f6af8 followed by fs-segment stack chaining); handler 0x5f6af8 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005f6a84(undefined4 param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined1 local_a [2];
  undefined4 local_8;

  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  puStack_1c = &LAB_005f6af8;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  FUN_005f6d10(param_1,1);
  iVar2 = FUN_005f3e0c(*(undefined4 *)PTR_DAT_007826d0,param_2,&local_8,local_a);
  if (iVar2 != -1) {
    FUN_005f6e24(param_1,iVar2);
    FUN_005f6cd0(param_1);
    FUN_005f6cf0(param_1);
  }
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_005f6aff;
  puStack_1c = (undefined1 *)0x5f6af7;
  thunk_FUN_00406e5c(&local_8,uStack_20,puVar1);
  return;
}
