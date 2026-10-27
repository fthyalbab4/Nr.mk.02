// rea decompile_all
// name: FUN_00662818
// address: 0x662818
// body: available
// range: 0x662818-0x6628e1 inclusive
// range: 0x662924-0x662b45 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x662836 (push 0x662b46 followed by fs-segment stack chaining); handler 0x662b46 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00662818(int *param_1,int param_2)

{
  undefined1 *puVar1;
  char cVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  HWND hWnd;
  undefined4 *in_FS_OFFSET;
  UINT Msg;
  undefined4 *puVar8;
  WPARAM wParam;
  undefined4 *puVar9;
  undefined4 uStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;

  puStack_30 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  local_18 = 0;
  local_1c = 0;
  local_20 = 0;
  puStack_34 = &LAB_00662b46;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  FUN_004f6294(param_1,param_2);
  if (*(char *)((int)param_1 + 0x31a) != '\0') {
    if ((param_1[0xcf] != 0) &&
       ((((iVar4 = *(ushort *)(param_2 + 4) - 0x30, uVar3 = (ushort)iVar4,
          iVar4 = CONCAT22((short)((uint)iVar4 >> 0x10),uVar3 - 10), uVar3 < 10 ||
          (uVar3 = (ushort)(iVar4 + -7),
          iVar4 = CONCAT22((short)((uint)(iVar4 + -7) >> 0x10),uVar3 - 0x1a), uVar3 < 0x1a)) ||
         (uVar3 = (ushort)(iVar4 + -5),
         iVar4 = CONCAT22((short)((uint)(iVar4 + -5) >> 0x10),uVar3 - 10), uVar3 < 10)) &&
        (uVar5 = FUN_005136ac(iVar4), (uVar5 & 4) == 0)))) {
      uVar5 = (uint)*(ushort *)(param_2 + 4);
      iVar4 = uVar5 - 0x60;
      uVar3 = (ushort)iVar4;
      if (uVar3 < 10) {
        uVar5 = uVar5 - 0x30;
      }
      uVar6 = FUN_00660100(*(undefined4 *)(param_1[0xcf] + 900),
                           CONCAT22((short)((uint)iVar4 >> 0x10),uVar3 - 10));
      iVar4 = FUN_006760d4(uVar6,uVar5);
      if (iVar4 != 0) {
        (**(code **)(**(int **)(iVar4 + 0x44) + 0xfc))();
      }
    }
    switch(*(undefined2 *)(param_2 + 4)) {
    case 0xd:
      iVar4 = FUN_006619bc(param_1);
      if (iVar4 != 0) {
        iVar4 = FUN_006619bc(param_1);
        (**(code **)(**(int **)(iVar4 + 0x44) + 0xfc))();
      }
      break;
    case 0x1b:
      cVar2 = (**(code **)(*param_1 + 0x120))();
      if ((cVar2 == '\0') || (param_1[0xc5] == 0)) {
        cVar2 = FUN_004fd5ac(*(undefined4 *)PTR_DAT_007827e4);
        if (cVar2 == '\0') {
          (**(code **)(*param_1 + 0x1bc))();
        }
        else {
          FUN_004ec968();
        }
      }
      else {
        FUN_004ec644(0);
      }
      break;
    case 0x23:
      iVar4 = FUN_006762a4(param_1);
      FUN_006624f4(param_1,*(undefined4 *)(iVar4 + 0x44));
      break;
    case 0x24:
      iVar4 = FUN_006762e4(param_1);
      FUN_006624f4(param_1,*(undefined4 *)(iVar4 + 0x44));
      break;
    case 0x26:
      FUN_00405d08(param_1,0);
      break;
    case 0x28:
      FUN_00405d08(param_1,1);
      break;
    case 0x2e:
      cVar2 = (**(code **)(*param_1 + 0x120))();
      if ((cVar2 != '\0') && (iVar4 = FUN_006619bc(param_1), iVar4 != 0)) {
        iVar4 = FUN_006619bc(param_1);
        if ((*(byte *)(iVar4 + 0x31) & 4) == 0) {
          FUN_0040b75c(PTR_PTR_0078187c,&local_c);
          FUN_0041beb8(&PTR_LAB_00410b4c,1,local_c);
          FUN_00406618();
        }
        cVar2 = FUN_00672334(iVar4);
        if (cVar2 != '\0') {
          puVar9 = &local_10;
          FUN_00673fe0(iVar4,&local_1c);
          local_18 = local_1c;
          local_14 = CONCAT31(local_14._1_3_,0x11);
          puVar8 = &local_18;
          FUN_0040b75c(PTR_PTR_007825f4,&local_20);
          FUN_00417d4c(local_20,puVar8,0,puVar9);
          iVar7 = FUN_004d437c(local_10,3,0xc,0,0xffffffff,0xffffffff,0);
          if (iVar7 != 1) break;
        }
        local_8 = FUN_0043c914(iVar4);
        iVar7 = (**(code **)(*param_1 + 0x130))();
        if (iVar7 + -1 == local_8) {
          iVar4 = (**(code **)(*param_1 + 0x110))(param_1,iVar4,0);
        }
        else {
          iVar4 = (**(code **)(*param_1 + 0x10c))(param_1,iVar4,0);
        }
        uVar6 = FUN_0067236c(param_1[0x9e]);
        FUN_0043d034(uVar6,local_8);
        if (iVar4 == 0) {
          iVar4 = param_1[0xca];
          wParam = 0;
          Msg = 0xb402;
          hWnd = (HWND)FUN_004f76a8(param_1[0xcf]);
          PostMessageW(hWnd,Msg,wParam,iVar4);
        }
        else {
          (**(code **)(**(int **)(iVar4 + 0x44) + 0xf4))(*(int **)(iVar4 + 0x44),1);
        }
        FUN_0066f614(param_1);
      }
    }
  }
  puVar1 = puStack_30;
  *in_FS_OFFSET = uStack_38;
  puStack_30 = &LAB_00662b4d;
  puStack_34 = (undefined1 *)0x662b38;
  thunk_FUN_00406e80(&local_20,2,puVar1);
  puStack_34 = (undefined1 *)0x662b45;
  thunk_FUN_00406e80(&local_10,2);
  return;
}
