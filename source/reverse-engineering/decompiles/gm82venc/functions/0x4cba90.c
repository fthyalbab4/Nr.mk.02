// rea decompile_all
// name: FUN_004cba90
// address: 0x4cba90
// body: available
// range: 0x4cba90-0x4cbbcc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4cbab3 (push 0x4cbbcd followed by fs-segment stack chaining); handler 0x4cbbcd lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004cba90(int param_1,int param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int *in_FS_OFFSET;
  int iStack_40;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  undefined4 local_10;
  tagPOINT local_c;

  puStack_30 = &stack0xfffffffc;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  puStack_34 = &LAB_004cbbcd;
  puStack_38 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = (int)&puStack_38;
  puVar1 = &stack0xfffffffc;
  if (param_2 != 0) {
    iVar2 = FUN_004bcba4(param_2);
    if (param_1 == iVar2) {
      puVar1 = puStack_30;
      if (*(int *)(param_2 + 0x80) == 0) goto LAB_004cbbb2;
      iVar2 = FUN_0041d99c(&DAT_004cbbe8,*(undefined4 *)(param_2 + 0x80));
      FUN_004b7ee8(*(undefined4 *)(param_2 + 0x80),&local_18);
      FUN_00408194(param_1 + 0x34,local_18);
      if (iVar2 == 0) {
        FUN_00408194(param_1 + 0x38,0);
      }
      else {
        FUN_004b7f30(*(undefined4 *)(param_2 + 0x80),&local_1c);
        FUN_00408194(param_1 + 0x38,local_1c);
      }
      iVar2 = FUN_0041d99c(&DAT_004cbbe8,*(undefined4 *)(param_1 + 0x38));
      if (iVar2 == 0) {
        *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
      }
      else {
        FUN_00408984(*(undefined4 *)(param_1 + 0x38),iVar2 + 1,0x7fffffff,&local_20);
        uVar3 = FUN_00416600(local_20);
        *(undefined4 *)(param_1 + 0x40) = uVar3;
        iStack_40 = param_1 + 0x38;
        FUN_00408984(*(undefined4 *)(param_1 + 0x38),0,iVar2 + -1);
      }
      *(int *)(param_1 + 0x58) = param_2;
      GetCursorPos(&local_c);
    }
    else {
      local_14 = (int)*(uint *)(param_2 + 0x48) >> 1;
      if (local_14 < 0) {
        local_14 = local_14 + (uint)((*(uint *)(param_2 + 0x48) & 1) != 0);
      }
      local_10 = *(undefined4 *)(param_2 + 0x4c);
      FUN_004bb054(param_2,&local_14,&local_c);
    }
    FUN_004cbc84(param_1,&local_c);
    puVar1 = puStack_30;
  }
LAB_004cbbb2:
  puStack_30 = puVar1;
  puVar1 = puStack_38;
  *in_FS_OFFSET = iStack_40;
  puStack_38 = &LAB_004cbbd4;
  thunk_FUN_004072fc(&local_20,3,puVar1);
  return;
}
