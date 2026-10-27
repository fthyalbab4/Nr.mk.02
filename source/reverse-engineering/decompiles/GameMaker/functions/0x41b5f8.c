// rea decompile_all
// name: FUN_0041b5f8
// address: 0x41b5f8
// body: available
// range: 0x41b5f8-0x41b70a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x41b611 (push 0x41b70b followed by fs-segment stack chaining); handler 0x41b70b lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0041b5f8(void)

{
  undefined1 *puVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  LCID local_8;

  puStack_2c = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  local_18 = 0;
  local_1c = 0;
  puStack_30 = &LAB_0041b70b;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  local_8 = GetThreadLocale();
  iVar2 = 1;
  puVar3 = &DAT_00785cb4;
  puVar4 = &DAT_00785ce4;
  do {
    FUN_0041b5b8(iVar2 + 0x43,iVar2 + -1,&PTR_PTR_00773c48,&local_10,0xb);
    FUN_00407eb8(puVar3,local_10,&stack0xfffffffc);
    FUN_0041b5b8(iVar2 + 0x37,iVar2 + -1,&PTR_PTR_00773c78,&local_14,0xb);
    FUN_00407eb8(puVar4,local_14,&stack0xfffffffc);
    iVar2 = iVar2 + 1;
    puVar4 = puVar4 + 4;
    puVar3 = puVar3 + 4;
  } while (iVar2 != 0xd);
  iVar2 = 1;
  puVar3 = &DAT_00785d14;
  puVar4 = &DAT_00785d30;
  do {
    local_c = (iVar2 + 5) % 7;
    FUN_0041b5b8(local_c + 0x31,iVar2 + -1,&PTR_PTR_00773ca8,&local_18,6);
    FUN_00407eb8(puVar3,local_18,&stack0xfffffffc);
    FUN_0041b5b8(local_c + 0x2a,iVar2 + -1,&PTR_PTR_00773cc4,&local_1c,6);
    FUN_00407eb8(puVar4,local_1c,&stack0xfffffffc);
    puVar1 = puStack_2c;
    iVar2 = iVar2 + 1;
    puVar4 = puVar4 + 4;
    puVar3 = puVar3 + 4;
  } while (iVar2 != 8);
  *in_FS_OFFSET = uStack_34;
  puStack_2c = &LAB_0041b712;
  puStack_30 = (undefined1 *)0x41b70a;
  thunk_FUN_00406e80(&local_1c,4,puVar1);
  return;
}
