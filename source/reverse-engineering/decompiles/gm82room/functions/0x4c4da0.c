// rea decompile_all
// name: FUN_004c4da0
// address: 0x4c4da0
// body: available
// range: 0x4c4da0-0x4c5210 inclusive
// range: 0x4c5218-0x4c5220 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4c4ea1 (push 0x4c5211 followed by fs-segment stack chaining); handler 0x4c5211 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004c4da0(int *param_1,int *param_2,int *param_3,int *param_4,int *param_5)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_84;
  undefined1 *puStack_80;
  undefined1 *puStack_7c;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  char local_5a;
  char local_59;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int *local_14;
  int *local_c;

  puStack_7c = (undefined1 *)0x4c4db8;
  local_14 = param_3;
  local_c = param_2;
  cVar1 = FUN_004c4988(param_1);
  if (cVar1 != '\0') {
    puStack_7c = (undefined1 *)0x4c4dc7;
    iVar3 = FUN_004c00dc(param_1);
    if (iVar3 != 0) {
      puStack_7c = (undefined1 *)0x4c4dd9;
      (**(code **)(*param_1 + 0x54))(param_1,&local_6c);
      puStack_7c = (undefined1 *)0x4c4de6;
      (**(code **)(*param_1 + 0xa0))(param_1,&local_6c);
      puStack_7c = (undefined1 *)0x4c4dee;
      cVar1 = FUN_0040c490(&local_6c);
      if (cVar1 == '\0') {
        puStack_7c = (undefined1 *)0x4c4e03;
        local_18 = (**(code **)(*(int *)param_1[0x1d] + 0x10))((int *)param_1[0x1d],2);
        local_18 = local_18 - (local_64 - local_6c);
        puStack_7c = (undefined1 *)0x4c4e1b;
        local_1c = (**(code **)(*(int *)param_1[0x1d] + 0x10))((int *)param_1[0x1d],3);
        local_1c = local_1c - (local_60 - local_68);
        puStack_7c = (undefined1 *)0x4c4e33;
        local_20 = (**(code **)(*(int *)param_1[0x1d] + 0x10))((int *)param_1[0x1d],2);
        local_20 = local_20 - (local_64 - local_6c);
        puStack_7c = (undefined1 *)0x4c4e4b;
        local_24 = (**(code **)(*(int *)param_1[0x1d] + 0x10))((int *)param_1[0x1d],3);
        local_24 = local_24 - (local_60 - local_68);
        if (0 < *local_c) {
          *local_c = *local_c - local_18;
        }
        if (0 < *local_14) {
          *local_14 = *local_14 - local_1c;
        }
        if (0 < *param_5) {
          *param_5 = *param_5 - local_20;
        }
        if (0 < *param_4) {
          *param_4 = *param_4 - local_24;
        }
        puStack_80 = &LAB_004c5211;
        uStack_84 = *in_FS_OFFSET;
        *in_FS_OFFSET = &uStack_84;
        local_2c = 0;
        local_3c = 0;
        local_30 = 0;
        local_40 = 0;
        local_34 = 0;
        local_44 = 0;
        local_38 = 0;
        local_48 = 0;
        puStack_7c = &stack0xfffffffc;
        iVar3 = FUN_004c00dc(param_1);
        if (-1 < iVar3 + -1) {
          local_28 = 0;
          do {
            iVar4 = FUN_004c00a0(param_1,local_28);
            if ((*(char *)(iVar4 + 0x59) != '\0') ||
               (((*(byte *)(iVar4 + 0x1c) & 0x10) != 0 && ((*(byte *)(iVar4 + 0x51) & 4) == 0)))) {
              FUN_004c4cdc(iVar4,&local_4c,&local_54,&local_58,&local_50);
              cVar1 = *(char *)(iVar4 + 0x5d);
              if (cVar1 == '\0') {
                if ((*(byte *)(iVar4 + 99) & 5) == 5) {
                  local_59 = '\x01';
                  if (0 < local_4c) {
                    iVar5 = (**(code **)(**(int **)(iVar4 + 0x74) + 0x10))
                                      (*(int **)(iVar4 + 0x74),2);
                    local_4c = ((local_64 - local_6c) - iVar5) - local_4c;
                  }
                  if (0 < local_50) {
                    iVar5 = (**(code **)(**(int **)(iVar4 + 0x74) + 0x10))
                                      (*(int **)(iVar4 + 0x74),2);
                    local_50 = ((local_64 - local_6c) + local_50) - iVar5;
                  }
                }
                else {
                  local_59 = '\0';
                }
              }
              else if ((byte)(cVar1 - 1U) < 2) {
                local_59 = '\x01';
              }
              else if (cVar1 == '\x05') {
                local_59 = '\x02';
              }
              else {
                local_59 = '\x03';
              }
              if (*(char *)(iVar4 + 0x5d) == '\0') {
                if ((*(byte *)(iVar4 + 99) & 10) == 10) {
                  local_5a = '\x01';
                  if (0 < local_54) {
                    iVar5 = (**(code **)(**(int **)(iVar4 + 0x74) + 0x10))
                                      (*(int **)(iVar4 + 0x74),3);
                    local_54 = ((local_60 - local_68) - iVar5) - local_54;
                  }
                  if (0 < local_58) {
                    iVar5 = (**(code **)(**(int **)(iVar4 + 0x74) + 0x10))
                                      (*(int **)(iVar4 + 0x74),3);
                    local_58 = ((local_60 - local_68) + local_58) - iVar5;
                  }
                }
                else {
                  local_5a = '\0';
                }
              }
              else {
                bVar2 = *(char *)(iVar4 + 0x5d) - 3;
                if (bVar2 < 2) {
                  local_5a = '\x01';
                }
                else if (bVar2 == 2) {
                  local_5a = '\x02';
                }
                else {
                  local_5a = '\x03';
                }
              }
              if ((byte)(local_59 - 1U) < 2) {
                if (((0 < local_4c) && (*local_c < local_4c)) &&
                   (*local_c = local_4c, local_2c < *local_c)) {
                  local_2c = *local_c;
                }
                if (((0 < local_50) && (local_50 < *param_5)) &&
                   (*param_5 = local_50, local_30 < *param_5)) {
                  local_30 = *param_5;
                }
              }
              else if (local_59 == '\x03') {
                iVar5 = (**(code **)(**(int **)(iVar4 + 0x74) + 0x10))(*(int **)(iVar4 + 0x74),2);
                local_3c = local_3c + iVar5;
                iVar5 = (**(code **)(**(int **)(iVar4 + 0x74) + 0x10))(*(int **)(iVar4 + 0x74),2);
                local_40 = local_40 + iVar5;
              }
              if ((byte)(local_5a - 1U) < 2) {
                if (((0 < local_54) && (*local_14 < local_54)) &&
                   (*local_14 = local_54, local_34 < *local_14)) {
                  local_34 = *local_14;
                }
                if (((0 < local_58) && (local_58 < *param_4)) &&
                   (*param_4 = local_58, local_38 < *param_4)) {
                  local_38 = *param_4;
                }
              }
              else if ((byte)(local_5a - 1U) == 2) {
                iVar5 = (**(code **)(**(int **)(iVar4 + 0x74) + 0x10))(*(int **)(iVar4 + 0x74),3);
                local_44 = local_44 + iVar5;
                iVar4 = (**(code **)(**(int **)(iVar4 + 0x74) + 0x10))(*(int **)(iVar4 + 0x74),3);
                local_48 = local_48 + iVar4;
              }
            }
            local_28 = local_28 + 1;
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
        if ((0 < local_2c) && (*local_c < local_2c + local_3c)) {
          *local_c = local_2c + local_3c;
        }
        if ((0 < local_30) && ((*param_5 == 0 || (*param_5 < local_30 + local_40)))) {
          *param_5 = local_30 + local_40;
        }
        if ((0 < local_34) && (*local_14 < local_34 + local_44)) {
          *local_14 = local_34 + local_44;
        }
        if ((0 < local_38) && ((*param_4 == 0 || (*param_4 < local_38 + local_48)))) {
          *param_4 = local_38 + local_48;
        }
        *in_FS_OFFSET = uStack_84;
        if (0 < *local_c) {
          *local_c = *local_c + local_18;
        }
        if (0 < *local_14) {
          *local_14 = *local_14 + local_1c;
        }
        if (0 < *param_5) {
          *param_5 = *param_5 + local_20;
        }
        if (0 < *param_4) {
          *param_4 = *param_4 + local_24;
        }
        return;
      }
    }
  }
  return;
}
