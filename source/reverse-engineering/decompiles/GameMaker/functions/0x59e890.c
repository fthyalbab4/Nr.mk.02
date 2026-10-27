// rea decompile_all
// name: FUN_0059e890
// address: 0x59e890
// body: available
// range: 0x59e890-0x59ed9b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x59e8c9 (push 0x59ed9c followed by fs-segment stack chaining); handler 0x59ed9c lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0059e890(int param_1,byte param_2,char param_3,int *param_4,int param_5,byte param_6)

{
  undefined *puVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 *in_FS_OFFSET;
  undefined *puStack_78;
  undefined1 *puStack_74;
  undefined *puStack_70;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_50;
  undefined4 local_4c;
  undefined1 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 *local_34;
  int local_30;
  int *local_2c;
  undefined4 *local_28;
  int *local_24;
  int *local_20;
  int *local_1c;
  int local_18;
  byte local_11;
  int local_10;
  undefined4 local_c;
  undefined1 *local_8;

  puStack_70 = &stack0xfffffffc;
  local_44 = 0;
  local_58 = 0;
  local_5c = 0;
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_34 = (undefined1 *)0x0;
  local_8 = (undefined1 *)0x0;
  local_c = 0;
  puStack_74 = &LAB_0059ed9c;
  puStack_78 = (undefined *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_78;
  local_11 = param_2;
  local_10 = param_1;
  FUN_00407eb8(param_4,0);
  if (local_11 == 0) {
    local_11 = 0x1f;
  }
  local_1c = (int *)FUN_0043f190(&PTR_FUN_00432364,1);
  FUN_0043f0cc(local_1c,(byte)(param_3 - 1U) < 2);
  local_20 = (int *)FUN_0043f190(&PTR_FUN_00432364,1);
  if ((param_3 == '\x01') || (param_3 == '\x03')) {
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
  }
  FUN_0043f0cc(local_20,uVar4);
  local_24 = (int *)FUN_0043f190(&PTR_FUN_00432364,1);
  if ((param_3 == '\x01') || (param_3 == '\x03')) {
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
  }
  FUN_0043f0cc(local_24,uVar4);
  FUN_00407f0c(&local_c,&DAT_0059edc0);
  if ((param_6 & 4) != 0) {
    FUN_004082dc(&local_c,&DAT_0059edc0);
  }
  if ((param_6 & 1) == 0) {
    iVar5 = *(int *)(*(int *)(local_10 + 8) + 8);
    if (-1 < iVar5 + -1) {
      iVar6 = 0;
      do {
        local_28 = (undefined4 *)FUN_0043b048(*(undefined4 *)(local_10 + 8),iVar6);
        if (((param_5 == 0) || (*(int *)local_28[3] == param_5)) &&
           ((*(byte *)(local_28 + 2) & local_11) != 0)) {
          FUN_00407f0c(&local_8,local_28[1]);
          if (local_8 == (undefined1 *)0x0) {
            FUN_00407f0c(&local_8,*(undefined4 *)(local_28[3] + 4));
          }
          FUN_0040839c(&local_38,&DAT_0059edd4,*local_28);
          uVar4 = FUN_00417ba8(local_38);
          (**(code **)(*local_1c + 0x3c))(local_1c,local_8,uVar4);
          if ((param_6 & 2) != 0) {
            (**(code **)(*local_24 + 0x38))(local_24,*local_28);
          }
        }
        iVar6 = iVar6 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  else {
    iVar5 = *(int *)(*(int *)(local_10 + 4) + 8);
    if (-1 < iVar5 + -1) {
      iVar6 = 0;
      do {
        local_2c = (int *)FUN_0043b048(*(undefined4 *)(local_10 + 4),iVar6);
        if ((param_5 == 0) || (*local_2c == param_5)) {
          (**(code **)(*local_20 + 0x44))();
          iVar2 = *(int *)(*(int *)(local_10 + 8) + 8);
          if (-1 < iVar2 + -1) {
            local_18 = 0;
            local_30 = iVar2;
            do {
              local_28 = (undefined4 *)FUN_0043b048(*(undefined4 *)(local_10 + 8),local_18);
              if (((int *)local_28[3] == local_2c) && ((*(byte *)(local_28 + 2) & local_11) != 0)) {
                (**(code **)(*local_20 + 0x38))(local_20,*local_28);
              }
              local_18 = local_18 + 1;
              local_30 = local_30 + -1;
            } while (local_30 != 0);
          }
          if ((param_6 & 2) != 0) {
            (**(code **)(*local_24 + 0x40))(local_24,local_20);
          }
          FUN_00407f0c(&local_8,0);
          iVar2 = (**(code **)(*local_20 + 0x14))();
          if (-1 < iVar2 + -1) {
            local_18 = 0;
            local_30 = iVar2;
            do {
              (**(code **)(*local_20 + 0xc))(local_20,local_18,&local_34,&DAT_0059edd4,local_8);
              puStack_74 = local_34;
              puStack_78 = &DAT_0059ede8;
              FUN_00408480(&local_8,4);
              local_18 = local_18 + 1;
              local_30 = local_30 + -1;
            } while (local_30 != 0);
          }
          puVar3 = local_8;
          if ((local_8 != (undefined1 *)0x0) && (*(short *)(local_8 + -10) != 2)) {
            puVar3 = (undefined1 *)FUN_00407048(&local_8,local_8);
          }
          iVar2 = 0;
          if (puVar3 != (undefined1 *)0x0) {
            iVar2 = *(int *)(puVar3 + -4);
          }
          FUN_00408244(&local_8,iVar2 + -2);
          if (local_8 != (undefined1 *)0x0) {
            uVar4 = FUN_00417ba8(local_8);
            (**(code **)(*local_1c + 0x3c))(local_1c,local_2c[1],uVar4);
          }
        }
        iVar6 = iVar6 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  if (((param_6 & 2) != 0) && (iVar5 = (**(code **)(*local_24 + 0x14))(), 0 < iVar5)) {
    FUN_00407f0c(&local_8,0);
    iVar5 = (**(code **)(*local_24 + 0x14))();
    if (-1 < iVar5 + -1) {
      local_18 = 0;
      do {
        puStack_70 = &DAT_0059edd4;
        puStack_74 = (undefined1 *)0x59ebec;
        (**(code **)(*local_24 + 0xc))(local_24,local_18,&local_3c);
        FUN_00408480(&local_8,4);
        local_18 = local_18 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    puVar3 = local_8;
    if ((local_8 != (undefined1 *)0x0) && (*(short *)(local_8 + -10) != 2)) {
      puVar3 = (undefined1 *)FUN_00407048(&local_8,local_8);
    }
    iVar5 = 0;
    if (puVar3 != (undefined1 *)0x0) {
      iVar5 = *(int *)(puVar3 + -4);
    }
    FUN_00408244(&local_8,iVar5 + -2);
    FUN_0040b75c(PTR_PTR_00782104,&local_40);
    puStack_70 = &DAT_0059edfc;
    puStack_74 = local_8;
    puStack_78 = &DAT_0059edfc;
    FUN_00408480(param_4,4);
  }
  iVar5 = (**(code **)(*local_1c + 0x14))();
  if (-1 < iVar5 + -1) {
    iVar6 = 0;
    do {
      uVar4 = (**(code **)(*local_1c + 0x18))(local_1c,iVar6);
      FUN_00408044(&local_8,uVar4);
      (**(code **)(*local_1c + 0x18))(local_1c,iVar6);
      FUN_00417c00();
      (**(code **)(*local_1c + 0xc))(local_1c,iVar6,&local_58,&local_44,*param_4);
      local_54 = local_58;
      local_50 = 0x11;
      puStack_70 = (undefined *)0x59ecd7;
      FUN_00408480(&local_5c,3);
      local_4c = local_5c;
      local_48 = 0x11;
      puStack_70 = (undefined *)0x59ecf1;
      FUN_00417d4c(local_c,&local_54,1);
      puStack_70 = &DAT_0059edfc;
      puStack_74 = local_8;
      puStack_78 = &DAT_0059edfc;
      FUN_00408480(param_4,5);
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  iVar5 = *param_4;
  iVar6 = 0;
  if (iVar5 != 0) {
    iVar6 = *(int *)(iVar5 + -4);
  }
  if (0 < iVar6) {
    iVar6 = 0;
    if (iVar5 != 0) {
      iVar6 = *(int *)(iVar5 + -4);
    }
    FUN_00408244(param_4,iVar6 + -1);
  }
  FUN_00405a7c(local_24);
  FUN_00405a7c(local_20);
  FUN_00405a7c(local_1c);
  puVar1 = puStack_70;
  *in_FS_OFFSET = puStack_78;
  puStack_70 = &LAB_0059eda3;
  puStack_74 = (undefined1 *)0x59ed81;
  thunk_FUN_00406e80(&local_5c,2,puVar1);
  puStack_74 = (undefined1 *)0x59ed8e;
  thunk_FUN_00406e80(&local_44,5);
  puStack_74 = (undefined1 *)0x59ed9b;
  thunk_FUN_00406e80(&local_c,2);
  return;
}
