// rea decompile_all
// name: FUN_005c0a30
// address: 0x5c0a30
// body: available
// range: 0x5c0a30-0x5c0aec inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5c0a4c (push 0x5c0aed followed by fs-segment stack chaining); handler 0x5c0aed lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005c0a30(int param_1,undefined4 *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  puStack_28 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  local_18 = 0;
  puStack_2c = &LAB_005c0aed;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  (**(code **)*param_2)(param_2,&local_8);
  iVar2 = FUN_005c09a8(param_1,local_8);
  if (iVar2 != 0) {
    (**(code **)*param_2)(param_2,&local_14);
    local_10 = local_14;
    local_c = CONCAT31(local_c._1_3_,0x11);
    puVar4 = &local_10;
    uVar3 = 0;
    FUN_0040b75c(PTR_PTR_0078235c,&local_18);
    FUN_0041bef4(&PTR_LAB_00410b4c,1,local_18,uVar3,puVar4);
    FUN_00406618();
  }
  iVar2 = FUN_00409a18(*(undefined4 *)(param_1 + 4));
  FUN_00409be0(param_1 + 4,&DAT_005c02fc,1,iVar2 + 1);
  puVar1 = puStack_28;
  *(undefined4 **)(*(int *)(param_1 + 4) + iVar2 * 4) = param_2;
  *in_FS_OFFSET = uStack_30;
  puStack_28 = &LAB_005c0af4;
  puStack_2c = (undefined1 *)0x5c0ae4;
  thunk_FUN_00406e80(&local_18,2,puVar1);
  puStack_2c = (undefined1 *)0x5c0aec;
  thunk_FUN_00406e5c(&local_8);
  return;
}
