// rea decompile_all
// name: FUN_005b1534
// address: 0x5b1534
// body: available
// range: 0x5b1534-0x5b181e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005b1534(int param_1,undefined4 param_2,int param_3,char param_4,int param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  uint local_1c;
  int local_18;
  int local_14;
  byte bStack_9;

  if (param_1 != 0) {
    iVar1 = FUN_00701cf4(&DAT_00700d94,1,param_1);
    FUN_00702dfc(param_1,param_2,0);
    bStack_9 = (byte)((uint)param_2 >> 0x18);
    if (param_4 == '\0') {
      local_20 = *(int *)(param_1 + 8);
      if (-1 < local_20 + -1) {
        local_18 = 0;
        do {
          local_24 = *(int *)(param_1 + 4);
          if (-1 < local_24 + -1) {
            local_14 = 0;
            do {
              if (((local_14 - param_3 < 0) || (*(int *)(param_1 + 4) <= local_14 - param_3)) ||
                 ((local_18 - param_5 < 0 || (*(int *)(param_1 + 8) <= local_18 - param_5)))) {
                *(undefined1 *)
                 (*(int *)(param_1 + 0xc) + 3 + (*(int *)(param_1 + 4) * local_18 + local_14) * 4) =
                     0;
              }
              else {
                *(char *)(*(int *)(param_1 + 0xc) + 3 +
                         (*(int *)(param_1 + 4) * local_18 + local_14) * 4) =
                     (char)((ulonglong)
                            ((longlong)
                             (int)(uint)*(byte *)(*(int *)(iVar1 + 0xc) + 3 +
                                                 (((local_18 - param_5) * *(int *)(iVar1 + 4) +
                                                  local_14) - param_3) * 4) *
                            (longlong)(int)(uint)bStack_9) / 0xff);
              }
              local_14 = local_14 + 1;
              local_24 = local_24 + -1;
            } while (local_24 != 0);
          }
          local_18 = local_18 + 1;
          local_20 = local_20 + -1;
        } while (local_20 != 0);
      }
    }
    else {
      local_20 = *(int *)(param_1 + 8);
      if (-1 < local_20 + -1) {
        local_18 = 0;
        do {
          local_24 = *(int *)(param_1 + 4);
          if (-1 < local_24 + -1) {
            local_14 = 0;
            do {
              local_1c = 0;
              iVar5 = (local_18 - param_5) + -2;
              iVar2 = (local_18 - param_5) + 2;
              if (iVar5 <= iVar2) {
                local_28 = (iVar2 - iVar5) + 1;
                do {
                  iVar4 = (local_14 - param_3) + -2;
                  iVar2 = (local_14 - param_3) + 2;
                  if (iVar4 <= iVar2) {
                    local_2c = (iVar2 - iVar4) + 1;
                    do {
                      uVar3 = local_1c;
                      if ((((-1 < iVar5) && (iVar5 < *(int *)(iVar1 + 8))) && (-1 < iVar4)) &&
                         (iVar4 < *(int *)(iVar1 + 4))) {
                        if (local_1c == 0xff) break;
                        if ((*(char *)(*(int *)(iVar1 + 0xc) + 3 +
                                      (iVar5 * *(int *)(iVar1 + 4) + iVar4) * 4) != '\0') &&
                           (iVar2 = ((iVar5 - local_18) + param_5) * ((iVar5 - local_18) + param_5)
                                    + ((iVar4 - local_14) + param_3) *
                                      ((iVar4 - local_14) + param_3), iVar2 < 10)) {
                          if (iVar2 < 1) {
                            uVar3 = (uint)*(byte *)(*(int *)(iVar1 + 0xc) + 3 +
                                                   (iVar5 * *(int *)(iVar1 + 4) + iVar4) * 4);
                            if (uVar3 < local_1c) {
                              uVar3 = local_1c;
                            }
                          }
                          else if (iVar2 < 2) {
                            uVar3 = *(byte *)(*(int *)(iVar1 + 0xc) + 3 +
                                             (iVar5 * *(int *)(iVar1 + 4) + iVar4) * 4) / 3;
                            if (uVar3 < local_1c) {
                              uVar3 = local_1c;
                            }
                          }
                          else {
                            uVar3 = *(byte *)(*(int *)(iVar1 + 0xc) + 3 +
                                             (iVar5 * *(int *)(iVar1 + 4) + iVar4) * 4) / 9;
                            if (uVar3 < local_1c) {
                              uVar3 = local_1c;
                            }
                          }
                        }
                      }
                      local_1c = uVar3;
                      iVar4 = iVar4 + 1;
                      local_2c = local_2c + -1;
                    } while (local_2c != 0);
                  }
                  iVar5 = iVar5 + 1;
                  local_28 = local_28 + -1;
                } while (local_28 != 0);
              }
              *(char *)(*(int *)(param_1 + 0xc) + 3 +
                       (*(int *)(param_1 + 4) * local_18 + local_14) * 4) =
                   (char)((bStack_9 * local_1c) / 0xff);
              local_14 = local_14 + 1;
              local_24 = local_24 + -1;
            } while (local_24 != 0);
          }
          local_18 = local_18 + 1;
          local_20 = local_20 + -1;
        } while (local_20 != 0);
      }
      FUN_005b229c(param_1,1,0,1,0);
    }
    FUN_007034e0(param_1,0,0,1,iVar1);
    FUN_00405a7c(iVar1);
  }
  return;
}
