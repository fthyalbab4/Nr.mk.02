// rea decompile_all
// name: FUN_005ed03c
// address: 0x5ed03c
// body: available
// range: 0x5ed03c-0x5ed0c6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5ed057 (push 0x5ed0c7 followed by fs-segment stack chaining); handler 0x5ed0c7 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005ed03c(int param_1,undefined4 param_2,undefined4 param_3,code *param_4,undefined4 param_5
                 )

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_18;
  undefined1 local_14;
  undefined4 local_10;
  int local_c;
  int local_8;

  puStack_2c = &stack0xfffffffc;
  local_10 = 0;
  puStack_30 = &LAB_005ed0c7;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  iVar3 = *(int *)(param_1 + 8);
  local_8 = param_1;
  if (-1 < iVar3 + -1) {
    local_c = 0;
    puStack_2c = &stack0xfffffffc;
    do {
      puVar1 = (undefined4 *)(*(int *)(local_8 + 0xc) + local_c * 8);
      local_20 = *puVar1;
      local_1c = 0;
      local_18 = puVar1[1];
      local_14 = 0x11;
      FUN_00417c88(L"%d - %s",&local_20,1,&local_10);
      (*param_4)(param_5,local_10);
      local_c = local_c + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  puVar2 = puStack_2c;
  *in_FS_OFFSET = uStack_34;
  puStack_2c = &LAB_005ed0ce;
  puStack_30 = (undefined1 *)0x5ed0c6;
  thunk_FUN_004072d8(&local_10,uStack_34,puVar2);
  return;
}
