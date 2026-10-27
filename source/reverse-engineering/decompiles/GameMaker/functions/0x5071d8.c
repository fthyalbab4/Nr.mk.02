// rea decompile_all
// name: FUN_005071d8
// address: 0x5071d8
// body: available
// range: 0x5071d8-0x50735f inclusive
// range: 0x5073a4-0x5073eb inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5071fa (push 0x5073ec followed by fs-segment stack chaining); handler 0x5073ec lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x507239 (push 0x50739d followed by fs-segment stack chaining); handler 0x50739d lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x507256 (push 0x50737d followed by fs-segment stack chaining); handler 0x50737d lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x50728f (push 0x507360 followed by fs-segment stack chaining); handler 0x507360 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005071d8(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  HDC pHVar2;
  HIMAGELIST p_Var3;
  HBITMAP hbmMask;
  HBITMAP hbmImage;
  BOOL BVar4;
  undefined4 *in_FS_OFFSET;
  int iVar5;
  int iVar6;
  int iVar7;
  UINT UVar8;
  undefined4 uStack_54;
  undefined1 *puStack_50;
  undefined1 *puStack_4c;
  undefined4 uStack_48;
  undefined1 *puStack_44;
  undefined1 *puStack_40;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 local_1c;
  undefined4 local_18;
  int *local_14;
  int *local_10;
  int local_c;
  int local_8;

  puStack_28 = &stack0xfffffffc;
  local_1c = 0;
  local_18 = 0;
  puStack_2c = &LAB_005073ec;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  puVar1 = &stack0xfffffffc;
  local_8 = param_1;
  if (*(int *)(param_1 + 0x40) != 0) {
    puStack_34 = (undefined1 *)0x507214;
    FUN_00507eec(param_1,param_3);
    puStack_34 = (undefined1 *)0x507221;
    local_c = FUN_00506e50(local_8,param_3,param_4);
    if (local_c != -1) {
      puStack_38 = &LAB_0050739d;
      uStack_3c = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_3c;
      puStack_40 = (undefined1 *)0x507248;
      puStack_34 = &stack0xfffffffc;
      local_10 = (int *)FUN_00462144(&PTR_FUN_004587d4,1);
      puStack_44 = &LAB_0050737d;
      uStack_48 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_48;
      puStack_4c = (undefined1 *)0x507267;
      puStack_40 = &stack0xfffffffc;
      (**(code **)(*local_10 + 0x38))(local_10,*(undefined4 *)(local_8 + 0x34));
      puStack_4c = (undefined1 *)0x507275;
      (**(code **)(*local_10 + 0x44))(local_10,*(undefined4 *)(local_8 + 0x38));
      puStack_4c = (undefined1 *)0x507281;
      local_14 = (int *)FUN_00462144(&PTR_FUN_004587d4,1);
      puStack_50 = &LAB_00507360;
      uStack_54 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_54;
      puStack_4c = &stack0xfffffffc;
      FUN_00463c70(local_14,1);
      (**(code **)(*local_14 + 0x38))(local_14,*(undefined4 *)(local_8 + 0x34));
      (**(code **)(*local_14 + 0x44))(local_14,*(undefined4 *)(local_8 + 0x38));
      UVar8 = 0;
      iVar7 = 0;
      iVar6 = 0;
      FUN_00462a64(local_10);
      pHVar2 = (HDC)FUN_0045ce2c();
      iVar5 = local_c;
      p_Var3 = (HIMAGELIST)FUN_00506bcc(local_8);
      ImageList_Draw(p_Var3,iVar5,pHVar2,iVar6,iVar7,UVar8);
      UVar8 = 0x10;
      iVar7 = 0;
      iVar6 = 0;
      FUN_00462a64(local_14);
      pHVar2 = (HDC)FUN_0045ce2c();
      iVar5 = local_c;
      p_Var3 = (HIMAGELIST)FUN_00506bcc(local_8);
      ImageList_Draw(p_Var3,iVar5,pHVar2,iVar6,iVar7,UVar8);
      hbmMask = (HBITMAP)(**(code **)(*local_14 + 0x70))();
      hbmImage = (HBITMAP)(**(code **)(*local_10 + 0x70))();
      p_Var3 = (HIMAGELIST)FUN_00506bcc(local_8);
      BVar4 = ImageList_Replace(p_Var3,param_2,hbmImage,hbmMask);
      if (BVar4 == 0) {
        FUN_0040b75c(PTR_PTR_00781968,&local_18);
        FUN_0041beb8(&PTR_LAB_0042f068,1,local_18);
        FUN_00406618();
      }
      puVar1 = puStack_4c;
      *in_FS_OFFSET = uStack_54;
      puStack_4c = &LAB_00507367;
      puStack_50 = (undefined1 *)0x50735f;
      FUN_00405a7c(local_14,uStack_54,puVar1);
      return;
    }
    puStack_34 = (undefined1 *)0x5073b1;
    FUN_0040b75c(PTR_PTR_00781968,&local_1c);
    puStack_34 = (undefined1 *)0x5073c0;
    FUN_0041beb8(&PTR_LAB_0042f068,1,local_1c);
    puStack_34 = (undefined1 *)0x5073c5;
    FUN_00406618();
    puVar1 = puStack_28;
  }
  puStack_28 = puVar1;
  puStack_34 = (undefined1 *)0x5073d1;
  FUN_00405d08(local_8);
  puVar1 = puStack_28;
  *in_FS_OFFSET = uStack_30;
  puStack_28 = &LAB_005073f3;
  puStack_2c = (undefined1 *)0x5073eb;
  thunk_FUN_00406e80(&local_1c,2,puVar1);
  return;
}
