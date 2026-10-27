// rea decompile_all
// name: FUN_004fb5f8
// address: 0x4fb5f8
// body: available
// range: 0x4fb5f8-0x4fb915 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4fb61a (push 0x4fb93b followed by fs-segment stack chaining); handler 0x4fb93b lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4fb648 (push 0x4fb916 followed by fs-segment stack chaining); handler 0x4fb916 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004fb5f8(int *param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  int *piVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  undefined4 uStack_6c;
  undefined1 *puStack_68;
  undefined1 *puStack_64;
  undefined4 uStack_60;
  undefined1 *puStack_5c;
  undefined1 *puStack_58;
  undefined4 local_48;
  int local_44;
  undefined1 local_40;
  int local_3c;
  undefined1 local_38;
  int local_34;
  int local_30;
  undefined1 local_2a;
  undefined1 local_29;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int *local_10;
  int local_c;
  int *local_8;

  puStack_58 = &stack0xfffffffc;
  local_48 = 0;
  local_c = 0;
  puStack_5c = &LAB_004fb93b;
  uStack_60 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_60;
  puStack_64 = (undefined1 *)0x4fb62b;
  local_10 = param_1;
  local_8 = param_2;
  FUN_004fbf00(param_1,param_1[0x19]);
  local_29 = (undefined1)local_10[0x1d];
  puStack_64 = (undefined1 *)0x4fb63d;
  FUN_004fac64(local_10);
  puStack_68 = &LAB_004fb916;
  uStack_6c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_6c;
  puStack_64 = &stack0xfffffffc;
  (**(code **)(*local_8 + 0xc))(local_8,&local_20,4);
  if (local_20 == 0x40000) {
    *(undefined1 *)(local_10 + 0x1d) = 0;
    local_2a = 0;
  }
  else if (local_10[0x1c] == local_20) {
    (**(code **)(*local_8 + 0xc))(local_8,local_10 + 0x1d,1);
    (**(code **)(*local_8 + 0xc))(local_8,&local_2a,1);
  }
  else {
    local_44 = local_10[0x1c];
    local_40 = 0;
    local_3c = local_20;
    local_38 = 0;
    piVar5 = &local_44;
    uVar6 = 1;
    FUN_0040b75c(PTR_PTR_0078199c,&local_48);
    FUN_0041bef4(&PTR_LAB_00410b4c,1,local_48,uVar6,piVar5);
    FUN_00406618();
  }
  (**(code **)(*local_8 + 0xc))(local_8,&local_24,4);
  if (-1 < local_24 + -1) {
    local_34 = local_24;
    local_20 = 0;
    do {
      FUN_004fb544(&local_c);
      if (local_c != 0) {
        FUN_00405d08(local_10[5],local_c,&local_14);
        if (local_14 != 0) {
          uVar6 = 0x4fb737;
          FUN_004ee5c0(local_14,0);
          uStack_6c = 0;
          FUN_004ef5d0(local_14,local_10[5],0,uVar6);
        }
      }
      local_20 = local_20 + 1;
      local_34 = local_34 + -1;
    } while (local_34 != 0);
  }
  (**(code **)(*local_8 + 0xc))(local_8,local_10 + 0x1a,4);
  if ((char)local_10[0x1d] != '\0') {
    uVar6 = (**(code **)(*local_10 + 0x28))(local_10,local_2a);
    iVar2 = FUN_004fd054(local_10,local_10[0x1a],uVar6);
    local_10[0x1a] = iVar2;
  }
  local_1c = 0;
  iVar2 = 0;
LAB_004fb796:
  do {
    (**(code **)(*local_8 + 0xc))(local_8,&local_18,4);
    if (local_18 == DAT_00778c44) {
      *in_FS_OFFSET = uStack_6c;
      puStack_64 = &LAB_004fb91d;
      *(undefined1 *)(local_10 + 0x1d) = local_29;
      if (local_10[0x19] == 0) {
        puStack_68 = (undefined1 *)0x4fb907;
        iVar2 = FUN_004fa3e8(&LAB_004e862c,1,local_10);
        local_10[0x19] = iVar2;
      }
      puStack_68 = (undefined1 *)0x4fb915;
      FUN_004fac68(local_10);
      return;
    }
    iVar3 = FUN_004fa3e8(&LAB_004e862c,1,local_10);
    (**(code **)(*local_8 + 0xc))(local_8,iVar3 + 0x10,1);
    (**(code **)(*local_8 + 0xc))(local_8,iVar3 + 0x20,4);
    if ((char)local_10[0x1d] != '\0') {
      uVar6 = (**(code **)(*local_10 + 0x28))(local_10,*(undefined1 *)(iVar3 + 0x10));
      uVar6 = FUN_004fd054(local_10,*(undefined4 *)(iVar3 + 0x20),uVar6);
      *(undefined4 *)(iVar3 + 0x20) = uVar6;
    }
    puVar7 = &stack0xfffffffc;
    FUN_004fb544(&local_c);
    if (local_c != 0) {
      cVar1 = FUN_004fa750(iVar3,local_c,puVar7);
      if (cVar1 == '\0') {
        FUN_00405a7c(iVar3);
        goto LAB_004fb796;
      }
    }
    if (local_18 == 0) {
      local_10[0x19] = iVar3;
    }
    else if (local_18 == local_1c) {
      iVar4 = iVar2;
      if ((*(int *)(iVar2 + 0x18) != 0) && (*(int *)(iVar2 + 4) == 0)) {
        iVar4 = *(int *)(iVar2 + 0x18);
        local_30 = iVar2;
        FUN_00405a7c(iVar2);
      }
      *(int *)(iVar4 + 0xc) = iVar3;
      *(int *)(iVar3 + 0x18) = iVar4;
      *(undefined4 *)(iVar3 + 0x14) = *(undefined4 *)(iVar4 + 0x14);
    }
    else if (local_1c < local_18) {
      *(int *)(iVar2 + 8) = iVar3;
      *(int *)(iVar3 + 0x14) = iVar2;
    }
    else if (local_18 < local_1c) {
      local_28 = iVar2;
      if (0 < local_1c - local_18) {
        local_20 = 1;
        local_34 = local_1c - local_18;
        do {
          local_28 = *(int *)(local_28 + 0x14);
          local_20 = local_20 + 1;
          local_34 = local_34 + -1;
        } while (local_34 != 0);
      }
      *(int *)(local_28 + 0xc) = iVar3;
      *(int *)(iVar3 + 0x18) = local_28;
      *(undefined4 *)(iVar3 + 0x14) = *(undefined4 *)(local_28 + 0x14);
    }
    local_1c = local_18;
    iVar2 = iVar3;
  } while( true );
}
