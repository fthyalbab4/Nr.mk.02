// rea decompile_all
// name: FUN_006ab568
// address: 0x6ab568
// body: available
// range: 0x6ab568-0x6aba59 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6ab58b (push 0x6aba5a followed by fs-segment stack chaining); handler 0x6aba5a lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006ab568(int *param_1,int *param_2,undefined4 param_3)

{
  ushort uVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  bool bVar4;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 local_14;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;

  puStack_24 = &stack0xfffffffc;
  local_14 = 0;
  local_8 = 0;
  puStack_28 = &LAB_006aba5a;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  local_c = param_3;
  FUN_006ab2bc(param_3);
  FUN_00407f0c(&local_8,0);
  local_10 = *param_2;
  do {
    FUN_00408034(&local_14,*(undefined2 *)(*param_1 + -2 + *param_2 * 2));
    FUN_004082dc(&local_8,local_14);
    *param_2 = *param_2 + 1;
    FUN_00407058(param_1);
    iVar3 = FUN_00408238();
    bVar4 = iVar3 == *param_2;
    if (iVar3 < *param_2) break;
    uVar1 = *(ushort *)(*param_1 + -2 + *param_2 * 2);
  } while ((((0x60 < uVar1) && (uVar1 < 0x7b)) ||
           ((0x40 < *(ushort *)(*param_1 + -2 + *param_2 * 2) &&
            (*(ushort *)(*param_1 + -2 + *param_2 * 2) < 0x5b)))) ||
          (((0x2f < *(ushort *)(*param_1 + -2 + *param_2 * 2) &&
            (*(ushort *)(*param_1 + -2 + *param_2 * 2) < 0x3a)) ||
           (bVar4 = false, *(short *)(*param_1 + -2 + *param_2 * 2) == 0x5f))));
  FUN_00408640(local_8,L"begin");
  if (bVar4) {
    uStack_30 = local_c;
    FUN_006ab2d8(0xb,local_8,local_10);
  }
  else {
    FUN_00408640(local_8,&DAT_006aba8c);
    if (bVar4) {
      uStack_30 = local_c;
      FUN_006ab2d8(0xc,local_8,local_10);
    }
    else {
      FUN_00408640(local_8,&DAT_006abaa0);
      if (bVar4) {
        uStack_30 = local_c;
        FUN_006ab2d8(0xd,local_8,local_10);
      }
      else {
        FUN_00408640(local_8,L"then");
        if (bVar4) {
          uStack_30 = local_c;
          FUN_006ab2d8(0xe,local_8,local_10);
        }
        else {
          FUN_00408640(local_8,L"else");
          if (bVar4) {
            uStack_30 = local_c;
            FUN_006ab2d8(0xf,local_8,local_10);
          }
          else {
            FUN_00408640(local_8,L"while");
            if (bVar4) {
              uStack_30 = local_c;
              FUN_006ab2d8(0x10,local_8,local_10);
            }
            else {
              FUN_00408640(local_8,&DAT_006abafc);
              if (bVar4) {
                uStack_30 = local_c;
                FUN_006ab2d8(0x11,local_8,local_10);
              }
              else {
                FUN_00408640(local_8,&DAT_006abb10);
                if (bVar4) {
                  uStack_30 = local_c;
                  FUN_006ab2d8(0x12,local_8,local_10);
                }
                else {
                  FUN_00408640(local_8,L"with");
                  if (bVar4) {
                    uStack_30 = local_c;
                    FUN_006ab2d8(0x18,local_8,local_10);
                  }
                  else {
                    FUN_00408640(local_8,L"until");
                    if (bVar4) {
                      uStack_30 = local_c;
                      FUN_006ab2d8(0x13,local_8,local_10);
                    }
                    else {
                      FUN_00408640(local_8,L"repeat");
                      if (bVar4) {
                        uStack_30 = local_c;
                        FUN_006ab2d8(0x14,local_8,local_10);
                      }
                      else {
                        FUN_00408640(local_8,L"exit");
                        if (bVar4) {
                          uStack_30 = local_c;
                          FUN_006ab2d8(0x15,local_8,local_10);
                        }
                        else {
                          FUN_00408640(local_8,L"return");
                          if (bVar4) {
                            uStack_30 = local_c;
                            FUN_006ab2d8(0x19,local_8,local_10);
                          }
                          else {
                            FUN_00408640(local_8,L"break");
                            if (bVar4) {
                              uStack_30 = local_c;
                              FUN_006ab2d8(0x16,local_8,local_10);
                            }
                            else {
                              FUN_00408640(local_8,L"continue");
                              if (bVar4) {
                                uStack_30 = local_c;
                                FUN_006ab2d8(0x17,local_8,local_10);
                              }
                              else {
                                FUN_00408640(local_8,L"switch");
                                if (bVar4) {
                                  uStack_30 = local_c;
                                  FUN_006ab2d8(0x1a,local_8,local_10);
                                }
                                else {
                                  FUN_00408640(local_8,L"case");
                                  if (bVar4) {
                                    uStack_30 = local_c;
                                    FUN_006ab2d8(0x1b,local_8,local_10);
                                  }
                                  else {
                                    FUN_00408640(local_8,L"default");
                                    if (bVar4) {
                                      uStack_30 = local_c;
                                      FUN_006ab2d8(0x1c,local_8,local_10);
                                    }
                                    else {
                                      FUN_00408640(local_8,&DAT_006abc2c);
                                      if (bVar4) {
                                        uStack_30 = local_c;
                                        FUN_006ab2d8(0xc9,local_8,local_10);
                                      }
                                      else {
                                        FUN_00408640(local_8,&DAT_006abc40);
                                        if (bVar4) {
                                          uStack_30 = local_c;
                                          FUN_006ab2d8(0xca,local_8,local_10);
                                        }
                                        else {
                                          FUN_00408640(local_8,&DAT_006abc54);
                                          if (bVar4) {
                                            uStack_30 = local_c;
                                            FUN_006ab2d8(0xcb,local_8,local_10);
                                          }
                                          else {
                                            FUN_00408640(local_8,&DAT_006abc68);
                                            if (bVar4) {
                                              uStack_30 = local_c;
                                              FUN_006ab2d8(0xd6,local_8,local_10);
                                            }
                                            else {
                                              FUN_00408640(local_8,&DAT_006abc7c);
                                              if (bVar4) {
                                                uStack_30 = local_c;
                                                FUN_006ab2d8(0xd7,local_8,local_10);
                                              }
                                              else {
                                                FUN_00408640(local_8,&DAT_006abc90);
                                                if (bVar4) {
                                                  uStack_30 = local_c;
                                                  FUN_006ab2d8(0xd8,local_8,local_10);
                                                }
                                                else {
                                                  FUN_00408640(local_8,&DAT_006abca4);
                                                  if (bVar4) {
                                                    uStack_30 = local_c;
                                                    FUN_006ab2d8(0x1d,local_8,local_10);
                                                  }
                                                  else {
                                                    FUN_00408640(local_8,L"globalvar");
                                                    if (bVar4) {
                                                      uStack_30 = local_c;
                                                      FUN_006ab2d8(0x1e,local_8,local_10);
                                                    }
                                                    else {
                                                      uStack_30 = local_c;
                                                      FUN_006ab2d8(0,local_8,local_10);
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
              }
            }
          }
        }
      }
    }
  }
  puVar2 = puStack_28;
  *in_FS_OFFSET = uStack_30;
  puStack_28 = &LAB_006aba61;
  uStack_2c = 0x6aba51;
  thunk_FUN_00406e5c(&local_14,uStack_30,puVar2);
  uStack_2c = 0x6aba59;
  thunk_FUN_00406e5c(&local_8);
  return;
}
