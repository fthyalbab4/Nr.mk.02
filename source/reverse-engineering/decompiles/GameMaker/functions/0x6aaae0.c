// rea decompile_all
// name: FUN_006aaae0
// address: 0x6aaae0
// body: available
// range: 0x6aaae0-0x6ab15d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6aab00 (push 0x6ab15e followed by fs-segment stack chaining); handler 0x6ab15e lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006aaae0(int param_1,int param_2)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 local_1c;
  int local_18;
  undefined4 local_14;
  int local_10;
  int local_c;
  undefined4 local_8;

  puStack_2c = &stack0xfffffffc;
  local_1c = 0;
  local_8 = 0;
  puStack_30 = &LAB_006ab15e;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  iVar3 = FUN_00409a18(*(undefined4 *)(param_1 + 4));
  if (-1 < iVar3 + -1) {
    iVar5 = 0;
    local_18 = iVar3;
    do {
      *(undefined4 *)(*(int *)(param_1 + 4) + 4 + iVar5 * 0xc) = 0;
      iVar5 = iVar5 + 1;
      local_18 = local_18 + -1;
    } while (local_18 != 0);
  }
  iVar3 = 0;
  *(int *)(param_1 + 8) = param_2;
  if (param_2 == 1) {
    for (; iVar5 = FUN_00409a18(*(undefined4 *)(param_1 + 4)), iVar3 < iVar5; iVar3 = iVar3 + 1) {
      if (((iVar3 != 0) && (*(short *)(*(int *)(param_1 + 4) + -0xc + iVar3 * 0xc) == 0x2a)) &&
         (*(short *)(*(int *)(param_1 + 4) + iVar3 * 0xc) == 0x2f)) {
        *(undefined4 *)(*(int *)(param_1 + 4) + 4 + iVar3 * 0xc) = 3;
        iVar3 = iVar3 + 1;
        *(undefined4 *)(param_1 + 8) = 0;
        break;
      }
      *(undefined4 *)(*(int *)(param_1 + 4) + 4 + iVar3 * 0xc) = 3;
    }
  }
  else if (param_2 == 2) {
    for (; iVar5 = FUN_00409a18(*(undefined4 *)(param_1 + 4)), iVar3 < iVar5; iVar3 = iVar3 + 1) {
      if (*(short *)(*(int *)(param_1 + 4) + iVar3 * 0xc) == 0x27) {
        *(undefined4 *)(*(int *)(param_1 + 4) + 4 + iVar3 * 0xc) = 2;
        iVar3 = iVar3 + 1;
        *(undefined4 *)(param_1 + 8) = 0;
        break;
      }
      *(undefined4 *)(*(int *)(param_1 + 4) + 4 + iVar3 * 0xc) = 2;
    }
  }
  else if (param_2 == 3) {
    for (; iVar5 = FUN_00409a18(*(undefined4 *)(param_1 + 4)), iVar3 < iVar5; iVar3 = iVar3 + 1) {
      if (*(short *)(*(int *)(param_1 + 4) + iVar3 * 0xc) == 0x22) {
        *(undefined4 *)(*(int *)(param_1 + 4) + 4 + iVar3 * 0xc) = 2;
        iVar3 = iVar3 + 1;
        *(undefined4 *)(param_1 + 8) = 0;
        break;
      }
      *(undefined4 *)(*(int *)(param_1 + 4) + 4 + iVar3 * 0xc) = 2;
    }
  }
