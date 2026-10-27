// rea decompile_all
// name: FUN_0052624c
// address: 0x52624c
// body: available
// range: 0x52624c-0x5266e1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x52626c (push 0x5266e2 followed by fs-segment stack chaining); handler 0x5266e2 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0052624c(int *param_1,int param_2)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  HBRUSH hbr;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  HDC pHVar8;
  undefined4 *in_FS_OFFSET;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  tagRECT *ptVar14;
  undefined4 *puVar15;
  undefined1 *puVar16;
  undefined4 uStack_6c;
  undefined1 *puStack_68;
  undefined1 *puStack_64;
  undefined4 local_54;
  undefined1 local_50 [8];
  undefined4 local_48;
  undefined1 local_44 [16];
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  tagRECT local_28;
  undefined1 local_18 [11];
  undefined1 local_d;
  uint local_c;
  byte local_7;
  byte local_6;
  char local_5;

  puStack_64 = &stack0xfffffffc;
  local_54 = 0;
  local_48 = 0;
  puStack_68 = &LAB_005266e2;
  uStack_6c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_6c;
  FUN_0045ceb4(param_1[0xb2],*(undefined4 *)(param_2 + 0x18));
  (**(code **)(*param_1 + 0x54))(param_1,&local_28);
  FUN_0045ceb4(param_1[0xb2],*(undefined4 *)(param_2 + 0x18));
  FUN_0045cd20(param_1[0xb2],param_1[0x19]);
  local_5 = (*(uint *)(param_2 + 0x10) & 1) != 0;
  local_6 = (*(uint *)(param_2 + 0x10) & 0x10) != 0;
  cVar1 = (**(code **)(*param_1 + 0x5c))();
  if (cVar1 == '\0') {
    local_7 = 1;
  }
  else if (local_5 == '\0') {
    local_7 = 0;
  }
  else {
    local_7 = 2;
  }
  cVar1 = FUN_0050513c(param_1);
  if (cVar1 == '\0') {
    (**(code **)(*param_1 + 0x54))(param_1,&local_28);
    local_c = 0x2010;
    if (local_5 != '\0') {
      local_c = 0x2210;
    }
    if ((*(byte *)(param_2 + 0x10) & 4) != 0) {
      local_c = local_c | 0x100;
    }
    if ((char)param_1[0xb7] != '\0' || local_6 != 0) {
      FUN_0045b850(*(undefined4 *)(param_1[0xb2] + 0x44),0xff000006);
      FUN_0045b9a4(*(undefined4 *)(param_1[0xb2] + 0x44),1);
      FUN_0045bda4(*(undefined4 *)(param_1[0xb2] + 0x48),1);
      (**(code **)(*(int *)param_1[0xb2] + 0x74))
                ((int *)param_1[0xb2],local_28.left,local_28.top,local_28.bottom,local_28.right);
      InflateRect(&local_28,-1,-1);
    }
    if (local_5 == '\0') {
      DrawFrameControl(*(HDC *)(param_2 + 0x18),&local_28,4,local_c);
    }
    else {
      FUN_0045b850(*(undefined4 *)(param_1[0xb2] + 0x44),0xff000010);
      FUN_0045b9a4(*(undefined4 *)(param_1[0xb2] + 0x44),1);
      FUN_0045bc24(*(undefined4 *)(param_1[0xb2] + 0x48),0xff00000f);
      (**(code **)(*(int *)param_1[0xb2] + 0x74))
                ((int *)param_1[0xb2],local_28.left,local_28.top,local_28.bottom,local_28.right);
      InflateRect(&local_28,-1,-1);
    }
    if ((char)param_1[0xb7] != '\0') {
      (**(code **)(*param_1 + 0x54))(param_1,&local_28);
      InflateRect(&local_28,-1,-1);
    }
    FUN_0045cd20(param_1[0xb2],param_1[0x19]);
    if (local_5 != '\0') {
      OffsetRect(&local_28,1,1);
    }
    FUN_00438bf4(0,0,local_50);
    puVar16 = local_50;
    FUN_004ee6a0(param_1,&local_54);
    uVar5 = (uint)*(byte *)((int)param_1 + 0x2d2);
    iVar11 = param_1[0xb6];
    iVar10 = param_1[0xb5];
    uVar6 = (uint)local_7;
    uVar4 = 0;
    uVar3 = local_54;
    uVar7 = FUN_004f1454(param_1,0);
    FUN_00524db0(param_1[0xb3],param_1[0xb2],&local_28,local_44,
                 uVar7 | *(uint *)(&DAT_00778ef8 + (uint)*(byte *)((int)param_1 + 0x271) * 4),uVar4,
                 uVar6,iVar10,iVar11,uVar5,uVar3,puVar16);
    if ((*(byte *)(param_1 + 0xb7) & local_6) != 0) {
      (**(code **)(*param_1 + 0x54))(param_1,&local_28);
      InflateRect(&local_28,-4,-4);
      FUN_0045b850(*(undefined4 *)(param_1[0xb2] + 0x44),0xff000006);
      FUN_0045bc24(*(undefined4 *)(param_1[0xb2] + 0x48),0xff00000f);
      ptVar14 = &local_28;
      pHVar8 = (HDC)FUN_0045ce2c(param_1[0xb2]);
      DrawFocusRect(pHVar8,ptVar14);
    }
  }
  else {
    cVar1 = (**(code **)(*param_1 + 0x5c))();
    if (cVar1 == '\0') {
      local_d = 5;
    }
    else if (local_5 == '\0') {
      if (*(char *)((int)param_1 + 0x2de) == '\0') {
        if ((char)param_1[0xb7] == '\0' && local_6 == 0) {
          local_d = 2;
        }
        else {
          local_d = 6;
        }
      }
      else {
        local_d = 3;
      }
    }
    else {
      local_d = 4;
    }
    uVar3 = FUN_00503a6c();
    FUN_00503f3c(uVar3,local_d,&local_34);
    if ((*(byte *)((int)param_1 + 0x55) & 0x80) == 0) {
      puVar15 = &local_34;
      uVar13 = 1;
      uVar12 = 0;
      uVar3 = FUN_004f76a8(param_1);
      uVar4 = FUN_00503a6c();
      FUN_00503eb0(uVar4,uVar3,*(undefined4 *)(param_2 + 0x18),uVar12,uVar13,puVar15);
    }
    else {
      InflateRect(&local_28,-2,-2);
      hbr = GetStockObject(4);
      FillRect(*(HDC *)(param_2 + 0x18),&local_28,hbr);
    }
    iVar11 = param_2 + 0x1c;
    uVar3 = FUN_00503a6c();
    FUN_00503d0c(uVar3,*(undefined4 *)(param_2 + 0x18),&local_34,iVar11);
    param_2 = param_2 + 0x1c;
    ptVar14 = &local_28;
    uVar3 = FUN_0045ce2c(param_1[0xb2]);
    uVar4 = FUN_00503a6c();
    FUN_00503c24(uVar4,uVar3,&local_34,ptVar14,param_2);
    FUN_00438bf4(0,0,local_18);
    iVar11 = param_1[0xb3];
    *(bool *)(iVar11 + 0x21) = (*(byte *)((int)param_1 + 0x55) & 0x80) != 0;
    *(undefined4 *)(iVar11 + 0x24) = local_34;
    *(undefined4 *)(iVar11 + 0x28) = local_30;
    *(undefined4 *)(iVar11 + 0x2c) = local_2c;
    *(undefined1 *)(iVar11 + 0x30) = 0;
    uVar2 = FUN_0050513c(param_1);
    iVar11 = param_1[0xb3];
    *(undefined1 *)(iVar11 + 0x31) = uVar2;
    puVar16 = local_18;
    FUN_004ee6a0(param_1,&local_48);
    uVar5 = (uint)*(byte *)((int)param_1 + 0x2d2);
    iVar10 = param_1[0xb6];
    iVar9 = param_1[0xb5];
    uVar6 = (uint)local_7;
    uVar4 = 0;
    uVar3 = local_48;
    uVar7 = FUN_004f1454(param_1,0);
    FUN_00524db0(iVar11,param_1[0xb2],&local_28,local_44,
                 uVar7 | *(uint *)(&DAT_00778ef8 + (uint)*(byte *)((int)param_1 + 0x271) * 4),uVar4,
                 uVar6,iVar9,iVar10,uVar5,uVar3,puVar16);
    if ((*(byte *)(param_1 + 0xb7) & local_6) != 0) {
      FUN_0045b850(*(undefined4 *)(param_1[0xb2] + 0x44),0xff000006);
      FUN_0045bc24(*(undefined4 *)(param_1[0xb2] + 0x48),0xff00000f);
      ptVar14 = &local_28;
      pHVar8 = (HDC)FUN_0045ce2c(param_1[0xb2]);
      DrawFocusRect(pHVar8,ptVar14);
    }
  }
  FUN_0045ceb4(param_1[0xb2],0);
  puVar16 = puStack_64;
  *in_FS_OFFSET = uStack_6c;
  puStack_64 = &LAB_005266e9;
  puStack_68 = (undefined1 *)0x5266d9;
  thunk_FUN_00406e5c(&local_54,uStack_6c,puVar16);
  puStack_68 = (undefined1 *)0x5266e1;
  thunk_FUN_00406e5c(&local_48);
  return;
}
