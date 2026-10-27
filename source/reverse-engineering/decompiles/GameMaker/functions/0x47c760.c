// rea decompile_all
// name: FUN_0047c760
// address: 0x47c760
// body: available
// range: 0x47c760-0x47cb49 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x47c780 (push 0x47cb4a followed by fs-segment stack chaining); handler 0x47cb4a lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0047c760(int *param_1)

{
  undefined1 *puVar1;
  char cVar2;
  LPCWSTR pWVar3;
  HDC pHVar4;
  undefined4 uVar5;
  LONG LVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  undefined4 *in_FS_OFFSET;
  byte bVar10;
  int aiStackY_1870 [1533];
  HDC local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  undefined1 local_68 [12];
  undefined1 local_5c [4];
  int local_58;
  tagRECT local_4c;
  LPRECT ptVar11;
  LPSIZE psizl;
  HRGN hrgn;
  HDC local_28;
  undefined4 uStack_24;
  undefined1 *local_20;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;

  bVar10 = 0;
  local_20 = &stack0xfffffffc;
  local_10 = 0x13;
  do {
    local_8 = 0;
    local_10 = local_10 + -1;
  } while (local_10 != 0);
  uStack_24 = &LAB_0047cb4a;
  local_28 = (HDC)*in_FS_OFFSET;
  *in_FS_OFFSET = &local_28;
  piVar9 = (int *)param_1[0x9c];
  FUN_0045cd20(piVar9,param_1[0x19]);
  cVar2 = FUN_0050513c(param_1);
  if (cVar2 == '\0') {
    uVar7 = FUN_0045bea4(piVar9,&LAB_0047cb64);
    iVar8 = (int)uVar7 >> 1;
    if (iVar8 < 0) {
      iVar8 = iVar8 + (uint)((uVar7 & 1) != 0);
    }
    FUN_00438c38(0,iVar8 + -1,param_1[0x12]);
    if (*(char *)((int)param_1 + 0x1e9) == '\0') {
      FUN_0045bc24(piVar9[0x12],0xff000006);
    }
    else {
      FUN_0045bc24(piVar9[0x12],0xff000014);
      (**(code **)(*piVar9 + 0x54))(piVar9,&stack0xffffffc4);
      OffsetRect((LPRECT)&stack0xffffffc4,-1,-1);
      FUN_0045bc24(piVar9[0x12],0xff000010);
    }
    (**(code **)(*piVar9 + 0x54))(piVar9,&stack0xffffffc4);
    FUN_004ee6a0(param_1,aiStackY_1870 + 0x5fb);
    if (aiStackY_1870[0x5fb] != 0) {
      cVar2 = FUN_00405d08(param_1);
      if (cVar2 == '\0') {
        FUN_00438c38(8,0,0);
      }
      else {
        FUN_004ee6a0(param_1,aiStackY_1870 + 0x5f6);
        FUN_0045bec4(param_1[0x9c],aiStackY_1870[0x5f6]);
        FUN_00438c38(0xfffffff8,0,0);
        *(int *)(&stack0xffffffc8 + (uint)bVar10 * -8) = aiStackY_1870[(uint)bVar10 * -2 + 0x5f8];
        *(int *)(&stack0xffffffcc + (uint)bVar10 * -8 + (uint)bVar10 * -8) =
             aiStackY_1870[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x5f9];
        *(int *)((int)(&stack0xffffffcc + (uint)bVar10 * -8 + (uint)bVar10 * -8) +
                ((uint)bVar10 * -2 + 1) * 4) =
             (aiStackY_1870 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x5f9)[(uint)bVar10 * -2 + 1];
      }
      uVar7 = FUN_004f1454(param_1,0x20);
      FUN_0045ce2c(piVar9);
      FUN_004ee6a0(param_1,&local_c);
      FUN_004ee6a0(param_1,aiStackY_1870 + 0x5f5);
      local_74 = aiStackY_1870[0x5f5];
      iVar8 = 0;
      if (aiStackY_1870[0x5f5] != 0) {
        iVar8 = *(int *)(aiStackY_1870[0x5f5] + -4);
      }
      pHVar4 = (HDC)(uVar7 | 0x400);
      ptVar11 = (LPRECT)&stack0xffffffc4;
      pWVar3 = (LPCWSTR)FUN_00407f44(local_c);
      local_4c.bottom = 0x47ca9d;
      DrawTextW(pHVar4,pWVar3,iVar8,ptVar11,(UINT)pHVar4);
      FUN_0045bc24(piVar9[0x12],param_1[0x1b]);
      pHVar4 = (HDC)FUN_0045ce2c(piVar9);
      FUN_004ee6a0(param_1,&local_10);
      FUN_004ee6a0(param_1,aiStackY_1870 + 0x5f4);
      local_74 = aiStackY_1870[0x5f4];
      iVar8 = 0;
      if (aiStackY_1870[0x5f4] != 0) {
        iVar8 = *(int *)(aiStackY_1870[0x5f4] + -4);
      }
      ptVar11 = (LPRECT)&stack0xffffffc4;
      pWVar3 = (LPCWSTR)FUN_00407f44(local_10);
      local_4c.bottom = 0x47caf5;
      DrawTextW(pHVar4,pWVar3,iVar8,ptVar11,uVar7);
    }
  }
  else {
    FUN_004ee6a0(param_1,&local_6c);
    if (local_6c == 0) {
      FUN_00438c38(0,0,0);
    }
    else {
      local_28 = (HDC)FUN_0045ce2c(piVar9);
      FUN_004ee6a0(param_1,&local_8);
      FUN_004ee6a0(param_1,&local_70);
      local_74 = local_70;
      iVar8 = 0;
      if (local_70 != 0) {
        iVar8 = *(int *)(local_70 + -4);
      }
      psizl = (LPSIZE)&local_20;
      pWVar3 = (LPCWSTR)FUN_00407f44(local_8);
      GetTextExtentPoint32W(local_28,pWVar3,iVar8,psizl);
      FUN_00438c38(0,0,local_20);
      cVar2 = FUN_00405d08(param_1);
      if (cVar2 == '\0') {
        OffsetRect(&local_4c,8,0);
      }
      else {
        OffsetRect(&local_4c,(param_1[0x12] + -8) - local_4c.right,0);
      }
    }
    (**(code **)(*param_1 + 0x54))(param_1,local_5c);
    local_58 = local_4c.bottom - local_4c.top >> 1;
    if (local_58 < 0) {
      local_58 = local_58 + (uint)((local_4c.bottom - local_4c.top & 1U) != 0);
    }
    LVar6 = local_4c.bottom;
    pHVar4 = (HDC)FUN_0045ce2c(piVar9);
    local_4c.bottom = 0x47c88e;
    ExcludeClipRect(pHVar4,local_4c.left,local_4c.top,local_4c.right,LVar6);
    cVar2 = (**(code **)(*param_1 + 0x5c))();
    if (cVar2 == '\0') {
      uStack_24._3_1_ = 0x1c;
    }
    else {
      uStack_24._3_1_ = 0x1b;
    }
    uVar5 = FUN_00503a6c();
    FUN_00503f3c(uVar5,uStack_24._3_1_,local_68);
    LVar6 = FUN_0045ce2c(piVar9);
    uVar5 = FUN_00503a6c();
    FUN_00503d0c(uVar5,LVar6,local_68);
    hrgn = (HRGN)0x0;
    pHVar4 = (HDC)FUN_0045ce2c(piVar9);
    SelectClipRgn(pHVar4,hrgn);
    FUN_004ee6a0(param_1,&local_78);
    if (local_78 != 0) {
      FUN_004ee6a0(param_1,aiStackY_1870 + 0x5fc);
      FUN_00408144(&local_7c,aiStackY_1870[0x5fc]);
      local_28 = local_7c;
      LVar6 = FUN_0045ce2c(piVar9);
      uVar5 = FUN_00503a6c();
      FUN_00503ecc(uVar5,LVar6,local_68);
    }
  }
  puVar1 = local_20;
  *in_FS_OFFSET = local_28;
  local_20 = &LAB_0047cb51;
  uStack_24 = (undefined1 *)0x47cb12;
  thunk_FUN_00406e80(aiStackY_1870 + 0x5f4,3,puVar1);
  uStack_24 = (undefined1 *)0x47cb1f;
  thunk_FUN_00406e80(aiStackY_1870 + 0x5fb,2);
  uStack_24 = (undefined1 *)0x47cb27;
  FUN_00407a78(&local_7c);
  uStack_24 = (undefined1 *)0x47cb2f;
  thunk_FUN_00406e5c(&local_78);
  uStack_24 = (undefined1 *)0x47cb3c;
  thunk_FUN_00406e80(&local_70,2);
  uStack_24 = (undefined1 *)0x47cb49;
  thunk_FUN_00406e80(&local_10,3);
  return;
}
