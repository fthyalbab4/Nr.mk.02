// rea decompile_all
// name: FUN_006d3468
// address: 0x6d3468
// body: available
// range: 0x6d3468-0x6d3d6e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6d3496 (push 0x6d3d6f followed by fs-segment stack chaining); handler 0x6d3d6f lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006d3468(int param_1)

{
  undefined1 *puVar1;
  char cVar2;
  wchar_t *pwVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int unaff_EBX;
  int iVar7;
  undefined4 unaff_EDI;
  int iVar8;
  int *in_FS_OFFSET;
  bool bVar9;
  wchar_t *local_c4;
  wchar_t *local_c0;
  undefined4 local_bc;
  wchar_t *local_b8;
  wchar_t *local_b4;
  wchar_t *local_b0;
  wchar_t *local_ac;
  undefined4 local_a8;
  wchar_t *local_a4;
  wchar_t *local_a0;
  wchar_t *local_9c;
  wchar_t *local_98;
  wchar_t *local_94;
  undefined4 local_90;
  wchar_t *local_8c;
  wchar_t *local_88;
  undefined4 local_84;
  wchar_t *local_80;
  wchar_t *local_7c;
  undefined4 local_78;
  wchar_t *local_74;
  wchar_t *local_70;
  wchar_t *local_6c;
  undefined4 local_68;
  wchar_t *local_64;
  wchar_t *local_60;
  wchar_t *local_5c;
  wchar_t *local_58;
  wchar_t *local_54;
  wchar_t *local_50;
  wchar_t *local_4c;
  wchar_t *local_48;
  wchar_t *local_44;
  wchar_t *local_40;
  wchar_t *local_3c;
  wchar_t *local_38;
  wchar_t *local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  undefined1 *local_20;
  undefined1 *local_1c;
  int local_8;

  iVar6 = 0x18;
  do {
    local_8 = 0;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  local_1c = (undefined1 *)0x6d348b;
  local_24 = param_1;
  FUN_00408d1c(&local_20,&DAT_00656108);
  local_20 = &LAB_006d3d6f;
  local_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&local_24;
  local_28 = 0x6d349e;
  local_1c = &stack0xfffffffc;
  pwVar3 = (wchar_t *)FUN_00655b18();
  if (-1 < (int)((int)pwVar3 + -1)) {
    local_28 = 0;
    local_38 = pwVar3;
    do {
      iVar6 = local_28;
      local_28 = 0x6d34ba;
      cVar2 = FUN_00655b20(iVar6);
      iVar6 = local_28;
      if (cVar2 != '\0') {
        local_28 = 0x6d34ca;
        iVar6 = FUN_00655d50(iVar6);
        local_28 = 0x6d34d2;
        cVar2 = FUN_006ae554(*(undefined4 *)(iVar6 + 4));
        if (cVar2 == '\0') {
          local_2c = *(int *)PTR_DAT_00781994;
          local_30 = 0x800000;
          local_34 = L"In script ";
          local_38 =
          L"痿梸㶰m喍ꆴᦔx\x8b廨퐱\xffff둵챨洽贀끕璡砙謀\xe800ㅇￔ痿械㷤m㲡砨＀贰뱅ࢺ"
          ;
          FUN_00655b40(local_28,&local_4c);
          local_38 = local_4c;
          local_3c = L" line ";
          local_40 = L"痿梴㷌m喍ꆰᥴx\x8b䟨퐱\xffff끵\xe468洽ꄀ⠼xヿ䖍몼\b";
          FUN_0041666c(*(undefined4 *)PTR_DAT_00781994,&local_50);
          local_40 = local_50;
          local_44 = L" pos ";
          local_48 = L"痿械㷤m㲡砨＀贰뱅ࢺ";
          FUN_0041666c(*(undefined4 *)PTR_DAT_00781974,&local_54);
          local_48 = local_54;
          local_4c = L": ";
          local_24 = *(int *)PTR_DAT_0078283c;
          local_54 = L"喋림\x05";
          FUN_00408480(&local_48,8);
          local_54 = (wchar_t *)0x6d3551;
          FUN_006d1af4(local_24,local_48,5);
        }
      }
      local_28 = local_28 + 1;
      local_38 = (wchar_t *)((int)local_38 + -1);
    } while (local_38 != (wchar_t *)0x0);
  }
  local_28 = 0x6d3562;
  cVar2 = FUN_0071b5fc();
  if (cVar2 != '\0') {
    if (-1 < (int)((int)*(wchar_t **)PTR_DAT_00781710 + -1)) {
      local_2c = 0;
      local_38 = *(wchar_t **)PTR_DAT_00781710;
      do {
        if (*(int *)(*(int *)PTR_DAT_0078193c + local_2c * 4) != 0) {
          local_28 = 0;
          do {
            iVar6 = local_28 * 4;
            local_28 = 0x6d35b7;
            pwVar3 = (wchar_t *)
                     FUN_00409a18(*(undefined4 *)
                                   (*(int *)(*(int *)PTR_DAT_0078193c + local_2c * 4) + 0x1c + iVar6
                                   ));
            if (-1 < (int)pwVar3 + -1) {
              local_30 = 0;
              local_3c = pwVar3;
              do {
                iVar6 = *(int *)(*(int *)(*(int *)(*(int *)PTR_DAT_0078193c + local_2c * 4) + 0x1c +
                                         local_28 * 4) + local_30 * 4);
                if (iVar6 != 0) {
                  if (-1 < (int)((int)*(wchar_t **)(iVar6 + 8) + -1)) {
                    iVar7 = 0;
                    local_40 = *(wchar_t **)(iVar6 + 8);
                    do {
                      iVar8 = *(int *)(*(int *)(iVar6 + 4) + iVar7 * 4);
                      if (iVar8 != 0) {
                        pwVar3 = *(wchar_t **)(iVar8 + 0x20);
                        if (-1 < (int)((int)pwVar3 + -1)) {
                          iVar8 = 0;
                          local_44 = pwVar3;
                          do {
                            local_28 = 0x6d3631;
                            FUN_00407f0c(&local_8,*(undefined4 *)
                                                   (*(int *)(*(int *)(iVar6 + 4) + iVar7 * 4) + 0x4c
                                                   + iVar8 * 4));
                            if ((local_8 != 0) &&
                               (*(int *)(*(int *)(*(int *)(iVar6 + 4) + iVar7 * 4) + 0x24 +
                                        iVar8 * 4) != 2)) {
                              cVar2 = '\x01';
                              iVar4 = *(int *)(*(int *)(iVar6 + 4) + iVar7 * 4);
                              if (*(int *)(iVar4 + 0x14) - 1U < 2) {
                                if (*(int *)(iVar4 + 0xc) == 7) {
                                  local_28 = 0x6d366b;
                                  cVar2 = FUN_006ae554(local_8);
                                }
                                else {
                                  local_28 = 0x6d3675;
                                  cVar2 = FUN_006ae60c(local_8,iVar4,*(int *)(iVar4 + 0x14) + -3);
                                }
                              }
                              bVar9 = cVar2 == '\0';
                              if (bVar9) {
                                local_28 = 0x6d3690;
                                FUN_00408640(*(undefined4 *)
                                              (*(int *)(*(int *)(iVar6 + 4) + iVar7 * 4) + 0x18),
                                             L"action_execute_script");
                                iVar4 = local_2c;
                                if (bVar9) {
                                  local_28 = local_2c;
                                  local_2c = *(int *)PTR_DAT_00781994;
                                  local_30 = 0x800000;
                                  local_34 = L"In object ";
                                  local_38 = *(wchar_t **)(*(int *)PTR_DAT_00781da0 + local_2c * 4);
                                  local_3c = L", event ";
                                  local_40 =
                                  L"痿梨㹴m喍趤Ń跨퐯\xffffꑵ鑨派贀ꁕ잋\xe848⽺ￔ痿梠㷤m㲡砨＀贰걅઺"
                                  ;
                                  FUN_006d0df0(iVar4,0x800000,&local_5c);
                                  local_40 = local_5c;
                                  local_44 = L", action ";
                                  local_48 =
                                  L"痿梤㺔m喍讠䣇竨퐯\xffffꁵ\xe468洽ꄀ⠼xヿ䖍몬\n";
                                  FUN_0041666c(iVar7 + 1,&local_60);
                                  local_48 = local_60;
                                  local_4c = L", paramater ";
                                  local_50 = L"痿梠㷤m㲡砨＀贰걅઺";
                                  FUN_0041666c(iVar8 + -1,&local_64);
                                  local_50 = local_64;
                                  local_54 = L": ";
                                  local_24 = *(int *)PTR_DAT_0078283c;
                                  local_5c = L"喋리\b";
                                  FUN_00408480(&local_58,10);
                                  local_5c = L"Ꮹ\x01謀цҋ莘౸༇躅";
                                  FUN_006d1af4(local_24,local_58,8);
                                }
                                else if (*(int *)(*(int *)(*(int *)(iVar6 + 4) + iVar7 * 4) + 0xc)
                                         == 7) {
                                  local_28 = local_2c;
                                  local_2c = *(int *)PTR_DAT_00781994;
                                  local_30 = 0x800000;
                                  local_34 = L"In object ";
                                  local_38 = *(wchar_t **)(*(int *)PTR_DAT_00781da0 + local_2c * 4);
                                  local_3c = L", event ";
                                  local_40 =
                                  L"痿梘㹴m喍趔Ń\xf0e8퐮\xffff鑵뱨派贀違钡砙謀\xe800⻙ￔ痿梐㷤m㲡砨＀贰鱅઺"
                                  ;
                                  FUN_006d0df0(iVar4,0x800000,&local_6c);
                                  local_40 = local_6c;
                                  local_44 = L", action ";
                                  local_48 = (wchar_t *)0x6d377c;
                                  FUN_0041666c(iVar7 + 1,&local_70);
                                  local_48 = local_70;
                                  local_4c = L" at line ";
                                  local_50 = L"痿梐㷤m㲡砨＀贰鱅઺";
                                  FUN_0041666c(*(undefined4 *)PTR_DAT_00781994,&local_74);
                                  local_50 = local_74;
                                  local_54 = L": ";
                                  local_24 = *(int *)PTR_DAT_0078283c;
                                  local_5c = L"喋릜\b";
                                  FUN_00408480(&local_68,10);
                                  local_5c = (wchar_t *)0x6d37bf;
                                  FUN_006d1af4(local_24,local_68,8);
                                }
                                else {
                                  local_28 = local_2c;
                                  local_2c = *(int *)PTR_DAT_00781994;
                                  local_30 = 0x800000;
                                  local_34 = L"In object ";
                                  local_38 = *(wchar_t **)(*(int *)PTR_DAT_00781da0 + local_2c * 4);
                                  local_3c = L", event ";
                                  local_40 =
                                  L"痿梈㹴m喍趄Ń拨퐮\xffff葵\xe468洽ꄀ⠼xヿ䖍몌\b";
                                  FUN_006d0df0(iVar4,0x800000,&local_7c);
                                  local_40 = local_7c;
                                  local_44 = L", action ";
                                  local_48 = L"痿梄㷤m㲡砨＀贰豅ࢺ";
                                  FUN_0041666c(iVar7 + 1,&local_80);
                                  local_48 = local_80;
                                  local_4c = L": ";
                                  local_24 = *(int *)PTR_DAT_0078283c;
                                  local_54 = L"喋릌\b";
                                  FUN_00408480(&local_78,8);
                                  local_54 = (wchar_t *)0x6d3836;
                                  FUN_006d1af4(local_24,local_78,8);
                                }
                              }
                            }
                            iVar8 = iVar8 + 1;
                            local_44 = (wchar_t *)((int)local_44 + -1);
                          } while (local_44 != (wchar_t *)0x0);
                        }
                      }
                      iVar7 = iVar7 + 1;
                      local_40 = (wchar_t *)((int)local_40 + -1);
                    } while (local_40 != (wchar_t *)0x0);
                  }
                }
                local_30 = local_30 + 1;
                local_3c = (wchar_t *)((int)local_3c + -1);
              } while (local_3c != (wchar_t *)0x0);
            }
            local_28 = local_28 + 1;
          } while (local_28 != 0xc);
        }
        local_2c = local_2c + 1;
        local_38 = (wchar_t *)((int)local_38 + -1);
      } while (local_38 != (wchar_t *)0x0);
    }
    local_28 = 0x6d3874;
    pwVar3 = (wchar_t *)FUN_00692efc();
    if (-1 < (int)((int)pwVar3 + -1)) {
      local_2c = 0;
      local_38 = pwVar3;
      do {
        local_28 = 0x6d3890;
        iVar6 = FUN_00693134(local_2c);
        if ((iVar6 != 0) && (*(int *)(iVar6 + 0x2ec) != 0)) {
          local_28 = 0x6d38b5;
          FUN_00407f0c(&local_8,*(undefined4 *)(iVar6 + 0x2ec));
          local_28 = 0x6d38bd;
          cVar2 = FUN_006ae554(local_8);
          if (cVar2 == '\0') {
            local_28 = local_2c;
            local_2c = *(int *)PTR_DAT_00781994;
            local_30 = 0x800000;
            local_34 = L"In Room ";
            local_38 =
            L"뗿ｼ\xffffﱨ派栀㺼m閍ｸ\xffff钡砙謀\xe800ⵥￔ뗿ｸ\xffff\xe468洽ꄀ⠼xヿ䖍몀\a"
            ;
            FUN_00692f24(local_2c,&local_88);
            local_38 = local_88;
            local_3c = L", Room creation Code, ";
            local_40 = L" at line ";
            local_44 = L"뗿ｸ\xffff\xe468洽ꄀ⠼xヿ䖍몀\a";
            FUN_0041666c(*(undefined4 *)PTR_DAT_00781994,&local_8c);
            local_44 = local_8c;
            local_48 = L": ";
            local_24 = *(int *)PTR_DAT_0078283c;
            local_50 = L"喋릀\t";
            FUN_00408480(&local_84,7);
            local_50 = L"䗿￘챍蔏ｆ\xffff뗨ﯵ䣿삅谏Ĵ";
            FUN_006d1af4(local_24,local_84,9);
          }
        }
        local_2c = local_2c + 1;
        local_38 = (wchar_t *)((int)local_38 + -1);
      } while (local_38 != (wchar_t *)0x0);
    }
    local_28 = 0x6d3947;
    pwVar3 = (wchar_t *)FUN_00692efc();
    if (-1 < (int)((int)pwVar3 + -1)) {
      local_2c = 0;
      local_38 = pwVar3;
      do {
        local_28 = 0x6d3963;
        iVar6 = FUN_00693134(local_2c);
        if (iVar6 != 0) {
          if (-1 < (int)*(wchar_t **)(iVar6 + 0x2f0) + -1) {
            iVar7 = 0;
            local_3c = *(wchar_t **)(iVar6 + 0x2f0);
            do {
              local_28 = 0x6d398e;
              FUN_006575dc(iVar6,iVar7,&local_20);
              if (unaff_EBX != 0) {
                local_28 = 0x6d39a0;
                cVar2 = FUN_006ae554(unaff_EBX);
                if (cVar2 == '\0') {
                  local_28 = local_2c;
                  local_2c = *(int *)PTR_DAT_00781994;
                  local_30 = 0x800000;
                  local_34 = L"In Room ";
                  local_38 =
                  L"뗿ｰ\xffff㡨洿栀㽸m閍ｬ\xffff䖋\xe8ec郒\xfff5뗿ｬ\xffffꑨ洿贀梕\xffff诿\xe445槨퐬\xffff梵\xffff棿㿔m閍､\xffff䖋\xe8e8ⱐￔ뗿､\xffff뱨派贀悕\xffffꇿᦔx\x8b㏨퐬\xffff悵\xffff棿㷤m㲡砨＀贰璅\xffff뫿\r"
                  ;
                  FUN_00692f24(local_2c,&local_94);
                  local_38 = local_94;
                  local_3c = L" Instance creation code, ";
                  local_40 = L" object name: ";
                  local_44 =
                  L"뗿ｬ\xffffꑨ洿贀梕\xffff诿\xe445槨퐬\xffff梵\xffff棿㿔m閍､\xffff䖋\xe8e8ⱐￔ뗿､\xffff뱨派贀悕\xffffꇿᦔx\x8b㏨퐬\xffff悵\xffff棿㷤m㲡砨＀贰璅\xffff뫿\r"
                  ;
                  FUN_0062cabc(unaff_EDI,&local_98);
                  local_44 = local_98;
                  local_48 = L" at coordinate: ";
                  local_4c =
                  L"뗿ｨ\xffff푨洿贀撕\xffff诿\xe845僨퐬\xffff撵\xffff棿㺼m閍｠\xffff钡砙謀\xe800ⰳￔ뗿｠\xffff\xe468洽ꄀ⠼xヿ薍ｴ\xffffය"
                  ;
                  FUN_0041666c(local_20,&local_9c);
                  local_4c = local_9c;
                  local_50 = L",";
                  local_54 =
                  L"뗿､\xffff뱨派贀悕\xffffꇿᦔx\x8b㏨퐬\xffff悵\xffff棿㷤m㲡砨＀贰璅\xffff뫿\r"
                  ;
                  FUN_0041666c(local_1c,&local_a0);
                  local_54 = local_a0;
                  local_58 = L" at line ";
                  local_5c = L"뗿｠\xffff\xe468洽ꄀ⠼xヿ薍ｴ\xffffය";
                  FUN_0041666c(*(undefined4 *)PTR_DAT_00781994,&local_a4);
                  local_5c = local_a4;
                  local_60 = L": ";
                  local_24 = *(int *)PTR_DAT_0078283c;
                  local_68 = 0x6d3a5b;
                  FUN_00408480(&local_90,0xd);
                  local_68 = 0x6d3a6e;
                  FUN_006d1af4(local_24,local_90,9);
                }
              }
              iVar7 = iVar7 + 1;
              local_3c = (wchar_t *)((int)local_3c + -1);
            } while (local_3c != (wchar_t *)0x0);
          }
        }
        local_2c = local_2c + 1;
        local_38 = (wchar_t *)((int)local_38 + -1);
      } while (local_38 != (wchar_t *)0x0);
    }
    local_28 = 0x6d3a89;
    pwVar3 = (wchar_t *)FUN_006fa5e0();
    if (-1 < (int)((int)pwVar3 + -1)) {
      local_2c = 0;
      local_38 = pwVar3;
      do {
        local_28 = 0x6d3aa5;
        local_34 = (wchar_t *)FUN_006fa818(local_2c);
        if (local_34 != (wchar_t *)0x0) {
          if (-1 < (int)*(wchar_t **)(local_34 + 6) + -1) {
            local_30 = 0;
            local_3c = *(wchar_t **)(local_34 + 6);
            do {
              local_28 = 0x6d3ad7;
              iVar6 = FUN_005ade9c(local_34,local_30);
              if (iVar6 != 0) {
                if (-1 < (int)((int)*(wchar_t **)(iVar6 + 8) + -1)) {
                  iVar7 = 0;
                  local_40 = *(wchar_t **)(iVar6 + 8);
                  do {
                    local_28 = 0x6d3afc;
                    iVar8 = FUN_005a502c(iVar6,iVar7);
                    if (iVar8 != 0) {
                      pwVar3 = *(wchar_t **)(*(int *)(*(int *)(iVar6 + 4) + iVar7 * 4) + 0x20);
                      if (-1 < (int)((int)pwVar3 + -1)) {
                        iVar8 = 0;
                        local_44 = pwVar3;
                        do {
                          local_28 = 0x6d3b25;
                          iVar4 = FUN_005a502c(iVar6,iVar7);
                          local_28 = 0x6d3b31;
                          FUN_00407f0c(&local_8,*(undefined4 *)(iVar4 + 0x4c + iVar8 * 4));
                          if (local_8 != 0) {
                            cVar2 = '\x01';
                            iVar4 = *(int *)(*(int *)(iVar6 + 4) + iVar7 * 4);
                            if (*(int *)(iVar4 + 0x14) - 1U < 2) {
                              if (*(int *)(iVar4 + 0xc) == 7) {
                                local_28 = 0x6d3b5a;
                                cVar2 = FUN_006ae554(local_8);
                              }
                              else {
                                local_28 = 0x6d3b64;
                                cVar2 = FUN_006ae60c(local_8,iVar4,*(int *)(iVar4 + 0x14) + -3);
                              }
                            }
                            if (cVar2 == '\0') {
                              local_28 = local_2c;
                              local_2c = *(int *)PTR_DAT_00781994;
                              local_30 = 0x800000;
                              local_34 = L"In Timeline ";
                              local_38 = (wchar_t *)0x6d3b90;
                              FUN_006fa608(local_2c,&local_ac);
                              local_38 = local_ac;
                              local_3c = L", moment ";
                              local_40 =
                              L"閍ｔ\xffff믨퐪\xffff咵\xffff棿㹴m閍ｐ\xffff䎍\xe801⪢ￔ뗿ｐ\xffff뱨派贀䲕\xffffꇿᦔx\x8b藨퐪\xffff䲵\xffff棿㷤m㲡砨＀贰岅\xffff뫿\n"
                              ;
                              uVar5 = FUN_005adeb0(local_34,local_2c);
                              local_40 =
                              L"뗿ｔ\xffff瑨派贀傕\xffff跿Ńꋨ퐪\xffff債\xffff棿㺼m閍ｌ\xffff钡砙謀\xe800⪅ￔ뗿ｌ\xffff\xe468洽ꄀ⠼xヿ薍｜\xffff઺"
                              ;
                              FUN_0041666c(uVar5,&local_b0);
                              local_40 = local_b0;
                              local_44 = L", action ";
                              local_48 =
                              L"뗿ｐ\xffff뱨派贀䲕\xffffꇿᦔx\x8b藨퐪\xffff䲵\xffff棿㷤m㲡砨＀贰岅\xffff뫿\n"
                              ;
                              FUN_0041666c(iVar7 + 1,&local_b4);
                              local_48 = local_b4;
                              local_4c = L" at line ";
                              local_50 = L"뗿ｌ\xffff\xe468洽ꄀ⠼xヿ薍｜\xffff઺";
                              FUN_0041666c(*(undefined4 *)PTR_DAT_00781994,&local_b8);
                              local_50 = local_b8;
                              local_54 = L": ";
                              local_24 = *(int *)PTR_DAT_0078283c;
                              local_5c = L"開｜\xffff޹";
                              FUN_00408480(&local_a8,10);
                              local_5c =
                              L"ｇ쁍蔏ﻶ\xffffｃ쑍蔏ﻃ\xffff䗿ￔ졍蔏ﺐ\xffff䗿￘챍蔏﹕\xffff叨ﺐ䣿삅谏À"
                              ;
                              FUN_006d1af4(local_24,local_a8,7);
                            }
                          }
                          iVar8 = iVar8 + 1;
                          local_44 = (wchar_t *)((int)local_44 + -1);
                        } while (local_44 != (wchar_t *)0x0);
                      }
                    }
                    iVar7 = iVar7 + 1;
                    local_40 = (wchar_t *)((int)local_40 + -1);
                  } while (local_40 != (wchar_t *)0x0);
                }
              }
              local_30 = local_30 + 1;
              local_3c = (wchar_t *)((int)local_3c + -1);
            } while (local_3c != (wchar_t *)0x0);
          }
        }
        local_2c = local_2c + 1;
        local_38 = (wchar_t *)((int)local_38 + -1);
      } while (local_38 != (wchar_t *)0x0);
    }
    local_28 = 0x6d3c4d;
    pwVar3 = (wchar_t *)FUN_006bcca0();
    if (-1 < (int)((int)pwVar3 + -1)) {
      local_2c = 0;
      local_38 = pwVar3;
      do {
        local_28 = 0x6d3c69;
        iVar6 = FUN_006bccc8(local_2c);
        if ((iVar6 != 0) && (*(int *)(iVar6 + 8) != 0)) {
          local_28 = 0x6d3c88;
          FUN_00407f0c(&local_8,*(undefined4 *)(iVar6 + 8));
          local_28 = 0x6d3c90;
          cVar2 = FUN_006ae554(unaff_EBX);
          if (cVar2 == '\0') {
            local_28 = local_2c;
            local_2c = *(int *)PTR_DAT_00781994;
            local_30 = 0x800000;
            local_34 = L"In Trigger ";
            local_38 =
            L"뗿ｄ\xffff뱨派贀䂕\xffffꇿᦔx\x8b韨퐩\xffff䂵\xffff棿㷤m㲡砨＀贰䢅\xffff뫿\x06"
            ;
            FUN_006bcce4(local_2c,&local_c0);
            local_38 = local_c0;
            local_3c = L" at line ";
            local_40 = L"뗿｀\xffff\xe468洽ꄀ⠼xヿ薍ｈ\xffffں";
            FUN_0041666c(*(undefined4 *)PTR_DAT_00781994,&local_c4);
            local_40 = local_c4;
            local_44 = L": ";
            local_24 = *(int *)PTR_DAT_0078283c;
            local_4c = L"開ｈ\xffffહ";
            FUN_00408480(&local_bc,6);
            local_4c = L"䗿￘챍蔏ｋ\xffff䖋菠벸\x03";
            FUN_006d1af4(local_24,local_bc,10);
          }
        }
        local_2c = local_2c + 1;
        local_38 = (wchar_t *)((int)local_38 + -1);
      } while (local_38 != (wchar_t *)0x0);
    }
  }
  if (*(int *)(local_24 + 0x3bc) == 0) {
    local_28 = -1;
    local_2c = -1;
    local_30 = 0x8000;
    local_34 = L"쀳奚摙ႉ癨洽贀䂅\xffff뫿 ";
    FUN_006d1af4(local_24,L"<No errors were found>",0xffffffff);
  }
  puVar1 = local_1c;
  *in_FS_OFFSET = local_24;
  local_1c = &LAB_006d3d76;
  local_20 = (undefined1 *)0x6d3d58;
  thunk_FUN_00406e80(&local_c4,0x20,puVar1);
  local_20 = (undefined1 *)0x6d3d66;
  FUN_00408df4(&local_20,&DAT_00656108);
  local_20 = (undefined1 *)0x6d3d6e;
  thunk_FUN_00406e5c(&local_8);
  return;
}
