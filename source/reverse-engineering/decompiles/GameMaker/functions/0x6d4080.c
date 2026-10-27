// rea decompile_all
// name: FUN_006d4080
// address: 0x6d4080
// body: available
// range: 0x6d4080-0x6d4a98 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6d40ae (push 0x6d4a99 followed by fs-segment stack chaining); handler 0x6d4a99 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006d4080(int param_1)

{
  undefined1 *puVar1;
  char cVar2;
  wchar_t *pwVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int unaff_EBX;
  undefined *puVar8;
  undefined4 unaff_EDI;
  int iVar9;
  int *in_FS_OFFSET;
  bool bVar10;
  int local_cc;
  wchar_t *local_c8;
  undefined4 local_c4;
  int local_c0;
  wchar_t *local_bc;
  wchar_t *local_b8;
  wchar_t *local_b4;
  undefined4 local_b0;
  int local_ac;
  undefined4 local_a8;
  wchar_t *local_a4;
  wchar_t *local_a0;
  wchar_t *local_9c;
  undefined4 local_98;
  int local_94;
  wchar_t *local_90;
  undefined4 local_8c;
  int local_88;
  wchar_t *local_84;
  undefined4 local_80;
  int local_7c;
  wchar_t *local_78;
  wchar_t *local_74;
  undefined4 local_70;
  int local_6c;
  wchar_t *local_68;
  wchar_t *local_64;
  undefined4 local_60;
  int local_5c;
  wchar_t *local_58;
  undefined4 local_54;
  undefined *local_50;
  wchar_t *local_4c;
  wchar_t *local_48;
  wchar_t *local_44;
  wchar_t *local_40;
  wchar_t *local_3c;
  wchar_t *local_38;
  wchar_t *local_34;
  int local_30;
  int local_2c;
  wchar_t *local_28;
  int local_24;
  undefined1 *local_20;
  undefined1 *local_1c;
  int local_8;

  iVar7 = 0x19;
  do {
    local_8 = 0;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  local_1c = (undefined1 *)0x6d40a3;
  local_24 = param_1;
  FUN_00408d1c(&local_20,&DAT_00656108);
  local_20 = &LAB_006d4a99;
  local_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&local_24;
  local_28 = L"蕈࿀튌";
  local_1c = &stack0xfffffffc;
  pwVar3 = (wchar_t *)FUN_00655b18();
  if (-1 < (int)pwVar3 + -1) {
    local_2c = 0;
    local_48 = pwVar3;
    do {
      local_28 = L"삄萏«";
      cVar2 = FUN_00655b20(local_2c);
      if (cVar2 != '\0') {
        pwVar3 = (wchar_t *)0x0;
        do {
          local_28 = (wchar_t *)0x6d40e4;
          iVar7 = FUN_00655d50(local_2c);
          local_28 = (wchar_t *)0x6d40f8;
          pwVar3 = (wchar_t *)
                   FUN_004107c0(*(undefined4 *)(local_24 + 0x4e5d4),*(undefined4 *)(iVar7 + 4),
                                (int)pwVar3 + 1);
          if (0 < (int)pwVar3) {
            local_30 = 1;
            if (0 < (int)pwVar3) {
              iVar7 = 1;
              local_4c = pwVar3;
              do {
                local_28 = (wchar_t *)0x6d4119;
                iVar4 = FUN_00655d50(local_2c);
                if (*(short *)(*(int *)(iVar4 + 4) + -2 + iVar7 * 2) == 0xd) {
                  local_30 = local_30 + 1;
                }
                iVar7 = iVar7 + 1;
                local_4c = (wchar_t *)((int)local_4c + -1);
              } while (local_4c != (wchar_t *)0x0);
            }
            iVar7 = local_30;
            local_28 = (wchar_t *)local_2c;
            local_2c = local_30;
            local_30 = 0x800000;
            local_34 = L"In script ";
            local_38 = L"痿梬䫘m喍讨푅࿨퐥\xffff꡵䖍몰\x04";
            FUN_00655b40(iVar7,&local_58);
            local_38 = local_58;
            local_3c = L" at line ";
            local_40 = L"痿趨끅Һ";
            FUN_0041666c(local_30,&local_5c);
            local_24 = local_5c;
            local_44 = L"喋린\x05";
            FUN_00408480(&local_54,4);
            local_44 = (wchar_t *)0x6d417d;
            FUN_006d1af4(local_24,local_54,5);
          }
        } while (pwVar3 != (wchar_t *)0x0);
      }
      local_2c = local_2c + 1;
      local_48 = (wchar_t *)((int)local_48 + -1);
    } while (local_48 != (wchar_t *)0x0);
  }
  local_28 = L"삄萏ࣇ";
  cVar2 = FUN_0071b5fc();
  if (cVar2 != '\0') {
    if (-1 < (int)*(wchar_t **)PTR_DAT_00781710 + -1) {
      local_34 = (wchar_t *)0x0;
      local_48 = *(wchar_t **)PTR_DAT_00781710;
      do {
        if (*(int *)(*(int *)PTR_DAT_0078193c + (int)local_34 * 4) != 0) {
          local_2c = 0;
          do {
            local_28 = L"蕈࿀鮌\x02䀀䖉잸책";
            pwVar3 = (wchar_t *)
                     FUN_00409a18(*(undefined4 *)
                                   (*(int *)(*(int *)PTR_DAT_0078193c + (int)local_34 * 4) + 0x1c +
                                   local_2c * 4));
            if (-1 < (int)pwVar3 + -1) {
              local_38 = (wchar_t *)0x0;
              local_4c = pwVar3;
              do {
                local_40 = *(wchar_t **)
                            (*(int *)(*(int *)(*(int *)PTR_DAT_0078193c + (int)local_34 * 4) + 0x1c
                                     + local_2c * 4) + (int)local_38 * 4);
                if ((local_40 != (wchar_t *)0x0) && (-1 < (int)(*(undefined **)(local_40 + 4) + -1))
                   ) {
                  local_3c = (wchar_t *)0x0;
                  local_50 = *(undefined **)(local_40 + 4);
                  do {
                    if (*(int *)(*(int *)(local_40 + 2) + (int)local_3c * 4) != 0) {
                      local_28 = (wchar_t *)0x0;
                      do {
                        iVar7 = (int)local_28 * 4;
                        local_28 = L"綃ü萏ǭ";
                        FUN_00407f0c(&local_8,*(undefined4 *)
                                               (*(int *)(*(int *)(local_40 + 2) + (int)local_3c * 4)
                                                + 0x4c + iVar7));
                        if (local_8 != 0) {
                          iVar7 = 0;
                          do {
                            local_28 = (wchar_t *)0x6d4293;
                            iVar7 = FUN_004107c0(*(undefined4 *)(local_24 + 0x4e5d4),local_8,
                                                 iVar7 + 1);
                            if (0 < iVar7) {
                              local_30 = 1;
                              bVar10 = iVar7 == 0;
                              if (0 < iVar7) {
                                iVar9 = 1;
                                iVar4 = iVar7;
                                do {
                                  iVar5 = local_8;
                                  if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
                                    local_28 = (wchar_t *)0x6d42cc;
                                    iVar5 = FUN_00407048(&local_8,local_8);
                                  }
                                  if (*(short *)(iVar5 + -2 + iVar9 * 2) == 0xd) {
                                    local_30 = local_30 + 1;
                                  }
                                  iVar9 = iVar9 + 1;
                                  iVar4 = iVar4 + -1;
                                  bVar10 = iVar4 == 0;
                                } while (!bVar10);
                              }
                              iVar4 = *(int *)(*(int *)(local_40 + 2) + (int)local_3c * 4);
                              local_28 = (wchar_t *)0x6d42f4;
                              FUN_00408640(*(undefined4 *)(iVar4 + 0x18),L"action_execute_script");
                              iVar9 = local_30;
                              if (bVar10) {
                                local_28 = local_34;
                                local_2c = local_30;
                                local_30 = 0x800000;
                                local_34 = L"In object ";
                                local_38 = *(wchar_t **)(*(int *)PTR_DAT_00781da0 + 0x1b52cc0);
                                local_3c = L", event ";
                                local_40 = (wchar_t *)0x6d4328;
                                FUN_006d0df0(iVar9,local_38,&local_64);
                                local_40 = local_64;
                                local_44 = L", action ";
                                local_48 = (wchar_t *)0x6d433c;
                                FUN_0041666c((int)local_3c + 1,&local_68);
                                local_48 = local_68;
                                local_4c = L", paramater ";
                                local_50 = (undefined *)0x6d4350;
                                FUN_0041666c((int)local_28 + -1,&local_6c);
                                local_24 = local_6c;
                                local_54 = 0x6d4360;
                                FUN_00408480(&local_60,8);
                                local_54 = 0x6d4370;
                                FUN_006d1af4(local_24,local_60,8);
                              }
                              else if (*(int *)(iVar4 + 0xc) == 7) {
                                local_28 = local_34;
                                local_2c = local_30;
                                local_30 = 0x800000;
                                local_34 = L"In object ";
                                local_38 = *(wchar_t **)(*(int *)PTR_DAT_00781da0 + 0x1b52cc0);
                                local_3c = L", event ";
                                local_40 =
                                L"痿梐䭴m喍讌졅\xe840⊫ￔ痿梌䫘m喍讈푅飨퐢\xffff衵䖍몔\b"
                                ;
                                FUN_006d0df0(iVar9,local_38,&local_74);
                                local_40 = local_74;
                                local_44 = L", action ";
                                local_48 = L"痿梌䫘m喍讈푅飨퐢\xffff衵䖍몔\b";
                                FUN_0041666c((int)local_3c + 1,&local_78);
                                local_48 = local_78;
                                local_4c = L" at line ";
                                local_50 = (undefined *)0x6d43d4;
                                FUN_0041666c(local_30,&local_7c);
                                local_24 = local_7c;
                                local_54 = 0x6d43e4;
                                FUN_00408480(&local_70,8);
                                local_54 = 0x6d43f4;
                                FUN_006d1af4(local_24,local_70,8);
                              }
                              else {
                                local_28 = local_34;
                                local_2c = local_30;
                                local_30 = 0x800000;
                                local_34 = L"In object ";
                                local_38 = *(wchar_t **)(*(int *)PTR_DAT_00781da0 + 0x1b52cc0);
                                local_3c = L", event ";
                                local_40 =
                                L"痿梀䭴m閍ｼ\xffff䖋䃈ⷨ퐢\xffff粵\xffff跿葅ں";
                                FUN_006d0df0(iVar9,local_38,&local_84);
                                local_40 = local_84;
                                local_44 = L", action ";
                                local_48 = L"뗿ｼ\xffff䖍몄\x06";
                                FUN_0041666c((int)local_3c + 1,&local_88);
                                local_24 = local_88;
                                local_4c = L"喋름\b";
                                FUN_00408480(&local_80,6);
                                local_4c = (wchar_t *)0x6d4462;
                                FUN_006d1af4(local_24,local_80,8);
                              }
                            }
                          } while (iVar7 != 0);
                        }
                        local_28 = (wchar_t *)((int)local_28 + 1);
                      } while (local_28 != (wchar_t *)0x8);
                    }
                    local_3c = (wchar_t *)((int)local_3c + 1);
                    local_50 = local_50 + -1;
                  } while (local_50 != (undefined *)0x0);
                }
                local_38 = (wchar_t *)((int)local_38 + 1);
                local_4c = (wchar_t *)((int)local_4c + -1);
              } while (local_4c != (wchar_t *)0x0);
            }
            local_2c = local_2c + 1;
          } while (local_2c != 0xc);
        }
        local_34 = (wchar_t *)((int)local_34 + 1);
        local_48 = (wchar_t *)((int)local_48 + -1);
      } while (local_48 != (wchar_t *)0x0);
    }
    local_28 = L"蕈࿀ᒌ\x01䀀䖉잼큅";
    pwVar3 = (wchar_t *)FUN_00692efc();
    if (-1 < (int)pwVar3 + -1) {
      local_34 = (wchar_t *)0x0;
      local_48 = pwVar3;
      do {
        local_28 = L"\xf08b\xf685萏ë";
        iVar7 = FUN_00693134(local_34);
        if ((iVar7 != 0) && (*(int *)(iVar7 + 0x2ec) != 0)) {
          local_28 = (wchar_t *)0x6d44ee;
          FUN_00407f0c(&local_8,*(undefined4 *)(iVar7 + 0x2ec));
          pwVar3 = (wchar_t *)0x0;
          do {
            local_28 = (wchar_t *)0x6d4504;
            pwVar3 = (wchar_t *)
                     FUN_004107c0(*(undefined4 *)(local_24 + 0x4e5d4),local_8,(int)pwVar3 + 1);
            if (0 < (int)pwVar3) {
              local_30 = 1;
              if (0 < (int)pwVar3) {
                iVar7 = 1;
                local_4c = pwVar3;
                do {
                  iVar4 = local_8;
                  if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
                    local_28 = L"荦硼෾͵䗿䟔䷿疸诒큅譐푅桐";
                    iVar4 = FUN_00407048(&local_8,local_8);
                  }
                  if (*(short *)(iVar4 + -2 + iVar7 * 2) == 0xd) {
                    local_30 = local_30 + 1;
                  }
                  iVar7 = iVar7 + 1;
                  local_4c = (wchar_t *)((int)local_4c + -1);
                } while (local_4c != (wchar_t *)0x0);
              }
              local_28 = local_34;
              local_2c = local_30;
              local_30 = 0x800000;
              local_34 = L"In Room ";
              local_38 = (wchar_t *)0x6d456f;
              FUN_00692f24(L"In Room ",&local_90);
              local_38 = local_90;
              local_3c = L", Room creation Code, ";
              local_40 = L" at line ";
              local_44 = L"뗿ｰ\xffff薍ｸ\xffffֺ";
              FUN_0041666c(local_30,&local_94);
              local_24 = local_94;
              local_48 = L"開ｸ\xffffহ";
              FUN_00408480(&local_8c,5);
              local_48 = (wchar_t *)0x6d45b6;
              FUN_006d1af4(local_24,local_8c,9);
            }
          } while (pwVar3 != (wchar_t *)0x0);
        }
        local_34 = (wchar_t *)((int)local_34 + 1);
        local_48 = (wchar_t *)((int)local_48 + -1);
      } while (local_48 != (wchar_t *)0x0);
    }
    local_28 = L"蕈࿀貌\x01䀀䖉잼큅";
    pwVar3 = (wchar_t *)FUN_00692efc();
    if (-1 < (int)pwVar3 + -1) {
      local_34 = (wchar_t *)0x0;
      local_48 = pwVar3;
      do {
        local_28 = L"\xf08b\xf685萏ţ";
        iVar7 = FUN_00693134(local_34);
        if ((iVar7 != 0) && (-1 < (int)*(wchar_t **)(iVar7 + 0x2f0) + -1)) {
          local_28 = (wchar_t *)0x0;
          local_4c = *(wchar_t **)(iVar7 + 0x2f0);
          do {
            pwVar3 = local_28;
            local_28 = L"綃ô萏Ħ";
            FUN_006575dc(iVar7,pwVar3,&local_20);
            if (unaff_EBX != 0) {
              local_28 = (wchar_t *)0x6d4631;
              FUN_00407f0c(&local_8,unaff_EBX);
              puVar8 = (undefined *)0x0;
              do {
                local_28 = (wchar_t *)0x6d4647;
                puVar8 = (undefined *)
                         FUN_004107c0(*(undefined4 *)(local_24 + 0x4e5d4),local_8,puVar8 + 1);
                if (0 < (int)puVar8) {
                  local_30 = 1;
                  if (0 < (int)puVar8) {
                    iVar4 = 1;
                    local_50 = puVar8;
                    do {
                      iVar9 = local_8;
                      if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
                        local_28 = L"荦硼෾͵䗿䟔䷿疴诒큅譐푅桐";
                        iVar9 = FUN_00407048(&local_8,local_8);
                      }
                      if (*(short *)(iVar9 + -2 + iVar4 * 2) == 0xd) {
                        local_30 = local_30 + 1;
                      }
                      iVar4 = iVar4 + 1;
                      local_50 = local_50 + -1;
                    } while (local_50 != (undefined *)0x0);
                  }
                  local_28 = local_34;
                  local_2c = local_30;
                  local_30 = 0x800000;
                  local_34 = L"In Room ";
                  local_38 = (wchar_t *)0x6d46b2;
                  FUN_00692f24(L"In Room ",&local_9c);
                  local_38 = local_9c;
                  local_3c = L" Instance creation code, ";
                  local_40 = L" object name: ";
                  local_44 = (wchar_t *)0x6d46d0;
                  FUN_0062cabc(unaff_EDI,&local_a0);
                  local_44 = local_a0;
                  local_48 = L" at coordinate: ";
                  local_4c =
                  L"뗿｠\xffff둨浌贀岕\xffff诿\xe845櫨퐟\xffff岵\xffff棿䫘m閍ｘ\xffff䖋\xe8d4ὑￔ뗿ｘ\xffff薍ｬ\xffff஺"
                  ;
                  FUN_0041666c(local_20,&local_a4);
                  local_4c = local_a4;
                  local_50 = &DAT_006d4cb4;
                  local_54 = 0x6d4702;
                  FUN_0041666c(local_1c,&local_a8);
                  local_54 = local_a8;
                  local_58 = L" at line ";
                  local_5c = 0x6d471b;
                  FUN_0041666c(local_30,&local_ac);
                  local_24 = local_ac;
                  local_60 = 0x6d4731;
                  FUN_00408480(&local_98,0xb);
                  local_60 = 0x6d4744;
                  FUN_006d1af4(local_24,local_98,9);
                }
              } while (puVar8 != (undefined *)0x0);
            }
            local_28 = (wchar_t *)((int)local_28 + 1);
            local_4c = (wchar_t *)((int)local_4c + -1);
          } while (local_4c != (wchar_t *)0x0);
        }
        local_34 = (wchar_t *)((int)local_34 + 1);
        local_48 = (wchar_t *)((int)local_48 + -1);
      } while (local_48 != (wchar_t *)0x0);
    }
    local_28 = (wchar_t *)0x6d4769;
    pwVar3 = (wchar_t *)FUN_006fa5e0();
    if (-1 < (int)pwVar3 + -1) {
      local_34 = (wchar_t *)0x0;
      local_48 = pwVar3;
      do {
        local_28 = L"䖉菀쁽ༀ낄\x01謀쁅䂋䠌삅谏ơ";
        local_44 = (wchar_t *)FUN_006fa818(local_34);
        if ((local_44 != (wchar_t *)0x0) && (-1 < (int)*(wchar_t **)(local_44 + 6) + -1)) {
          local_38 = (wchar_t *)0x0;
          local_4c = *(wchar_t **)(local_44 + 6);
          do {
            local_28 = L"䖉菄쑽ༀ犄\x01謀쑅䂋䠈삅谏ţ";
            local_40 = (wchar_t *)FUN_005ade9c(local_44,local_38);
            if ((local_40 != (wchar_t *)0x0) && (-1 < (int)(*(undefined **)(local_40 + 4) + -1))) {
              local_3c = (wchar_t *)0x0;
              local_50 = *(undefined **)(local_40 + 4);
              do {
                local_28 = L"삅萏Ĺ";
                iVar7 = FUN_005a502c(local_40,local_3c);
                if (iVar7 != 0) {
                  do {
                    local_28 = (wchar_t *)0x6d4801;
                    iVar4 = FUN_005a502c(local_40,local_3c);
                    iVar7 = (int)local_28 * 4;
                    local_28 = L"綃ü萏ă";
                    FUN_00407f0c(&local_8,*(undefined4 *)(iVar4 + 0x4c + iVar7));
                    if (local_8 != 0) {
                      iVar7 = 0;
                      do {
                        local_28 = (wchar_t *)0x6d4830;
                        iVar7 = FUN_004107c0(*(undefined4 *)(local_24 + 0x4e5d4),local_8,iVar7 + 1);
                        if (0 < iVar7) {
                          local_30 = 1;
                          if (0 < iVar7) {
                            iVar9 = 1;
                            iVar4 = iVar7;
                            do {
                              iVar5 = local_8;
                              if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
                                local_28 = L"荦硼෾͵䗿䟔畎诔큅譐푅桐";
                                iVar5 = FUN_00407048(&local_8,local_8);
                              }
                              if (*(short *)(iVar5 + -2 + iVar9 * 2) == 0xd) {
                                local_30 = local_30 + 1;
                              }
                              iVar9 = iVar9 + 1;
                              iVar4 = iVar4 + -1;
                            } while (iVar4 != 0);
                          }
                          local_28 = local_34;
                          local_2c = local_30;
                          local_30 = 0x800000;
                          local_34 = L"In Timeline ";
                          local_38 =
                          L"뗿ｐ\xffff\xec68浌謀챕䖋\xe8c0阂￭閍ｌ\xffff돨퐝\xffff䲵\xffff棿䭴m閍ｈ\xffff䖋䃈駨퐝\xffff䢵\xffff棿䫘m閍ｄ\xffff䖋\xe8d4ᶀￔ뗿ｄ\xffff薍ｔ\xffffࢺ"
                          ;
                          FUN_006fa608(L"In Timeline ",&local_b4);
                          local_38 = local_b4;
                          local_3c = L", moment ";
                          local_40 =
                          L"閍ｌ\xffff돨퐝\xffff䲵\xffff棿䭴m閍ｈ\xffff䖋䃈駨퐝\xffff䢵\xffff棿䫘m閍ｄ\xffff䖋\xe8d4ᶀￔ뗿ｄ\xffff薍ｔ\xffffࢺ"
                          ;
                          uVar6 = FUN_005adeb0(local_44,local_b4);
                          local_40 = (wchar_t *)0x6d48b9;
                          FUN_0041666c(uVar6,&local_b8);
                          local_40 = local_b8;
                          local_44 = L", action ";
                          local_48 = (wchar_t *)0x6d48d3;
                          FUN_0041666c((int)local_3c + 1,&local_bc);
                          local_48 = local_bc;
                          local_4c = L" at line ";
                          local_50 = (undefined *)0x6d48ec;
                          FUN_0041666c(local_30,&local_c0);
                          local_24 = local_c0;
                          local_54 = 0x6d4902;
                          FUN_00408480(&local_b0,8);
                          local_54 = 0x6d4915;
                          FUN_006d1af4(local_24,local_b0,7);
                        }
                      } while (iVar7 != 0);
                    }
                  } while (local_28 != (wchar_t *)0x7);
                }
                local_3c = (wchar_t *)((int)local_3c + 1);
                local_50 = local_50 + -1;
              } while (local_50 != (undefined *)0x0);
            }
            local_38 = (wchar_t *)((int)local_38 + 1);
            local_4c = (wchar_t *)((int)local_4c + -1);
          } while (local_4c != (wchar_t *)0x0);
        }
        local_34 = (wchar_t *)((int)local_34 + 1);
        local_48 = (wchar_t *)((int)local_48 + -1);
      } while (local_48 != (wchar_t *)0x0);
    }
    local_28 = L"蕈࿀ঌ\x01䀀䖉잼큅";
    pwVar3 = (wchar_t *)FUN_006bcca0();
    if (-1 < (int)pwVar3 + -1) {
      local_34 = (wchar_t *)0x0;
      local_48 = pwVar3;
      do {
        local_28 = (wchar_t *)0x6d496f;
        iVar7 = FUN_006bccc8(local_34);
        if ((iVar7 != 0) && (*(int *)(iVar7 + 8) != 0)) {
          local_28 = (wchar_t *)0x6d498e;
          FUN_00407f0c(&local_8,*(undefined4 *)(iVar7 + 8));
          pwVar3 = (wchar_t *)0x0;
          do {
            local_28 = (wchar_t *)0x6d49a4;
            pwVar3 = (wchar_t *)
                     FUN_004107c0(*(undefined4 *)(local_24 + 0x4e5d4),local_8,(int)pwVar3 + 1);
            if (0 < (int)pwVar3) {
              local_30 = 1;
              if (0 < (int)pwVar3) {
                iVar7 = 1;
                local_4c = pwVar3;
                do {
                  iVar4 = local_8;
                  if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
                    local_28 = L"荦硼෾͵䗿䟔䷿疸诒큅譐푅桐";
                    iVar4 = FUN_00407048(&local_8,local_8);
                  }
                  if (*(short *)(iVar4 + -2 + iVar7 * 2) == 0xd) {
                    local_30 = local_30 + 1;
                  }
                  iVar7 = iVar7 + 1;
                  local_4c = (wchar_t *)((int)local_4c + -1);
                } while (local_4c != (wchar_t *)0x0);
              }
              local_28 = local_34;
              local_2c = local_30;
              local_30 = 0x800000;
              local_34 = L"In Trigger ";
              local_38 = (wchar_t *)0x6d4a0f;
              FUN_006bcce4(L"In Trigger ",&local_c8);
              local_38 = local_c8;
              local_3c = L" at line ";
              local_40 = L"뗿Ｘ\xffff薍｀\xffffҺ";
              FUN_0041666c(local_30,&local_cc);
              local_24 = local_cc;
              local_44 = L"開｀\xffffહ";
              FUN_00408480(&local_c4,4);
              local_44 = (wchar_t *)0x6d4a51;
              FUN_006d1af4(local_24,local_c4,10);
            }
          } while (pwVar3 != (wchar_t *)0x0);
        }
        local_34 = (wchar_t *)((int)local_34 + 1);
        local_48 = (wchar_t *)((int)local_48 + -1);
      } while (local_48 != (wchar_t *)0x0);
    }
  }
  puVar1 = local_1c;
  *in_FS_OFFSET = local_24;
  local_1c = &LAB_006d4aa0;
  local_20 = (undefined1 *)0x6d4a82;
  thunk_FUN_00406e80(&local_cc,0x1f,puVar1);
  local_20 = (undefined1 *)0x6d4a90;
  FUN_00408df4(&local_20,&DAT_00656108);
  local_20 = (undefined1 *)0x6d4a98;
  thunk_FUN_00406e5c(&local_8);
  return;
}
