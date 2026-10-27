// rea decompile_all
// name: FUN_00480c68
// address: 0x480c68
// body: available
// range: 0x480c68-0x480e9d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x480c8f (push 0x480e9e followed by fs-segment stack chaining); handler 0x480e9e lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00480c68(int *param_1,undefined4 *param_2)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  WPARAM WVar4;
  WPARAM WVar5;
  int iVar6;
  HWND pHVar7;
  uint uVar8;
  int *in_FS_OFFSET;
  UINT UVar9;
  LPARAM LVar10;
  undefined4 *puStack_3c;
  int iStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 uStack_10;
  undefined4 local_c;
  undefined4 *local_8;

  local_c = 0;
  uStack_10 = 0;
  local_14 = 0;
  local_18 = 0;
  local_1c = 0;
  puStack_30 = (undefined1 *)0x480c84;
  local_8 = param_2;
  thunk_FUN_00407660(param_2);
  puStack_34 = &LAB_00480e9e;
  iStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_38;
  puVar2 = local_8;
  puStack_30 = &stack0xfffffffc;
  if ((local_8 != (undefined4 *)0x0) &&
     (puStack_30 = &stack0xfffffffc, *(short *)((int)local_8 + -10) != 2)) {
    puStack_30 = &stack0xfffffffc;
    puVar2 = (undefined4 *)FUN_00407048(&local_8,local_8);
  }
  iVar6 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    iVar6 = puVar2[-1];
  }
  if (iVar6 == 0) {
    uStack_10 = uStack_10 & 0xffffff;
    (**(code **)(*param_1 + 0xf0))(param_1,0xffffffff);
    puStack_3c = (undefined4 *)0x480cd8;
    FUN_00405d08(param_1);
  }
  else {
    puStack_3c = local_8;
    uVar3 = FUN_004f76a8(param_1);
    WVar4 = FUN_0040ef5c(uVar3,0x14c,0xffffffff);
    uStack_10 = CONCAT13(WVar4 != 0xffffffff,(undefined3)uStack_10);
    if (WVar4 != 0xffffffff) {
      WVar5 = (**(code **)(*param_1 + 0xec))();
      uStack_10._0_3_ = CONCAT12(WVar4 != WVar5,(undefined2)uStack_10);
      if ((char)param_1[0xc0] != '\0') {
        iVar6 = (**(code **)(*(int *)param_1[0xab] + 0x54))((int *)param_1[0xab],local_8);
        if (iVar6 != -1) {
          LVar10 = 0;
          WVar5 = 0;
          UVar9 = 0x14f;
          pHVar7 = (HWND)FUN_004f76a8(param_1);
          SendMessageW(pHVar7,UVar9,WVar5,LVar10);
        }
      }
      LVar10 = 0;
      UVar9 = 0x14e;
      WVar5 = WVar4;
      pHVar7 = (HWND)FUN_004f76a8(param_1);
      SendMessageW(pHVar7,UVar9,WVar5,LVar10);
      if (*(byte *)((int)param_1 + 0x2e6) < 2) {
        (**(code **)(*(int *)param_1[0xab] + 0xc))((int *)param_1[0xab],WVar4,&local_c);
        puVar2 = local_8;
        if ((local_8 != (undefined4 *)0x0) && (*(short *)((int)local_8 + -10) != 2)) {
          puVar2 = (undefined4 *)FUN_00407048(&local_8,local_8);
        }
        iVar6 = 0;
        if (puVar2 != (undefined4 *)0x0) {
          iVar6 = puVar2[-1];
        }
        puStack_3c = &local_18;
        FUN_004086a8(local_c,iVar6 + 1,0x7fffffff);
        FUN_0040839c(&local_14,local_8,local_18);
        FUN_004ee6d8(param_1,local_14);
        pHVar7 = (HWND)FUN_004f76a8(param_1);
        puVar2 = local_8;
        if ((local_8 != (undefined4 *)0x0) && (*(short *)((int)local_8 + -10) != 2)) {
          puVar2 = (undefined4 *)FUN_00407048(&local_8,local_8);
        }
        uVar8 = 0;
        if (puVar2 != (undefined4 *)0x0) {
          uVar8 = puVar2[-1];
        }
        FUN_004ee6a0(param_1,&local_1c);
        iVar6 = 0;
        if (local_1c != 0) {
          iVar6 = *(int *)(local_1c + -4);
        }
        SendMessageW(pHVar7,0x142,0,uVar8 & 0xffff | iVar6 << 0x10);
      }
      else {
        (**(code **)(*param_1 + 0xf0))(param_1,WVar4);
        FUN_00407eb8(param_1 + 0xb8,local_8);
      }
      if (uStack_10._2_1_ != '\0') {
        FUN_00405d08(param_1);
        FUN_00405d08(param_1);
      }
    }
  }
  puVar1 = puStack_34;
  *in_FS_OFFSET = (int)puStack_3c;
  puStack_34 = &LAB_00480ea5;
  iStack_38 = 0x480e83;
  thunk_FUN_00406e5c(&local_1c,puStack_3c,puVar1);
  iStack_38 = 0x480e90;
  thunk_FUN_00406e80(&local_18,2);
  iStack_38 = 0x480e9d;
  thunk_FUN_00406e80(&local_c,2);
  return;
}
