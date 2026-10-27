// rea decompile_all
// name: FUN_005b0fa4
// address: 0x5b0fa4
// body: available
// range: 0x5b0fa4-0x5b1533 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005b0fa4(int param_1,undefined4 param_2,int param_3,char param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  uint local_1c;
  uint local_18;
  int local_14;
  int local_10;
  byte bStack_9;

  if (param_1 != 0) {
    iVar7 = param_3 + 2;
    bStack_9 = (byte)((uint)param_2 >> 0x18);
    if (param_4 == '\0') {
      iVar1 = FUN_00701cf4(&DAT_00700d94,1,param_1);
      FUN_00702dfc(param_1,param_2,0);
      local_28 = *(int *)(param_1 + 8);
      if (-1 < local_28 + -1) {
        local_14 = 0;
        do {
          local_2c = *(int *)(param_1 + 4);
          if (-1 < local_2c + -1) {
            local_10 = 0;
            do {
              local_18 = 0;
              if (local_14 - iVar7 < 0) {
                local_38 = 0;
              }
              else {
                local_38 = local_14 - iVar7;
              }
              if (*(int *)(iVar1 + 8) + -1 < local_14 + iVar7) {
                local_3c = *(int *)(iVar1 + 8) + -1;
              }
              else {
                local_3c = local_14 + iVar7;
              }
              if (local_38 <= local_3c) {
                local_30 = (local_3c - local_38) + 1;
                do {
                  iVar2 = local_10 - iVar7;
                  if (iVar2 < 0) {
                    iVar2 = 0;
                  }
                  if (*(int *)(iVar1 + 4) + -1 < local_10 + iVar7) {
                    iVar6 = *(int *)(iVar1 + 4) + -1;
                  }
                  else {
                    iVar6 = local_10 + iVar7;
                  }
                  if (iVar2 <= iVar6) {
                    local_34 = (iVar6 - iVar2) + 1;
                    do {
                      if (local_18 == 0xff) break;
                      uVar3 = local_18;
                      if ((*(char *)(*(int *)(iVar1 + 0xc) + 3 +
                                    (*(int *)(iVar1 + 4) * local_38 + iVar2) * 4) != '\0') &&
                         (iVar6 = (local_38 - local_14) * (local_38 - local_14) +
                                  (iVar2 - local_10) * (iVar2 - local_10), iVar6 <= iVar7 * iVar7))
                      {
                        if (iVar6 < (param_3 + -2) * (param_3 + -2)) {
                          uVar3 = (uint)*(byte *)(*(int *)(iVar1 + 0xc) + 3 +
                                                 (*(int *)(iVar1 + 4) * local_38 + iVar2) * 4);
                          if (uVar3 < local_18) {
                            uVar3 = local_18;
                          }
                        }
                        else if (iVar6 < param_3 * param_3) {
                          if (local_18 <=
                              *(byte *)(*(int *)(iVar1 + 0xc) + 3 +
                                       (*(int *)(iVar1 + 4) * local_38 + iVar2) * 4) >> 1) {
                            uVar3 = (uint)(*(byte *)(*(int *)(iVar1 + 0xc) + 3 +
                                                    (*(int *)(iVar1 + 4) * local_38 + iVar2) * 4) >>
                                          1);
                          }
                        }
                        else if (iVar6 < (param_3 + 1) * (param_3 + 1)) {
                          if (local_18 <=
                              *(byte *)(*(int *)(iVar1 + 0xc) + 3 +
                                       (*(int *)(iVar1 + 4) * local_38 + iVar2) * 4) >> 3) {
                            uVar3 = (uint)(*(byte *)(*(int *)(iVar1 + 0xc) + 3 +
                                                    (*(int *)(iVar1 + 4) * local_38 + iVar2) * 4) >>
                                          3);
                          }
                        }
                        else if (local_18 <=
                                 *(byte *)(*(int *)(iVar1 + 0xc) + 3 +
                                          (*(int *)(iVar1 + 4) * local_38 + iVar2) * 4) >> 4) {
                          uVar3 = (uint)(*(byte *)(*(int *)(iVar1 + 0xc) + 3 +
                                                  (*(int *)(iVar1 + 4) * local_38 + iVar2) * 4) >> 4
                                        );
                        }
                      }
                      local_18 = uVar3;
                      iVar2 = iVar2 + 1;
                      local_34 = local_34 + -1;
                    } while (local_34 != 0);
                  }
                  local_38 = local_38 + 1;
                  local_30 = local_30 + -1;
                } while (local_30 != 0);
              }
              *(char *)(*(int *)(param_1 + 0xc) + 3 +
                       (*(int *)(param_1 + 4) * local_14 + local_10) * 4) =
                   (char)((bStack_9 * local_18) / 0xff);
              local_10 = local_10 + 1;
              local_2c = local_2c + -1;
            } while (local_2c != 0);
          }
          local_14 = local_14 + 1;
          local_28 = local_28 + -1;
        } while (local_28 != 0);
      }
      if (iVar7 < 0) {
        iVar7 = param_3 + 5;
      }
      FUN_005b229c(param_1,iVar7 >> 2,0,1,0);
      FUN_007034e0(param_1,0,0,1,iVar1);
      FUN_00405a7c(iVar1);
    }
    else {
      iVar1 = FUN_00701c94(&DAT_00700d94,1,*(undefined4 *)(param_1 + 4),param_2,
                           *(undefined4 *)(param_1 + 8));
      iVar2 = FUN_00701cf4(&DAT_00700d94,1,param_1);
      local_28 = *(int *)(iVar1 + 8);
      if (-1 < local_28 + -1) {
        local_14 = 0;
        do {
          local_2c = *(int *)(iVar1 + 4);
          if (-1 < local_2c + -1) {
            local_10 = 0;
            do {
              local_18 = 0;
              iVar6 = local_14 - iVar7;
              if (iVar6 <= local_14 + iVar7) {
                local_30 = ((local_14 + iVar7) - iVar6) + 1;
                do {
                  iVar5 = local_10 - iVar7;
                  if (iVar5 <= local_10 + iVar7) {
                    local_34 = ((local_10 + iVar7) - iVar5) + 1;
                    do {
                      if (local_18 == 0xff) break;
                      iVar8 = (iVar6 - local_14) * (iVar6 - local_14) +
                              (iVar5 - local_10) * (iVar5 - local_10);
                      uVar3 = local_18;
                      if (iVar8 <= iVar7 * iVar7) {
                        if ((((iVar6 < 0) || (*(int *)(param_1 + 8) <= iVar6)) || (iVar5 < 0)) ||
                           (*(int *)(param_1 + 4) <= iVar5)) {
                          local_1c = 0xff;
                        }
                        else {
                          local_1c = 0xff - *(byte *)(*(int *)(param_1 + 0xc) + 3 +
                                                     (*(int *)(param_1 + 4) * iVar6 + iVar5) * 4);
                        }
                        if (local_1c != 0) {
                          if (iVar8 < (param_3 + -2) * (param_3 + -2)) {
                            uVar3 = local_1c;
                            if ((int)local_1c < (int)local_18) {
                              uVar3 = local_18;
                            }
                          }
                          else if (iVar8 < param_3 * param_3) {
                            uVar3 = (int)local_1c >> 1;
                            if ((int)uVar3 < 0) {
                              uVar3 = uVar3 + ((local_1c & 1) != 0);
                            }
                            if ((int)uVar3 < (int)local_18) {
                              uVar3 = local_18;
                            }
                          }
                          else if (iVar8 < (param_3 + 1) * (param_3 + 1)) {
                            uVar4 = local_1c;
                            if ((int)local_1c < 0) {
                              uVar4 = local_1c + 7;
                            }
                            if ((int)local_18 <= (int)uVar4 >> 3) {
                              if ((int)local_1c < 0) {
                                local_1c = local_1c + 7;
                              }
                              uVar3 = (int)local_1c >> 3;
                            }
                          }
                          else {
                            uVar4 = local_1c;
                            if ((int)local_1c < 0) {
                              uVar4 = local_1c + 0xf;
                            }
                            if ((int)local_18 <= (int)uVar4 >> 4) {
                              if ((int)local_1c < 0) {
                                local_1c = local_1c + 0xf;
                              }
                              uVar3 = (int)local_1c >> 4;
                            }
                          }
                        }
                      }
                      local_18 = uVar3;
                      iVar5 = iVar5 + 1;
                      local_34 = local_34 + -1;
                    } while (local_34 != 0);
                  }
                  iVar6 = iVar6 + 1;
                  local_30 = local_30 + -1;
                } while (local_30 != 0);
              }
              *(char *)(*(int *)(iVar1 + 0xc) + 3 + (*(int *)(iVar1 + 4) * local_14 + local_10) * 4)
                   = (char)((int)(bStack_9 * local_18) / 0xff);
              local_10 = local_10 + 1;
              local_2c = local_2c + -1;
            } while (local_2c != 0);
          }
          local_14 = local_14 + 1;
          local_28 = local_28 + -1;
        } while (local_28 != 0);
      }
      if (iVar7 < 0) {
        iVar7 = param_3 + 5;
      }
      FUN_005b229c(iVar1,iVar7 >> 2,0,1,0);
      FUN_007034e0(param_1,0,0,1,iVar1);
      FUN_00405a7c(iVar1);
      local_28 = *(int *)(param_1 + 8);
      if (-1 < local_28 + -1) {
        local_14 = 0;
        do {
          local_2c = *(int *)(param_1 + 4);
          if (-1 < local_2c + -1) {
            local_10 = 0;
            do {
              *(undefined1 *)
               (*(int *)(param_1 + 0xc) + 3 + (*(int *)(param_1 + 4) * local_14 + local_10) * 4) =
                   *(undefined1 *)
                    (*(int *)(iVar2 + 0xc) + 3 + (*(int *)(iVar2 + 4) * local_14 + local_10) * 4);
              local_10 = local_10 + 1;
              local_2c = local_2c + -1;
            } while (local_2c != 0);
          }
          local_14 = local_14 + 1;
          local_28 = local_28 + -1;
        } while (local_28 != 0);
      }
      FUN_00405a7c(iVar2);
    }
  }
  return;
}