LAB_006ab130:
  do {
    iVar5 = FUN_00409a18(*(undefined4 *)(param_1 + 4));
    puVar1 = puStack_2c;
    if (iVar5 <= iVar3) {
      *in_FS_OFFSET = uStack_34;
      puStack_2c = &LAB_006ab165;
      puStack_30 = (undefined1 *)0x6ab155;
      thunk_FUN_00406e5c(&local_1c,uStack_34,puVar1);
      puStack_30 = (undefined1 *)0x6ab15d;
      thunk_FUN_00406e5c(&local_8);
      return;
    }
    iVar5 = FUN_00409a18(*(undefined4 *)(param_1 + 4));
    if (((iVar5 + -1 <= iVar3) || (*(short *)(*(int *)(param_1 + 4) + iVar3 * 0xc) != 0x2f)) ||
       (*(short *)(*(int *)(param_1 + 4) + 0xc + iVar3 * 0xc) != 0x2a)) {
      iVar5 = FUN_00409a18(*(undefined4 *)(param_1 + 4));
      if (((iVar3 < iVar5 + -1) && (*(short *)(*(int *)(param_1 + 4) + iVar3 * 0xc) == 0x2f)) &&
         (*(short *)(*(int *)(param_1 + 4) + 0xc + iVar3 * 0xc) == 0x2f)) {
        for (; iVar5 = FUN_00409a18(*(undefined4 *)(param_1 + 4)), iVar3 < iVar5; iVar3 = iVar3 + 1)
        {
          *(undefined4 *)(*(int *)(param_1 + 4) + 4 + iVar3 * 0xc) = 3;
        }
      }
      else if (*(short *)(*(int *)(param_1 + 4) + iVar3 * 0xc) == 0x27) {
        *(undefined4 *)(param_1 + 8) = 2;
        *(undefined4 *)(*(int *)(param_1 + 4) + 4 + iVar3 * 0xc) = 2;
        iVar5 = iVar3;
        while( true ) {
          iVar3 = iVar5 + 1;
          iVar4 = FUN_00409a18(*(undefined4 *)(param_1 + 4));
          if (iVar4 <= iVar3) break;
          if (*(short *)(*(int *)(param_1 + 4) + iVar3 * 0xc) == 0x27) {
            *(undefined4 *)(*(int *)(param_1 + 4) + 4 + iVar3 * 0xc) = 2;
            iVar3 = iVar5 + 2;
            *(undefined4 *)(param_1 + 8) = 0;
            break;
          }
          *(undefined4 *)(*(int *)(param_1 + 4) + 4 + iVar3 * 0xc) = 2;
          iVar5 = iVar3;
        }
      }
      else if (*(short *)(*(int *)(param_1 + 4) + iVar3 * 0xc) == 0x22) {
        *(undefined4 *)(param_1 + 8) = 3;
        *(undefined4 *)(*(int *)(param_1 + 4) + 4 + iVar3 * 0xc) = 2;
        iVar5 = iVar3;
        while( true ) {
          iVar3 = iVar5 + 1;
          iVar4 = FUN_00409a18(*(undefined4 *)(param_1 + 4));
          if (iVar4 <= iVar3) break;
          if (*(short *)(*(int *)(param_1 + 4) + iVar3 * 0xc) == 0x22) {
            *(undefined4 *)(*(int *)(param_1 + 4) + 4 + iVar3 * 0xc) = 2;
            iVar3 = iVar5 + 2;
            *(undefined4 *)(param_1 + 8) = 0;
            break;
          }
          *(undefined4 *)(*(int *)(param_1 + 4) + 4 + iVar3 * 0xc) = 2;
          iVar5 = iVar3;
        }
      }
      else if ((ushort)(*(short *)(*(int *)(param_1 + 4) + iVar3 * 0xc) - 0x30U) < 10) {
        for (; (iVar5 = FUN_00409a18(*(undefined4 *)(param_1 + 4)), iVar3 < iVar5 &&
               (((ushort)(*(short *)(*(int *)(param_1 + 4) + iVar3 * 0xc) - 0x30U) < 10 ||
                (*(short *)(*(int *)(param_1 + 4) + iVar3 * 0xc) == 0x2e)))); iVar3 = iVar3 + 1) {
          *(undefined4 *)(*(int *)(param_1 + 4) + 4 + iVar3 * 0xc) = 2;
        }
      }
      else if (*(short *)(*(int *)(param_1 + 4) + iVar3 * 0xc) == 0x24) {
        *(undefined4 *)(*(int *)(param_1 + 4) + 4 + iVar3 * 0xc) = 2;
        while( true ) {
          iVar3 = iVar3 + 1;
          iVar5 = FUN_00409a18(*(undefined4 *)(param_1 + 4));
          if ((iVar5 <= iVar3) ||
             (((9 < (ushort)(*(short *)(*(int *)(param_1 + 4) + iVar3 * 0xc) - 0x30U) &&
               (5 < (ushort)(*(short *)(*(int *)(param_1 + 4) + iVar3 * 0xc) - 0x41U))) &&
              (5 < (ushort)(*(short *)(*(int *)(param_1 + 4) + iVar3 * 0xc) - 0x61U))))) break;
          *(undefined4 *)(*(int *)(param_1 + 4) + 4 + iVar3 * 0xc) = 2;
        }
      }
      else if ((((ushort)(*(short *)(*(int *)(param_1 + 4) + iVar3 * 0xc) - 0x61U) < 0x1a) ||
               ((ushort)(*(short *)(*(int *)(param_1 + 4) + iVar3 * 0xc) - 0x41U) < 0x1a)) ||
              (*(short *)(*(int *)(param_1 + 4) + iVar3 * 0xc) == 0x5f)) {
        FUN_00407f0c(&local_8,0);
        local_10 = iVar3;
        for (; (iVar5 = FUN_00409a18(*(undefined4 *)(param_1 + 4)), iVar3 < iVar5 &&
               ((((ushort)(*(short *)(*(int *)(param_1 + 4) + iVar3 * 0xc) - 0x61U) < 0x1a ||
                 ((ushort)(*(short *)(*(int *)(param_1 + 4) + iVar3 * 0xc) - 0x41U) < 0x1a)) ||
                (((ushort)(*(short *)(*(int *)(param_1 + 4) + iVar3 * 0xc) - 0x30U) < 10 ||
                 (*(short *)(*(int *)(param_1 + 4) + iVar3 * 0xc) == 0x5f)))))); iVar3 = iVar3 + 1)
        {
          FUN_00408034(&local_1c,*(undefined2 *)(*(int *)(param_1 + 4) + iVar3 * 0xc));
          FUN_004082dc(&local_8,local_1c);
        }
        cVar2 = FUN_006aa568(local_8);
        if (cVar2 == '\0') {
          iVar5 = FUN_0062cc14(local_8);
          if (iVar5 < 0) {
            iVar5 = FUN_00693010(local_8);
            if (iVar5 < 0) {
              iVar5 = FUN_006f5a0c(local_8);
              if (iVar5 < 0) {
                iVar5 = FUN_006523ac(local_8);
                if (iVar5 < 0) {
                  iVar5 = FUN_0064df24(local_8);
                  if (iVar5 < 0) {
                    iVar5 = FUN_00655c2c(local_8);
                    if (iVar5 < 0) {
                      iVar5 = FUN_0072292c(local_8);
                      if (iVar5 < 0) {
                        iVar5 = FUN_006fcd44(local_8);
                        if (iVar5 < 0) {
                          iVar5 = FUN_006fa6f4(local_8);
                          if (iVar5 < 0) {
                            iVar5 = FUN_006bcde0(local_8);
                            if (iVar5 < 0) {
                              cVar2 = FUN_0069340c(local_8);
                              if (cVar2 == '\0') {
                                cVar2 = FUN_0069347c(local_8);
                                if (cVar2 == '\0') {
                                  cVar2 = FUN_00697070(local_8);
                                  if (cVar2 == '\0') {
                                    cVar2 = FUN_00696df0(local_8);
                                    if (cVar2 == '\0') {
                                      local_14 = 0;
                                    }
                                    else {
                                      local_14 = 4;
                                    }
                                  }
                                  else {
                                    local_14 = 6;
                                  }
                                }
                                else {
                                  local_14 = 5;
                                }
                              }
                              else {
                                local_14 = 5;
                              }
                            }
                            else {
                              local_14 = 4;
                            }
                          }
                          else {
                            local_14 = 8;
                          }
                        }
                        else {
                          local_14 = 8;
                        }
                      }
                      else {
                        local_14 = 8;
                      }
                    }
                    else {
                      local_14 = 7;
                    }
                  }
                  else {
                    local_14 = 8;
                  }
                }
                else {
                  local_14 = 8;
                }
              }
              else {
                local_14 = 8;
              }
            }
            else {
              local_14 = 8;
            }
          }
          else {
            local_14 = 8;
          }
        }
        else {
          local_14 = 1;
        }
        if (local_10 <= iVar3 + -1) {
          local_18 = ((iVar3 + -1) - local_10) + 1;
          local_c = local_10;
          do {
            *(undefined4 *)(*(int *)(param_1 + 4) + 4 + local_c * 0xc) = local_14;
            local_c = local_c + 1;
            local_18 = local_18 + -1;
          } while (local_18 != 0);
          local_18 = 0;
        }
      }
      else if ((*(short *)(*(int *)(param_1 + 4) + iVar3 * 0xc) == 0x7b) ||
              (*(short *)(*(int *)(param_1 + 4) + iVar3 * 0xc) == 0x7d)) {
        *(undefined4 *)(*(int *)(param_1 + 4) + 4 + iVar3 * 0xc) = 1;
        iVar3 = iVar3 + 1;
      }
      else {
        iVar3 = iVar3 + 1;
      }
      goto LAB_006ab130;
    }
    *(undefined4 *)(param_1 + 8) = 1;
    *(undefined4 *)(*(int *)(param_1 + 4) + 4 + iVar3 * 0xc) = 3;
    *(undefined4 *)(*(int *)(param_1 + 4) + 0x10 + iVar3 * 0xc) = 3;
    for (iVar3 = iVar3 + 2; iVar5 = FUN_00409a18(*(undefined4 *)(param_1 + 4)), iVar3 < iVar5;
        iVar3 = iVar3 + 1) {
      if (((iVar3 != 0) && (*(short *)(*(int *)(param_1 + 4) + -0xc + iVar3 * 0xc) == 0x2a)) &&
         (*(short *)(*(int *)(param_1 + 4) + iVar3 * 0xc) == 0x2f)) {
        *(undefined4 *)(*(int *)(param_1 + 4) + 4 + iVar3 * 0xc) = 3;
        iVar3 = iVar3 + 1;
        *(undefined4 *)(param_1 + 8) = 0;
        break;
      }
      *(undefined4 *)(*(int *)(param_1 + 4) + 4 + iVar3 * 0xc) = 3;
    }
  } while( true );
}
