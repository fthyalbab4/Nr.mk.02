// rea decompile_all
// name: FUN_00620474
// address: 0x620474
// body: available
// range: 0x620474-0x6207af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6204a3 (push 0x6207b0 followed by fs-segment stack chaining); handler 0x6207b0 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00620474(undefined **param_1,undefined1 *param_2)

{
  longlong lVar1;
  undefined1 *puVar2;
  uint uVar3;
  undefined **ppuVar4;
  int iVar5;
  uint *in_FS_OFFSET;
  undefined4 local_7c;
  undefined4 local_78;
  undefined ***local_74;
  undefined4 local_70;
  undefined1 *local_6c;
  undefined4 local_68;
  undefined **local_64;
  undefined1 *local_60;
  undefined **local_5c;
  uint local_58;
  undefined ***local_54;
  undefined **local_50;
  undefined1 *local_4c;
  undefined4 local_48;
  undefined1 **local_44;
  undefined1 *local_40;
  undefined **ppuStack_3c;
  undefined **local_38;
  undefined1 *local_34;
  undefined **local_30;
  uint local_2c;
  undefined1 *local_28;
  undefined1 *local_24;
  undefined **local_14;
  int local_10;
  undefined4 local_c;
  undefined1 *local_8;

  local_24 = &stack0xfffffffc;
  local_14 = (undefined **)0xe;
  do {
    local_14 = (undefined **)((int)local_14 + -1);
  } while (local_14 != (undefined **)0x0);
  LOCK();
  UNLOCK();
  local_c = 0;
  local_28 = &LAB_006207b0;
  local_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = (uint)&local_2c;
  for (iVar5 = 0; (iVar5 < DAT_006886f0 && (*(char *)(DAT_0085b3c4 + 0x14 + iVar5 * 0x18) != '\0'));
      iVar5 = iVar5 + 1) {
  }
  local_8 = param_2;
  if (iVar5 == DAT_006886f0) {
    local_30 = (undefined **)(DAT_006886f0 + 1);
    local_34 = (undefined1 *)0x6204e6;
    FUN_00409dfc(&DAT_0085b3c4,&DAT_00620448,1);
    DAT_006886f0 = DAT_006886f0 + 1;
  }
  puVar2 = local_8;
  local_28 = (undefined1 *)0x1;
  local_24 = (undefined1 *)0x15;
  local_30 = (undefined **)0x620518;
  local_14 = param_1;
  FUN_0041636c(iVar5,&local_58);
  local_30 = (undefined **)0x620528;
  FUN_00408678(&local_54,&PTR_DAT_00620840,local_58);
  local_30 = &PTR_DAT_006208bc;
  local_34 = (undefined1 *)0x0;
  local_38 = local_14;
  ppuStack_3c = (undefined **)0x620544;
  FUN_004165b0(&local_60);
  local_34 = local_60;
  local_38 = &PTR_DAT_00620940;
  ppuStack_3c = (undefined **)0x0;
  local_40 = puVar2;
  local_44 = (undefined1 **)0x62055b;
  FUN_004165b0(&local_64);
  ppuStack_3c = local_64;
  local_40 = (undefined1 *)0x62056b;
  FUN_0040875c(&local_5c,4);
  local_40 = local_28;
  local_44 = &local_24;
  local_48 = 0;
  local_4c = &stack0xffffffe4;
  local_50 = (undefined **)&stack0xffffffe8;
  local_54 = &local_14;
  local_58 = *(uint *)PTR_DAT_00689570;
  local_5c = (undefined **)0x62059c;
  uVar3 = (**(code **)PTR_DAT_00688fd0)();
  if ((uVar3 & 0x80000000) == 0) {
    local_10 = -1;
    local_5c = (undefined **)0x6205d0;
    FUN_0040b268(DAT_0085b3c4 + iVar5 * 0x18);
    lVar1 = (longlong)((int)param_1 * 4) * (longlong)(int)local_8;
    local_34 = (undefined1 *)lVar1;
    local_5c = (undefined **)0x6205e7;
    ppuVar4 = (undefined **)FUN_00404324(local_34 + 0x12,(int)((ulonglong)lVar1 >> 0x20));
    local_5c = (undefined **)0x6205fb;
    local_30 = ppuVar4;
    FUN_00404f38(ppuVar4,0x12,0);
    *(short *)(ppuVar4 + 2) = (short)param_1;
    *(undefined2 *)((int)ppuVar4 + 10) = local_8._0_2_;
    *(short *)(ppuVar4 + 3) = (short)param_1;
    *(undefined2 *)((int)ppuVar4 + 0xe) = local_8._0_2_;
    *(undefined1 *)(ppuVar4 + 4) = 0x20;
    *(undefined1 *)((int)ppuVar4 + 0x11) = 0x20;
    *(undefined1 *)((int)ppuVar4 + 2) = 2;
    local_5c = (undefined **)0x62062e;
    FUN_00404514(local_c,(int)local_30 + 0x12,local_34);
    local_5c = (undefined **)0x62063d;
    FUN_00404f38(&local_50,0x1c,0);
    local_48 = 0x20;
    local_4c = local_8;
    local_44 = (undefined1 **)0x1;
    local_40 = (undefined1 *)0x15;
    local_38 = (undefined **)0x2;
    local_5c = &PTR_DAT_00620954;
    local_60 = (undefined1 *)0x0;
    local_64 = local_14;
    local_68 = 0x620676;
    local_50 = param_1;
    FUN_004165b0(&local_6c);
    local_60 = local_6c;
    local_64 = &PTR_DAT_00620940;
    local_68 = 0;
    local_6c = puVar2;
    local_70 = 0x62068d;
    FUN_004165b0(&local_70);
    local_68 = local_70;
    local_6c = (undefined1 *)0x62069d;
    FUN_0040875c(&local_68,4);
    local_6c = (undefined1 *)0x6206b6;
    local_6c = (undefined1 *)FUN_0040b268(DAT_0085b3c4 + iVar5 * 0x18);
    local_70 = 0;
    local_74 = &local_50;
    local_78 = 0;
    local_7c = 1;
    local_2c = (**(code **)PTR_DAT_00689208)();
    local_5c = (undefined **)0x6206fa;
    FUN_00404340(ppuVar4);
    if ((local_2c & 0x80000000) == 0) {
      *(undefined1 *)(DAT_0085b3c4 + 0x14 + iVar5 * 0x18) = 1;
      *(undefined ***)(DAT_0085b3c4 + 4 + iVar5 * 0x18) = param_1;
      *(undefined1 **)(DAT_0085b3c4 + 8 + iVar5 * 0x18) = local_8;
      *(undefined ***)(DAT_0085b3c4 + 0xc + iVar5 * 0x18) = local_14;
      *(undefined1 **)(DAT_0085b3c4 + 0x10 + iVar5 * 0x18) = puVar2;
      local_10 = iVar5;
    }
    else {
      local_5c = (undefined **)0x620765;
      FUN_005315a4(local_2c,&local_7c);
      local_5c = (undefined **)0x620775;
      FUN_0040778c(&local_78,"GR_Texture_Create_Empty :: D3DXError = ",local_7c);
      local_5c = (undefined **)0x620780;
      FUN_004083c0(&local_74,local_78);
      local_5c = (undefined **)0x620788;
      FUN_00561704(local_74);
    }
  }
  else {
    local_10 = -1;
  }
  ppuVar4 = local_50;
  *in_FS_OFFSET = local_58;
  local_50 = (undefined **)&LAB_006207b7;
  local_54 = (undefined ***)0x6207a2;
  FUN_004072fc(&local_7c,2,ppuVar4);
  local_54 = (undefined ***)0x6207af;
  thunk_FUN_004072fc(&local_74,9);
  return;
}
