// rea decompile_all
// name: FUN_00614330
// address: 0x614330
// body: available
// range: 0x614330-0x614799 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x61435a (push 0x61479a followed by fs-segment stack chaining); handler 0x61479a lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00614330(int param_1,int param_2)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 uVar4;
  int iVar5;
  wchar_t *pwVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  wchar_t *pwVar10;
  int iVar11;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  int extraout_EDX_02;
  int extraout_EDX_03;
  int extraout_EDX_04;
  int iVar12;
  uint extraout_EDX_05;
  uint extraout_EDX_06;
  int extraout_EDX_07;
  wchar_t *extraout_EDX_08;
  wchar_t *extraout_EDX_09;
  int extraout_EDX_10;
  uint extraout_EDX_11;
  uint extraout_EDX_12;
  int extraout_EDX_13;
  int extraout_EDX_14;
  wchar_t *pwVar13;
  uint uVar14;
  undefined4 *in_FS_OFFSET;
  bool bVar15;
  undefined4 uVar16;
  wchar_t *local_44;
  wchar_t *local_40;
  wchar_t *local_3c;
  wchar_t *local_38;
  wchar_t *local_34;
  wchar_t *local_30;
  wchar_t *local_2c;
  wchar_t *local_28;
  undefined1 *local_24;
  byte bVar17;
  byte bVar18;

  local_24 = &stack0xfffffffc;
  iVar11 = 7;
  do {
    iVar11 = iVar11 + -1;
  } while (iVar11 != 0);
  LOCK();
  UNLOCK();
  local_28 = (wchar_t *)&LAB_0061479a;
  local_2c = (wchar_t *)*in_FS_OFFSET;
  *in_FS_OFFSET = &local_2c;
  local_30 = L"䖉说\xf445삃焂\xe805ᗏ￟ι";
  iVar11 = FUN_00409a18(param_2);
  iVar5 = iVar11 + 2;
  if (SCARRY4(iVar11,2)) {
    local_30 = L"ι";
    iVar5 = FUN_00405944();
  }
  lVar2 = (longlong)(iVar5 / 3) * 4;
  pwVar6 = (wchar_t *)lVar2;
  if ((int)pwVar6 != lVar2) {
    local_30 = L"䖉诰\xf045譐\xf845ƹ";
    pwVar6 = (wchar_t *)FUN_00405944(pwVar6,iVar5 % 3);
  }
  local_34 = L"쒃㌄㏛㯶\xf475贏͛";
  local_30 = pwVar6;
  FUN_00409be0(0,&DAT_004108f8,1);
  pwVar13 = (wchar_t *)0x0;
  uVar14 = 0;
  pwVar10 = pwVar13;
  if (0 < iVar11) {
    do {
      pwVar13 = pwVar10 + 2;
      if (SCARRY4((int)pwVar10,4)) {
        local_30 = (wchar_t *)0x6143bd;
        pwVar13 = (wchar_t *)FUN_00405944();
      }
      if ((int)pwVar6 < (int)pwVar13) {
        local_30 = L"TIdEncoder3to4.Encode: Calculated length exceeded (expected ";
        local_34 = (wchar_t *)0x6143d2;
        FUN_0041666c(pwVar6,&local_28);
        local_34 = local_28;
        local_38 = L", about to go ";
        if (SCARRY4((int)pwVar10,4)) {
          local_3c = (wchar_t *)0x6143e9;
          FUN_00405944(pwVar10 + 2,&local_2c);
        }
        local_3c = L"痿棘䡨a喍诔\xe8c6≬￠痿棔䢌a喍诐\xf445姨\xe022\xffff큵䖍뫠\b";
        FUN_0041666c();
        local_3c = local_2c;
        local_40 = L" at offset ";
        local_44 = L"痿棔䢌a喍诐\xf445姨\xe022\xffff큵䖍뫠\b";
        FUN_0041666c(uVar14,&local_30);
        local_44 = local_30;
        pwVar13 = L" of ";
        uVar16 = 0x614413;
        FUN_0041666c(iVar11,&local_34);
        local_2c = local_34;
        FUN_00408480(&local_24,8);
        FUN_00406d88(local_24,L"C:\\Builds\\TP\\indysockets\\lib\\Protocols\\IdCoder3to4.pas",0x166,
                     uVar16,pwVar13);
      }
      iVar5 = iVar11 - uVar14;
      if (SBORROW4(iVar11,uVar14)) {
        local_30 = (wchar_t *)0x614441;
        iVar5 = FUN_00405944();
      }
      if (iVar5 < 3) {
        if (iVar5 < 2) {
          if ((param_2 == 0) || (iVar5 = param_2, *(uint *)(param_2 + -4) <= uVar14)) {
            local_30 = L"똏〄䖈웫\xea45였\xe945윀\xe445\x01";
            iVar5 = thunk_FUN_00404478();
          }
          iVar5 = (uint)*(byte *)(iVar5 + uVar14) << 0x18;
          uVar7 = 1;
        }
        else {
          if ((param_2 == 0) || (iVar5 = param_2, *(uint *)(param_2 + -4) <= uVar14)) {
            local_30 = (wchar_t *)0x6144ca;
            iVar5 = thunk_FUN_00404478();
          }
          uVar4 = *(undefined1 *)(iVar5 + uVar14);
          uVar7 = uVar14 + 1;
          if (SCARRY4(uVar14,1)) {
            local_30 = (wchar_t *)0x6144dd;
            uVar7 = FUN_00405944();
          }
          if ((param_2 == 0) || (iVar5 = param_2, *(uint *)(param_2 + -4) <= uVar7)) {
            local_30 = L"똏Ȅ䖈웪\xe945윀\xe445\x02";
            uVar7 = thunk_FUN_00404478();
            iVar5 = extraout_EDX_01;
          }
          iVar5 = (uint)CONCAT11(uVar4,*(undefined1 *)(iVar5 + uVar7)) << 0x10;
          uVar7 = 2;
        }
      }
      else {
        if ((param_2 == 0) || (iVar5 = param_2, *(uint *)(param_2 + -4) <= uVar14)) {
          local_30 = (wchar_t *)0x61445b;
          iVar5 = thunk_FUN_00404478();
        }
        uVar4 = *(undefined1 *)(iVar5 + uVar14);
        uVar7 = uVar14 + 1;
        if (SCARRY4(uVar14,1)) {
          local_30 = (wchar_t *)0x61446e;
          uVar7 = FUN_00405944();
        }
        if ((param_2 == 0) || (iVar5 = param_2, *(uint *)(param_2 + -4) <= uVar7)) {
          local_30 = (wchar_t *)0x61447f;
          uVar7 = thunk_FUN_00404478();
          iVar5 = extraout_EDX;
        }
        uVar1 = *(undefined1 *)(iVar5 + uVar7);
        uVar7 = uVar14 + 2;
        if (SCARRY4(uVar14,2)) {
          local_30 = (wchar_t *)0x614492;
          uVar7 = FUN_00405944();
        }
        if ((param_2 == 0) || (iVar5 = param_2, *(uint *)(param_2 + -4) <= uVar7)) {
          local_30 = L"똏Ȅ䖈쟩\xe445\x03";
          uVar7 = thunk_FUN_00404478();
          iVar5 = extraout_EDX_00;
        }
        iVar5 = (uint)CONCAT21(CONCAT11(uVar4,uVar1),*(undefined1 *)(iVar5 + uVar7)) << 8;
        uVar7 = 3;
      }
      bVar15 = SCARRY4(uVar14,uVar7);
      uVar14 = uVar14 + uVar7;
      if (bVar15) {
        local_30 = (wchar_t *)0x614533;
        FUN_00405944();
      }
      local_30 = (wchar_t *)0x61453b;
      iVar8 = FUN_00407220(*(undefined4 *)(param_1 + 0x34));
      if (iVar8 < 1) {
        local_30 = (wchar_t *)0x614553;
        FUN_00406d88(L"Assertion failure",
                     L"C:\\Builds\\TP\\indysockets\\lib\\Protocols\\IdCoder3to4.pas",0x17e);
      }
      bVar17 = (byte)((uint)iVar5 >> 0x18);
      uVar9 = (uint)(bVar17 >> 2);
      iVar8 = uVar9 + 1;
      if (SCARRY4(uVar9,1)) {
        local_30 = (wchar_t *)0x614567;
        iVar8 = FUN_00405944();
      }
      iVar12 = *(int *)(param_1 + 0x34);
      uVar9 = iVar8 - 1;
      if ((iVar12 == 0) || (*(uint *)(iVar12 + -4) <= uVar9)) {
        local_30 = (wchar_t *)0x614579;
        uVar9 = thunk_FUN_00404478();
        iVar12 = extraout_EDX_02;
      }
      uVar4 = *(undefined1 *)(iVar12 + uVar9);
      if ((_ImgDelayDescr_Module_Handle_00000000 == 0) ||
         (iVar8 = _ImgDelayDescr_Module_Handle_00000000,
         *(wchar_t **)(_ImgDelayDescr_Module_Handle_00000000 + -4) <= pwVar10)) {
        local_30 = (wchar_t *)0x614592;
        uVar4 = thunk_FUN_00404478();
        iVar8 = extraout_EDX_03;
      }
      *(undefined1 *)(iVar8 + (int)pwVar10) = uVar4;
      bVar18 = (byte)((uint)iVar5 >> 0x10);
      uVar9 = (uint)(bVar17 & 3) << 4 | (uint)(bVar18 >> 4);
      iVar8 = uVar9 + 1;
      if (SCARRY4(uVar9,1)) {
        local_30 = (wchar_t *)0x6145ba;
        iVar8 = FUN_00405944();
      }
      iVar12 = *(int *)(param_1 + 0x34);
      uVar9 = iVar8 - 1;
      if ((iVar12 == 0) || (*(uint *)(iVar12 + -4) <= uVar9)) {
        local_30 = (wchar_t *)0x6145cc;
        uVar9 = thunk_FUN_00404478();
        iVar12 = extraout_EDX_04;
      }
      uVar4 = *(undefined1 *)(iVar12 + uVar9);
      uVar9 = (int)pwVar10 + 1;
      if (SCARRY4((int)pwVar10,1)) {
        local_30 = (wchar_t *)0x6145de;
        uVar4 = FUN_00405944();
        uVar9 = extraout_EDX_05;
      }
      if ((_ImgDelayDescr_Module_Handle_00000000 == 0) ||
         (iVar8 = _ImgDelayDescr_Module_Handle_00000000,
         *(uint *)(_ImgDelayDescr_Module_Handle_00000000 + -4) <= uVar9)) {
        local_30 = (wchar_t *)0x6145f1;
        uVar4 = thunk_FUN_00404478();
        iVar8 = extraout_ECX;
        uVar9 = extraout_EDX_06;
      }
      *(undefined1 *)(iVar8 + uVar9) = uVar4;
      bVar17 = (byte)((uint)iVar5 >> 8);
      uVar9 = (uint)(bVar18 & 0xf) * 4 | (uint)(bVar17 >> 6);
      iVar5 = uVar9 + 1;
      if (SCARRY4(uVar9,1)) {
        local_30 = (wchar_t *)0x61461a;
        iVar5 = FUN_00405944();
      }
      iVar8 = *(int *)(param_1 + 0x34);
      uVar9 = iVar5 - 1;
      if ((iVar8 == 0) || (*(uint *)(iVar8 + -4) <= uVar9)) {
        local_30 = (wchar_t *)0x61462c;
        uVar9 = thunk_FUN_00404478();
        iVar8 = extraout_EDX_07;
      }
      uVar4 = *(undefined1 *)(iVar8 + uVar9);
      pwVar13 = pwVar10 + 1;
      if (SCARRY4((int)pwVar10,2)) {
        local_30 = (wchar_t *)0x61463e;
        uVar4 = FUN_00405944();
        pwVar13 = extraout_EDX_08;
      }
      if ((_ImgDelayDescr_Module_Handle_00000000 == 0) ||
         (iVar5 = _ImgDelayDescr_Module_Handle_00000000,
         *(wchar_t **)(_ImgDelayDescr_Module_Handle_00000000 + -4) <= pwVar13)) {
        local_30 = (wchar_t *)0x614651;
        uVar4 = thunk_FUN_00404478();
        iVar5 = extraout_ECX_00;
        pwVar13 = extraout_EDX_09;
      }
      *(undefined1 *)(iVar5 + (int)pwVar13) = uVar4;
      uVar9 = (uint)(bVar17 & 0x3f);
      iVar5 = uVar9 + 1;
      if (SCARRY4(uVar9,1)) {
        local_30 = (wchar_t *)0x614667;
        iVar5 = FUN_00405944();
      }
      iVar8 = *(int *)(param_1 + 0x34);
      uVar9 = iVar5 - 1;
      if ((iVar8 == 0) || (*(uint *)(iVar8 + -4) <= uVar9)) {
        local_30 = (wchar_t *)0x614679;
        uVar9 = thunk_FUN_00404478();
        iVar8 = extraout_EDX_10;
      }
      uVar4 = *(undefined1 *)(iVar8 + uVar9);
      uVar9 = (int)pwVar10 + 3;
      if (SCARRY4((int)pwVar10,3)) {
        local_30 = (wchar_t *)0x61468b;
        uVar4 = FUN_00405944();
        uVar9 = extraout_EDX_11;
      }
      if ((_ImgDelayDescr_Module_Handle_00000000 == 0) ||
         (iVar5 = _ImgDelayDescr_Module_Handle_00000000,
         *(uint *)(_ImgDelayDescr_Module_Handle_00000000 + -4) <= uVar9)) {
        local_30 = (wchar_t *)0x61469e;
        uVar4 = thunk_FUN_00404478();
        iVar5 = extraout_ECX_01;
        uVar9 = extraout_EDX_12;
      }
      *(undefined1 *)(iVar5 + uVar9) = uVar4;
      pwVar13 = pwVar10 + 2;
      if (SCARRY4((int)pwVar10,4)) {
        local_30 = (wchar_t *)0x6146ab;
        FUN_00405944();
      }
      if (uVar7 < 3) {
        uVar9 = (int)pwVar10 + 3;
        if (SBORROW4((int)pwVar13,1)) {
          local_30 = (wchar_t *)0x6146bd;
          uVar9 = FUN_00405944();
        }
        if ((_ImgDelayDescr_Module_Handle_00000000 == 0) ||
           (iVar5 = _ImgDelayDescr_Module_Handle_00000000,
           *(uint *)(_ImgDelayDescr_Module_Handle_00000000 + -4) <= uVar9)) {
          local_30 = (wchar_t *)0x6146d0;
          uVar9 = thunk_FUN_00404478();
          iVar5 = extraout_EDX_13;
        }
        *(undefined1 *)(iVar5 + uVar9) = *(undefined1 *)(param_1 + 0x38);
        if (uVar7 == 1) {
          pwVar10 = pwVar10 + 1;
          if (SBORROW4((int)pwVar13,2)) {
            local_30 = (wchar_t *)0x6146e9;
            pwVar10 = (wchar_t *)FUN_00405944();
          }
          if ((_ImgDelayDescr_Module_Handle_00000000 == 0) ||
             (iVar5 = _ImgDelayDescr_Module_Handle_00000000,
             *(wchar_t **)(_ImgDelayDescr_Module_Handle_00000000 + -4) <= pwVar10)) {
            local_30 = L"똏㡏ಈ㬂\xf475谏ﲥ\xffff譓\xf845ƹ";
            pwVar10 = (wchar_t *)thunk_FUN_00404478();
            iVar5 = extraout_EDX_14;
          }
          *(undefined1 *)(iVar5 + (int)pwVar10) = *(undefined1 *)(param_1 + 0x38);
        }
      }
      pwVar10 = pwVar13;
    } while ((int)uVar14 < iVar11);
  }
  local_34 =
  L"쒃㬄\xf05d坴偨慉贀졕䖋\xe8f0ἴ￠痿棈䧔a喍评\xe8c3ἢ￠痿棄䨀a喍诀\xf445࿨\xe01f\xffff쁵䖍뫌\x06"
  ;
  local_30 = pwVar13;
  FUN_00409be0(0,&DAT_004108f8,1);
  if (pwVar13 != pwVar6) {
    local_30 = L"TIdEncoder3to4.Encode: Calculated length not met (expected ";
    local_34 = L"痿棈䧔a喍评\xe8c3ἢ￠痿棄䨀a喍诀\xf445࿨\xe01f\xffff쁵䖍뫌\x06";
    FUN_0041666c(pwVar6,&local_3c);
    local_34 = local_3c;
    local_38 = L", finished at ";
    local_3c = L"痿棄䨀a喍诀\xf445࿨\xe01f\xffff쁵䖍뫌\x06";
    FUN_0041666c(pwVar13,&local_40);
    local_3c = local_40;
    local_40 = L", BufSize = ";
    local_44 = L"痿跀책ں";
    FUN_0041666c(iVar11,&local_44);
    FUN_00408480(&local_38,6);
    FUN_00406d88(local_38,L"C:\\Builds\\TP\\indysockets\\lib\\Protocols\\IdCoder3to4.pas",0x195);
  }
  puVar3 = local_24;
  *in_FS_OFFSET = local_2c;
  local_24 = &LAB_006147a1;
  local_28 = L"\xe9c3᳕￟\xebeb幟譛工냃Ȅ＀\xffff㳿";
  thunk_FUN_00406e80(&local_44,9,puVar3);
  return;
}
