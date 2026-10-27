// rea decompile_all
// name: FUN_0052a5d8
// address: 0x52a5d8
// body: available
// range: 0x52a5d8-0x52a7f7 inclusive
// range: 0x52a7ff-0x52a8d3 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x52a620 (push 0x52a7f8 followed by fs-segment stack chaining); handler 0x52a7f8 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0052a5d8(int param_1,int *param_2,int *param_3,char param_4,char param_5)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar7;
  undefined4 uVar8;
  HDC pHVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 in_stack_ffffffa0;
  undefined4 uStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  HGDIOBJ local_10;
  HDC local_c;
  int *local_8;

  local_8 = param_2;
  if ((param_5 != '\0') && (*(char *)(param_1 + 0x34) != '\0')) {
    puStack_30 = (undefined1 *)0x52a603;
    cVar1 = FUN_00528190(param_1);
    if (cVar1 != '\0') {
      local_10 = (HGDIOBJ)0x0;
      local_c = (HDC)0x0;
      puStack_34 = &LAB_0052a7f8;
      uStack_38 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_38;
      puStack_30 = &stack0xfffffffc;
      CreateCompatibleDC((HDC)0x0);
      local_c = (HDC)FUN_0051ece8();
      local_10 = SelectObject(local_c,*(HGDIOBJ *)(param_1 + 0xc));
      if (param_4 == '\0') {
        iVar6 = *param_3;
        FUN_00528bb8(param_1);
        FUN_00463124();
        uVar3 = FUN_0045d4ec();
        uVar10 = 0;
        uVar8 = 0;
        uVar2 = FUN_005281b8(param_1,3);
        uVar2 = uVar2 & 0xffff;
        uVar4 = FUN_005281b8(param_1,4);
        uVar4 = uVar4 & 0xffff;
        uVar7 = 0;
        in_stack_ffffffa0 = 0;
        pHVar9 = local_c;
        uVar5 = FUN_0045d4ec(local_8);
        FUN_0052a194(uVar5,iVar6,param_3[1],in_stack_ffffffa0,uVar7,pHVar9,uVar4,uVar2,uVar8,uVar10,
                     uVar3);
      }
      else {
        uVar2 = FUN_005281b8(param_1,1);
        local_20 = (uVar2 & 0xffff) + *param_3;
        uVar2 = FUN_005281b8(param_1,3);
        local_18 = (uVar2 & 0xffff) + local_20;
        while (local_20 < param_3[2]) {
          uVar2 = FUN_005281b8(param_1,2);
          local_1c = (uVar2 & 0xffff) + param_3[1];
          uVar2 = FUN_005281b8(param_1,4);
          local_14 = (uVar2 & 0xffff) + local_1c;
          while (iVar6 = local_1c, local_1c < param_3[3]) {
            FUN_005281b8(param_1,3);
            FUN_005281b8(param_1,4);
            FUN_00528bb8(param_1);
            FUN_00463124();
            uVar3 = FUN_0045d4ec();
            uVar11 = 0;
            uVar10 = 0;
            uVar2 = FUN_005281b8(param_1,3);
            uVar2 = uVar2 & 0xffff;
            uVar4 = FUN_005281b8(param_1,4);
            uVar4 = uVar4 & 0xffff;
            uVar8 = 0;
            uVar7 = 0;
            pHVar9 = local_c;
            uVar5 = FUN_0045d4ec(local_8);
            FUN_0052a194(uVar5,local_20,iVar6,uVar7,uVar8,pHVar9,uVar4,uVar2,uVar10,uVar11,uVar3);
            iVar6 = (**(code **)(**(int **)(param_1 + 4) + 0x24))();
            local_1c = local_1c + iVar6;
            iVar6 = (**(code **)(**(int **)(param_1 + 4) + 0x24))();
            local_14 = local_14 + iVar6;
          }
          iVar6 = (**(code **)(**(int **)(param_1 + 4) + 0x30))();
          local_20 = local_20 + iVar6;
          iVar6 = (**(code **)(**(int **)(param_1 + 4) + 0x30))();
          local_18 = local_18 + iVar6;
        }
      }
      (**(code **)(*local_8 + 0x24))();
      *in_FS_OFFSET = in_stack_ffffffa0;
      if (local_10 != (HGDIOBJ)0x0) {
        SelectObject(local_c,local_10);
      }
      if (local_c != (HDC)0x0) {
        DeleteDC(local_c);
      }
      return;
    }
  }
  if (param_4 == '\0') {
    puStack_30 = (undefined1 *)0x52a8bc;
    uVar3 = FUN_00528bb8(param_1);
    puStack_30 = (undefined1 *)0x52a8cb;
    (**(code **)(*local_8 + 0x80))(local_8,param_3,uVar3);
  }
  else {
    puStack_30 = (undefined1 *)0x52a815;
    uVar2 = FUN_005281b8(param_1,1);
    local_20 = (uVar2 & 0xffff) + *param_3;
    puStack_30 = (undefined1 *)0x52a829;
    uVar2 = FUN_005281b8(param_1,3);
    local_18 = (uVar2 & 0xffff) + local_20;
    while (local_20 < param_3[2]) {
      puStack_30 = (undefined1 *)0x52a840;
      uVar2 = FUN_005281b8(param_1,2);
      local_1c = (uVar2 & 0xffff) + param_3[1];
      puStack_30 = (undefined1 *)0x52a855;
      uVar2 = FUN_005281b8(param_1,4);
      local_14 = (uVar2 & 0xffff) + local_1c;
      while (local_1c < param_3[3]) {
        puStack_30 = (undefined1 *)0x52a867;
        uVar3 = FUN_00528bb8(param_1);
        puStack_30 = (undefined1 *)0x52a877;
        (**(code **)(*local_8 + 0x80))(local_8,&local_20,uVar3);
        puStack_30 = (undefined1 *)0x52a87f;
        iVar6 = (**(code **)(**(int **)(param_1 + 4) + 0x24))();
        local_1c = local_1c + iVar6;
        puStack_30 = (undefined1 *)0x52a88a;
        iVar6 = (**(code **)(**(int **)(param_1 + 4) + 0x24))();
        local_14 = local_14 + iVar6;
      }
      puStack_30 = (undefined1 *)0x52a89d;
      iVar6 = (**(code **)(**(int **)(param_1 + 4) + 0x30))();
      local_20 = local_20 + iVar6;
      puStack_30 = (undefined1 *)0x52a8a8;
      iVar6 = (**(code **)(**(int **)(param_1 + 4) + 0x30))();
      local_18 = local_18 + iVar6;
    }
  }
  return;
}
