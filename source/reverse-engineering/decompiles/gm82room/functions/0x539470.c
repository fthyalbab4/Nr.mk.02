// rea decompile_all
// name: FUN_00539470
// address: 0x539470
// body: available
// range: 0x539470-0x539770 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x53949e (push 0x539771 followed by fs-segment stack chaining); handler 0x539771 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00539470(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  undefined1 *puVar2;
  undefined2 uVar3;
  uint *puVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  int iVar6;
  undefined4 uStack_5c;
  undefined1 *puStack_58;
  undefined1 *puStack_54;
  undefined4 local_44;
  int local_40;
  undefined1 local_3c;
  undefined4 local_38;
  undefined1 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  bool local_1d;
  int local_1c;
  int local_18;
  undefined4 local_14;
  uint local_10;
  uint local_c;
  undefined4 local_8;

  puStack_54 = &stack0xfffffffc;
  local_44 = 0;
  local_2c = 0;
  local_30 = 0;
  local_24 = 0;
  local_28 = 0;
  local_8 = 0;
  puVar4 = (uint *)(param_4 + -8);
  puStack_58 = &LAB_00539771;
  uStack_5c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_5c;
  local_c = param_1 + *puVar4;
  iVar5 = 0;
  while( true ) {
    if ((*(char *)(param_4 + -0xb) != '\0') || (local_c <= *puVar4)) goto LAB_00539746;
    FUN_0053930c();
    iVar6 = param_4;
    FUN_005393d4();
    if (*(short *)(param_4 + -0xe) == 0) {
      local_18 = *(int *)(param_4 + -4);
      if ((local_18 != 0) && (*(short *)(local_18 + -10) != 2)) {
        local_18 = FUN_00407488(param_4 + -4,*(undefined4 *)(param_4 + -4),iVar6);
      }
      local_1c = local_18;
      if (local_18 != 0) {
        local_1c = *(int *)(local_18 + -4);
      }
      local_1d = local_1c != 8;
    }
    else {
      local_1d = true;
    }
    if (local_1d != false) break;
    thunk_FUN_00539304(puVar4);
    FUN_00408984(*(undefined4 *)(param_4 + -4),1,4,&local_28);
    FUN_00408678(&local_24,&DAT_0053978c,local_28);
    uVar3 = FUN_0041663c(local_24,0);
    local_14 = CONCAT22(local_14._2_2_,uVar3);
    FUN_00408984(*(undefined4 *)(param_4 + -4),5,4,&local_30);
    FUN_00408678(&local_2c,&DAT_0053978c,local_30);
    uVar3 = FUN_0041663c(local_2c,0);
    local_14 = CONCAT22(uVar3,(undefined2)local_14);
    FUN_00409dfc(*(int *)(param_4 + -0x1c) + 0x18,&DAT_0053774c,1,iVar5 + 1);
    *(undefined4 *)(*(int *)(*(int *)(param_4 + -0x1c) + 0x18) + iVar5 * 4) = local_14;
    local_10 = (*puVar4 + (uint)*(ushort *)(param_4 + -10)) - *(int *)(param_4 + -0x18);
LAB_0053971d:
    if ((*(char *)(param_4 + -0xb) != '\0') || (local_10 <= *puVar4)) goto LAB_00539731;
    iVar6 = param_4;
    FUN_0053930c();
    if (*(short *)(param_4 + -0x12) == 0) {
      if ((ushort)(*(short *)(param_4 + -0xe) - 1U) < 4) {
        local_40 = (uint)*(ushort *)(param_4 + -0xe) * 2;
        local_3c = 0;
        local_38 = *(undefined4 *)*puVar4;
        local_34 = 0;
        FUN_00417c88(L"$%.*x",&local_40,1,&local_8);
      }
      else if ((*(short *)(param_4 + -0xe) == 0) || (*(char *)(param_4 + -0xf) == '\0')) {
        FUN_004081e8(&local_8,0,iVar6);
      }
      else {
        FUN_00408350(&local_8,*puVar4);
      }
LAB_005396c7:
      *puVar4 = *puVar4 + ((uint)*(ushort *)(param_4 + -10) - *(int *)(param_4 + -0x18));
      thunk_FUN_00539304(puVar4);
      local_40 = *(int *)(param_4 + -4);
      local_3c = 0x11;
      local_38 = local_8;
      local_34 = 0x11;
      FUN_00417c88(L"%s=%s",&local_40,1,&local_44);
      piVar1 = *(int **)(*(int *)(param_4 + -0x1c) + 0x10);
      (**(code **)(*piVar1 + 0x3c))(piVar1,local_44,iVar5);
      goto LAB_0053971d;
    }
    if (*(short *)(param_4 + -0x12) == 1) {
      if (*(short *)(param_4 + -0xe) == 0) {
        FUN_004081e8(&local_8,0,iVar6);
      }
      else if (*(char *)(param_4 + -0xf) == '\0') {
        FUN_00408320(&local_8,*puVar4);
      }
      else {
        FUN_004095dc(*puVar4,*(undefined2 *)(param_4 + -0xe),&local_8);
        FUN_005432a4(&local_8);
      }
      goto LAB_005396c7;
    }
    *(undefined1 *)(param_4 + -0xb) = 1;
LAB_00539731:
    iVar5 = iVar5 + 1;
  }
  *(undefined1 *)(param_4 + -0xb) = 1;
LAB_00539746:
  puVar2 = puStack_54;
  *in_FS_OFFSET = uStack_5c;
  puStack_54 = &LAB_00539778;
  puStack_58 = (undefined1 *)0x53975b;
  thunk_FUN_004072d8(&local_44,uStack_5c,puVar2);
  puStack_58 = (undefined1 *)0x539768;
  thunk_FUN_004072fc(&local_30,4);
  puStack_58 = (undefined1 *)0x539770;
  thunk_FUN_004072d8(&local_8);
  return;
}
