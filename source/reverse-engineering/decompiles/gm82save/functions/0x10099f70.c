// rea decompile_all
// name: FUN_10099f70
// address: 0x10099f70
// body: available
// range: 0x10099f70-0x1009a836 inclusive
// range: 0x1009a840-0x1009b0d4 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

void __fastcall FUN_10099f70(undefined4 *param_1,char param_2,ushort param_3)

{
  uint *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  code *pcVar4;
  short sVar5;
  uint uVar6;
  byte bVar7;
  byte *pbVar8;
  byte bVar9;
  ushort uVar10;
  uint uVar11;
  ushort uVar12;
  char *pcVar13;
  uint uVar14;
  uint uVar15;
  short sVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  char cVar20;
  byte bVar21;
  int iVar22;
  uint uVar23;
  uint uVar24;
  int iVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  undefined4 uVar29;
  short sVar30;
  short sVar31;
  uint uVar32;
  char *pcVar33;
  uint uVar34;
  uint *puVar35;
  uint uVar36;
  bool bVar37;
  bool bVar38;
  ulonglong in_XMM0_Qa;
  undefined8 uVar39;
  ushort local_7b8;
  uint local_7b0;
  uint local_7ac;
  uint local_798;
  uint local_794;
  byte *local_764;
  uint local_760;
  ushort local_75c;
  uint local_758;
  uint local_754;
  uint local_750;
  uint uStack_74c;
  uint local_748;
  char *local_744;
  undefined4 local_740;
  undefined2 local_73c;
  uint local_738;
  uint local_6a8 [3];
  undefined1 local_69c [152];
  uint local_604 [2];
  undefined1 local_5fc [156];
  uint local_560;
  char *local_55c;
  uint local_558;
  undefined8 local_554;
  uint local_4bc [41];
  undefined4 local_418;
  byte local_414 [1028];

  uStack_74c = (uint)(in_XMM0_Qa >> 0x20);
  local_750 = (uint)in_XMM0_Qa;
  uVar32 = uStack_74c >> 0x14 & 0x7ff;
  local_7ac = (uStack_74c & 0xfffff) + 0x100000;
  if (uVar32 == 0) {
    local_7ac = (uStack_74c & 0xfffff) << 1 | local_750 >> 0x1f;
  }
  local_7b0 = local_750 * 2;
  if (uVar32 != 0) {
    local_7b0 = local_750;
  }
  uVar17 = (uint)param_3;
  if ((in_XMM0_Qa & 0xfffff00000000) == 0 && local_750 == 0) {
    bVar9 = 3;
    if ((uStack_74c & 0x7fffffff) != 0x7ff00000 || local_750 != 0) {
      cVar20 = (local_750 != 0 || (in_XMM0_Qa & 0x7fffffff00000000) != 0) * '\x02' + '\x02';
      goto joined_r0x1009a0fb;
    }
  }
  else {
    cVar20 = '\x04' - ((in_XMM0_Qa & 0x7ff0000000000000) == 0);
    bVar9 = 2;
    if ((uStack_74c & 0x7fffffff) < 0x7ff00000) {
joined_r0x1009a0fb:
      if (cVar20 != '\x02') {
        bVar9 = (byte)local_7b0 & 1;
        if (cVar20 == '\x03') {
          uVar32 = uVar32 - 0x433;
joined_r0x1009a1d7:
          if (1 < (bVar9 ^ 1)) {
            bVar9 = bVar9 ^ 1;
            goto joined_r0x1009a054;
          }
        }
        else {
          if (local_7ac != 0x100000 || local_7b0 != 0) {
            local_7ac = local_7ac << 1 | local_7b0 >> 0x1f;
            local_7b0 = local_7b0 * 2;
            uVar32 = uVar32 - 0x434;
            goto joined_r0x1009a1d7;
          }
          local_7ac = 0x400000;
          local_7b0 = 0;
          uVar32 = uVar32 - 0x435;
        }
        uVar18 = uStack_74c >> 0x1f;
        pcVar33 = "-";
        pcVar13 = "+";
        iVar22 = 5;
        if ((longlong)in_XMM0_Qa < 0) {
          pcVar13 = "-";
        }
        else {
          pcVar33 = (char *)0x1;
        }
        if (param_2 != '\0') {
          uVar18 = 1;
          pcVar33 = pcVar13;
        }
        sVar30 = (short)uVar32;
        iVar25 = (int)sVar30;
        if (sVar30 < 0) {
          iVar22 = -0xc;
        }
        if (0x3ebf < (uint)(iVar22 * iVar25)) {
          FUN_10136b40(&PTR_s_C__Users_runneradmin__rustup_too_10144e24);
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        sVar16 = -0x8000;
        if (-1 < (short)param_3) {
          sVar16 = -param_3;
        }
        if (local_7b0 == 0 && local_7ac == 0) {
          FUN_10136b40(&PTR_s_C__Users_runneradmin__rustup_too_1014987c);
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        uVar23 = 0x1f;
        if (local_7b0 != 0) {
          for (; local_7b0 >> uVar23 == 0; uVar23 = uVar23 - 1) {
          }
        }
        uVar11 = 0x1f;
        if (local_7ac != 0) {
          for (; local_7ac >> uVar11 == 0; uVar11 = uVar11 - 1) {
          }
        }
        uVar23 = uVar23 ^ 0x1f | 0x20;
        if (local_7ac != 0) {
          uVar23 = uVar11 ^ 0x1f;
        }
        sVar5 = (short)(iVar25 - uVar23);
        uVar11 = ((short)(-0x60 - sVar5) * 0x50 + 0x153b0) / 0x84e;
        if (0x50 < uVar11) {
          FUN_10136b52(uVar11,0x51,&PTR_s_C__Users_runneradmin__rustup_too_1014988c);
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        uVar14 = (uint)(iVar22 * iVar25) >> 4;
        bVar9 = (byte)uVar23 & 0x1f;
        uVar26 = local_7b0 << ((byte)uVar23 & 0x1f);
        uVar27 = uVar26;
        uVar15 = local_7ac << bVar9 | local_7b0 >> 0x20 - bVar9;
        if ((uVar23 & 0x20) != 0) {
          uVar27 = 0;
          uVar15 = uVar26;
        }
        iVar22 = uVar11 * 0x10;
        lVar3 = (ulonglong)*(uint *)(&DAT_101492c4 + iVar22) * (ulonglong)uVar27 +
                ((ulonglong)*(uint *)(&DAT_101492c0 + iVar22) * (ulonglong)uVar27 >> 0x20);
        uVar26 = (uint)lVar3;
        uVar28 = (uint)((ulonglong)lVar3 >> 0x20);
        lVar3 = (ulonglong)*(uint *)(&DAT_101492c0 + iVar22) * (ulonglong)uVar15;
        uVar19 = (uint)((ulonglong)lVar3 >> 0x20);
        uVar27 = (uint)lVar3;
        uVar23 = (uint)CARRY4(uVar27,uVar26);
        uVar11 = uVar19 + uVar28;
        uVar2 = (ulonglong)*(uint *)(&DAT_101492c4 + iVar22) * (ulonglong)uVar15 +
                (ulonglong)CONCAT14(CARRY4(uVar19,uVar28) || CARRY4(uVar11,uVar23),uVar11 + uVar23)
                + (ulonglong)(uVar27 + uVar26 >> 0x1f);
        local_794 = (uint)(uVar2 >> 0x20);
        sVar5 = -(sVar5 + *(short *)(&DAT_101492c8 + iVar22));
        uVar12 = sVar5 - 0x40;
        bVar9 = (byte)uVar12;
        uVar23 = 0 << (bVar9 & 0x1f) | 1U >> 0x20 - (bVar9 & 0x1f);
        uVar11 = (uint)uVar2 >> (bVar9 & 0x1f) | local_794 << 0x20 - (bVar9 & 0x1f);
        uVar27 = 1 << (bVar9 & 0x1f);
        uVar15 = uVar27;
        if ((uVar12 & 0x20) != 0) {
          uVar15 = 0;
          uVar23 = uVar27;
          uVar11 = local_794 >> (bVar9 & 0x1f);
        }
        local_754 = uVar15 - 1;
        local_758 = (uVar23 - 1) + (uint)(uVar15 != 0);
        local_798 = local_754 & (uint)uVar2;
        local_794 = local_758 & local_794;
        uVar27 = uVar14 + 0x15;
        if (local_798 != 0 || local_794 != 0) {
          if (uVar11 < 10000) {
            if (uVar11 < 100) {
              uVar19 = (uint)(9 < uVar11);
              uVar26 = uVar19 * 9 + 1;
            }
            else {
              uVar26 = 1000;
              if (uVar11 < 1000) {
                uVar26 = 100;
              }
              uVar19 = (uint)(uVar11 < 1000 ^ 3);
            }
          }
          else if (uVar11 < 1000000) {
            uVar26 = 100000;
            if (uVar11 < 100000) {
              uVar26 = 10000;
            }
            uVar19 = (uint)(uVar11 < 100000 ^ 5);
          }
          else if (uVar11 < 100000000) {
            uVar26 = 10000000;
            if (uVar11 < 10000000) {
              uVar26 = 1000000;
            }
            uVar19 = (uint)(uVar11 < 10000000 ^ 7);
          }
          else {
            uVar26 = 1000000000;
            if (uVar11 < 1000000000) {
              uVar26 = 100000000;
            }
            uVar19 = (uint)(uVar11 < 1000000000 ^ 9);
          }
          sVar31 = ((short)uVar19 - *(short *)(&DAT_101492ca + iVar22)) + 1;
          uVar24 = uVar15;
          uVar28 = uVar23;
          if (sVar16 < sVar31) {
            uVar36 = (int)(short)(sVar31 - sVar16);
            if (uVar14 + 0x15 <= (uint)((int)sVar31 - (int)sVar16)) {
              uVar36 = uVar14 + 0x15;
            }
            uVar34 = 1;
            while( true ) {
              uVar6 = uVar11 / uVar26;
              uVar11 = uVar11 % uVar26;
              local_414[uVar34 - 1] = (char)uVar6 + 0x30;
              if (uVar36 == uVar34) break;
              if (uVar34 - uVar19 == 1) {
                uVar24 = 1;
                uVar28 = 0;
                uVar10 = sVar5 - 0x41;
                bVar7 = (byte)uVar10;
                goto LAB_1009a5e0;
              }
              uVar34 = uVar34 + 1;
              bVar37 = uVar26 < 10;
              uVar26 = uVar26 / 10;
              if (bVar37) {
                FUN_10136ca0(&PTR_s_C__Users_runneradmin__rustup_too_1014989c);
                    /* WARNING: Does not return */
                pcVar4 = (code *)invalidInstructionException();
                (*pcVar4)();
              }
            }
            uVar14 = uVar26 << (bVar9 & 0x1f);
            uVar15 = uVar14;
            if ((uVar12 & 0x20) != 0) {
              uVar15 = 0;
            }
            uVar23 = 0 << (bVar9 & 0x1f) | uVar26 >> 0x20 - (bVar9 & 0x1f);
            if ((uVar12 & 0x20) != 0) {
              uVar23 = uVar14;
            }
            uVar26 = uVar11 << (bVar9 & 0x1f);
            uVar14 = uVar26;
            if ((uVar12 & 0x20) != 0) {
              uVar14 = 0;
            }
            uVar11 = 0 << (bVar9 & 0x1f) | uVar11 >> 0x20 - (bVar9 & 0x1f);
            if ((uVar12 & 0x20) != 0) {
              uVar11 = uVar26;
            }
            bVar37 = CARRY4(uVar14,local_798);
            local_798 = uVar14 + local_798;
            local_794 = uVar11 + local_794 + (uint)bVar37;
          }
          else {
            uVar2 = uVar2 >> 1;
            uVar11 = (uint)uVar2;
            iVar22 = (int)(uVar2 >> 0x20);
            uVar23 = (uint)(uVar2 + CONCAT44(uVar11,iVar22) >> 0x20) % 5;
            uVar14 = uVar11 - uVar23;
            lVar3 = (ulonglong)uVar14 * 0xcccccccd;
            local_798 = (uint)lVar3;
            local_794 = (iVar22 - (uint)(uVar11 < uVar23)) * -0x33333333 +
                        uVar14 * -0x33333334 + (int)((ulonglong)lVar3 >> 0x20);
            uVar11 = uVar26 << (bVar9 & 0x1f);
            uVar15 = uVar11;
            uVar23 = 0 << (bVar9 & 0x1f) | uVar26 >> 0x20 - (bVar9 & 0x1f);
            if ((uVar12 & 0x20) != 0) {
              uVar15 = 0;
              uVar23 = uVar11;
            }
            uVar36 = 0;
          }
          goto LAB_1009a6aa;
        }
LAB_1009a715:
        local_764 = (byte *)0x0;
        goto LAB_1009a71d;
      }
      bVar9 = 4;
    }
  }
joined_r0x1009a054:
  if (bVar9 == 2) {
    local_748._0_2_ = 2;
    local_744 = "NaN";
    local_740 = 3;
    pcVar33 = (char *)0x1;
    uVar18 = 0;
    local_554 = CONCAT44(1,&local_748);
  }
  else {
    uVar18 = uStack_74c >> 0x1f;
    pcVar33 = "-";
    pcVar13 = "+";
    if ((longlong)in_XMM0_Qa < 0) {
      pcVar13 = "-";
    }
    else {
      pcVar33 = (char *)0x1;
    }
    if (param_2 != '\0') {
      uVar18 = 1;
      pcVar33 = pcVar13;
    }
    if (bVar9 == 4) {
      local_748._0_2_ = 2;
      if (param_3 == 0) {
        local_744 = "0";
        local_740 = 1;
        local_554 = CONCAT44(1,&local_748);
      }
      else {
        local_744 = "0.";
        local_740 = 2;
        local_73c = 0;
        local_554 = CONCAT44(2,&local_748);
        local_738 = uVar17;
      }
    }
    else {
      local_748._0_2_ = 2;
      local_744 = "inf";
      local_740 = 3;
      local_554 = CONCAT44(1,&local_748);
    }
  }
  goto LAB_1009af7b;
  while( true ) {
    if ((-0x14 - uVar14) + uVar34 == 1) {
      FUN_10136b52(uVar34,uVar27,&PTR_s_C__Users_runneradmin__rustup_too_101498ac);
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    uVar26 = (uint)((ulonglong)local_798 * 10);
    uVar11 = (int)((ulonglong)local_798 * 10 >> 0x20) + local_794 * 10;
    uVar2 = (ulonglong)uVar24;
    uVar24 = (uint)(uVar2 * 10);
    uVar28 = (int)(uVar2 * 10 >> 0x20) + uVar28 * 10;
    local_798 = uVar26 & local_754;
    local_794 = uVar11 & local_758;
    bVar21 = (byte)(uVar11 >> (bVar9 & 0x1f));
    if ((uVar12 & 0x20) == 0) {
      bVar21 = (byte)(uVar26 >> (bVar9 & 0x1f)) | (byte)(uVar11 << 0x20 - (bVar9 & 0x1f));
    }
    local_414[uVar34] = bVar21 + 0x30;
    uVar34 = uVar34 + 1;
    if (uVar36 == uVar34) break;
LAB_1009a5e0:
    bVar21 = bVar7 & 0x1f;
    uVar19 = uVar28 >> (bVar7 & 0x1f);
    uVar26 = uVar19;
    uVar11 = uVar24 >> bVar21 | uVar28 << 0x20 - bVar21;
    if ((uVar10 & 0x20) != 0) {
      uVar26 = 0;
      uVar11 = uVar19;
    }
    if (uVar26 != 0 || uVar11 != 0) goto LAB_1009a715;
  }
LAB_1009a6aa:
  FUN_10097be0(&local_764,local_414,uVar27,uVar36,sVar31,sVar16,local_798,local_794,uVar15,uVar23,
               uVar24,uVar28);
  pbVar8 = local_764;
  if (local_764 == (byte *)0x0) {
LAB_1009a71d:
    uVar14 = local_7b0 - 1;
    uVar11 = (local_7ac - 1) + (uint)(local_7b0 != 0);
    uVar23 = 0x1f;
    if (uVar14 != 0) {
      for (; uVar14 >> uVar23 == 0; uVar23 = uVar23 - 1) {
      }
    }
    uVar15 = 0x3f;
    if (uVar14 != 0) {
      uVar15 = uVar23;
    }
    uVar23 = 0x1f;
    if (uVar11 != 0) {
      for (; uVar11 >> uVar23 == 0; uVar23 = uVar23 - 1) {
      }
    }
    uVar23 = uVar23 ^ 0x1f;
    if (uVar11 == 0) {
      uVar23 = (uVar15 ^ 0x1f) + 0x20;
    }
    lVar3 = (longlong)(int)(iVar25 - uVar23) * 0x4d104d42;
    uVar23 = (int)((ulonglong)lVar3 >> 0x20) + 0x13 + (uint)(0xbbecaf7f < (uint)lVar3);
    local_7b8 = (ushort)uVar23;
    local_604[0] = 2 - (local_7ac == 0);
    local_6a8[1] = local_7b0;
    local_6a8[2] = local_7ac;
    memset(local_69c,0,0x98);
    memset(local_5fc,0,0x9c);
    local_560 = 1;
    local_604[1] = 1;
    if (sVar30 < 0) {
      uVar32 = -iVar25;
      puVar35 = local_604;
    }
    else {
      uVar32 = uVar32 & 0xffff;
      puVar35 = local_6a8;
    }
    FUN_10095a30((uint *)((int)puVar35 + 4),uVar32);
    if ((short)local_7b8 < 0) {
      puVar35 = local_6a8;
      uVar23 = -uVar23 & 0xffff;
    }
    else {
      uVar23 = uVar23 & 0x7fff;
      puVar35 = local_604;
    }
    FUN_10097970((uint *)((int)puVar35 + 4),uVar23);
    memcpy(&local_748,local_604 + 1,0xa4);
    uVar32 = uVar27;
    do {
      uVar23 = local_6a8[0];
      if (0x28 < local_6a8[0]) goto LAB_1009afaf;
      if (local_6a8[0] != 0) {
        iVar22 = local_6a8[0] << 2;
        uVar23 = 0;
        do {
          uVar11 = *(uint *)((int)&uStack_74c + iVar22);
          uVar39 = __aulldiv(uVar11,uVar23,1000000000,0);
          *(int *)((int)&uStack_74c + iVar22) = (int)uVar39;
          uVar23 = uVar11 + (int)uVar39 * -1000000000;
          iVar22 = iVar22 + -4;
        } while (iVar22 != 0);
      }
      uVar32 = uVar32 - 9;
    } while (9 < uVar32);
    uVar32 = *(int *)(&DAT_10149a44 + uVar32 * 4) * 2;
    if (uVar32 == 0) {
      FUN_10136b40(&PTR_s_C__Users_runneradmin__rustup_too_10145400);
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    uVar23 = local_6a8[0];
    if (0x28 < local_6a8[0]) {
LAB_1009afaf:
      FUN_10136a50(0,uVar23,0x28,&PTR_s_C__Users_runneradmin__rustup_too_10145400);
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    if (local_6a8[0] == 0) {
      uVar23 = 0;
    }
    else {
      iVar22 = local_6a8[0] << 2;
      uVar11 = 0;
      do {
        uVar23 = *(uint *)((int)&uStack_74c + iVar22);
        uVar39 = __aulldiv(uVar23,uVar11,uVar32,0);
        *(int *)((int)&uStack_74c + iVar22) = (int)uVar39;
        uVar11 = uVar23 - (int)uVar39 * uVar32;
        iVar22 = iVar22 + -4;
        uVar23 = local_6a8[0];
      } while (iVar22 != 0);
    }
    uVar32 = local_604[0];
    if (uVar23 < local_604[0]) {
      uVar23 = local_604[0];
    }
    if (0x28 < uVar23) goto LAB_1009afaf;
    if (uVar23 == 0) {
      uVar23 = 0;
    }
    else {
      uVar11 = 0;
      bVar37 = false;
      do {
        uVar15 = local_6a8[uVar11 + 1];
        puVar35 = &local_748 + uVar11;
        uVar26 = (uint)bVar37;
        uVar14 = *puVar35;
        uVar19 = *puVar35 + uVar15;
        bVar37 = CARRY4(uVar14,uVar15) || CARRY4(uVar19,uVar26);
        *puVar35 = uVar19 + uVar26;
        uVar11 = uVar11 + 1;
      } while (uVar23 != uVar11);
      if (CARRY4(uVar14,uVar15) || CARRY4(uVar19,uVar26)) {
        if (uVar23 == 0x28) goto LAB_1009b096;
        (&local_748)[uVar23] = 1;
        uVar23 = uVar23 + 1;
      }
    }
    uVar11 = local_560;
    local_6a8[0] = uVar23;
    if (uVar23 < local_560) {
      uVar23 = local_560;
    }
    if (0x28 < uVar23) goto LAB_1009afaf;
    iVar22 = uVar23 << 2;
    do {
      if (iVar22 == 0) goto LAB_1009a9d7;
      puVar1 = (uint *)((int)local_604 + iVar22);
      puVar35 = (uint *)((int)&uStack_74c + iVar22);
      iVar22 = iVar22 + -4;
    } while (*puVar35 == *puVar1);
    if (*puVar35 < *puVar1) {
      if (uVar32 == 0) {
        uVar32 = 0;
      }
      else {
        iVar22 = uVar32 * 4;
        uVar23 = 0;
        puVar35 = local_6a8;
        do {
          puVar35 = (uint *)((int)puVar35 + 4);
          lVar3 = (ulonglong)*puVar35 * 10 + (ulonglong)uVar23;
          uVar23 = (uint)((ulonglong)lVar3 >> 0x20);
          *puVar35 = (uint)lVar3;
          iVar22 = iVar22 + -4;
        } while (iVar22 != 0);
        if (uVar23 != 0) {
          if (uVar32 == 0x28) goto LAB_1009b096;
          local_6a8[uVar32 + 1] = uVar23;
          uVar32 = uVar32 + 1;
        }
      }
      local_604[0] = uVar32;
    }
    else {
LAB_1009a9d7:
      local_7b8 = local_7b8 + 1;
    }
    bVar37 = true;
    local_75c = local_7b8;
    if ((short)local_7b8 < sVar16) {
      uVar14 = 0;
    }
    else {
      uVar14 = (int)(short)(local_7b8 - sVar16);
      if (uVar27 <= (uint)((int)(short)local_7b8 - (int)sVar16)) {
        uVar14 = uVar27;
      }
      if (uVar14 == 0) {
        uVar14 = 0;
      }
      else {
        puVar35 = local_604 + 1;
        memcpy(local_4bc + 1,puVar35,0xa4);
        FUN_10095a30(local_4bc + 1,1);
        memcpy(&local_55c,puVar35,0xa4);
        FUN_10095a30(&local_55c,2);
        memcpy(&local_748,puVar35,0xa4);
        FUN_10095a30(&local_748,3);
        uVar15 = 0;
        do {
          uVar23 = uVar32;
          if (0x28 < uVar32) goto LAB_1009afaf;
          uVar26 = uVar15 + 1;
          iVar22 = 0;
          do {
            if (uVar32 * 4 - iVar22 == 0) {
              if (uVar27 < uVar14) {
                FUN_10136a50(uVar15,uVar14,uVar27,&PTR_s_C__Users_runneradmin__rustup_too_10149a04);
                    /* WARNING: Does not return */
                pcVar4 = (code *)invalidInstructionException();
                (*pcVar4)();
              }
              if (uVar14 - uVar15 != 0) {
                memset(local_414 + uVar15,0x30,uVar14 - uVar15);
              }
              goto LAB_1009af49;
            }
            uVar29 = iVar22 + 4;
            iVar22 = iVar22 + 4;
          } while (*(int *)((int)local_6a8 + uVar29) == 0);
          if (uVar32 < local_6a8[0]) {
            uVar23 = local_6a8[0];
          }
          if (0x28 < uVar23) goto LAB_1009afaf;
          iVar22 = uVar23 * 4;
          do {
            if (iVar22 == 0) goto LAB_1009ab4c;
            puVar1 = (uint *)((int)local_6a8 + iVar22);
            puVar35 = (uint *)((int)&uStack_74c + iVar22);
            iVar22 = iVar22 + -4;
          } while (*puVar1 == *puVar35);
          if (*puVar1 < *puVar35) {
            bVar9 = 0;
          }
          else {
LAB_1009ab4c:
            uVar32 = 0;
            bVar37 = true;
            do {
              uVar36 = ~(&local_748)[uVar32];
              puVar35 = local_6a8 + uVar32 + 1;
              uVar28 = (uint)bVar37;
              uVar19 = *puVar35;
              uVar24 = *puVar35 + uVar36;
              bVar37 = CARRY4(uVar19,uVar36) || CARRY4(uVar24,uVar28);
              *puVar35 = uVar24 + uVar28;
              uVar32 = uVar32 + 1;
            } while (uVar23 != uVar32);
            if (!CARRY4(uVar19,uVar36) && !CARRY4(uVar24,uVar28)) goto LAB_1009b023;
            bVar9 = 8;
            local_604[0] = uVar23;
            uVar32 = uVar23;
          }
          uVar23 = uVar32;
          if (uVar32 < local_4bc[0]) {
            uVar23 = local_4bc[0];
          }
          if (0x28 < uVar23) goto LAB_1009afaf;
          iVar22 = uVar23 * 4;
          do {
            if (iVar22 == 0) goto LAB_1009abbd;
            puVar35 = (uint *)((int)&local_560 + iVar22);
            puVar1 = (uint *)((int)local_6a8 + iVar22);
            iVar22 = iVar22 + -4;
          } while (*puVar1 == *puVar35);
          if (*puVar35 <= *puVar1) {
LAB_1009abbd:
            if (uVar23 != 0) {
              uVar32 = 0;
              bVar37 = true;
              do {
                uVar36 = ~(uint)(&local_55c)[uVar32];
                puVar35 = local_6a8 + uVar32 + 1;
                uVar28 = (uint)bVar37;
                uVar19 = *puVar35;
                uVar24 = *puVar35 + uVar36;
                bVar37 = CARRY4(uVar19,uVar36) || CARRY4(uVar24,uVar28);
                *puVar35 = uVar24 + uVar28;
                uVar32 = uVar32 + 1;
              } while (uVar23 != uVar32);
              if (!CARRY4(uVar19,uVar36) && !CARRY4(uVar24,uVar28)) goto LAB_1009b023;
            }
            bVar9 = bVar9 | 4;
            local_604[0] = uVar23;
            uVar32 = uVar23;
          }
          uVar23 = uVar32;
          if (uVar32 < local_418) {
            uVar23 = local_418;
          }
          if (0x28 < uVar23) goto LAB_1009afaf;
          iVar22 = uVar23 * 4;
          do {
            if (iVar22 == 0) goto LAB_1009ac3d;
            puVar35 = (uint *)((int)local_4bc + iVar22);
            puVar1 = (uint *)((int)local_6a8 + iVar22);
            iVar22 = iVar22 + -4;
          } while (*puVar1 == *puVar35);
          if (*puVar35 <= *puVar1) {
LAB_1009ac3d:
            if (uVar23 != 0) {
              uVar32 = 0;
              bVar37 = true;
              do {
                uVar36 = ~local_4bc[uVar32 + 1];
                puVar35 = local_6a8 + uVar32 + 1;
                uVar28 = (uint)bVar37;
                uVar19 = *puVar35;
                uVar24 = *puVar35 + uVar36;
                bVar37 = CARRY4(uVar19,uVar36) || CARRY4(uVar24,uVar28);
                *puVar35 = uVar24 + uVar28;
                uVar32 = uVar32 + 1;
              } while (uVar23 != uVar32);
              if (!CARRY4(uVar19,uVar36) && !CARRY4(uVar24,uVar28)) goto LAB_1009b023;
            }
            bVar9 = bVar9 + 2;
            local_604[0] = uVar23;
            uVar32 = uVar23;
          }
          uVar23 = uVar32;
          if (uVar32 < uVar11) {
            uVar23 = uVar11;
          }
          if (0x28 < uVar23) goto LAB_1009afaf;
          iVar22 = uVar23 * 4;
          do {
            if (iVar22 == 0) goto LAB_1009acbd;
            puVar35 = (uint *)((int)local_604 + iVar22);
            puVar1 = (uint *)((int)local_6a8 + iVar22);
            iVar22 = iVar22 + -4;
          } while (*puVar1 == *puVar35);
          if (*puVar35 <= *puVar1) {
LAB_1009acbd:
            if (uVar23 != 0) {
              uVar32 = 0;
              bVar37 = true;
              do {
                uVar36 = ~*(uint *)(local_5fc + uVar32 * 4 + -4);
                puVar35 = local_6a8 + uVar32 + 1;
                uVar28 = (uint)bVar37;
                uVar19 = *puVar35;
                uVar24 = *puVar35 + uVar36;
                bVar37 = CARRY4(uVar19,uVar36) || CARRY4(uVar24,uVar28);
                *puVar35 = uVar24 + uVar28;
                uVar32 = uVar32 + 1;
              } while (uVar23 != uVar32);
              if (!CARRY4(uVar19,uVar36) && !CARRY4(uVar24,uVar28)) {
LAB_1009b023:
                FUN_10136b40(&PTR_s_C__Users_runneradmin__rustup_too_10145400);
                    /* WARNING: Does not return */
                pcVar4 = (code *)invalidInstructionException();
                (*pcVar4)();
              }
            }
            bVar9 = bVar9 + 1;
            local_604[0] = uVar23;
            uVar32 = uVar23;
          }
          if (uVar15 == uVar27) {
            FUN_10136b52(uVar27,uVar27,&PTR_s_C__Users_runneradmin__rustup_too_101499f4);
                    /* WARNING: Does not return */
            pcVar4 = (code *)invalidInstructionException();
            (*pcVar4)();
          }
          local_414[uVar15] = bVar9 + 0x30;
          if (uVar32 == 0) {
            uVar32 = 0;
          }
          else {
            iVar22 = uVar32 * 4;
            uVar23 = 0;
            puVar35 = local_6a8;
            do {
              puVar35 = (uint *)((int)puVar35 + 4);
              lVar3 = (ulonglong)*puVar35 * 10 + (ulonglong)uVar23;
              uVar23 = (uint)((ulonglong)lVar3 >> 0x20);
              *puVar35 = (uint)lVar3;
              iVar22 = iVar22 + -4;
            } while (iVar22 != 0);
            if (uVar23 != 0) {
              if (uVar32 == 0x28) goto LAB_1009b096;
              local_6a8[uVar32 + 1] = uVar23;
              uVar32 = uVar32 + 1;
            }
          }
          local_604[0] = uVar32;
          uVar15 = uVar26;
        } while (uVar26 != uVar14);
        bVar37 = false;
      }
    }
    uVar23 = 0;
    if (uVar11 != 0) {
      iVar22 = uVar11 * 4;
      uVar15 = 0;
      puVar35 = local_604;
      do {
        puVar35 = (uint *)((int)puVar35 + 4);
        lVar3 = (ulonglong)*puVar35 * 5 + (ulonglong)uVar15;
        *puVar35 = (uint)lVar3;
        uVar15 = (uint)((ulonglong)lVar3 >> 0x20);
        iVar22 = iVar22 + -4;
      } while (iVar22 != 0);
      uVar23 = uVar11;
      if (uVar15 != 0) {
        if (uVar11 == 0x28) {
LAB_1009b096:
          FUN_10136b52(0x28,0x28,&PTR_s_C__Users_runneradmin__rustup_too_10145400);
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        *(uint *)(local_5fc + uVar11 * 4 + -4) = uVar15;
        uVar23 = uVar11 + 1;
      }
    }
    local_560 = uVar23;
    if (uVar32 < uVar23) {
      uVar32 = uVar23;
    }
    uVar23 = uVar32;
    if (0x28 < uVar32) goto LAB_1009afaf;
    iVar22 = uVar32 << 2;
    do {
      if (iVar22 == 0) goto LAB_1009ae7f;
      puVar35 = (uint *)((int)local_604 + iVar22);
      puVar1 = (uint *)((int)local_6a8 + iVar22);
      bVar38 = *puVar1 < *puVar35;
      iVar22 = iVar22 + -4;
    } while (*puVar1 == *puVar35);
    if (!bVar38 == bVar38) {
LAB_1009ae7f:
      if (!bVar37) {
        if (uVar27 <= uVar14 - 1) {
          FUN_10136b52(uVar14 - 1,uVar27,&PTR_s_C__Users_runneradmin__rustup_too_101499c4);
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        if ((local_414[uVar14 - 1] & 1) != 0) goto LAB_1009aead;
        goto LAB_1009af3e;
      }
      uVar14 = 0;
    }
    else {
      if ((char)(!bVar38 - bVar38) == '\x01') {
LAB_1009aead:
        uVar32 = uVar14;
        if (uVar27 < uVar14) {
          FUN_10136a50(0,uVar14,uVar27,&PTR_s_C__Users_runneradmin__rustup_too_101499d4);
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        do {
          uVar23 = uVar32;
          if (uVar23 == 0) {
            bVar9 = 0x31;
            if (!bVar37) {
              local_414[0] = 0x31;
              memset(local_414 + 1,0x30,uVar14 - 1);
              bVar9 = 0x30;
            }
            uVar12 = local_7b8 + 1;
            bVar37 = sVar16 <= (short)local_7b8;
            local_7b8 = uVar12;
            if ((bVar37) && (uVar14 < uVar27)) {
              local_414[uVar14] = bVar9;
              uVar14 = uVar14 + 1;
            }
            goto LAB_1009af3e;
          }
          uVar32 = uVar23 - 1;
        } while (local_414[uVar23 - 1] == 0x39);
        local_414[uVar23 - 1] = local_414[uVar23 - 1] + 1;
        memset(local_414 + uVar23,0x30,uVar14 - uVar23);
      }
LAB_1009af3e:
      local_75c = local_7b8;
      if (uVar27 < uVar14) {
        FUN_10136a50(0,uVar14,uVar27,&PTR_s_C__Users_runneradmin__rustup_too_101499e4);
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
    }
LAB_1009af49:
    pbVar8 = local_414;
    local_760 = uVar14;
  }
  if (sVar16 < (short)local_75c) {
    local_554 = FUN_10097690(pbVar8,local_760,local_75c,uVar17,(undefined2 *)&local_748);
  }
  else {
    local_748._0_2_ = 2;
    if (param_3 == 0) {
      local_744 = "0";
      local_740 = 1;
      uVar29 = 1;
    }
    else {
      uVar29 = 2;
      local_744 = "0.";
      local_740 = 2;
      local_73c = 0;
      local_738 = uVar17;
    }
    local_554 = CONCAT44(uVar29,&local_748);
  }
LAB_1009af7b:
  local_55c = pcVar33;
  local_558 = uVar18;
  FUN_10097e20(param_1,(undefined8 *)&local_55c);
  return;
}
