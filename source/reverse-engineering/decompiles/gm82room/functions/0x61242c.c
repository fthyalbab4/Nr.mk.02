// rea decompile_all
// name: FUN_0061242c
// address: 0x61242c
// body: available
// range: 0x61242c-0x612784 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x61244b (push 0x612785 followed by fs-segment stack chaining); handler 0x612785 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0061242c(int *param_1,int *param_2,undefined4 param_3)

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
  puStack_24 = &LAB_00612785;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  uStack_2c = 0x612456;
  local_c = param_3;
  FUN_006119f0(param_3);
  iVar3 = *param_1;
  if ((iVar3 != 0) && (*(short *)(iVar3 + -10) != 2)) {
    uStack_2c = 0x612470;
    iVar3 = FUN_00407488(param_1,*param_1);
  }
  iVar4 = 0;
  if (iVar3 != 0) {
    iVar4 = *(int *)(iVar3 + -4);
  }
  uVar5 = iVar4 == *param_2;
  if (*param_2 < iVar4) {
    FUN_00408310(&local_10,*(undefined2 *)(*param_1 + *param_2 * 2));
    uVar2 = local_10;
    FUN_00408310(&local_14,*(undefined2 *)(*param_1 + -2 + *param_2 * 2));
    FUN_00408678(&local_8,local_14,uVar2);
    FUN_0040891c(local_8,&DAT_006127a0);
    if ((bool)uVar5) {
      uStack_2c = local_c;
      FUN_00611a0c(0x65,local_8,*param_2);
    }
    else {
      FUN_0040891c(local_8,&DAT_006127b4);
      if ((bool)uVar5) {
        uStack_2c = local_c;
        FUN_00611a0c(0x66,local_8,*param_2);
      }
      else {
        FUN_0040891c(local_8,&DAT_006127c8);
        if ((bool)uVar5) {
          uStack_2c = local_c;
          FUN_00611a0c(0x67,local_8,*param_2);
        }
        else {
          FUN_0040891c(local_8,&DAT_006127dc);
          if ((bool)uVar5) {
            uStack_2c = local_c;
            FUN_00611a0c(0x68,local_8,*param_2);
          }
          else {
            FUN_0040891c(local_8,&DAT_006127f0);
            if ((bool)uVar5) {
              uStack_2c = local_c;
              FUN_00611a0c(0x69,local_8,*param_2);
            }
            else {
              FUN_0040891c(local_8,&DAT_00612804);
              if ((bool)uVar5) {
                uStack_2c = local_c;
                FUN_00611a0c(0xc9,local_8,*param_2);
              }
              else {
                FUN_0040891c(local_8,&PTR_DAT_00612818);
                if ((bool)uVar5) {
                  uStack_2c = local_c;
                  FUN_00611a0c(0xca,local_8,*param_2);
                }
                else {
                  FUN_0040891c(local_8,&DAT_0061282c);
                  if ((bool)uVar5) {
                    uStack_2c = local_c;
                    FUN_00611a0c(0xcd,local_8,*param_2);
                  }
                  else {
                    FUN_0040891c(local_8,&DAT_00612840);
                    if ((bool)uVar5) {
                      uStack_2c = local_c;
                      FUN_00611a0c(0xce,local_8,*param_2);
                    }
                    else {
                      FUN_0040891c(local_8,&DAT_00612854);
                      if ((bool)uVar5) {
                        uStack_2c = local_c;
                        FUN_00611a0c(0xcf,local_8,*param_2);
                      }
                      else {
                        FUN_0040891c(local_8,&DAT_00612868);
                        if ((bool)uVar5) {
                          uStack_2c = local_c;
                          FUN_00611a0c(0xcf,local_8,*param_2);
                        }
                        else {
                          FUN_0040891c(local_8,&DAT_0061287c);
                          if ((bool)uVar5) {
                            uStack_2c = local_c;
                            FUN_00611a0c(0xd0,local_8,*param_2);
                          }
                          else {
                            FUN_0040891c(local_8,&DAT_00612890);
                            if ((bool)uVar5) {
                              uStack_2c = local_c;
                              FUN_00611a0c(0x72,local_8,*param_2);
                            }
                            else {
                              FUN_0040891c(local_8,&DAT_006128a4);
                              if ((bool)uVar5) {
                                uStack_2c = local_c;
                                FUN_00611a0c(0x73,local_8,*param_2);
                              }
                              else {
                                FUN_0040891c(local_8,&DAT_006128b8);
                                if ((bool)uVar5) {
                                  uStack_2c = local_c;
                                  FUN_00611a0c(0x74,local_8,*param_2);
                                }
                                else {
                                  FUN_0040891c(local_8,&DAT_006128cc);
                                  if ((bool)uVar5) {
                                    uStack_2c = local_c;
                                    FUN_00611a0c(0xdd,local_8,*param_2);
                                  }
                                  else {
                                    FUN_0040891c(local_8,&DAT_006128e0);
                                    if ((bool)uVar5) {
                                      uStack_2c = local_c;
                                      FUN_00611a0c(0xde,local_8,*param_2);
                                    }
                                    else {
                                      uStack_2c = 0x61274d;
                                      FUN_0040891c(local_8,&PTR_LAB_006128f4);
                                      if ((bool)uVar5) {
                                        uStack_2c = local_c;
                                        FUN_00611a0c(0xd8,local_8,*param_2);
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
  puStack_24 = &LAB_0061278c;
  uStack_28 = 0x61277c;
  thunk_FUN_004072fc(&local_14,2,puVar1);
  uStack_28 = 0x612784;
  thunk_FUN_004072d8(&local_8);
  return;
}
