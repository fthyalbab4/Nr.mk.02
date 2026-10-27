// rea decompile_all
// name: FUN_006b05cc
// address: 0x6b05cc
// body: available
// range: 0x6b05cc-0x6b08eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6b0607 (push 0x6b08ec followed by fs-segment stack chaining); handler 0x6b08ec lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006b05cc(int param_1,int param_2,int param_3,byte param_4,char param_5)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar8;
  bool bVar9;
  undefined4 uStack_48;
  undefined1 *puStack_44;
  undefined1 *puStack_40;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  int local_1c;
  byte local_16;
  byte local_15;
  int local_14;
  int local_10;
  int local_c;
  int local_8;

  local_24 = 0;
  local_2c = 0;
  local_30 = 0;
  local_28 = 0;
  puStack_40 = (undefined1 *)0x6b05f4;
  local_10 = param_3;
  local_c = param_2;
  local_8 = param_1;
  thunk_FUN_00407660(param_1);
  puStack_40 = (undefined1 *)0x6b05fc;
  thunk_FUN_00407660(local_c);
  puStack_44 = &LAB_006b08ec;
  uStack_48 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_48;
  local_14 = -1;
  puStack_40 = &stack0xfffffffc;
  if ((local_c != 0) &&
     (iVar7 = local_10, puStack_40 = &stack0xfffffffc, puVar2 = &stack0xfffffffc, 0 < local_10)) {
    do {
      puStack_40 = puVar2;
      local_16 = 1;
      iVar4 = local_c;
      if ((local_c != 0) && (*(short *)(local_c + -10) != 2)) {
        iVar4 = FUN_00407048(&local_c,local_c);
      }
      iVar6 = 0;
      if (iVar4 != 0) {
        iVar6 = *(int *)(iVar4 + -4);
      }
      if (-1 < iVar6 + -1) {
        iVar4 = 0;
        uVar8 = true;
        local_1c = iVar6;
        do {
          FUN_00408034(&local_28,*(undefined2 *)(local_8 + -2 + (iVar4 + iVar7) * 2));
          FUN_00415690(local_28,&local_24);
          uVar1 = local_24;
          FUN_00408034(&local_30,*(undefined2 *)(local_c + -2 + (iVar4 + 1) * 2));
          FUN_00415690(local_30,&local_2c);
          FUN_00408640(uVar1,local_2c);
          if ((bool)uVar8) {
            if (param_5 == '\0') {
              bVar9 = false;
            }
            else {
              iVar6 = local_8;
              if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
                iVar6 = FUN_00407048(&local_8,local_8);
              }
              local_20 = local_c;
              if ((local_c != 0) && (*(short *)(local_c + -10) != 2)) {
                local_20 = FUN_00407048(&local_c,local_c);
              }
              bVar9 = *(short *)(iVar6 + -2 + (iVar4 + iVar7) * 2) !=
                      *(short *)(local_20 + -2 + (iVar4 + 1) * 2);
            }
          }
          else {
            bVar9 = true;
          }
          if (bVar9) {
            local_16 = 0;
            break;
          }
          iVar4 = iVar4 + 1;
          local_1c = local_1c + -1;
          uVar8 = local_1c == 0;
        } while (!(bool)uVar8);
      }
      if ((local_16 & param_4) != 0) {
        if (iVar7 == 1) {
          bVar3 = 1;
        }
        else {
          iVar4 = local_8;
          if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
            iVar4 = FUN_00407048(&local_8,local_8);
          }
          bVar3 = FUN_006aff6c(*(undefined2 *)(iVar4 + -2 + iVar7 * 2));
          bVar3 = bVar3 ^ 1;
        }
        if (bVar3 == 0) {
          iVar4 = local_8;
          if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
            iVar4 = FUN_00407048(&local_8,local_8);
          }
          local_15 = FUN_006aff6c(*(undefined2 *)(iVar4 + -4 + iVar7 * 2));
          local_15 = local_15 ^ 1;
        }
        else {
          local_15 = 1;
        }
        iVar4 = local_8;
        if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
          iVar4 = FUN_00407048(&local_8,local_8);
        }
        iVar6 = 0;
        if (iVar4 != 0) {
          iVar6 = *(int *)(iVar4 + -4);
        }
        iVar4 = local_c;
        if ((local_c != 0) && (*(short *)(local_c + -10) != 2)) {
          iVar4 = FUN_00407048(&local_c,local_c);
        }
        iVar5 = 0;
        if (iVar4 != 0) {
          iVar5 = *(int *)(iVar4 + -4);
        }
        if (iVar7 == iVar6 - iVar5) {
          bVar3 = 1;
        }
        else {
          iVar4 = local_8;
          if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
            iVar4 = FUN_00407048(&local_8,local_8);
          }
          iVar6 = local_c;
          if ((local_c != 0) && (*(short *)(local_c + -10) != 2)) {
            iVar6 = FUN_00407048(&local_c,local_c);
          }
          iVar5 = 0;
          if (iVar6 != 0) {
            iVar5 = *(int *)(iVar6 + -4);
          }
          bVar3 = FUN_006aff6c(*(undefined2 *)(iVar4 + -4 + (iVar5 + iVar7) * 2));
          bVar3 = bVar3 ^ 1;
        }
        if (bVar3 == 0) {
          iVar4 = local_8;
          if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
            iVar4 = FUN_00407048(&local_8,local_8);
          }
          iVar6 = local_c;
          if ((local_c != 0) && (*(short *)(local_c + -10) != 2)) {
            iVar6 = FUN_00407048(&local_c,local_c);
          }
          iVar5 = 0;
          if (iVar6 != 0) {
            iVar5 = *(int *)(iVar6 + -4);
          }
          local_16 = FUN_006aff6c(*(undefined2 *)(iVar4 + -2 + (iVar5 + iVar7) * 2));
          local_16 = local_16 ^ 1;
        }
        else {
          local_16 = 1;
        }
        local_16 = local_16 & local_15;
      }
      if (local_16 != 0) {
        local_14 = iVar7 + -1;
        break;
      }
      iVar7 = iVar7 + -1;
      puVar2 = puStack_40;
    } while (iVar7 != 0);
  }
  puVar2 = puStack_40;
  *in_FS_OFFSET = uStack_48;
  puStack_40 = &LAB_006b08f3;
  puStack_44 = (undefined1 *)0x6b08de;
  thunk_FUN_00406e80(&local_30,4,puVar2);
  puStack_44 = (undefined1 *)0x6b08eb;
  thunk_FUN_00406e80(&local_c,2);
  return;
}
