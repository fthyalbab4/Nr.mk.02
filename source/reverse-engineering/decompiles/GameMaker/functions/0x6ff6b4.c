// rea decompile_all
// name: FUN_006ff6b4
// address: 0x6ff6b4
// body: available
// range: 0x6ff6b4-0x6ffa19 inclusive
// range: 0x6ffa5a-0x6ffd6c inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6ff705 (push 0x6ffd6d followed by fs-segment stack chaining); handler 0x6ffd6d lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006ff6b4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                 undefined1 *param_5)

{
  wchar_t *pwVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *in_FS_OFFSET;
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 *local_12c;
  int local_128;
  int local_124;
  int local_120;
  int local_11c;
  int local_118;
  undefined4 local_114 [44];
  undefined4 uStack_64;
  undefined4 *puStack_60;
  undefined4 uStack_5c;
  undefined4 *puStack_58;
  undefined4 uStack_54;
  wchar_t *pwStack_50;
  undefined4 *puStack_4c;
  undefined4 uStack_48;
  undefined4 *puStack_44;
  undefined4 uStack_40;
  undefined4 *puStack_3c;
  undefined4 uStack_38;
  undefined4 *puStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 local_10;
  int local_c;
  undefined4 local_8;

  iVar6 = 0x2e;
  do {
    local_c = 0;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  LOCK();
  UNLOCK();
  puStack_24 = (undefined1 *)0x6ff6e4;
  local_118 = param_1;
  local_8 = param_2;
  thunk_FUN_00407660(param_2);
  puStack_24 = (undefined1 *)0x6ff6fa;
  FUN_00408d50(local_114,&DAT_00401284,0x41);
  puStack_28 = &LAB_006ffd6d;
  iStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_2c;
  uStack_30 = 0x6ff712;
  puStack_24 = &stack0xfffffffc;
  FUN_00407eb8(param_4,local_8);
  ImgDelayDescr_Module_Handle_00000000 = 0;
  uStack_30 = 0x6ff721;
  iVar6 = FUN_00408a68(&DAT_006ffd8c,*param_4);
  if (0 < iVar6) {
    ImgDelayDescr_Module_Handle_00000000 = 1;
    uStack_30 = 1;
    puStack_34 = &local_130;
    uStack_38 = 0x6ff745;
    FUN_0041e164(*param_4,&DAT_006ffd8c,0);
    uStack_38 = 0x6ff752;
    FUN_00407eb8(param_4,local_130);
  }
  *param_5 = 0;
  uStack_38 = 0x6ff761;
  iVar6 = FUN_00408a68(&DAT_006ffda4,*param_4);
  if (0 < iVar6) {
    *param_5 = 1;
    uStack_38 = 1;
    puStack_3c = &local_134;
    uStack_40 = 0x6ff785;
    FUN_0041e164(*param_4,&DAT_006ffda4,0);
    uStack_40 = 0x6ff792;
    FUN_00407eb8(param_4,local_134);
  }
  uStack_38 = 1;
  puStack_3c = &local_138;
  uStack_40 = 0x6ff7b2;
  FUN_0041e164(*param_4,&DAT_006ffdc8,&DAT_006ffdb8);
  uStack_40 = 0x6ff7bf;
  FUN_00407eb8(param_4,local_138);
  if (*(char *)(local_118 + 0x48) == '\0') {
    uStack_40 = 1;
    puStack_44 = &local_140;
    uStack_48 = 0x6ff817;
    FUN_0041e164(*param_4,&DAT_006ffdf8,0);
    uStack_48 = 0x6ff824;
    FUN_00407eb8(param_4,local_140);
  }
  else {
    uStack_40 = 1;
    puStack_44 = &local_13c;
    uStack_48 = 0x6ff7eb;
    FUN_0041e164(*param_4,&DAT_006ffdf8,L"relative ");
    uStack_48 = 0x6ff7f8;
    FUN_00407eb8(param_4,local_13c);
  }
  iVar6 = *(int *)(local_118 + 0x44);
  if (iVar6 == -1) {
    uStack_48 = 1;
    puStack_4c = &local_144;
    pwStack_50 = L"開ﻀ\xffff욋峨킆\xe9ff\x8f";
    FUN_0041e164(*param_4,&DAT_006ffe0c,0);
    pwStack_50 = L"迩";
    FUN_00407eb8(param_4,local_144);
  }
  else if (iVar6 == -2) {
    uStack_48 = 1;
    puStack_4c = &local_148;
    pwStack_50 =
    L"開ﺼ\xffff욋◨킆\xebffཛֶﶔo赐뢅\xfffe僿周濾贀낕\xfffe诿\xe8c3툆\xfff2뗿ﺰ\xffff瑨濾贀뒅\xfffe뫿\x03"
    ;
    FUN_0041e164(*param_4,&DAT_006ffe0c,L"for other object: ");
    pwStack_50 =
    L"寫똏鐅濽倀薍ﺸ\xffff桐﹔o閍ﺰ\xffff쎋ۨ\xf2d2\xffff낵\xfffe棿ﹴo薍ﺴ\xffffκ"
    ;
    FUN_00407eb8(param_4,local_148);
  }
  else {
    uStack_48 = 1;
    puStack_4c = &local_14c;
    pwStack_50 = L"for all ";
    uStack_54 = 0x6ff8b6;
    FUN_0062cabc(iVar6,&local_154);
    uStack_54 = local_154;
    puStack_58 = (undefined4 *)&DAT_006ffe74;
    uStack_5c = 0x6ff8d1;
    FUN_00408480(&local_150,3);
    uStack_5c = 0x6ff8e3;
    FUN_0041e164(*param_4,&DAT_006ffe0c,local_150);
    uStack_5c = 0x6ff8f0;
    FUN_00407eb8(param_4,local_14c);
  }
  uStack_5c = 0x6ff8fc;
  iVar6 = FUN_00408a68(&DAT_006ffe88,*param_4);
  if (0 < iVar6) {
    if (*(char *)(local_118 + 0x6c) == '\0') {
      uStack_5c = 1;
      puStack_60 = &local_15c;
      uStack_64 = 0x6ff958;
      FUN_0041e164(*param_4,&DAT_006ffe88,0);
      uStack_64 = 0x6ff965;
      FUN_00407eb8(param_4,local_15c);
    }
    else {
      uStack_5c = 1;
      puStack_60 = &local_158;
      uStack_64 = 0x6ff92c;
      FUN_0041e164(*param_4,&DAT_006ffe88,L"not ");
      uStack_64 = 0x6ff939;
      FUN_00407eb8(param_4,local_158);
    }
  }
  uStack_5c = 0x6ff97c;
  iVar6 = FUN_00714e30(*(undefined4 *)(local_118 + 4),*(undefined4 *)(local_118 + 8));
  if (iVar6 != 0) {
    iVar7 = 0;
    do {
      uStack_5c = 0x6ff995;
      FUN_0041666c(iVar7,&local_164);
      uStack_5c = 0x6ff9ab;
      FUN_0040839c(&local_160,&DAT_006ffeb4,local_164);
      uStack_5c = 0x6ff9b8;
      iVar2 = FUN_00408a68(local_160,*param_4);
      if (0 < iVar2) {
        uStack_5c = 0x6ff9c9;
        uVar3 = FUN_00561ccc(iVar6,iVar7);
        if ((uVar3 < 3) || (uVar3 == 0xf)) {
          local_124 = 0;
        }
        else {
          uStack_5c = 0x6ff9e6;
          FUN_007104b0(local_118,iVar7,&local_168);
          uStack_5c = 0x6ff9f1;
          local_124 = FUN_006ff640(local_168);
        }
        uStack_5c = 0x6ffa0a;
        uVar4 = FUN_00561ccc(iVar6,iVar7);
        switch(uVar4) {
        case 0:
          uStack_5c = 0x6ffa6a;
          FUN_007104b0(local_118,iVar7,&local_10);
          break;
        case 1:
          uStack_5c = 0x6ffa7f;
          FUN_007104b0(local_118,iVar7,&local_10);
          break;
        case 2:
          uStack_5c = 0x6ffa94;
          FUN_007104b0(local_118,iVar7,&local_10);
          break;
        case 3:
          if (local_124 < 1) {
            uStack_5c = 0x6ffac1;
            FUN_00407f0c(&local_10,L"false");
          }
          else {
            uStack_5c = 0x6ffaaf;
            FUN_00407f0c(&local_10,L"true");
          }
          break;
        case 4:
          uStack_5c = 0x6ffba7;
          FUN_00561cec(iVar6,iVar7,&local_c);
          local_11c = 0x41;
          local_12c = local_114;
          do {
            uStack_5c = 0x6ffbca;
            FUN_00407eb8(local_12c,0);
            local_12c = local_12c + 1;
            local_11c = local_11c + -1;
          } while (local_11c != 0);
          local_11c = 0;
          iVar2 = local_c;
          if ((local_c != 0) && (*(short *)(local_c + -10) != 2)) {
            uStack_5c = 0x6ffbfe;
            iVar2 = FUN_00407048(&local_c,local_c);
          }
          iVar5 = 0;
          if (iVar2 != 0) {
            iVar5 = *(int *)(iVar2 + -4);
          }
          if (0 < iVar5) {
            local_120 = 1;
            local_128 = iVar5;
            do {
              iVar2 = local_c;
              if ((local_c != 0) && (*(short *)(local_c + -10) != 2)) {
                uStack_5c = 0x6ffc3c;
                iVar2 = FUN_00407048(&local_c,local_c);
              }
              if (*(short *)(iVar2 + -2 + local_120 * 2) == 0x7c) {
                local_11c = local_11c + 1;
              }
              else {
                uStack_5c = 0x6ffc6b;
                FUN_00408034(&local_16c,*(undefined2 *)(local_c + -2 + local_120 * 2));
                uStack_5c = 0x6ffc83;
                FUN_004082dc(local_114 + local_11c,local_16c);
              }
              local_120 = local_120 + 1;
              local_128 = local_128 + -1;
            } while (local_128 != 0);
          }
          uStack_5c = 0x6ffca6;
          FUN_00407f0c(&local_10,local_114[local_124]);
          break;
        case 5:
          uStack_5c = 0x6ffad4;
          FUN_006f5920(local_124,&local_10);
          break;
        case 6:
          uStack_5c = 0x6ffae7;
          FUN_006522c0(local_124,&local_10);
          break;
        case 7:
          uStack_5c = 0x6ffafa;
          FUN_0064de38(local_124,&local_10);
          break;
        case 8:
          uStack_5c = 0x6ffb0d;
          FUN_00722840(local_124,&local_10);
          break;
        case 9:
          uStack_5c = 0x6ffb20;
          FUN_00655b40(local_124,&local_10);
          break;
        case 10:
          uStack_5c = 0x6ffb33;
          FUN_0062cabc(local_124,&local_10);
          break;
        case 0xb:
          uStack_5c = 0x6ffb46;
          FUN_00692f24(local_124,&local_10);
          break;
        case 0xc:
          uStack_5c = 0x6ffb59;
          FUN_006fcc58(local_124,&local_10);
          break;
        case 0xd:
          uStack_5c = 0x6ffb81;
          FUN_007104b0(local_118,iVar7,&local_10);
          break;
        case 0xe:
          uStack_5c = 0x6ffb6c;
          FUN_006fa608(local_124,&local_10);
          break;
        case 0xf:
          uStack_5c = 0x6ffb96;
          FUN_007104b0(local_118,iVar7,&local_10);
        }
        uStack_5c = 1;
        pwStack_50 = (wchar_t *)&local_170;
        uStack_64 = 0x6ffcc2;
        FUN_0041666c(iVar7,&local_178);
        uStack_64 = 0x6ffcd8;
        FUN_0040839c(&local_174,&DAT_006ffeb4,local_178);
        uStack_64 = 0x6ffce8;
        FUN_0041e164(*param_4,local_174,local_10);
        uStack_64 = 0x6ffcf5;
        FUN_00407eb8(param_4,local_170);
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 != 8);
    uStack_54 = 1;
    puStack_58 = &local_17c;
    uStack_5c = 0x6ffd1f;
    FUN_0041e164(*param_4,&DAT_006fff0c,L"    ");
    uStack_5c = 0x6ffd2c;
    FUN_00407eb8(param_4,local_17c);
  }
  pwVar1 = pwStack_50;
  *in_FS_OFFSET = (int)puStack_58;
  pwStack_50 = L"幟譛工ࣂ";
  uStack_54 = 0x6ffd49;
  thunk_FUN_00406e80(&local_17c,0x14,pwVar1);
  uStack_54 = 0x6ffd5f;
  FUN_00408e44(local_114,&DAT_00401284,0x41);
  uStack_54 = 0x6ffd6c;
  thunk_FUN_00406e80(&local_10,3);
  return;
}
