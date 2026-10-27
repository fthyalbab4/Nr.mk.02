// rea decompile_all
// name: FUN_00678794
// address: 0x678794
// body: available
// range: 0x678794-0x678ac6 inclusive
// range: 0x678aeb-0x678af1 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x67881e (push 0x678ae4 followed by fs-segment stack chaining); handler 0x678ae4 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x67883b (push 0x678ac7 followed by fs-segment stack chaining); handler 0x678ac7 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00678794(int *param_1,int *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  HDC pHVar7;
  HIMAGELIST himl;
  int *piVar8;
  uint uFlags;
  LPARAM lData;
  HBRUSH hbrFore;
  undefined4 *in_FS_OFFSET;
  DRAWSTATEPROC qfnCallBack;
  int iVar9;
  WPARAM wData;
  int iVar10;
  int dx;
  int dy;
  undefined1 *puVar11;
  COLORREF rgbBk;
  COLORREF rgbFg;
  undefined1 *puVar12;
  UINT fStyle;
  undefined4 uStack_70;
  undefined1 *puStack_6c;
  undefined1 *puStack_68;
  undefined4 uStack_64;
  undefined1 *puStack_60;
  undefined1 *puStack_5c;
  undefined4 uStack_58;
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined4 local_28;
  undefined4 local_24;
  byte local_1d;
  int local_1c;
  int local_18;
  int *local_14;
  int *local_10;
  int local_c;
  int local_8;

  local_c = *param_2;
  local_8 = param_2[1];
  uStack_58 = 0x6787ad;
  cVar1 = FUN_00679d50(param_1);
  if (cVar1 != '\0') {
    uStack_58 = 0x6787bc;
    uVar2 = (**(code **)(*param_1 + 0x4c))();
    uStack_58 = 0x6787c7;
    cVar1 = FUN_00405c98(uVar2,&PTR_FUN_00509914);
    if (cVar1 != '\0') {
      uStack_58 = *(undefined4 *)(param_1[0x6d] + 0x5c);
      puStack_5c = (undefined1 *)0x6787e8;
      iVar3 = (**(code **)(*param_1 + 0xd8))(param_1,1,&local_1d);
      local_28 = 0x20;
      local_24 = 0x20;
      local_1c = 0x20;
      local_18 = 0x20;
      puStack_5c = (undefined1 *)0x678810;
      local_14 = (int *)FUN_00462144(&PTR_FUN_004587d4,1);
      puStack_60 = &LAB_00678ae4;
      uStack_64 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_64;
      puStack_68 = (undefined1 *)0x67882d;
      puStack_5c = &stack0xfffffffc;
      local_10 = (int *)FUN_00462144(&PTR_FUN_004587d4,1);
      puStack_6c = &LAB_00678ac7;
      uStack_70 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_70;
      puStack_68 = &stack0xfffffffc;
      (**(code **)(*local_14 + 0x44))(local_14,*(undefined4 *)(iVar3 + 0x38));
      (**(code **)(*local_14 + 0x38))(local_14,*(undefined4 *)(iVar3 + 0x34));
      iVar4 = FUN_00462a64(local_14);
      FUN_0045bc24(*(undefined4 *)(iVar4 + 0x48),0xffffff);
      cVar1 = (**(code **)(*param_1 + 0x5c))();
      if (cVar1 == '\0') {
        piVar5 = (int *)FUN_00462a64(local_10);
        (**(code **)(*piVar5 + 0x10))(piVar5,local_38);
        puVar12 = local_38;
        piVar5 = (int *)FUN_00462a64(local_14);
        (**(code **)(*piVar5 + 0x4c))(piVar5,puVar12);
      }
      else {
        piVar5 = (int *)FUN_00462a64(local_14);
        (**(code **)(*piVar5 + 0x10))(piVar5,local_38);
        puVar12 = local_38;
        uVar2 = (**(code **)(*local_14 + 0x24))();
        puVar11 = local_48;
        uVar6 = (**(code **)(*local_14 + 0x30))();
        FUN_0040c114(0,0,uVar6,puVar11,uVar2);
        puVar11 = local_48;
        uVar2 = FUN_00462a64(local_14);
        FUN_0045c400(uVar2,puVar11,param_1[0x6a],puVar12);
      }
      fStyle = 1;
      rgbFg = 0xffffffff;
      rgbBk = 0xffffffff;
      dy = 0;
      dx = 0;
      iVar10 = 0;
      iVar9 = 0;
      FUN_00462a64(local_14);
      pHVar7 = (HDC)FUN_0045ce2c();
      iVar4 = *(int *)(param_1[0x6d] + 0x5c);
      himl = (HIMAGELIST)FUN_00506bcc(iVar3);
      ImageList_DrawEx(himl,iVar4,pHVar7,iVar9,iVar10,dx,dy,rgbBk,rgbFg,fStyle);
      iVar3 = local_1c;
      (**(code **)(*local_10 + 0x44))(local_10,local_1c);
      (**(code **)(*local_10 + 0x38))(local_10,local_18);
      FUN_0040c114(0,0,iVar3,local_38,local_18);
      puVar12 = local_38;
      piVar5 = (int *)FUN_00462a64(local_10);
      (**(code **)(*piVar5 + 0x80))(piVar5,puVar12,local_14);
      FUN_00463f28(local_10,0xffffff);
      (**(code **)(*local_10 + 0x40))(local_10,1);
      (**(code **)(*local_14 + 0x44))(local_14,iVar3);
      (**(code **)(*local_14 + 0x38))(local_14,local_18);
      iVar3 = FUN_00462a64(local_14);
      FUN_0045bc24(*(undefined4 *)(iVar3 + 0x48),
                   *(undefined4 *)(*(int *)(*(int *)(param_1[0x6a] + 0x48) + 0x10) + 0x14));
      piVar5 = (int *)FUN_00462a64(local_14);
      (**(code **)(*piVar5 + 0x10))(piVar5,local_38);
      puVar12 = local_38;
      piVar5 = (int *)FUN_00462a64(local_14);
      (**(code **)(*piVar5 + 0x4c))(piVar5,puVar12);
      piVar5 = local_10;
      piVar8 = (int *)FUN_00462a64(local_14);
      (**(code **)(*piVar8 + 0x3c))(piVar8,0,0);
      cVar1 = (**(code **)(*param_1 + 0x5c))();
      if ((cVar1 == '\0') && ((*(byte *)(param_1 + 7) & 0x10) == 0)) {
        uFlags = *(uint *)(&DAT_0077f39c + (uint)local_1d * 4) | 4;
        iVar10 = 0;
        iVar9 = 0;
        wData = 0;
        iVar3 = local_c;
        iVar4 = local_8;
        lData = (**(code **)(*local_10 + 0x70))();
        qfnCallBack = (DRAWSTATEPROC)0x0;
        hbrFore = (HBRUSH)FUN_0045bc84(*(undefined4 *)(param_1[0x6a] + 0x48));
        pHVar7 = (HDC)FUN_0045ce2c(param_1[0x6a]);
        DrawStateW(pHVar7,hbrFore,qfnCallBack,lData,wData,iVar3,iVar4,iVar9,iVar10,uFlags);
      }
      else {
        FUN_0067234c(param_1[0x6d]);
        cVar1 = FUN_0067240c();
        if (cVar1 == '\0') {
          FUN_0040c114(local_c,local_8,local_c + local_1c,local_38,local_8 + local_18);
          (**(code **)(*(int *)param_1[0x6a] + 0x80))((int *)param_1[0x6a],local_38,local_14);
        }
        else {
          FUN_0040c114(local_c,local_8,local_c + local_1c,local_38,local_8 + local_18);
          (**(code **)(*(int *)param_1[0x6a] + 0x80))((int *)param_1[0x6a],local_38,local_10);
        }
      }
      puVar12 = puStack_6c;
      *in_FS_OFFSET = piVar5;
      puStack_6c = &LAB_00678ace;
      uStack_70 = 0x678ac6;
      FUN_00405a7c(local_10,piVar5,puVar12);
      return;
    }
  }
  return;
}
