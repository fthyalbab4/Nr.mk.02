// rea decompile_all
// name: FUN_10048610
// address: 0x10048610
// body: available
// range: 0x10048610-0x100488e5 inclusive
// range: 0x100488f0-0x10048cd0 inclusive
// range: 0x10048ce0-0x10048e07 inclusive
// range: 0x10048e10-0x10048edc inclusive
// range: 0x10048ee0-0x1004900d inclusive
// range: 0x10049010-0x10049090 inclusive
// range: 0x100490a0-0x1004929b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_10048610(int param_1)

{
  byte *pbVar1;
  ushort uVar2;
  int iVar3;
  code *pcVar4;
  sbyte sVar5;
  undefined1 auVar6 [16];
  LPVOID pvBuffer;
  undefined1 auVar7 [4];
  int *piVar8;
  undefined4 uVar9;
  BOOL BVar10;
  uint uVar11;
  UINT UVar12;
  DWORD DVar13;
  uint *lpMem;
  uint uVar14;
  void *_Dst;
  HANDLE pvVar15;
  ushort *puVar16;
  uint *puVar17;
  size_t _Size;
  int *piVar18;
  int *piVar19;
  HDC pHVar20;
  int *piVar21;
  uint uVar22;
  uint uVar23;
  int iVar24;
  uint uVar25;
  int iVar26;
  ushort *puVar27;
  int iVar28;
  uint uVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  UINT UStack_cc;
  uint uStack_c0;
  int *piStack_b8;
  DWORD DStack_b4;
  int iStack_b0;
  int *piStack_ac;
  LPVOID pvStack_a8;
  HDC pHStack_a4;
  int *piStack_a0;
  undefined1 auStack_9c [4];
  undefined1 auStack_98 [12];
  int *piStack_8c;
  uint uStack_88;
  int *piStack_84;
  UINT UStack_80;
  uint uStack_7c;
  int *piStack_78;
  undefined1 auStack_74 [16];
  undefined8 uStack_64;
  MAT2 MStack_5c;
  tagTEXTMETRICW tStack_4c;

  piVar8 = (int *)(*(code *)0x462144)();
  (*(code *)0x463dc0)();
  uVar9 = (*(code *)0x462a64)();
  (*(code *)0x5a86b4)();
  (*(code *)0x45af94)();
  (*(code *)0x405a7c)();
  iStack_b0 = uVar9;
  pHStack_a4 = (HDC)(*(code *)0x45ce2c)();
  MStack_5c.eM11.fract = 0;
  MStack_5c.eM11.value = 1;
  MStack_5c.eM22.fract = 0;
  MStack_5c.eM22.value = 1;
  tStack_4c.tmCharSet = '\0';
  tStack_4c._57_3_ = 0;
  MStack_5c.eM12.fract = 0;
  MStack_5c.eM12.value = 0;
  MStack_5c.eM21.fract = 0;
  MStack_5c.eM21.value = 0;
  tStack_4c.tmDefaultChar = L'\0';
  tStack_4c.tmBreakChar = L'\0';
  tStack_4c.tmItalic = '\0';
  tStack_4c.tmUnderlined = '\0';
  tStack_4c.tmStruckOut = '\0';
  tStack_4c.tmPitchAndFamily = '\0';
  tStack_4c.tmOverhang = 0;
  tStack_4c.tmDigitizedAspectX = 0;
  tStack_4c.tmDigitizedAspectY = 0;
  tStack_4c.tmFirstChar = L'\0';
  tStack_4c.tmLastChar = L'\0';
  tStack_4c.tmExternalLeading = 0;
  tStack_4c.tmAveCharWidth = 0;
  tStack_4c.tmMaxCharWidth = 0;
  tStack_4c.tmWeight = 0;
  tStack_4c.tmHeight = 0;
  tStack_4c.tmAscent = 0;
  tStack_4c.tmDescent = 0;
  tStack_4c.tmInternalLeading = 0;
  BVar10 = GetTextMetricsW(pHStack_a4,&tStack_4c);
  if (BVar10 == 0) {
    (*(code *)0x405a7c)();
    return;
  }
  UStack_cc = 0x4e5;
  switch(*(int *)(param_1 + 0x18)) {
  case 0x80:
    UStack_cc = 0x3a4;
    break;
  case 0x81:
    UStack_cc = 0x3b5;
    break;
  case 0x82:
    UStack_cc = 0x551;
    break;
  case 0x83:
  case 0x84:
  case 0x85:
  case 0x87:
  case 0x89:
  case 0x8a:
  case 0x8b:
  case 0x8c:
  case 0x8d:
  case 0x8e:
  case 0x8f:
  case 0x90:
  case 0x91:
  case 0x92:
  case 0x93:
  case 0x94:
  case 0x95:
  case 0x96:
  case 0x97:
  case 0x98:
  case 0x99:
  case 0x9a:
  case 0x9b:
  case 0x9c:
  case 0x9d:
  case 0x9e:
  case 0x9f:
  case 0xa0:
  case 0xa4:
  case 0xa5:
  case 0xa6:
  case 0xa7:
  case 0xa8:
  case 0xa9:
  case 0xaa:
  case 0xab:
  case 0xac:
  case 0xad:
  case 0xae:
  case 0xaf:
  case 0xb0:
  case 0xb3:
  case 0xb4:
  case 0xb5:
  case 0xb6:
  case 0xb7:
  case 0xb8:
  case 0xb9:
  case 0xbb:
  case 0xbc:
  case 0xbd:
  case 0xbe:
  case 0xbf:
  case 0xc0:
  case 0xc1:
  case 0xc2:
  case 0xc3:
  case 0xc4:
  case 0xc5:
  case 0xc6:
  case 199:
  case 200:
  case 0xc9:
  case 0xca:
  case 0xcb:
  case 0xcd:
  case 0xce:
  case 0xcf:
  case 0xd0:
  case 0xd1:
  case 0xd2:
  case 0xd3:
  case 0xd4:
  case 0xd5:
  case 0xd6:
  case 0xd7:
  case 0xd8:
  case 0xd9:
  case 0xda:
  case 0xdb:
  case 0xdc:
  case 0xdd:
  case 0xdf:
  case 0xe0:
  case 0xe1:
  case 0xe2:
  case 0xe3:
  case 0xe4:
  case 0xe5:
  case 0xe6:
  case 0xe7:
  case 0xe8:
  case 0xe9:
  case 0xea:
  case 0xeb:
  case 0xec:
  case 0xed:
switchD_100486f5_caseD_83:
    UStack_cc = GetACP();
    break;
  case 0x86:
    UStack_cc = 0x3a8;
    break;
  case 0x88:
    UStack_cc = 0x3b6;
    break;
  case 0xa1:
    break;
  case 0xa2:
    UStack_cc = 0x4e6;
    break;
  case 0xa3:
    UStack_cc = 0x4ea;
    break;
  case 0xb1:
    UStack_cc = 0x4e7;
    break;
  case 0xb2:
    UStack_cc = 0x4e8;
    break;
  case 0xba:
    UStack_cc = 0x4e9;
    break;
  case 0xcc:
    UStack_cc = 0x4e3;
    break;
  case 0xde:
    UStack_cc = 0x36a;
    break;
  case 0xee:
    UStack_cc = 0x4e2;
    break;
  default:
    if (*(int *)(param_1 + 0x18) != 0) goto switchD_100486f5_caseD_83;
    UStack_cc = 0x4e4;
  }
  UStack_80 = 1;
  *(undefined4 *)(param_1 + 0x1c20) = 0;
  *(undefined4 *)(param_1 + 0x1c24) = 0;
  if (*(uint *)(param_1 + 0x1c) < 4) {
    UStack_80 = *(UINT *)(&DAT_101410f8 + *(uint *)(param_1 + 0x1c) * 4);
  }
  uStack_64 = 0;
  auStack_74 = ZEXT816(0);
  auStack_9c = (undefined1  [4])&DAT_10141114;
  piStack_8c = (int *)CONCAT31(piStack_8c._1_3_,tStack_4c.tmPitchAndFamily);
  piStack_ac = piVar8;
  uVar11 = (*(code *)0x45bea4)();
  (*(code *)0x407ea8)();
  DStack_b4 = 0;
  uVar25 = *(uint *)(param_1 + 0x14);
  if (*(uint *)(param_1 + 0x10) <= uVar25) {
    DStack_b4 = 0;
    uVar23 = *(uint *)(param_1 + 0x10);
    do {
      UVar12 = 0;
      uVar22 = uVar23 + (uVar23 < uVar25);
      if (uVar23 != 0) {
        auStack_9c._0_2_ = 1;
        piStack_b8 = (int *)CONCAT31(piStack_b8._1_3_,(char)uVar23);
        MultiByteToWideChar(UStack_cc,0,(LPCSTR)&piStack_b8,1,(LPWSTR)auStack_9c,1);
        if (0xff < uVar23) {
          FUN_10136b52(uVar23,0x100,&DAT_10141138);
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        UVar12 = (UINT)(ushort)auStack_9c._0_2_;
      }
      *(UINT *)(param_1 + 0x1820 + uVar23 * 4) = UVar12;
      if (((uint)piStack_8c & 2) == 0) {
        _auStack_9c = (_ABC)ZEXT812(0);
        BVar10 = GetCharABCWidthsW(pHStack_a4,UVar12,UVar12,(LPABC)auStack_9c);
        if (BVar10 == 0) {
          piStack_b8 = (int *)0x0;
          (*(code *)0x408034)();
          piStack_78 = piStack_b8;
          iVar24 = (*(code *)0x45bec4)();
          (*(code *)0x407ea8)();
          *(int *)(param_1 + 0x1020 + uVar23 * 4) = iVar24;
          *(int *)(param_1 + 0x820 + uVar23 * 4) = iVar24 + 1;
          if (*(char *)(param_1 + 0xd) == '\x01') {
            *(uint *)(param_1 + 0x820 + uVar23 * 4) = iVar24 + 1 + (uVar11 >> 1) + 1;
          }
        }
        else {
          *(UINT *)(param_1 + 0x820 + uVar23 * 4) = auStack_98._0_4_ + 1;
          *(int *)(param_1 + 0x1020 + uVar23 * 4) =
               auStack_98._0_4_ + (int)auStack_9c + auStack_98._4_4_;
          *(undefined1 (*) [4])(param_1 + 0x1420 + uVar23 * 4) = auStack_9c;
        }
        *(uint *)(param_1 + 0xc20 + uVar23 * 4) = uVar11;
      }
      else {
        DVar13 = GetGlyphOutlineW(pHStack_a4,UVar12,UStack_80,(LPGLYPHMETRICS)auStack_74,0,
                                  (LPVOID)0x0,&MStack_5c);
        if ((int)DVar13 < 0) {
          *(undefined4 *)(param_1 + 0x820 + uVar23 * 4) = 0;
          *(undefined4 *)(param_1 + 0xc20 + uVar23 * 4) = 0;
          *(undefined4 *)(param_1 + 0x1020 + uVar23 * 4) = 0;
          *(undefined4 *)(param_1 + 0x1420 + uVar23 * 4) = 0;
        }
        else {
          *(undefined4 *)(param_1 + 0x820 + uVar23 * 4) = auStack_74._0_4_;
          if (DStack_b4 < DVar13) {
            DStack_b4 = DVar13;
          }
          *(LONG *)(param_1 + 0xc20 + uVar23 * 4) =
               (auStack_74._4_4_ + tStack_4c.tmAscent) - auStack_74._12_4_;
          *(uint *)(param_1 + 0x1020 + uVar23 * 4) =
               (uint)uStack_64 - ((int)auStack_74._8_4_ >> 0x1f & auStack_74._8_4_);
          *(undefined4 *)(param_1 + 0x1420 + uVar23 * 4) = auStack_74._8_4_;
        }
      }
      *(undefined4 *)(param_1 + 0x20 + uVar23 * 4) = 0;
      *(undefined4 *)(param_1 + 0x420 + uVar23 * 4) = 0;
    } while ((uVar23 < uVar25) && (uVar23 = uVar22, uVar22 <= uVar25));
  }
  if (*(int *)(param_1 + 0xca0) == 0) {
    *(LONG *)(param_1 + 0xca0) = tStack_4c.tmHeight;
    iVar24 = *(int *)(param_1 + 0x8a0);
  }
  else {
    iVar24 = *(int *)(param_1 + 0x8a0);
  }
  if (iVar24 == 0) {
    DVar13 = GetGlyphOutlineW(pHStack_a4,0x20,UStack_80,(LPGLYPHMETRICS)auStack_74,0,(LPVOID)0x0,
                              &MStack_5c);
    if (((DVar13 == 0xffffffff) || (uVar25 = (uint)uStack_64, (uint)uStack_64 == 0)) &&
       (uVar25 = tStack_4c.tmAveCharWidth,
       (uint)tStack_4c.tmMaxCharWidth < (uint)tStack_4c.tmAveCharWidth)) {
      uVar25 = tStack_4c.tmMaxCharWidth;
    }
    *(uint *)(param_1 + 0x8a0) = uVar25;
    *(uint *)(param_1 + 0x10a0) = uVar25;
  }
  uVar25 = *(uint *)(param_1 + 0x14);
  uVar11 = *(uint *)(param_1 + 0x10);
  uVar23 = 0;
  if ((uVar11 <= uVar25) && (uVar23 = (uVar25 - uVar11) + 1, uVar23 == 0)) {
    FUN_101369c0("capacity overflowC:\\Users\\runneradmin\\.rustup\\toolchains\\nightly-x86_64-pc-windows-msvc\\lib\\rustlib\\src\\rust\\library\\alloc\\src\\vec\\mod.rs"
                 ,0x23,&PTR_s_C__Users_runneradmin__rustup_too_10143b8c);
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  uVar22 = uVar23 * 4;
  if (0x3fffffff < uVar23 || 0x7ffffffc < uVar22) {
    FUN_101367b0();
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  if (uVar22 == 0) {
    lpMem = (uint *)&DAT_00000004;
    uVar23 = 0;
  }
  else {
    lpMem = FUN_10107380(0,uVar22);
    if (lpMem == (uint *)0x0) {
      FUN_101366bc(4);
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
  }
  auVar30 = _auStack_9c;
  auStack_98._0_4_ = lpMem;
  auStack_9c = (undefined1  [4])uVar23;
  auStack_98._8_4_ = auVar30._12_4_;
  auStack_98._4_4_ = 0;
  uVar22 = uVar25 - uVar11;
  if (uVar25 < uVar11) goto LAB_10048ce0;
  uVar14 = uVar22 + 1;
  if (uVar14 == 0) {
    FUN_101369c0("capacity overflowC:\\Users\\runneradmin\\.rustup\\toolchains\\nightly-x86_64-pc-windows-msvc\\lib\\rustlib\\src\\rust\\library\\alloc\\src\\vec\\mod.rs"
                 ,0x23,&DAT_1015664c);
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  if (uVar23 < uVar14) {
    FUN_101359e0((uint *)auStack_9c,0,uVar14,&DAT_00000004,4);
    lpMem = (uint *)auStack_98._0_4_;
    iVar24 = auStack_98._4_4_;
  }
  else {
    iVar24 = 0;
  }
  piStack_a0 = (int *)(param_1 + 0xc20);
  iStack_b0 = param_1 + 0x820;
  if (uVar11 < uVar25) {
    if (7 < uVar22) {
      uVar14 = uVar22 & 0xfffffff8;
      puVar17 = lpMem + iVar24 + 4;
      auVar30._4_4_ = uVar11 + 1;
      auVar30._0_4_ = uVar11;
      auVar30._8_4_ = uVar11 + 2;
      auVar30._12_4_ = uVar11 + 3;
      uVar11 = uVar11 + uVar14;
      iVar24 = iVar24 + uVar14;
      uVar23 = uVar14;
      do {
        *(undefined1 (*) [16])(puVar17 + -4) = auVar30;
        auVar31._0_4_ = auVar30._0_4_ + 8;
        auVar31._4_4_ = auVar30._4_4_ + 8;
        auVar31._8_4_ = auVar30._8_4_ + 8;
        auVar31._12_4_ = auVar30._12_4_ + 8;
        *puVar17 = auVar30._0_4_ + 4;
        puVar17[1] = auVar30._4_4_ + 4;
        puVar17[2] = auVar30._8_4_ + 4;
        puVar17[3] = auVar30._12_4_ + 4;
        puVar17 = puVar17 + 8;
        uVar23 = uVar23 - 8;
        auVar30 = auVar31;
      } while (uVar23 != 0);
      if (uVar22 == uVar14) goto LAB_10048bc9;
    }
    do {
      lpMem[iVar24] = uVar11;
      uVar11 = uVar11 + 1;
      iVar24 = iVar24 + 1;
    } while (uVar25 != uVar11);
  }
LAB_10048bc9:
  lpMem[iVar24] = uVar25;
  uVar25 = iVar24 + 1;
  auVar7 = auStack_9c;
  auStack_98._0_4_ = piStack_a0;
  auStack_9c = (undefined1  [4])iStack_b0;
  piStack_b8 = (int *)auStack_9c;
  if (uVar25 < 2) {
    if (uVar25 == 0) {
LAB_10048ce0:
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
  }
  else if (uVar25 < 0x15) {
    FUN_10019ba0(lpMem,uVar25,1,piStack_b8);
  }
  else {
    FUN_10019460(lpMem,uVar25,(int *)&piStack_b8);
  }
  piStack_84 = (int *)(uVar25 * 4);
  uStack_7c = (uint)auVar7;
  pvStack_a8 = (LPVOID)0x800;
  uStack_88 = 0;
  uStack_c0 = 0x800;
  while( true ) {
    piVar8 = (int *)0x0;
    iVar24 = 0;
    iVar28 = 0;
    uVar25 = 0;
    do {
      uVar11 = *(uint *)((int)lpMem + (int)piVar8);
      if (0xff < uVar11) {
        FUN_10136b52(uVar11,0x100,&DAT_101410e8);
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      iVar26 = uVar25 + 2;
      iVar3 = *(int *)(iStack_b0 + uVar11 * 4);
      uVar11 = piStack_a0[uVar11];
      if (uVar25 < uVar11) {
        uVar25 = uVar11;
      }
      if ((uint)(iVar3 + iVar24) < uStack_c0) {
        iVar26 = 0;
      }
      else {
        iVar24 = 0;
        uVar25 = uVar11;
      }
      piVar8 = piVar8 + 1;
      iVar28 = iVar28 + iVar26;
      iVar24 = iVar3 + 2 + iVar24;
    } while (piStack_84 != piVar8);
    if (pvStack_a8 < iVar28 + uVar25) break;
    *(uint *)(param_1 + 0x1c20) = uStack_c0;
    *(LPVOID *)(param_1 + 0x1c24) = pvStack_a8;
    sVar5 = (sbyte)uStack_88;
    uStack_88 = uStack_88 ^ 1;
    pvStack_a8 = (LPVOID)((uint)pvStack_a8 >> (sbyte)uStack_88);
    uStack_c0 = uStack_c0 >> sVar5;
  }
  if (((uint)piStack_8c & 2) == 0) {
    (**(code **)(*piStack_ac + 0x6c))();
    (*(code *)0x462a64)();
    (*(code *)0x45bc24)();
    _auStack_9c = ZEXT816(0);
    (*(code *)0x45ce04)();
    (*(code *)0x45c664)();
    (*(code *)0x45b0d0)();
    (*(code *)0x45bda4)();
  }
  uStack_88 = (*(code *)0x462a64)();
  pvStack_a8 = (LPVOID)0x1;
  (*(code *)0x409be0)(*(int *)(param_1 + 0x1c24) * *(int *)(param_1 + 0x1c20));
  _Dst = *(void **)(param_1 + 0x1c28);
  if (_Dst == (void *)0x0) {
    _Size = 0;
    _Dst = (void *)0x1;
  }
  else {
    _Size = *(size_t *)((int)_Dst + -4);
  }
  memset(_Dst,0,_Size);
  if ((DStack_b4 != 0) && (pvStack_a8 = FUN_10107380(8,DStack_b4), pvStack_a8 == (LPVOID)0x0)) {
    FUN_101366bc(1);
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  piVar8 = (int *)0x0;
  piVar18 = (int *)0x0;
  iVar24 = 0;
  UStack_cc = 0;
  do {
    pvBuffer = pvStack_a8;
    DVar13 = DStack_b4;
    uVar25 = *(uint *)((int)lpMem + (int)piVar18);
    if (0xff < uVar25) {
      FUN_10136b52(uVar25,0x100,&DAT_10141128);
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    piVar21 = *(int **)(param_1 + 0xc20 + uVar25 * 4);
    piVar19 = piVar8;
    if (piVar8 < piVar21) {
      piVar19 = piVar21;
    }
    iVar28 = 0;
    if (*(uint *)(param_1 + 0x1c20) <= (uint)(*(int *)(param_1 + 0x820 + uVar25 * 4) + iVar24)) {
      iVar28 = (int)piVar8 + 2;
      iVar24 = 0;
      piVar19 = piVar21;
    }
    *(int *)(param_1 + 0x20 + uVar25 * 4) = iVar24;
    UStack_cc = UStack_cc + iVar28;
    *(UINT *)(param_1 + 0x420 + uVar25 * 4) = UStack_cc;
    piVar8 = piVar19;
    if (uVar25 != 0x20) {
      piStack_a0 = piVar19;
      if (((uint)piStack_8c & 2) == 0) {
        auVar6._12_4_ = 0;
        auVar6._0_12_ = auStack_98;
        _auStack_9c = auVar6 << 0x20;
        (*(code *)0x408034)();
        piStack_b8 = (int *)auStack_9c;
        _auStack_9c = (_ABC)ZEXT812(0);
        UVar12 = *(UINT *)(param_1 + 0x1820 + uVar25 * 4);
        BVar10 = GetCharABCWidthsW(pHStack_a4,UVar12,UVar12,(LPABC)auStack_9c);
        if (BVar10 == 0) {
          (*(code *)0x45c9e8)(piStack_b8);
        }
        else {
          (*(code *)0x45c9e8)(piStack_b8);
        }
        (*(code *)0x407ea8)();
        piVar8 = piStack_a0;
      }
      else {
        memset(pvStack_a8,0,DStack_b4);
        GetGlyphOutlineW(pHStack_a4,*(UINT *)(param_1 + 0x1820 + uVar25 * 4),UStack_80,
                         (LPGLYPHMETRICS)auStack_74,DVar13,pvBuffer,&MStack_5c);
        FUN_10001a00(param_1);
        piVar8 = piStack_b8;
      }
    }
    piVar18 = piVar18 + 1;
    iVar24 = iVar24 + 2 + *(int *)(iStack_b0 + uVar25 * 4);
  } while (piStack_84 != piVar18);
  if (uStack_7c != 0) {
    pvVar15 = GetProcessHeap();
    HeapFree(pvVar15,0,lpMem);
  }
  if (((uint)piStack_8c & 2) == 0) {
    iVar24 = *(int *)(param_1 + 0x1c28);
    piVar8 = *(int **)(param_1 + 0x1c20);
    if (iVar24 == 0) {
      if (piVar8 == (int *)0x0) goto LAB_10049221;
    }
    else {
      if (piVar8 == (int *)0x0) {
LAB_10049221:
        FUN_101369c0("chunk size must be non-zero",0x37,&DAT_10141118);
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      piVar18 = *(int **)(iVar24 + -4);
      if (piVar18 != (int *)0x0) {
        pHVar20 = (HDC)0x0;
        piStack_8c = piVar8;
        do {
          piStack_84 = piVar18;
          if (piStack_8c < piVar18) {
            piStack_84 = piStack_8c;
          }
          pHStack_a4 = pHVar20;
          piStack_a0 = piVar18;
          puVar16 = (ushort *)(*(code *)0x462be8)();
          piVar8 = *(int **)(param_1 + 0x1c20);
          if (piVar8 != (int *)0x0) {
            uVar25 = (int)piVar8 * 3;
            piVar21 = (int *)((uVar25 / 3 + 1) - (uint)(piVar8 < (int *)0x55555556));
            piVar18 = piStack_84;
            if (piVar21 < piStack_84) {
              piVar18 = piVar21;
            }
            if (piVar21 != (int *)0x0) {
              piVar21 = (int *)0x0;
              uVar11 = uVar25;
              do {
                uVar23 = 3;
                if (uVar11 < 3) {
                  uVar23 = uVar11;
                }
                uVar22 = 0;
                if (piVar8 != piVar21) {
                  uVar29 = uVar25 + (int)piVar21 * -3;
                  uVar14 = 0;
                  if (uVar29 < 2) {
LAB_10049150:
                    do {
                      pbVar1 = (byte *)((int)puVar16 + uVar22);
                      uVar22 = uVar22 + 1;
                      uVar14 = uVar14 + *pbVar1;
                    } while (uVar23 != uVar22);
                  }
                  else {
                    uVar22 = uVar23 & 2;
                    puVar27 = puVar16;
                    auVar30 = (undefined1  [16])0x0;
                    do {
                      uVar2 = *puVar27;
                      puVar27 = puVar27 + 1;
                      uVar22 = uVar22 - 2;
                      auVar32._0_2_ = auVar30._0_2_ + (uVar2 & 0xff);
                      auVar32._2_2_ = auVar30._2_2_ + (uVar2 >> 8);
                      auVar32._4_4_ = 0;
                      auVar32._8_2_ = auVar30._8_2_;
                      auVar32._10_2_ = auVar30._10_2_;
                      auVar32._12_2_ = auVar30._12_2_;
                      auVar32._14_2_ = auVar30._14_2_;
                      auVar30 = auVar32;
                    } while (uVar22 != 0);
                    uVar22 = 2;
                    uVar14 = (uint)(ushort)(auVar32._2_2_ + auVar32._0_2_);
                    if (uVar29 != 2) goto LAB_10049150;
                  }
                  uVar22 = (uVar14 & 0xffff) / 3;
                }
                *(char *)(iVar24 + (int)piVar21) = (char)uVar22;
                piVar21 = (int *)((int)piVar21 + 1);
                uVar11 = uVar11 - 3;
                puVar16 = (ushort *)((int)puVar16 + 3);
                iStack_b0 = iVar24;
              } while (piVar21 != piVar18);
            }
          }
          iVar24 = iVar24 + (int)piStack_84;
          piVar18 = (int *)((int)piStack_a0 - (int)piStack_84);
          pHVar20 = (HDC)((int)&pHStack_a4->unused + 1);
        } while (piVar18 != (int *)0x0);
      }
    }
  }
  if (DStack_b4 != 0) {
    pvVar15 = GetProcessHeap();
    HeapFree(pvVar15,0,pvStack_a8);
  }
  (*(code *)0x405a7c)();
  return;
}
