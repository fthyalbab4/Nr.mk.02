// rea decompile_all
// name: FUN_00569040
// address: 0x569040
// body: available
// range: 0x569040-0x569460 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x569078 (push 0x569461 followed by fs-segment stack chaining); handler 0x569461 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00569040(int param_1,undefined4 *param_2,int param_3,int param_4)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 uStack_6c;
  undefined4 *puStack_68;
  undefined1 *puStack_64;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 *local_40;
  undefined4 local_3c;
  undefined4 local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  bool local_21;
  int local_20;
  int local_1c;
  ushort local_18;
  char local_15;
  int local_14;
  int local_10;
  undefined4 *local_c;
  int local_8;

  puStack_64 = &stack0xfffffffc;
  local_50 = 0;
  local_54 = 0;
  local_48 = 0;
  local_4c = 0;
  local_44 = 0;
  local_38 = 0;
  local_3c = 0;
  local_40 = (undefined1 *)0x0;
  local_8 = 0;
  puStack_68 = (undefined4 *)&LAB_00569461;
  uStack_6c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_6c;
  local_10 = param_4;
  puVar1 = &stack0xfffffffc;
  local_c = param_2;
  if (param_3 != 0) {
    iVar5 = 1;
    FUN_00407f0c(&local_8,param_3);
    iVar3 = FUN_0056678c(*(undefined4 *)(param_1 + 0x2a0),param_4);
    puVar1 = puStack_64;
    if (-1 < iVar3) {
      while (local_14 = iVar3, iVar3 = FUN_00408238(*(undefined4 *)(param_1 + 0x2a0)),
            local_14 <= iVar3) {
        local_15 = FUN_00565bb8(*(undefined4 *)(param_1 + 0x2a0),local_14);
        if (((byte)(local_15 - 1U) < 2) || ((byte)(local_15 - 4U) < 2)) {
          local_1c = local_8;
          if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
            local_1c = FUN_00407048(&local_8,local_8);
          }
          local_18 = *(ushort *)(local_1c + -2 + iVar5 * 2);
          cVar2 = FUN_00568b1c(param_1,&local_18,local_14);
          if (cVar2 == '\0') {
            if ((0xd7ff < local_18) && (local_18 < 0xe000)) {
              iVar3 = thunk_FUN_004089c0(&local_8);
              *(undefined2 *)(iVar3 + iVar5 * 2) = *(undefined2 *)(param_1 + 0x2a4);
            }
            local_18 = *(ushort *)(param_1 + 0x2a4);
          }
          if ((byte)(local_15 - 1U) < 2) {
            local_20 = local_8;
            if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
              local_20 = FUN_00407048(&local_8,local_8);
            }
            local_21 = *(ushort *)(local_20 + -2 + iVar5 * 2) != local_18;
          }
          else {
            local_21 = false;
          }
          if (local_21 == false) {
            iVar3 = thunk_FUN_004089c0(&local_8);
            *(ushort *)(iVar3 + -2 + iVar5 * 2) = local_18;
            if ((0xd7ff < local_18) && (local_18 < 0xe000)) {
              iVar5 = iVar5 + 1;
              local_14 = local_14 + 1;
            }
          }
          else {
            local_28 = local_8;
            if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
              local_28 = FUN_00407048(&local_8,local_8);
            }
            local_2c = local_28;
            if (local_28 != 0) {
              local_2c = *(int *)(local_28 + -4);
            }
            FUN_004086a8(local_8,1,iVar5 + -1,&local_38);
            uVar6 = local_38;
            FUN_00408034(&local_3c,local_18);
            FUN_004086a8(local_8,iVar5,local_2c,&local_40,local_3c,uVar6);
            puStack_64 = local_40;
            FUN_00408480(&local_8,3);
          }
          iVar5 = iVar5 + 1;
        }
        if (*(int *)(param_1 + 0x2a8) < param_4 + iVar5) break;
        iVar3 = local_8;
        if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
          puStack_68 = (undefined4 *)0x569278;
          iVar3 = FUN_00407048(&local_8,local_8);
        }
        local_30 = iVar3;
        if (iVar3 != 0) {
          local_30 = *(int *)(iVar3 + -4);
        }
        if (local_30 < iVar5) break;
        iVar3 = local_14 + 1;
      }
      iVar3 = local_8;
      if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
        puStack_68 = (undefined4 *)0x5692c7;
        iVar3 = FUN_00407048(&local_8,local_8);
      }
      iVar4 = 0;
      if (iVar3 != 0) {
        iVar4 = *(int *)(iVar3 + -4);
      }
      if (iVar4 + param_4 < *(int *)(param_1 + 0x2a8)) {
        iVar3 = local_8;
        if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
          puStack_68 = (undefined4 *)0x5692fc;
          iVar3 = FUN_00407048(&local_8,local_8);
        }
        iVar4 = 0;
        if (iVar3 != 0) {
          iVar4 = *(int *)(iVar3 + -4);
        }
        puStack_68 = (undefined4 *)0x569317;
        cVar2 = FUN_0041d1d4(*local_c,param_4 + iVar4 + 1);
        if (cVar2 == '\x02') {
          puStack_68 = (undefined4 *)0x56932a;
          FUN_00408034(&local_44,*(undefined2 *)(param_1 + 0x2a4));
          puStack_68 = (undefined4 *)0x569335;
          FUN_004082dc(&local_8,local_44);
          iVar5 = iVar5 + 1;
        }
        iVar3 = local_8;
        if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
          puStack_68 = (undefined4 *)0x569353;
          iVar3 = FUN_00407048(&local_8,local_8);
        }
        iVar4 = 0;
        if (iVar3 != 0) {
          iVar4 = *(int *)(iVar3 + -4);
        }
        local_34 = local_8;
        if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
          puStack_68 = (undefined4 *)0x56937b;
          local_34 = FUN_00407048(&local_8,local_8);
        }
        if (local_34 != 0) {
          local_34 = *(int *)(local_34 + -4);
        }
        puStack_68 = &local_48;
        uStack_6c = 0x5693a5;
        FUN_004086a8(*local_c,1,param_4);
        uStack_6c = local_48;
        FUN_004086a8(*local_c,param_4 + iVar4 + 1,*(int *)(param_1 + 0x2a8) - (param_4 + local_34),
                     &local_4c,local_8);
        uStack_6c = local_4c;
        FUN_00408480(local_c,3);
      }
      else {
        puStack_68 = (undefined4 *)0x5693f3;
        cVar2 = FUN_0041d1d4(local_8,*(int *)(param_1 + 0x2a8) - param_4);
        iVar3 = param_4;
        if (cVar2 == '\x01') {
          iVar3 = param_4 + 1;
        }
        puStack_68 = &local_50;
        uStack_6c = 0x569411;
        FUN_004086a8(local_8,1,*(int *)(param_1 + 0x2a8) - iVar3);
        uStack_6c = local_50;
        puVar7 = &local_54;
        FUN_004086a8(*local_c,1,param_4);
        FUN_0040839c(local_c,local_54,puVar7);
      }
      local_10 = iVar5 + param_4 + -1;
      puVar1 = puStack_64;
    }
  }
  puStack_64 = puVar1;
  puVar1 = puStack_64;
  *in_FS_OFFSET = uStack_6c;
  puStack_64 = &LAB_00569468;
  puStack_68 = (undefined4 *)0x569458;
  thunk_FUN_00406e80(&local_54,8,puVar1);
  puStack_68 = (undefined4 *)0x569460;
  thunk_FUN_00406e5c(&local_8);
  return;
}
