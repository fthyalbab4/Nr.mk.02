// rea decompile_all
// name: FUN_005f1900
// address: 0x5f1900
// body: available
// range: 0x5f1900-0x5f1be3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5f1933 (push 0x5f1be4 followed by fs-segment stack chaining); handler 0x5f1be4 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005f1900(int *param_1,undefined4 param_2,int *param_3,char param_4,int param_5)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 *puVar6;
  int extraout_EDX;
  int extraout_EDX_00;
  int *in_FS_OFFSET;
  undefined1 **ppuVar7;
  int *piVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 *puStack_84;
  undefined1 *puStack_80;
  undefined1 *puStack_7c;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined1 *local_5a;
  undefined4 local_56;
  int *local_52;
  undefined4 local_4e;
  undefined4 local_4a;
  int local_46;
  undefined1 local_3e [4];
  undefined1 local_3a [4];
  undefined1 local_36 [20];
  int local_22;
  int local_1e;
  undefined2 local_1a;
  int local_18;
  undefined4 local_14;
  int *local_10;
  int local_c;
  undefined4 local_8;

  puStack_7c = &stack0xfffffffc;
  local_6c = 0;
  local_68 = 0;
  local_64 = 0;
  local_60 = 0;
  local_8 = 0;
  local_c = 0;
  puStack_80 = &LAB_005f1be4;
  puStack_84 = (undefined4 *)*in_FS_OFFSET;
  *in_FS_OFFSET = (int)&puStack_84;
  local_14 = param_2;
  local_10 = param_1;
  if ((*(int *)PTR_DAT_00781bfc < 6) &&
     ((*(int *)PTR_DAT_00781bfc != 5 || (*(int *)PTR_DAT_00782408 < 1)))) {
    uVar3 = FUN_00409a18(*param_3);
    local_18 = (**(code **)(*local_10 + 0xc0))
                         (local_10,local_14,param_3,param_4,&local_1a,&local_8,0,uVar3);
    if (local_18 < 0) {
      local_18 = thunk_FUN_00404478();
    }
    FUN_00407eb8(param_5 + 4,local_8);
    *(undefined2 *)(param_5 + 8) = local_1a;
  }
  else {
    puStack_7c = &stack0xfffffffc;
    iVar2 = FUN_00409a18(*param_3);
    if (iVar2 < 0) {
      thunk_FUN_00404478();
    }
    FUN_005ece3c();
    uVar3 = FUN_005ece3c();
    FUN_00409be0(&local_c,&DAT_004108f8,1,uVar3);
    local_22 = FUN_00409a18(*param_3);
    if (local_22 < 0) {
      local_22 = thunk_FUN_00404478();
    }
    iVar2 = 0;
    local_1e = *param_3;
    if ((local_1e == 0) || (*(int *)(local_1e + -4) == 0)) {
      iVar2 = thunk_FUN_00404478();
      local_1e = extraout_EDX;
    }
    local_1e = local_1e + iVar2;
    FUN_00404f08(&local_5a,0x1c,0);
    local_52 = &local_22;
    local_4e = 1;
    iVar2 = 0;
    local_4a = uVar3;
    if ((local_c == 0) || (local_46 = local_c, *(int *)(local_c + -4) == 0)) {
      iVar2 = thunk_FUN_00404478();
      local_46 = extraout_EDX_00;
    }
    local_46 = local_46 + iVar2;
    if (param_4 == '\0') {
      local_5a = local_3e;
      local_56 = 0x10;
      uVar10 = 0;
      uVar9 = 0;
      piVar8 = &local_18;
      ppuVar7 = &local_5a;
      uVar3 = local_14;
      uVar4 = (**(code **)PTR_DAT_00781770)();
      FUN_005f4444(local_10,uVar4);
      FUN_005ee144(local_10,local_3a,0,&local_60,uVar3,ppuVar7,piVar8,uVar9,uVar10);
      FUN_00407eb8(param_5 + 4,local_60);
      uVar1 = (**(code **)PTR_DAT_00781c98)();
      *(undefined2 *)(param_5 + 8) = uVar1;
    }
    else if (param_4 == '\x01') {
      local_5a = local_3e;
      local_56 = 0x1c;
      uVar10 = 0;
      uVar9 = 0;
      piVar8 = &local_18;
      ppuVar7 = &local_5a;
      uVar3 = local_14;
      uVar4 = (**(code **)PTR_DAT_00781770)();
      FUN_005f4444(local_10,uVar4);
      FUN_005ee144(local_10,local_36,1,&local_64,uVar3,ppuVar7,piVar8,uVar9,uVar10);
      FUN_00407eb8(param_5 + 4,local_64);
      uVar1 = (**(code **)PTR_DAT_00781c98)();
      *(undefined2 *)(param_5 + 8) = uVar1;
    }
    else {
      local_18 = 0;
      FUN_005f3db8(local_10);
    }
    iVar2 = 0;
    while (iVar2 = FUN_005ecdd0(&local_5a,iVar2), iVar2 != 0) {
      if (*(int *)(iVar2 + 8) == 0x13) {
        if (param_4 == '\0') {
          iVar5 = FUN_005ece30(iVar2);
          FUN_005ee144(local_10,iVar5,0,&local_68);
          FUN_00407eb8(param_5 + 0xc,local_68);
          *(undefined4 *)(param_5 + 0x18) = *(undefined4 *)(iVar5 + 4);
        }
        if (param_4 == '\x01') {
          uVar3 = 0x5f1b33;
          iVar5 = FUN_005ece30(iVar2);
          puStack_84 = &local_6c;
          FUN_005ee144(local_10,iVar5,1,uVar3);
          FUN_00407eb8(param_5 + 0xc,local_6c);
          *(undefined4 *)(param_5 + 0x18) = *(undefined4 *)(iVar5 + 0x10);
        }
      }
      else if (*(int *)(iVar2 + 8) == 0x15) {
        puVar6 = (undefined1 *)FUN_005ece30(iVar2);
        *(undefined1 *)(param_5 + 0x1c) = *puVar6;
      }
    }
  }
  puVar6 = puStack_7c;
  *in_FS_OFFSET = (int)puStack_84;
  puStack_7c = &LAB_005f1beb;
  puStack_80 = (undefined1 *)0x5f1bcd;
  thunk_FUN_00406e80(&local_6c,4,puVar6);
  puStack_80 = (undefined1 *)0x5f1bdb;
  FUN_00409ce0(&local_c,&DAT_004108f8);
  puStack_80 = (undefined1 *)0x5f1be3;
  thunk_FUN_00406e5c(&local_8);
  return;
}
