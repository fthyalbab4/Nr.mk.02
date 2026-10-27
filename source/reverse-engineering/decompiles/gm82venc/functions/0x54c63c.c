// rea decompile_all
// name: FUN_0054c63c
// address: 0x54c63c
// body: available
// range: 0x54c63c-0x54c6b8 inclusive
// range: 0x54c6d5-0x54c6f0 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x54c675 (push 0x54c6f1 followed by fs-segment stack chaining); handler 0x54c6f1 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x54c692 (push 0x54c6b9 followed by fs-segment stack chaining); handler 0x54c6b9 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0054c63c(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  undefined4 local_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  int local_8;

  if (param_4 == 0) {
    puStack_24 = (undefined1 *)0x54c65f;
    local_8 = FUN_0054c914(&LAB_00546cf4,1);
  }
  else {
    local_8 = param_4;
  }
  puStack_28 = &LAB_0054c6f1;
  local_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_2c;
  puStack_30 = (undefined1 *)0x54c684;
  puStack_24 = &stack0xfffffffc;
  iVar2 = FUN_0043c790(&PTR_FUN_00430700,1);
  puStack_34 = &LAB_0054c6b9;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  puStack_30 = &stack0xfffffffc;
  FUN_0043c6cc(iVar2,1);
  *(undefined1 *)(iVar2 + 0x29) = 0;
  FUN_0054c550(param_1);
  puVar1 = puStack_24;
  *in_FS_OFFSET = uStack_38;
  *in_FS_OFFSET = local_2c;
  puStack_24 = &LAB_0054c6f8;
  if (param_4 == 0) {
    puStack_28 = (undefined1 *)0x54c6f0;
    FUN_00405fdc(local_8,local_2c,puVar1);
  }
  return;
}
