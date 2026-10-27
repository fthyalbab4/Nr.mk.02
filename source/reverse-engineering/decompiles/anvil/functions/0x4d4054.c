// rea decompile_all
// name: FUN_004d4054
// address: 0x4d4054
// body: available
// range: 0x4d4054-0x4d41db inclusive
// range: 0x4d4220-0x4d4267 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4d4076 (push 0x4d4268 followed by fs-segment stack chaining); handler 0x4d4268 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4d40b5 (push 0x4d4219 followed by fs-segment stack chaining); handler 0x4d4219 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4d40d2 (push 0x4d41f9 followed by fs-segment stack chaining); handler 0x4d41f9 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4d410b (push 0x4d41dc followed by fs-segment stack chaining); handler 0x4d41dc lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004d4054(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

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
  puStack_2c = &LAB_004d4268;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  puVar1 = &stack0xfffffffc;
  local_8 = param_1;
  if (*(int *)(param_1 + 0x40) != 0) {
    puStack_34 = (undefined1 *)0x4d4090;
    FUN_004d4d68(param_1,param_3);
    puStack_34 = (undefined1 *)0x4d409d;
    local_c = FUN_004d3ccc(local_8,param_3,param_4);
    if (local_c != -1) {
      puStack_38 = &LAB_004d4219;
      uStack_3c = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_3c;
      puStack_40 = (undefined1 *)0x4d40c4;
      puStack_34 = &stack0xfffffffc;
      local_10 = (int *)FUN_00462804(&PTR_FUN_00458e94,1);
      puStack_44 = &LAB_004d41f9;
      uStack_48 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_48;
      puStack_4c = (undefined1 *)0x4d40e3;
      puStack_40 = &stack0xfffffffc;
      (**(code **)(*local_10 + 0x38))(local_10,*(undefined4 *)(local_8 + 0x34));
      puStack_4c = (undefined1 *)0x4d40f1;
      (**(code **)(*local_10 + 0x44))(local_10,*(undefined4 *)(local_8 + 0x38));
      puStack_4c = (undefined1 *)0x4d40fd;
      local_14 = (int *)FUN_00462804(&PTR_FUN_00458e94,1);
      puStack_50 = &LAB_004d41dc;
      uStack_54 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_54;
      puStack_4c = &stack0xfffffffc;
      FUN_00464330(local_14,1);
      (**(code **)(*local_14 + 0x38))(local_14,*(undefined4 *)(local_8 + 0x34));
      (**(code **)(*local_14 + 0x44))(local_14,*(undefined4 *)(local_8 + 0x38));
      UVar8 = 0;
      iVar7 = 0;
      iVar6 = 0;
      FUN_00463124(local_10);
      pHVar2 = (HDC)FUN_0045d4ec();
      iVar5 = local_c;
      p_Var3 = (HIMAGELIST)FUN_004d3a48(local_8);
      ImageList_Draw(p_Var3,iVar5,pHVar2,iVar6,iVar7,UVar8);
      UVar8 = 0x10;
      iVar7 = 0;
      iVar6 = 0;
      FUN_00463124(local_14);
      pHVar2 = (HDC)FUN_0045d4ec();
      iVar5 = local_c;
      p_Var3 = (HIMAGELIST)FUN_004d3a48(local_8);
      ImageList_Draw(p_Var3,iVar5,pHVar2,iVar6,iVar7,UVar8);
      hbmMask = (HBITMAP)(**(code **)(*local_14 + 0x70))();
      hbmImage = (HBITMAP)(**(code **)(*local_10 + 0x70))();
      p_Var3 = (HIMAGELIST)FUN_004d3a48(local_8);
      BVar4 = ImageList_Replace(p_Var3,param_2,hbmImage,hbmMask);
      if (BVar4 == 0) {
        FUN_0040b9d0(PTR_LAB_00688b14,&local_18);
        FUN_0041bd4c(&LAB_0042dc24,1,local_18);
        FUN_00406ab4();
      }
      puVar1 = puStack_4c;
      *in_FS_OFFSET = uStack_54;
      puStack_4c = &LAB_004d41e3;
      puStack_50 = (undefined1 *)0x4d41db;
      FUN_00405fdc(local_14,uStack_54,puVar1);
      return;
    }
    puStack_34 = (undefined1 *)0x4d422d;
    FUN_0040b9d0(PTR_LAB_00688b14,&local_1c);
    puStack_34 = (undefined1 *)0x4d423c;
    FUN_0041bd4c(&LAB_0042dc24,1,local_1c);
    puStack_34 = (undefined1 *)0x4d4241;
    FUN_00406ab4();
    puVar1 = puStack_28;
  }
  puStack_28 = puVar1;
  puStack_34 = (undefined1 *)0x4d424d;
  FUN_00406268(local_8);
  puVar1 = puStack_28;
  *in_FS_OFFSET = uStack_30;
  puStack_28 = &LAB_004d426f;
  puStack_2c = (undefined1 *)0x4d4267;
  thunk_FUN_004072fc(&local_1c,2,puVar1);
  return;
}
