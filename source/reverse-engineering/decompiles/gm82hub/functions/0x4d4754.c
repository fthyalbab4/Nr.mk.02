// rea decompile_all
// name: FUN_004d4754
// address: 0x4d4754
// body: available
// range: 0x4d4754-0x4d48b2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4d4792 (push 0x4d48ed followed by fs-segment stack chaining); handler 0x4d48ed lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4d47af (push 0x4d48d0 followed by fs-segment stack chaining); handler 0x4d48d0 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4d47e8 (push 0x4d48b3 followed by fs-segment stack chaining); handler 0x4d48b3 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004d4754(int param_1,HIMAGELIST param_2,int param_3)

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
  uStack_44 = 0x4d477f;
  local_c = param_2;
  local_8 = param_1;
  FUN_00436ad0(0,0,*(undefined4 *)(param_1 + 0x38));
  puStack_3c = (undefined1 *)0x4d4787;
  FUN_004d5948(local_8);
  puStack_40 = &LAB_004d48ed;
  uStack_44 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_44;
  puStack_48 = (undefined1 *)0x4d47a1;
  puStack_3c = &stack0xfffffffc;
  local_10 = (int *)FUN_00462804(&PTR_FUN_00458e94,1);
  puStack_4c = &LAB_004d48d0;
  uStack_50 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_50;
  puStack_54 = (undefined1 *)0x4d47c0;
  puStack_48 = &stack0xfffffffc;
  (**(code **)(*local_10 + 0x38))(local_10,*(undefined4 *)(local_8 + 0x34));
  puStack_54 = (undefined1 *)0x4d47ce;
  (**(code **)(*local_10 + 0x44))(local_10,*(undefined4 *)(local_8 + 0x38));
  puStack_54 = (undefined1 *)0x4d47da;
  local_14 = (int *)FUN_00462804(&PTR_FUN_00458e94,1);
  puStack_58 = &LAB_004d48b3;
  uStack_5c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_5c;
  puStack_54 = &stack0xfffffffc;
  FUN_00464330(local_14,1);
  (**(code **)(*local_14 + 0x38))(local_14,*(undefined4 *)(local_8 + 0x34));
  (**(code **)(*local_14 + 0x44))(local_14,*(undefined4 *)(local_8 + 0x38));
  iVar2 = ImageList_GetImageCount(local_c);
  if (-1 < iVar2 + -1) {
    i = 0;
    do {
      if ((param_3 == -1) || (i == param_3)) {
        local_18 = (int *)FUN_00463124(local_10);
        (**(code **)(*local_18 + 0x4c))(local_18,local_2c);
        UVar6 = 0;
        iVar5 = 0;
        iVar4 = 0;
        pHVar3 = (HDC)FUN_0045d4ec(local_18);
        ImageList_Draw(local_c,i,pHVar3,iVar4,iVar5,UVar6);
        local_1c = (int *)FUN_00463124(local_14);
        (**(code **)(*local_1c + 0x4c))(local_1c,local_2c);
        UVar6 = 0x10;
        iVar5 = 0;
        iVar4 = 0;
        pHVar3 = (HDC)FUN_0045d4ec(local_1c);
        ImageList_Draw(local_c,i,pHVar3,iVar4,iVar5,UVar6);
        FUN_004d3c00(local_8,local_10,local_14);
      }
      i = i + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  puVar1 = puStack_54;
  *in_FS_OFFSET = uStack_5c;
  puStack_54 = &LAB_004d48ba;
  puStack_58 = (undefined1 *)0x4d48b2;
  FUN_00405fdc(local_14,uStack_5c,puVar1);
  return;
}
