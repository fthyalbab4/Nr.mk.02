// rea decompile_all
// name: FUN_005cfab8
// address: 0x5cfab8
// body: available
// range: 0x5cfab8-0x5cfb4f inclusive
// range: 0x5cfb83-0x5cfb9d inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5cfad4 (push 0x5cfb9e followed by fs-segment stack chaining); handler 0x5cfb9e lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5cfb1c (push 0x5cfb50 followed by fs-segment stack chaining); handler 0x5cfb50 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005cfab8(void)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  float10 in_ST0;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  undefined4 local_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  char local_15;
  double local_14;
  int local_c;
  undefined4 local_8;

  puStack_28 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  puStack_2c = &LAB_005cfb9e;
  local_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_30;
  local_14 = 0.0;
  puStack_34 = (undefined1 *)0x5cfae7;
  FUN_005ce8d8(&local_8);
  puStack_34 = (undefined1 *)0x5cfaf5;
  FUN_005cf8d8(&local_c,local_8,&local_15);
  if (local_15 == '\0') {
    puStack_34 = (undefined1 *)0x5cfb03;
    FUN_005cea78(&local_8);
    puStack_34 = (undefined1 *)0x5cfb11;
    FUN_005cf8d8(&local_c,local_8,&local_15);
  }
  puStack_38 = &LAB_005cfb50;
  uStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_3c;
  puStack_34 = &stack0xfffffffc;
  FUN_00407eb8(PTR_DAT_00781c34,L"dd/mm/yy");
  if ((local_15 != '\0') && (local_c != 0)) {
    FUN_0041b16c(local_c);
    local_14 = (double)in_ST0;
  }
  puVar1 = puStack_28;
  *in_FS_OFFSET = uStack_3c;
  *in_FS_OFFSET = local_30;
  puStack_28 = &LAB_005cfba5;
  puStack_2c = (undefined1 *)0x5cfb9d;
  thunk_FUN_00406e80(&local_c,2,puVar1);
  return;
}
