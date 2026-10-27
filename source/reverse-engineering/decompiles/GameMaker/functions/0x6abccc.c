// rea decompile_all
// name: FUN_006abccc
// address: 0x6abccc
// body: available
// range: 0x6abccc-0x6ac024 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6abceb (push 0x6ac025 followed by fs-segment stack chaining); handler 0x6ac025 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006abccc(int *param_1,int *param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar5;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  puStack_20 = &stack0xfffffffc;
  local_8 = 0;
  local_10 = 0;
  local_14 = 0;
  puStack_24 = &LAB_006ac025;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  uStack_2c = 0x6abcf6;
  local_c = param_3;
  FUN_006ab2bc(param_3);
  iVar3 = *param_1;
  if ((iVar3 != 0) && (*(short *)(iVar3 + -10) != 2)) {
    uStack_2c = 0x6abd10;
    iVar3 = FUN_00407048(param_1,*param_1);
  }
  iVar4 = 0;
  if (iVar3 != 0) {
    iVar4 = *(int *)(iVar3 + -4);
  }
  uVar5 = iVar4 == *param_2;
  if (*param_2 < iVar4) {
    FUN_00408034(&local_10,*(undefined2 *)(*param_1 + *param_2 * 2));
    uVar2 = local_10;
    FUN_00408034(&local_14,*(undefined2 *)(*param_1 + -2 + *param_2 * 2));
    FUN_0040839c(&local_8,local_14,uVar2);
    FUN_00408640(local_8,&DAT_006ac040);
    if ((bool)uVar5) {
      uStack_2c = local_c;
      FUN_006ab2d8(0x65,local_8,*param_2);
    }
    else {
      FUN_00408640(local_8,&DAT_006ac054);
      if ((bool)uVar5) {
        uStack_2c = local_c;
        FUN_006ab2d8(0x66,local_8,*param_2);
      }
      else {
        FUN_00408640(local_8,&DAT_006ac068);
        if ((bool)uVar5) {
          uStack_2c = local_c;
          FUN_006ab2d8(0x67,local_8,*param_2);
        }
        else {
          FUN_00408640(local_8,&DAT_006ac07c);
          if ((bool)uVar5) {
            uStack_2c = local_c;
            FUN_006ab2d8(0x68,local_8,*param_2);
          }
          else {
            FUN_00408640(local_8,&DAT_006ac090);
            if ((bool)uVar5) {
              uStack_2c = local_c;
              FUN_006ab2d8(0x69,local_8,*param_2);
            }
            else {
              FUN_00408640(local_8,&DAT_006ac0a4);
              if ((bool)uVar5) {
                uStack_2c = local_c;
                FUN_006ab2d8(0xc9,local_8,*param_2);
              }
              else {
                FUN_00408640(local_8,&DAT_006ac0b8);
                if ((bool)uVar5) {
                  uStack_2c = local_c;
                  FUN_006ab2d8(0xca,local_8,*param_2);
                }
                else {
                  FUN_00408640(local_8,&DAT_006ac0cc);
                  if ((bool)uVar5) {
                    uStack_2c = local_c;
                    FUN_006ab2d8(0xcd,local_8,*param_2);
                  }
                  else {
                    FUN_00408640(local_8,&DAT_006ac0e0);
                    if ((bool)uVar5) {
                      uStack_2c = local_c;
                      FUN_006ab2d8(0xce,local_8,*param_2);
                    }
                    else {
                      FUN_00408640(local_8,&DAT_006ac0f4);
                      if ((bool)uVar5) {
                        uStack_2c = local_c;
                        FUN_006ab2d8(0xcf,local_8,*param_2);
                      }
                      else {
                        FUN_00408640(local_8,&DAT_006ac108);
                        if ((bool)uVar5) {
                          uStack_2c = local_c;
                          FUN_006ab2d8(0xcf,local_8,*param_2);
                        }
                        else {
                          FUN_00408640(local_8,&DAT_006ac11c);
                          if ((bool)uVar5) {
                            uStack_2c = local_c;
                            FUN_006ab2d8(0xd0,local_8,*param_2);
                          }
                          else {
                            FUN_00408640(local_8,&DAT_006ac130);
                            if ((bool)uVar5) {
                              uStack_2c = local_c;
                              FUN_006ab2d8(0x72,local_8,*param_2);
                            }
                            else {
                              FUN_00408640(local_8,&DAT_006ac144);
                              if ((bool)uVar5) {
                                uStack_2c = local_c;
                                FUN_006ab2d8(0x73,local_8,*param_2);
                              }
                              else {
                                FUN_00408640(local_8,&DAT_006ac158);
                                if ((bool)uVar5) {
                                  uStack_2c = local_c;
                                  FUN_006ab2d8(0x74,local_8,*param_2);
                                }
                                else {
                                  FUN_00408640(local_8,&DAT_006ac16c);
                                  if ((bool)uVar5) {
                                    uStack_2c = local_c;
                                    FUN_006ab2d8(0xdd,local_8,*param_2);
                                  }
                                  else {
                                    FUN_00408640(local_8,&DAT_006ac180);
                                    if ((bool)uVar5) {
                                      uStack_2c = local_c;
                                      FUN_006ab2d8(0xde,local_8,*param_2);
                                    }
                                    else {
                                      uStack_2c = 0x6abfed;
                                      FUN_00408640(local_8,&DAT_006ac194);
                                      if ((bool)uVar5) {
                                        uStack_2c = local_c;
                                        FUN_006ab2d8(0xd8,local_8,*param_2);
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  puVar1 = puStack_24;
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_006ac02c;
  uStack_28 = 0x6ac01c;
  thunk_FUN_00406e80(&local_14,2,puVar1);
  uStack_28 = 0x6ac024;
  thunk_FUN_00406e5c(&local_8);
  return;
}
