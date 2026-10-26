// rea decompile_all
// name: FUN_0059089c
// address: 0x59089c
// body: available
// range: 0x59089c-0x590ba6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5908de (push 0x590ba7 followed by fs-segment stack chaining); handler 0x590ba7 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0059089c(int param_1,undefined4 param_2,undefined2 param_3,int *param_4)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar6;
  undefined4 uStack_60;
  undefined1 *puStack_5c;
  undefined1 *puStack_58;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  byte local_1d;
  int local_1c;
  int local_18;
  undefined2 local_12;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;

  local_48 = 0;
  local_40 = 0;
  local_44 = 0;
  local_3c = 0;
  local_34 = 0;
  local_38 = 0;
  local_c = 0;
  local_10 = 0;
  puStack_58 = (undefined1 *)0x5908d3;
  local_12 = param_3;
  local_8 = param_1;
  thunk_FUN_00407ad0(param_1);
  puStack_5c = &LAB_00590ba7;
  uStack_60 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_60;
  puStack_58 = &stack0xfffffffc;
  FUN_00408194(param_4,param_2);
  local_1d = FUN_00590748(local_8,1);
  if ((local_1d & 1) == 0) {
    local_1c = 1;
    iVar3 = local_8;
    if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
      iVar3 = FUN_00407488(&local_8,local_8);
    }
    iVar4 = 0;
    if (iVar3 != 0) {
      iVar4 = *(int *)(iVar3 + -4);
    }
    if (0 < iVar4) {
      iVar3 = 1;
      local_24 = iVar4;
      do {
        cVar2 = FUN_005903e0(local_8,iVar3);
        if ((byte)(cVar2 - 1U) < 2) {
          FUN_00408984(*param_4,1,local_1c + -1,&local_c);
          iVar4 = local_8;
          if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
            iVar4 = FUN_00407488(&local_8,local_8);
          }
          local_30 = *param_4;
          local_28 = local_30;
          if (local_30 != 0) {
            local_28 = *(int *)(local_30 + -4);
          }
          uVar6 = local_c;
          uVar5 = FUN_00590874(*(undefined2 *)(iVar4 + -2 + iVar3 * 2));
          FUN_00408310(&local_34,uVar5);
          FUN_00408984(*param_4,local_1c,(local_28 - local_1c) + 1,&local_38,local_34,uVar6);
          uStack_60 = local_38;
          FUN_0040875c(param_4,3);
          local_1c = local_1c + 1;
        }
        else if ((byte)(cVar2 - 4U) < 2) {
          local_30 = *param_4;
          iVar4 = 0;
          if (local_30 != 0) {
            iVar4 = *(int *)(local_30 + -4);
          }
          if (iVar4 < local_1c) {
            FUN_00408310(&local_3c,local_12);
            FUN_004085b8(param_4,local_3c);
          }
          local_1c = local_1c + 1;
        }
        iVar3 = iVar3 + 1;
        local_24 = local_24 + -1;
      } while (local_24 != 0);
      local_24 = 0;
    }
  }
  else {
    local_30 = *param_4;
    local_1c = 0;
    if (local_30 != 0) {
      local_1c = *(int *)(local_30 + -4);
    }
    iVar3 = local_8;
    if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
      iVar3 = FUN_00407488(&local_8,local_8);
    }
    iVar4 = 0;
    if (iVar3 != 0) {
      iVar4 = *(int *)(iVar3 + -4);
    }
    if (-1 < iVar4 + -1) {
      local_18 = 0;
      local_24 = iVar4;
      do {
        iVar3 = local_8;
        if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
          iVar3 = FUN_00407488(&local_8,local_8);
        }
        iVar4 = 0;
        if (iVar3 != 0) {
          iVar4 = *(int *)(iVar3 + -4);
        }
        iVar4 = iVar4 - local_18;
        cVar2 = FUN_005903e0(local_8,iVar4);
        if ((byte)(cVar2 - 1U) < 2) {
          FUN_00408984(*param_4,1,local_1c,&local_10);
          iVar3 = local_8;
          if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
            iVar3 = FUN_00407488(&local_8,local_8);
          }
          local_30 = *param_4;
          local_2c = local_30;
          if (local_30 != 0) {
            local_2c = *(int *)(local_30 + -4);
          }
          uVar6 = local_10;
          uVar5 = FUN_00590874(*(undefined2 *)(iVar3 + -2 + iVar4 * 2));
          FUN_00408310(&local_40,uVar5);
          FUN_00408984(*param_4,local_1c + 1,local_2c - local_1c,&local_44,local_40,uVar6);
          uStack_60 = local_44;
          FUN_0040875c(param_4,3);
        }
        else if ((byte)(cVar2 - 4U) < 2) {
          if (local_1c < 1) {
            FUN_00408310(&local_48,local_12);
            FUN_00408678(param_4,local_48,*param_4);
          }
          else {
            local_1c = local_1c + -1;
          }
        }
        local_18 = local_18 + 1;
        local_24 = local_24 + -1;
      } while (local_24 != 0);
    }
  }
  puVar1 = puStack_58;
  *in_FS_OFFSET = uStack_60;
  puStack_58 = &LAB_00590bae;
  puStack_5c = (undefined1 *)0x590b99;
  thunk_FUN_004072fc(&local_48,6,puVar1);
  puStack_5c = (undefined1 *)0x590ba6;
  thunk_FUN_004072fc(&local_10,3);
  return;
}
