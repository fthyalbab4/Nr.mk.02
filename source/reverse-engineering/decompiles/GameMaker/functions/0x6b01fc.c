// rea decompile_all
// name: FUN_006b01fc
// address: 0x6b01fc
// body: available
// range: 0x6b01fc-0x6b05b6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6b0237 (push 0x6b05b7 followed by fs-segment stack chaining); handler 0x6b05b7 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006b01fc(int param_1,int param_2,int param_3,byte param_4,char param_5)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar7;
  bool bVar8;
  undefined4 uStack_5c;
  undefined1 *puStack_58;
  undefined1 *puStack_54;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  byte local_1b;
  byte local_1a;
  byte local_19;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;

  local_38 = 0;
  local_40 = 0;
  local_44 = 0;
  local_3c = 0;
  puStack_54 = (undefined1 *)0x6b0224;
  local_10 = param_3;
  local_c = param_2;
  local_8 = param_1;
  thunk_FUN_00407660(param_1);
  puStack_54 = (undefined1 *)0x6b022c;
  thunk_FUN_00407660(local_c);
  puStack_58 = &LAB_006b05b7;
  uStack_5c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_5c;
  local_14 = -1;
  puStack_54 = &stack0xfffffffc;
  if (local_c != 0) {
    local_24 = local_10 + 1;
    local_28 = local_8;
    puStack_54 = &stack0xfffffffc;
    if ((local_8 != 0) && (puStack_54 = &stack0xfffffffc, *(short *)(local_8 + -10) != 2)) {
      puStack_54 = &stack0xfffffffc;
      local_28 = FUN_00407048(&local_8,local_8);
    }
    if (local_28 != 0) {
      local_28 = *(int *)(local_28 + -4);
    }
    local_2c = local_c;
    if ((local_c != 0) && (*(short *)(local_c + -10) != 2)) {
      local_2c = FUN_00407048(&local_c,local_c);
    }
    if (local_2c != 0) {
      local_2c = *(int *)(local_2c + -4);
    }
    iVar6 = (local_28 - local_2c) + 1;
    if (local_24 <= iVar6) {
      local_20 = (iVar6 - local_24) + 1;
      local_18 = local_24;
      do {
        local_1b = 1;
        iVar6 = local_c;
        if ((local_c != 0) && (*(short *)(local_c + -10) != 2)) {
          iVar6 = FUN_00407048(&local_c,local_c);
        }
        iVar5 = 0;
        if (iVar6 != 0) {
          iVar5 = *(int *)(iVar6 + -4);
        }
        if (-1 < iVar5 + -1) {
          iVar6 = 0;
          do {
            uVar7 = local_18 + iVar6 == 0;
            FUN_00408034(&local_3c,*(undefined2 *)(local_8 + -2 + (local_18 + iVar6) * 2));
            FUN_00415690(local_3c,&local_38);
            uVar2 = local_38;
            FUN_00408034(&local_44,*(undefined2 *)(local_c + -2 + (iVar6 + 1) * 2));
            FUN_00415690(local_44,&local_40);
            FUN_00408640(uVar2,local_40);
            if ((bool)uVar7) {
              if (param_5 == '\0') {
                bVar8 = false;
              }
              else {
                iVar4 = local_8;
                if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
                  iVar4 = FUN_00407048(&local_8,local_8);
                }
                local_30 = local_c;
                if ((local_c != 0) && (*(short *)(local_c + -10) != 2)) {
                  local_30 = FUN_00407048(&local_c,local_c);
                }
                bVar8 = *(short *)(iVar4 + -2 + (local_18 + iVar6) * 2) !=
                        *(short *)(local_30 + -2 + (iVar6 + 1) * 2);
              }
            }
            else {
              bVar8 = true;
            }
            if (bVar8) {
              local_1b = 0;
              break;
            }
            iVar6 = iVar6 + 1;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
        if ((local_1b & param_4) != 0) {
          if (local_18 == 1) {
            bVar3 = 1;
          }
          else {
            iVar6 = local_8;
            if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
              iVar6 = FUN_00407048(&local_8,local_8);
            }
            bVar3 = FUN_006aff6c(*(undefined2 *)(iVar6 + -2 + local_18 * 2));
            bVar3 = bVar3 ^ 1;
          }
          if (bVar3 == 0) {
            iVar6 = local_8;
            if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
              iVar6 = FUN_00407048(&local_8,local_8);
            }
            local_19 = FUN_006aff6c(*(undefined2 *)(iVar6 + -4 + local_18 * 2));
            local_19 = local_19 ^ 1;
          }
          else {
            local_19 = 1;
          }
          iVar6 = local_8;
          if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
            iVar6 = FUN_00407048(&local_8,local_8);
          }
          iVar5 = 0;
          if (iVar6 != 0) {
            iVar5 = *(int *)(iVar6 + -4);
          }
          iVar6 = local_c;
          if ((local_c != 0) && (*(short *)(local_c + -10) != 2)) {
            iVar6 = FUN_00407048(&local_c,local_c);
          }
          iVar4 = 0;
          if (iVar6 != 0) {
            iVar4 = *(int *)(iVar6 + -4);
          }
          if ((iVar5 - iVar4) + 1 == local_18) {
            bVar3 = 1;
          }
          else {
            iVar6 = local_8;
            if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
              iVar6 = FUN_00407048(&local_8,local_8);
            }
            iVar5 = local_c;
            if ((local_c != 0) && (*(short *)(local_c + -10) != 2)) {
              iVar5 = FUN_00407048(&local_c,local_c);
            }
            iVar4 = 0;
            if (iVar5 != 0) {
              iVar4 = *(int *)(iVar5 + -4);
            }
            bVar3 = FUN_006aff6c(*(undefined2 *)(iVar6 + -4 + (iVar4 + local_18) * 2));
            bVar3 = bVar3 ^ 1;
          }
          if (bVar3 == 0) {
            iVar6 = local_8;
            if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
              iVar6 = FUN_00407048(&local_8,local_8);
            }
            iVar5 = local_c;
            if ((local_c != 0) && (*(short *)(local_c + -10) != 2)) {
              iVar5 = FUN_00407048(&local_c,local_c);
            }
            local_34 = iVar5;
            if (iVar5 != 0) {
              local_34 = *(int *)(iVar5 + -4);
            }
            local_1a = FUN_006aff6c(*(undefined2 *)(iVar6 + -2 + (local_18 + local_34) * 2));
            local_1a = local_1a ^ 1;
          }
          else {
            local_1a = 1;
          }
          local_1b = local_19 & local_1a;
        }
        if (local_1b != 0) {
          local_14 = local_18 + -1;
          break;
        }
        local_18 = local_18 + 1;
        local_20 = local_20 + -1;
      } while (local_20 != 0);
    }
  }
  puVar1 = puStack_54;
  *in_FS_OFFSET = uStack_5c;
  puStack_54 = &LAB_006b05be;
  puStack_58 = (undefined1 *)0x6b05a9;
  thunk_FUN_00406e80(&local_44,4,puVar1);
  puStack_58 = (undefined1 *)0x6b05b6;
  thunk_FUN_00406e80(&local_c,2);
  return;
}
