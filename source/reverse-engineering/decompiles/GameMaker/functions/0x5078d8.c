// rea decompile_all
// name: FUN_005078d8
// address: 0x5078d8
// body: available
// range: 0x5078d8-0x507a36 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x507916 (push 0x507a71 followed by fs-segment stack chaining); handler 0x507a71 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x507933 (push 0x507a54 followed by fs-segment stack chaining); handler 0x507a54 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x50796c (push 0x507a37 followed by fs-segment stack chaining); handler 0x507a37 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005078d8(int param_1,HIMAGELIST param_2,int param_3)

{
  undefined1 *puVar1;
  int iVar2;
  HDC pHVar3;
  int i;
  undefined4 *in_FS_OFFSET;
  int iVar4;
  int iVar5;
  UINT UVar6;
  undefined4 uStack_5c;
  undefined1 *puStack_58;
  undefined1 *puStack_54;
  undefined4 uStack_50;
  undefined1 *puStack_4c;
  undefined1 *puStack_48;
  undefined4 uStack_44;
  undefined1 *puStack_40;
  undefined1 *puStack_3c;
  undefined1 local_2c [16];
  int *local_1c;
  int *local_18;
  int *local_14;
  int *local_10;
  HIMAGELIST local_c;
  int local_8;

  puStack_3c = *(undefined1 **)(param_1 + 0x34);
  puStack_40 = local_2c;
  uStack_44 = 0x507903;
  local_c = param_2;
  local_8 = param_1;
  FUN_00438c38(0,0,*(undefined4 *)(param_1 + 0x38));
  puStack_3c = (undefined1 *)0x50790b;
  FUN_00508acc(local_8);
  puStack_40 = &LAB_00507a71;
  uStack_44 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_44;
  puStack_48 = (undefined1 *)0x507925;
  puStack_3c = &stack0xfffffffc;
  local_10 = (int *)FUN_00462144(&PTR_FUN_004587d4,1);
  puStack_4c = &LAB_00507a54;
  uStack_50 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_50;
  puStack_54 = (undefined1 *)0x507944;
  puStack_48 = &stack0xfffffffc;
  (**(code **)(*local_10 + 0x38))(local_10,*(undefined4 *)(local_8 + 0x34));
  puStack_54 = (undefined1 *)0x507952;
  (**(code **)(*local_10 + 0x44))(local_10,*(undefined4 *)(local_8 + 0x38));
  puStack_54 = (undefined1 *)0x50795e;
  local_14 = (int *)FUN_00462144(&PTR_FUN_004587d4,1);
  puStack_58 = &LAB_00507a37;
  uStack_5c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_5c;
  puStack_54 = &stack0xfffffffc;
  FUN_00463c70(local_14,1);
  (**(code **)(*local_14 + 0x38))(local_14,*(undefined4 *)(local_8 + 0x34));
  (**(code **)(*local_14 + 0x44))(local_14,*(undefined4 *)(local_8 + 0x38));
  iVar2 = ImageList_GetImageCount(local_c);
  if (-1 < iVar2 + -1) {
    i = 0;
    do {
      if ((param_3 == -1) || (i == param_3)) {
        local_18 = (int *)FUN_00462a64(local_10);
        (**(code **)(*local_18 + 0x4c))(local_18,local_2c);
        UVar6 = 0;
        iVar5 = 0;
        iVar4 = 0;
        pHVar3 = (HDC)FUN_0045ce2c(local_18);
        ImageList_Draw(local_c,i,pHVar3,iVar4,iVar5,UVar6);
        local_1c = (int *)FUN_00462a64(local_14);
        (**(code **)(*local_1c + 0x4c))(local_1c,local_2c);
        UVar6 = 0x10;
        iVar5 = 0;
        iVar4 = 0;
        pHVar3 = (HDC)FUN_0045ce2c(local_1c);
        ImageList_Draw(local_c,i,pHVar3,iVar4,iVar5,UVar6);
        FUN_00506d84(local_8,local_10,local_14);
      }
      i = i + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  puVar1 = puStack_54;
  *in_FS_OFFSET = uStack_5c;
  puStack_54 = &LAB_00507a3e;
  puStack_58 = (undefined1 *)0x507a36;
  FUN_00405a7c(local_14,uStack_5c,puVar1);
  return;
}
