// rea decompile_all
// name: FUN_1009b0e0
// address: 0x1009b0e0
// body: available
// range: 0x1009b0e0-0x1009c1ba inclusive
// range: 0x1009c1c0-0x1009c210 inclusive
// range: 0x1009c220-0x1009c29c inclusive
// range: 0x1009c2a0-0x1009c31c inclusive
// range: 0x1009c320-0x1009c39c inclusive
// range: 0x1009c3a0-0x1009c441 inclusive
// range: 0x1009c450-0x1009c4dd inclusive
// range: 0x1009c4e0-0x1009c4e7 inclusive
// range: 0x1009c4f0-0x1009c536 inclusive
// range: 0x1009c540-0x1009c617 inclusive
// range: 0x1009c620-0x1009c637 inclusive
// range: 0x1009c640-0x1009c6a4 inclusive
// range: 0x1009c6b0-0x1009c8cc inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

void __fastcall FUN_1009b0e0(undefined4 *param_1,char param_2)

{
  char **ppcVar1;
  uint *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  code *pcVar6;
  short sVar7;
  short sVar8;
  char *pcVar9;
  char *pcVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  char cVar18;
  byte bVar19;
  ushort uVar20;
  uint uVar21;
  int iVar22;
  uint *puVar23;
  uint uVar24;
  int iVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  int iVar32;
  char cVar33;
  byte bVar34;
  char *pcVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  char **ppcVar43;
  char *pcVar44;
  uint uVar45;
  uint uVar46;
  uint uVar47;
  char *pcVar48;
  uint uVar49;
  uint uVar50;
  uint uVar51;
  uint uVar52;
  bool bVar53;
  ulonglong in_XMM0_Qa;
  uint local_5d0;
  uint local_5cc;
  uint local_5c8;
  uint local_5c0;
  uint local_5bc;
  uint local_5b0;
  uint local_5a0;
  byte local_594;
  ushort local_58c;
  char *local_574;
  char acStack_55e [18];
  int local_54c;
  uint local_548;
  uint local_544;
  char *local_540;
  uint uStack_53c;
  char *local_538 [2];
  undefined4 local_530;
  uint local_498;
  char *local_494 [2];
  undefined1 local_48c [152];
  uint local_3f4;
  char *local_3f0 [2];
  undefined8 local_3e8;
  uint local_350;
  uint auStack_34c [2];
  undefined1 local_344 [156];
  uint local_2a8;
  uint local_2a4;
  undefined1 local_2a0 [156];
  uint local_204 [2];
  undefined1 local_1fc [156];
  uint local_160 [41];
  uint local_bc [41];
  uint local_18;

  uStack_53c = (uint)(in_XMM0_Qa >> 0x20);
  local_540 = (char *)in_XMM0_Qa;
  local_5a0 = uStack_53c >> 0x14 & 0x7ff;
  pcVar48 = (char *)((uStack_53c & 0xfffff) + 0x100000);
  if (local_5a0 == 0) {
    pcVar48 = (char *)((uStack_53c & 0xfffff) << 1 | (uint)local_540 >> 0x1f);
  }
  pcVar35 = (char *)((int)local_540 * 2);
  if (local_5a0 != 0) {
    pcVar35 = local_540;
  }
  if ((in_XMM0_Qa & 0xfffff00000000) == 0 && local_540 == (char *)0x0) {
    cVar18 = '\x03';
    if ((uStack_53c & 0x7fffffff) == 0x7ff00000 && local_540 == (char *)0x0) goto LAB_1009b244;
    cVar33 = (local_540 != (char *)0x0 || (in_XMM0_Qa & 0x7fffffff00000000) != 0) * '\x02' + '\x02';
    if (cVar33 == '\x02') goto LAB_1009b242;
LAB_1009b16e:
    bVar19 = (byte)pcVar35;
    if (cVar33 == '\x03') {
      local_5a0 = local_5a0 - 0x433;
    }
    else {
      if (pcVar48 == (char *)0x100000 && pcVar35 == (char *)0x0) {
        local_5a0 = local_5a0 - 0x435;
        local_574 = "-";
        local_544 = uStack_53c >> 0x1f;
        pcVar48 = "+";
        if ((longlong)in_XMM0_Qa < 0) {
          pcVar48 = "-";
        }
        else {
          local_574 = (char *)0x1;
        }
        if (param_2 != '\0') {
          local_544 = 1;
          local_574 = pcVar48;
        }
        local_594 = 1;
        pcVar48 = (char *)0x400000;
        pcVar35 = (char *)0x0;
        local_548 = 2;
        goto LAB_1009b398;
      }
      pcVar48 = (char *)((int)pcVar48 << 1 | (uint)pcVar35 >> 0x1f);
      local_5a0 = local_5a0 - 0x434;
      pcVar35 = (char *)((int)pcVar35 * 2);
    }
    local_594 = bVar19 & 1 ^ 1;
    if (local_594 < 2) {
      local_544 = uStack_53c >> 0x1f;
      local_574 = "-";
      pcVar9 = "+";
      local_548 = 1;
      if ((longlong)in_XMM0_Qa < 0) {
        pcVar9 = "-";
      }
      else {
        local_574 = (char *)0x1;
      }
      if (param_2 != '\0') {
        local_544 = 1;
        local_574 = pcVar9;
      }
      if (pcVar35 == (char *)0x0 && pcVar48 == (char *)0x0) {
        FUN_10136b40(&PTR_s_C__Users_runneradmin__rustup_too_101498bc);
                    /* WARNING: Does not return */
        pcVar6 = (code *)invalidInstructionException();
        (*pcVar6)();
      }
LAB_1009b398:
      pcVar9 = pcVar35 + local_548;
      pcVar44 = pcVar48 + CARRY4(local_548,(uint)pcVar35);
      if (CARRY4((uint)pcVar48,(uint)CARRY4(local_548,(uint)pcVar35))) {
        FUN_10136b40(&PTR_s_C__Users_runneradmin__rustup_too_10149924);
                    /* WARNING: Does not return */
        pcVar6 = (code *)invalidInstructionException();
        (*pcVar6)();
      }
      uVar51 = 0x1f;
      if (pcVar9 != (char *)0x0) {
        for (; (uint)pcVar9 >> uVar51 == 0; uVar51 = uVar51 - 1) {
        }
      }
      uVar24 = 0x3f;
      if (pcVar9 != (char *)0x0) {
        uVar24 = uVar51;
      }
      uVar51 = 0x1f;
      if (pcVar44 != (char *)0x0) {
        for (; (uint)pcVar44 >> uVar51 == 0; uVar51 = uVar51 - 1) {
        }
      }
      uVar51 = uVar51 ^ 0x1f;
      if (pcVar44 == (char *)0x0) {
        uVar51 = (uVar24 ^ 0x1f) + 0x20;
      }
      local_538[0] = pcVar35 + -1;
      local_538[1] = pcVar48 + ((pcVar35 != (char *)0x0) - 1);
      bVar19 = (byte)uVar51;
      uVar24 = (int)local_538[0] << (bVar19 & 0x1f);
      uVar17 = (int)local_538[1] << (bVar19 & 0x1f) | (uint)local_538[0] >> 0x20 - (bVar19 & 0x1f);
      if ((uVar51 & 0x20) != 0) {
        uVar17 = uVar24;
      }
      pcVar10 = (char *)(uVar17 >> (bVar19 & 0x1f));
      local_3f0[1] = pcVar10;
      if ((uVar51 & 0x20) != 0) {
        uVar24 = 0;
        local_3f0[1] = (char *)0x0;
      }
      local_3f0[0] = (char *)(uVar24 >> (bVar19 & 0x1f) | uVar17 << 0x20 - (bVar19 & 0x1f));
      if ((uVar51 & 0x20) != 0) {
        local_3f0[0] = pcVar10;
      }
      sVar8 = (short)local_5a0;
      if (local_3f0[1] == local_538[1] && local_3f0[0] == local_538[0]) {
        uVar36 = (int)pcVar35 << (bVar19 & 0x1f);
        uVar42 = (int)pcVar48 << (bVar19 & 0x1f) | (uint)pcVar35 >> 0x20 - (bVar19 & 0x1f);
        if ((uVar51 & 0x20) != 0) {
          uVar42 = uVar36;
        }
        pcVar10 = (char *)(uVar42 >> (bVar19 & 0x1f));
        local_3f0[1] = pcVar10;
        if ((uVar51 & 0x20) != 0) {
          uVar36 = 0;
          local_3f0[1] = (char *)0x0;
        }
        local_3f0[0] = (char *)(uVar36 >> (bVar19 & 0x1f) | uVar42 << 0x20 - (bVar19 & 0x1f));
        if ((uVar51 & 0x20) != 0) {
          local_3f0[0] = pcVar10;
        }
        local_530 = CONCAT22(local_530._2_2_,sVar8);
        local_538[0] = pcVar35;
        local_538[1] = pcVar48;
        if (local_3f0[1] == pcVar48 && local_3f0[0] == pcVar35) {
          local_54c = (int)sVar8;
          sVar7 = sVar8 - (short)uVar51;
          uVar47 = ((short)(-0x60 - sVar7) * 0x50 + 0x153b0) / 0x84e;
          if (0x50 < uVar47) {
            FUN_10136b52(uVar47,0x51,&PTR_s_C__Users_runneradmin__rustup_too_1014988c);
                    /* WARNING: Does not return */
            pcVar6 = (code *)invalidInstructionException();
            (*pcVar6)();
          }
          uVar37 = (int)pcVar9 << (bVar19 & 0x1f);
          uVar38 = uVar37;
          uVar52 = (int)pcVar44 << (bVar19 & 0x1f) | (uint)pcVar9 >> 0x20 - (bVar19 & 0x1f);
          if ((uVar51 & 0x20) != 0) {
            uVar38 = 0;
            uVar52 = uVar37;
          }
          iVar25 = uVar47 * 0x10;
          uVar51 = *(uint *)(&DAT_101492c0 + iVar25);
          uVar47 = *(uint *)(&DAT_101492c4 + iVar25);
          lVar5 = (ulonglong)uVar47 * (ulonglong)uVar38 +
                  ((ulonglong)uVar51 * (ulonglong)uVar38 >> 0x20);
          uVar39 = (uint)lVar5;
          uVar21 = (uint)((ulonglong)lVar5 >> 0x20);
          uVar26 = (uint)((ulonglong)uVar51 * (ulonglong)uVar52 >> 0x20);
          uVar11 = (uint)((ulonglong)uVar51 * (ulonglong)uVar52);
          uVar38 = (uint)CARRY4(uVar11,uVar39);
          uVar37 = uVar26 + uVar21;
          uVar45 = uVar37 + uVar38;
          uVar12 = (uint)((ulonglong)uVar47 * (ulonglong)uVar52);
          uVar13 = uVar12 + uVar45;
          uVar40 = -((int)(uVar11 + uVar39) >> 0x1f);
          lVar5 = (ulonglong)uVar47 * (ulonglong)uVar24 +
                  ((ulonglong)uVar51 * (ulonglong)uVar24 >> 0x20);
          uVar49 = (uint)lVar5;
          uVar27 = (uint)((ulonglong)lVar5 >> 0x20);
          uVar28 = (uint)((ulonglong)uVar51 * (ulonglong)uVar17 >> 0x20);
          uVar39 = (uint)((ulonglong)uVar51 * (ulonglong)uVar17);
          uVar24 = (uint)CARRY4(uVar39,uVar49);
          uVar11 = uVar28 + uVar27;
          uVar41 = uVar11 + uVar24;
          uVar14 = (uint)((ulonglong)uVar47 * (ulonglong)uVar17);
          uVar15 = uVar14 + uVar41;
          uVar46 = (int)(uVar39 + uVar49) >> 0x1f;
          lVar5 = (ulonglong)uVar47 * (ulonglong)uVar36 +
                  ((ulonglong)uVar51 * (ulonglong)uVar36 >> 0x20);
          uVar50 = (uint)lVar5;
          uVar29 = (uint)((ulonglong)lVar5 >> 0x20);
          uVar30 = (uint)((ulonglong)uVar51 * (ulonglong)uVar42 >> 0x20);
          uVar39 = (uint)((ulonglong)uVar51 * (ulonglong)uVar42);
          uVar51 = (uint)CARRY4(uVar39,uVar50);
          uVar36 = uVar30 + uVar29;
          uVar31 = uVar36 + uVar51;
          uVar49 = (uint)((ulonglong)uVar47 * (ulonglong)uVar42);
          uVar16 = uVar49 + uVar31;
          uVar39 = -((int)(uVar39 + uVar50) >> 0x1f);
          uVar50 = uVar39 + uVar16;
          iVar32 = (int)((ulonglong)uVar47 * (ulonglong)uVar42 >> 0x20) +
                   (uint)(CARRY4(uVar30,uVar29) || CARRY4(uVar36,uVar51)) +
                   (uint)CARRY4(uVar49,uVar31) + (uint)CARRY4(uVar39,uVar16);
          uVar51 = uVar40 + uVar13;
          uVar39 = uVar51 + 1;
          uVar42 = (int)((ulonglong)uVar47 * (ulonglong)uVar52 >> 0x20) +
                   (uint)(CARRY4(uVar26,uVar21) || CARRY4(uVar37,uVar38)) +
                   (uint)CARRY4(uVar12,uVar45) + (uint)CARRY4(uVar40,uVar13) +
                   (uint)(0xfffffffe < uVar51);
          uVar20 = -(*(short *)(&DAT_101492c8 + iVar25) + sVar7);
          bVar19 = (byte)uVar20;
          local_5c8 = uVar39 >> (bVar19 & 0x1f) | uVar42 << 0x20 - (bVar19 & 0x1f);
          uVar51 = 0 << (bVar19 & 0x1f) | 1U >> 0x20 - (bVar19 & 0x1f);
          uVar52 = 1 << (bVar19 & 0x1f);
          uVar36 = uVar52;
          if ((uVar20 & 0x20) != 0) {
            uVar36 = 0;
            uVar51 = uVar52;
            local_5c8 = uVar42 >> (bVar19 & 0x1f);
          }
          uVar52 = uVar36 - 1;
          uVar38 = (uVar51 - 1) + (uint)(uVar36 != 0);
          if (local_5c8 < 10000) {
            if (local_5c8 < 100) {
              uVar12 = (uint)(9 < local_5c8);
              uVar37 = uVar12 * 9 + 1;
            }
            else {
              uVar37 = 1000;
              if (local_5c8 < 1000) {
                uVar37 = 100;
              }
              uVar12 = (uint)(local_5c8 < 1000 ^ 3);
            }
          }
          else if (local_5c8 < 1000000) {
            uVar37 = 100000;
            if (local_5c8 < 100000) {
              uVar37 = 10000;
            }
            uVar12 = (uint)(local_5c8 < 100000 ^ 5);
          }
          else if (local_5c8 < 100000000) {
            uVar37 = 10000000;
            if (local_5c8 < 10000000) {
              uVar37 = 1000000;
            }
            uVar12 = (uint)(local_5c8 < 10000000 ^ 7);
          }
          else {
            uVar37 = 1000000000;
            if (local_5c8 < 1000000000) {
              uVar37 = 100000000;
            }
            uVar12 = (uint)(local_5c8 < 1000000000 ^ 9);
          }
          local_5cc = uVar42 & uVar38;
          local_58c = ((short)uVar12 - *(short *)(&DAT_101492ca + iVar25)) + 1;
          local_5d0 = uVar39 & uVar52;
          uVar13 = uVar46 - uVar15;
          uVar49 = uVar13 + uVar39;
          uVar16 = uVar49 + 1;
          uVar17 = ((uVar46 - ((int)((ulonglong)uVar47 * (ulonglong)uVar17 >> 0x20) +
                               (uint)(CARRY4(uVar28,uVar27) || CARRY4(uVar11,uVar24)) +
                              (uint)CARRY4(uVar14,uVar41))) - (uint)(uVar46 < uVar15)) + uVar42 +
                   (uint)CARRY4(uVar13,uVar39) + (uint)(0xfffffffe < uVar49);
          local_5b0 = uVar16 & uVar52;
          uVar24 = 0;
          local_5bc = uVar17 & uVar38;
          while( true ) {
            uVar47 = local_5c8 / uVar37;
            local_5c8 = local_5c8 % uVar37;
            cVar18 = (char)uVar47 + '0';
            acStack_55e[uVar24 + 1] = cVar18;
            uVar13 = local_5c8 << (bVar19 & 0x1f);
            uVar11 = uVar13;
            uVar47 = 0 << (bVar19 & 0x1f) | local_5c8 >> 0x20 - (bVar19 & 0x1f);
            if ((uVar20 & 0x20) != 0) {
              uVar11 = 0;
              uVar47 = uVar13;
            }
            uVar13 = uVar11 + local_5d0;
            uVar47 = uVar47 + local_5cc + (uint)CARRY4(uVar11,local_5d0);
            if (uVar47 < uVar17 || uVar47 - uVar17 < (uint)(uVar13 < uVar16)) {
              uVar52 = uVar37 << (bVar19 & 0x1f);
              uVar36 = uVar52;
              uVar51 = 0 << (bVar19 & 0x1f) | uVar37 >> 0x20 - (bVar19 & 0x1f);
              if ((uVar20 & 0x20) != 0) {
                uVar36 = 0;
                uVar51 = uVar52;
              }
              uVar52 = uVar39 - uVar50;
              iVar25 = (uVar42 - iVar32) - (uint)(uVar39 < uVar50);
              uVar38 = uVar52 + 1;
              uVar37 = iVar25 + (uint)(0xfffffffe < uVar52);
              uVar42 = uVar52 - 1;
              uVar52 = iVar25 + -1 + (uint)(uVar52 != 0);
              uVar11 = (uVar17 - uVar47) - (uint)(uVar16 < uVar13);
              bVar53 = uVar11 < uVar51 || uVar11 - uVar51 < (uint)(uVar16 - uVar13 < uVar36);
              if ((uVar52 <= uVar47 && (uint)(uVar13 < uVar42) <= uVar47 - uVar52) ||
                 (uVar11 < uVar51 || uVar11 - uVar51 < (uint)(uVar16 - uVar13 < uVar36)))
              goto LAB_1009bbcf;
              goto LAB_1009b8f0;
            }
            if (uVar12 == uVar24) break;
            uVar24 = uVar24 + 1;
            bVar53 = uVar37 < 10;
            uVar37 = uVar37 / 10;
            if (bVar53) {
              FUN_10136ca0(&PTR_s_C__Users_runneradmin__rustup_too_101498cc);
                    /* WARNING: Does not return */
              pcVar6 = (code *)invalidInstructionException();
              (*pcVar6)();
            }
          }
          local_5c8 = 1;
          iVar25 = 0;
          uVar17 = local_5c8;
          do {
            local_5c8 = uVar17;
            local_5c0 = uVar24;
            iVar22 = iVar25;
            if (local_5c0 == 0x10) {
              FUN_10136b52(0x11,0x11,&PTR_s_C__Users_runneradmin__rustup_too_101498dc);
                    /* WARNING: Does not return */
              pcVar6 = (code *)invalidInstructionException();
              (*pcVar6)();
            }
            uVar47 = (uint)((ulonglong)local_5d0 * 10);
            uVar24 = (int)((ulonglong)local_5d0 * 10 >> 0x20) + local_5cc * 10;
            uVar4 = (ulonglong)local_5c8 * 10;
            uVar17 = (uint)uVar4;
            uVar3 = (ulonglong)local_5b0;
            local_5b0 = (uint)(uVar3 * 10);
            local_5bc = (int)(uVar3 * 10 >> 0x20) + local_5bc * 10;
            local_5cc = uVar24 & uVar38;
            local_5d0 = uVar47 & uVar52;
            bVar34 = (byte)(uVar24 >> (bVar19 & 0x1f));
            if ((uVar20 & 0x20) == 0) {
              bVar34 = (byte)(uVar47 >> (bVar19 & 0x1f)) | (byte)(uVar24 << 0x20 - (bVar19 & 0x1f));
            }
            acStack_55e[local_5c0 + 2] = bVar34 + 0x30;
            iVar25 = (int)(uVar4 >> 0x20) + iVar22 * 10;
            uVar24 = local_5c0 + 1;
          } while (local_5bc <= local_5cc && (uint)(local_5d0 < local_5b0) <= local_5cc - local_5bc)
          ;
          lVar5 = (uVar4 & 0xffffffff) * (ulonglong)(uVar39 - uVar50);
          uVar24 = (uint)lVar5;
          iVar32 = (uVar39 - uVar50) * iVar25 +
                   ((uVar42 - iVar32) - (uint)(uVar39 < uVar50)) * uVar17 +
                   (int)((ulonglong)lVar5 >> 0x20);
          uVar42 = uVar24 + uVar17;
          uVar47 = iVar32 + iVar25 + (uint)CARRY4(uVar24,uVar17);
          uVar52 = uVar24 - uVar17;
          uVar17 = (iVar32 - iVar25) - (uint)(uVar24 < uVar17);
          uVar24 = (local_5bc - local_5cc) - (uint)(local_5b0 < local_5d0);
          bVar53 = uVar24 < uVar51 || uVar24 - uVar51 < (uint)(local_5b0 - local_5d0 < uVar36);
          if ((local_5cc < uVar17 || local_5cc - uVar17 < (uint)(local_5d0 < uVar52)) &&
             (uVar51 <= uVar24 && (uint)(local_5b0 - local_5d0 < uVar36) <= uVar24 - uVar51)) {
            cVar18 = bVar34 + 0x2f;
            uVar24 = local_5d0;
            uVar38 = local_5cc;
            while( true ) {
              local_5d0 = uVar24 + uVar36;
              local_5cc = uVar38 + uVar51 + (uint)CARRY4(uVar24,uVar36);
              if ((uVar17 <= local_5cc && (uint)(local_5d0 < uVar52) <= local_5cc - uVar17) &&
                 (uVar37 = (uVar17 - uVar38) - (uint)(uVar52 < uVar24),
                 uVar11 = (local_5cc - uVar17) - (uint)(local_5d0 < uVar52),
                 uVar37 < uVar11 || uVar37 - uVar11 < (uint)(uVar52 - uVar24 < local_5d0 - uVar52)))
              break;
              uVar37 = (local_5bc - local_5cc) - (uint)(local_5b0 < local_5d0);
              bVar53 = uVar37 < uVar51 || uVar37 - uVar51 < (uint)(local_5b0 - local_5d0 < uVar36);
              acStack_55e[local_5c0 + 2] = cVar18;
              if ((uVar17 <= local_5cc && (uint)(local_5d0 < uVar52) <= local_5cc - uVar17) ||
                 (cVar18 = cVar18 + -1, uVar24 = local_5d0, uVar38 = local_5cc,
                 uVar37 < uVar51 || uVar37 - uVar51 < (uint)(local_5b0 - local_5d0 < uVar36)))
              goto LAB_1009bc78;
            }
            bVar53 = false;
            local_5d0 = uVar24;
            local_5cc = uVar38;
          }
LAB_1009bc78:
          if ((local_5cc < uVar47 || local_5cc - uVar47 < (uint)(local_5d0 < uVar42)) && (!bVar53))
          {
            uVar24 = uVar36 + local_5d0;
            uVar51 = uVar51 + local_5cc + (uint)CARRY4(uVar36,local_5d0);
            if ((uVar47 <= uVar51 && (uint)(uVar24 < uVar42) <= uVar51 - uVar47) &&
               (uVar17 = (uVar47 - local_5cc) - (uint)(uVar42 < local_5d0),
               uVar51 = (uVar51 - uVar47) - (uint)(uVar24 < uVar42),
               uVar17 < uVar51 || uVar17 - uVar51 < (uint)(uVar42 - local_5d0 < uVar24 - uVar42)))
            goto LAB_1009bcf4;
            goto LAB_1009bd2c;
          }
LAB_1009bcf4:
          uVar51 = (int)((ulonglong)local_5c8 * 0x14 >> 0x20) + iVar22 * 0x14;
          if ((local_5cc < uVar51 ||
               local_5cc - uVar51 < (uint)(local_5d0 < (uint)((ulonglong)local_5c8 * 0x14))) ||
             (uVar51 = (uint)((ulonglong)local_5c8 * 0xffffffd8),
             uVar24 = local_5bc +
                      ((int)((ulonglong)local_5c8 * 0xffffffd8 >> 0x20) - local_5c8) +
                      iVar22 * -0x28 + (uint)CARRY4(local_5b0,uVar51),
             uVar24 < local_5cc || uVar24 - local_5cc < (uint)(local_5b0 + uVar51 < local_5d0)))
          goto LAB_1009bd2c;
          goto LAB_1009c782;
        }
      }
      local_530 = CONCAT22(local_530._2_2_,sVar8);
      FUN_10136a19(local_3f0,local_538);
                    /* WARNING: Does not return */
      pcVar6 = (code *)invalidInstructionException();
      (*pcVar6)();
    }
    cVar18 = local_594 - 2;
    if (cVar18 != '\0') goto LAB_1009b1af;
LAB_1009b254:
    local_538[1] = "NaN";
    local_530 = 3;
    local_574 = (char *)0x1;
    local_3f0[1] = (char *)0x0;
  }
  else {
    cVar18 = '\x02';
    cVar33 = '\x04' - (local_5a0 == 0);
    if (local_5a0 < 0x7ff) {
      if (cVar33 != '\x02') goto LAB_1009b16e;
LAB_1009b242:
      cVar18 = '\x04';
    }
LAB_1009b244:
    cVar18 = cVar18 + -2;
    if (cVar18 == '\0') goto LAB_1009b254;
LAB_1009b1af:
    local_3f0[1] = (char *)(uStack_53c >> 0x1f);
    local_574 = "-";
    pcVar48 = "+";
    if ((longlong)in_XMM0_Qa < 0) {
      pcVar48 = "-";
    }
    else {
      local_574 = (char *)0x1;
    }
    if (param_2 != '\0') {
      local_3f0[1] = (char *)0x1;
      local_574 = pcVar48;
    }
    if (cVar18 == '\x02') {
      local_538[1] = "0";
      local_530 = 1;
    }
    else {
      local_538[1] = "inf";
      local_530 = 3;
    }
  }
  local_538[0] = (char *)CONCAT22(local_538[0]._2_2_,2);
  local_3e8 = CONCAT44(1,local_538);
  goto LAB_1009b2aa;
LAB_1009b8f0:
  uVar11 = uVar13 + uVar36;
  uVar12 = uVar47 + uVar51 + (uint)CARRY4(uVar13,uVar36);
  if ((uVar12 < uVar52 || uVar12 - uVar52 < (uint)(uVar11 < uVar42)) ||
     (uVar39 = (uVar52 - uVar47) - (uint)(uVar42 < uVar13),
     uVar14 = (uVar12 - uVar52) - (uint)(uVar11 < uVar42),
     uVar14 <= uVar39 && (uint)(uVar42 - uVar13 < uVar11 - uVar42) <= uVar39 - uVar14)) {
    cVar18 = cVar18 + -1;
    uVar39 = (uVar17 - uVar12) - (uint)(uVar16 < uVar11);
    bVar53 = uVar39 < uVar51 || uVar39 - uVar51 < (uint)(uVar16 - uVar11 < uVar36);
    acStack_55e[uVar24 + 1] = cVar18;
    uVar13 = uVar11;
    uVar47 = uVar12;
    if ((uVar52 <= uVar12 && (uint)(uVar11 < uVar42) <= uVar12 - uVar52) ||
       (uVar39 < uVar51 || uVar39 - uVar51 < (uint)(uVar16 - uVar11 < uVar36))) goto LAB_1009bbcf;
    goto LAB_1009b8f0;
  }
  bVar53 = false;
LAB_1009bbcf:
  if ((uVar47 < uVar37 || uVar47 - uVar37 < (uint)(uVar13 < uVar38)) && (!bVar53)) {
    uVar42 = uVar36 + uVar13;
    uVar51 = uVar51 + uVar47 + (uint)CARRY4(uVar36,uVar13);
    if ((uVar37 <= uVar51 && (uint)(uVar42 < uVar38) <= uVar51 - uVar37) &&
       (uVar36 = (uVar37 - uVar47) - (uint)(uVar38 < uVar13),
       uVar51 = (uVar51 - uVar37) - (uint)(uVar42 < uVar38),
       uVar36 < uVar51 || uVar36 - uVar51 < (uint)(uVar38 - uVar13 < uVar42 - uVar38)))
    goto LAB_1009bc29;
LAB_1009bd2c:
    iVar25 = local_54c;
    pcVar10 = pcVar9 + -1;
    pcVar44 = pcVar44 + ((pcVar9 != (char *)0x0) - 1);
    uVar51 = 0x1f;
    if (pcVar10 != (char *)0x0) {
      for (; (uint)pcVar10 >> uVar51 == 0; uVar51 = uVar51 - 1) {
      }
    }
    uVar24 = 0x3f;
    if (pcVar10 != (char *)0x0) {
      uVar24 = uVar51;
    }
    uVar51 = 0x1f;
    if (pcVar44 != (char *)0x0) {
      for (; (uint)pcVar44 >> uVar51 == 0; uVar51 = uVar51 - 1) {
      }
    }
    uVar51 = uVar51 ^ 0x1f;
    if (pcVar44 == (char *)0x0) {
      uVar51 = (uVar24 ^ 0x1f) + 0x20;
    }
    lVar5 = (longlong)(int)(local_54c - uVar51) * 0x4d104d42;
    uVar51 = (int)((ulonglong)lVar5 >> 0x20) + 0x13 + (uint)(0xbbecaf7f < (uint)lVar5);
    local_58c = (ushort)uVar51;
    local_3f4 = 2 - (pcVar48 == (char *)0x0);
    local_494[0] = pcVar35;
    local_494[1] = pcVar48;
    memset(local_48c,0,0x98);
    local_2a8 = 1;
    auStack_34c[1] = 1;
    memset(local_344,0,0x9c);
    local_204[0] = 1;
    local_2a4 = local_548;
    memset(local_2a0,0,0x9c);
    memset(local_1fc,0,0x9c);
    local_160[0] = 1;
    local_204[1] = 1;
    if (sVar8 < 0) {
      local_5a0 = -iVar25;
      puVar23 = local_204 + 1;
    }
    else {
      local_5a0 = local_5a0 & 0xffff;
      FUN_10095a30(local_494,local_5a0);
      FUN_10095a30(auStack_34c + 1,local_5a0);
      puVar23 = &local_2a4;
    }
    FUN_10095a30(puVar23,local_5a0);
    if ((short)local_58c < 0) {
      uVar51 = -uVar51 & 0xffff;
      FUN_10097970((uint *)local_494,uVar51);
      FUN_10097970(auStack_34c + 1,uVar51);
      puVar23 = &local_2a4;
    }
    else {
      uVar51 = uVar51 & 0x7fff;
      puVar23 = local_204 + 1;
    }
    FUN_10097970(puVar23,uVar51);
    ppcVar43 = local_494;
    memcpy(local_538,ppcVar43,0xa4);
    uVar51 = local_204[0];
    uVar17 = local_498;
    if (local_498 < local_204[0]) {
      uVar17 = local_204[0];
    }
    if (0x28 < uVar17) goto LAB_1009c7b7;
    if (uVar17 == 0) {
      uVar17 = 0;
    }
    else {
      uVar24 = 0;
      bVar53 = false;
      do {
        uVar36 = *(uint *)(local_2a0 + uVar24 * 4 + -4);
        ppcVar1 = local_538 + uVar24;
        uVar42 = (uint)bVar53;
        pcVar48 = *ppcVar1;
        pcVar35 = *ppcVar1 + uVar36;
        bVar53 = CARRY4((uint)pcVar48,uVar36) || CARRY4((uint)pcVar35,uVar42);
        *ppcVar1 = pcVar35 + uVar42;
        uVar24 = uVar24 + 1;
      } while (uVar17 != uVar24);
      if (CARRY4((uint)pcVar48,uVar36) || CARRY4((uint)pcVar35,uVar42)) {
        if (uVar17 == 0x28) goto LAB_1009c854;
        local_538[uVar17] = (char *)0x1;
        uVar17 = uVar17 + 1;
      }
    }
    uVar36 = local_160[0];
    uVar24 = local_3f4;
    local_498 = uVar17;
    if (uVar17 <= local_160[0]) {
      uVar17 = local_160[0];
    }
    if (0x28 < uVar17) goto LAB_1009c7b7;
    iVar25 = uVar17 << 2;
    do {
      if (iVar25 == 0) {
        if (local_594 != 0) goto LAB_1009bffb;
        goto LAB_1009bfa3;
      }
      uVar17 = *(uint *)((int)&uStack_53c + iVar25);
      uVar42 = *(uint *)((int)local_204 + iVar25);
      iVar25 = iVar25 + -4;
    } while (uVar42 == uVar17);
    if ((char)((uVar42 >= uVar17) - (uVar42 < uVar17)) < (char)local_594) {
LAB_1009bffb:
      local_5d0 = uVar51;
      local_58c = local_58c + 1;
      uVar24 = local_204[0];
    }
    else {
LAB_1009bfa3:
      uVar17 = local_3f4;
      if (0x28 < local_3f4) goto LAB_1009c7b7;
      if (local_3f4 == 0) {
        uVar24 = 0;
      }
      else {
        iVar25 = local_3f4 * 4;
        pcVar48 = (char *)0x0;
        do {
          lVar5 = ZEXT48(*ppcVar43) * 10 + ZEXT48(pcVar48);
          pcVar48 = (char *)((ulonglong)lVar5 >> 0x20);
          *ppcVar43 = (char *)lVar5;
          ppcVar43 = ppcVar43 + 1;
          iVar25 = iVar25 + -4;
        } while (iVar25 != 0);
        if (pcVar48 != (char *)0x0) {
          if (uVar24 == 0x28) goto LAB_1009c854;
          local_494[uVar24] = pcVar48;
          uVar24 = uVar24 + 1;
        }
      }
      uVar17 = local_2a8;
      local_3f4 = uVar24;
      if (0x28 < local_2a8) goto LAB_1009c7b7;
      uVar24 = 0;
      if (local_2a8 == 0) {
LAB_1009c08d:
        local_2a8 = uVar24;
      }
      else {
        iVar25 = local_2a8 * 4;
        uVar24 = 0;
        puVar23 = auStack_34c;
        do {
          puVar23 = (uint *)((int)puVar23 + 4);
          lVar5 = (ulonglong)*puVar23 * 10 + (ulonglong)uVar24;
          uVar24 = (uint)((ulonglong)lVar5 >> 0x20);
          *puVar23 = (uint)lVar5;
          iVar25 = iVar25 + -4;
        } while (iVar25 != 0);
        if (uVar24 != 0) {
          if (uVar17 == 0x28) goto LAB_1009c854;
          *(uint *)(local_344 + uVar17 * 4 + -4) = uVar24;
          uVar24 = uVar17 + 1;
          goto LAB_1009c08d;
        }
        local_2a8 = uVar17;
      }
      local_5d0 = 0;
      uVar24 = 0;
      if (uVar51 != 0) {
        iVar25 = uVar51 * 4;
        uVar17 = 0;
        puVar23 = &local_2a4;
        do {
          lVar5 = (ulonglong)*puVar23 * 10 + (ulonglong)uVar17;
          uVar17 = (uint)((ulonglong)lVar5 >> 0x20);
          *puVar23 = (uint)lVar5;
          puVar23 = puVar23 + 1;
          iVar25 = iVar25 + -4;
        } while (iVar25 != 0);
        local_5d0 = uVar51;
        uVar24 = uVar51;
        if (uVar17 != 0) {
          if (uVar51 == 0x28) {
LAB_1009c854:
            FUN_10136b52(0x28,0x28,&PTR_s_C__Users_runneradmin__rustup_too_10145400);
                    /* WARNING: Does not return */
            pcVar6 = (code *)invalidInstructionException();
            (*pcVar6)();
          }
          *(uint *)(local_2a0 + uVar51 * 4 + -4) = uVar17;
          local_5d0 = uVar51 + 1;
          uVar24 = uVar51 + 1;
        }
      }
    }
    local_204[0] = uVar24;
    uVar51 = local_3f4;
    puVar23 = local_204 + 1;
    memcpy(local_160 + 1,puVar23,0xa4);
    FUN_10095a30(local_160 + 1,1);
    memcpy(local_bc + 1,puVar23,0xa4);
    FUN_10095a30(local_bc + 1,2);
    memcpy(local_3f0,puVar23,0xa4);
    FUN_10095a30(local_3f0,3);
    uVar17 = uVar51;
    if (uVar51 < local_350) {
      uVar17 = local_350;
    }
    if (uVar17 < 0x29) {
      local_5c0 = 0;
      do {
        iVar25 = uVar17 * 4;
        do {
          if (iVar25 == 0) goto LAB_1009c220;
          puVar23 = (uint *)((int)&local_498 + iVar25);
          puVar2 = (uint *)((int)&local_3f4 + iVar25);
          iVar25 = iVar25 + -4;
        } while (*puVar23 == *puVar2);
        if (*puVar23 < *puVar2) {
          bVar19 = 0;
        }
        else {
LAB_1009c220:
          if (uVar17 != 0) {
            uVar51 = 0;
            bVar53 = true;
            do {
              uVar42 = ~(uint)local_3f0[uVar51];
              ppcVar43 = local_494 + uVar51;
              uVar24 = (uint)bVar53;
              pcVar48 = *ppcVar43;
              pcVar35 = *ppcVar43 + uVar42;
              bVar53 = CARRY4((uint)pcVar48,uVar42) || CARRY4((uint)pcVar35,uVar24);
              *ppcVar43 = pcVar35 + uVar24;
              uVar51 = uVar51 + 1;
            } while (uVar17 != uVar51);
            if (!CARRY4((uint)pcVar48,uVar42) && !CARRY4((uint)pcVar35,uVar24)) goto LAB_1009c7d4;
          }
          bVar19 = 8;
          local_3f4 = uVar17;
          uVar51 = uVar17;
        }
        uVar17 = uVar51;
        if (uVar51 < local_18) {
          uVar17 = local_18;
        }
        if (0x28 < uVar17) break;
        iVar25 = uVar17 * 4;
        do {
          if (iVar25 == 0) goto LAB_1009c2a0;
          puVar23 = (uint *)((int)local_bc + iVar25);
          puVar2 = (uint *)((int)&local_498 + iVar25);
          iVar25 = iVar25 + -4;
        } while (*puVar2 == *puVar23);
        if (*puVar23 <= *puVar2) {
LAB_1009c2a0:
          if (uVar17 != 0) {
            uVar51 = 0;
            bVar53 = true;
            do {
              uVar42 = ~local_bc[uVar51 + 1];
              ppcVar43 = local_494 + uVar51;
              uVar24 = (uint)bVar53;
              pcVar48 = *ppcVar43;
              pcVar35 = *ppcVar43 + uVar42;
              bVar53 = CARRY4((uint)pcVar48,uVar42) || CARRY4((uint)pcVar35,uVar24);
              *ppcVar43 = pcVar35 + uVar24;
              uVar51 = uVar51 + 1;
            } while (uVar17 != uVar51);
            if (!CARRY4((uint)pcVar48,uVar42) && !CARRY4((uint)pcVar35,uVar24)) goto LAB_1009c7d4;
          }
          bVar19 = bVar19 | 4;
          local_3f4 = uVar17;
          uVar51 = uVar17;
        }
        uVar17 = uVar51;
        if (uVar51 < local_bc[0]) {
          uVar17 = local_bc[0];
        }
        if (0x28 < uVar17) break;
        iVar25 = uVar17 * 4;
        do {
          if (iVar25 == 0) goto LAB_1009c320;
          puVar23 = (uint *)((int)local_160 + iVar25);
          puVar2 = (uint *)((int)&local_498 + iVar25);
          iVar25 = iVar25 + -4;
        } while (*puVar2 == *puVar23);
        if (*puVar23 <= *puVar2) {
LAB_1009c320:
          if (uVar17 != 0) {
            uVar51 = 0;
            bVar53 = true;
            do {
              uVar42 = ~local_160[uVar51 + 1];
              ppcVar43 = local_494 + uVar51;
              uVar24 = (uint)bVar53;
              pcVar48 = *ppcVar43;
              pcVar35 = *ppcVar43 + uVar42;
              bVar53 = CARRY4((uint)pcVar48,uVar42) || CARRY4((uint)pcVar35,uVar24);
              *ppcVar43 = pcVar35 + uVar24;
              uVar51 = uVar51 + 1;
            } while (uVar17 != uVar51);
            if (!CARRY4((uint)pcVar48,uVar42) && !CARRY4((uint)pcVar35,uVar24)) goto LAB_1009c7d4;
          }
          bVar19 = bVar19 + 2;
          local_3f4 = uVar17;
          uVar51 = uVar17;
        }
        uVar17 = uVar51;
        if (uVar51 < uVar36) {
          uVar17 = uVar36;
        }
        if (0x28 < uVar17) break;
        iVar25 = uVar17 * 4;
        do {
          if (iVar25 == 0) goto LAB_1009c3a0;
          puVar23 = (uint *)((int)local_204 + iVar25);
          puVar2 = (uint *)((int)&local_498 + iVar25);
          iVar25 = iVar25 + -4;
        } while (*puVar2 == *puVar23);
        if (*puVar23 <= *puVar2) {
LAB_1009c3a0:
          if (uVar17 != 0) {
            uVar51 = 0;
            bVar53 = true;
            do {
              uVar42 = ~*(uint *)(local_1fc + uVar51 * 4 + -4);
              ppcVar43 = local_494 + uVar51;
              uVar24 = (uint)bVar53;
              pcVar48 = *ppcVar43;
              pcVar35 = *ppcVar43 + uVar42;
              bVar53 = CARRY4((uint)pcVar48,uVar42) || CARRY4((uint)pcVar35,uVar24);
              *ppcVar43 = pcVar35 + uVar24;
              uVar51 = uVar51 + 1;
            } while (uVar17 != uVar51);
            if (!CARRY4((uint)pcVar48,uVar42) && !CARRY4((uint)pcVar35,uVar24)) {
LAB_1009c7d4:
              FUN_10136b40(&PTR_s_C__Users_runneradmin__rustup_too_10145400);
                    /* WARNING: Does not return */
              pcVar6 = (code *)invalidInstructionException();
              (*pcVar6)();
            }
          }
          bVar19 = bVar19 + 1;
          local_3f4 = uVar17;
          uVar51 = uVar17;
        }
        uVar42 = local_2a8;
        if (local_5c0 == 0x11) {
          FUN_10136b52(0x11,0x11,&PTR_s_C__Users_runneradmin__rustup_too_10149a14);
                    /* WARNING: Does not return */
          pcVar6 = (code *)invalidInstructionException();
          (*pcVar6)();
        }
        acStack_55e[local_5c0 + 1] = bVar19 + 0x30;
        uVar17 = uVar51;
        if (uVar51 < uVar42) {
          uVar17 = uVar42;
        }
        if (0x28 < uVar17) break;
        uVar24 = local_5c0 + 1;
        iVar25 = uVar17 << 2;
        do {
          if (iVar25 == 0) {
            cVar18 = '\0';
            goto LAB_1009c458;
          }
          uVar17 = *(uint *)((int)auStack_34c + iVar25);
          uVar47 = *(uint *)((int)&local_498 + iVar25);
          iVar25 = iVar25 + -4;
        } while (uVar47 == uVar17);
        cVar18 = (uVar47 >= uVar17) - (uVar47 < uVar17);
LAB_1009c458:
        memcpy(local_538,local_494,0xa4);
        uVar17 = local_498;
        if (local_498 < local_5d0) {
          uVar17 = local_5d0;
        }
        if (0x28 < uVar17) break;
        if (uVar17 == 0) {
          uVar17 = 0;
        }
        else {
          uVar47 = 0;
          bVar53 = false;
          do {
            uVar52 = *(uint *)(local_2a0 + uVar47 * 4 + -4);
            ppcVar43 = local_538 + uVar47;
            uVar38 = (uint)bVar53;
            pcVar48 = *ppcVar43;
            pcVar35 = *ppcVar43 + uVar52;
            bVar53 = CARRY4((uint)pcVar48,uVar52) || CARRY4((uint)pcVar35,uVar38);
            *ppcVar43 = pcVar35 + uVar38;
            uVar47 = uVar47 + 1;
          } while (uVar17 != uVar47);
          if (CARRY4((uint)pcVar48,uVar52) || CARRY4((uint)pcVar35,uVar38)) {
            if (uVar17 == 0x28) goto LAB_1009c854;
            local_538[uVar17] = (char *)0x1;
            uVar17 = uVar17 + 1;
          }
        }
        local_498 = uVar17;
        if (uVar17 <= uVar36) {
          uVar17 = uVar36;
        }
        if (0x28 < uVar17) break;
        iVar25 = uVar17 << 2;
        do {
          if (iVar25 == 0) {
            cVar33 = '\0';
            goto joined_r0x1009c546;
          }
          uVar17 = *(uint *)((int)&uStack_53c + iVar25);
          uVar47 = *(uint *)((int)local_204 + iVar25);
          iVar25 = iVar25 + -4;
        } while (uVar47 == uVar17);
        cVar33 = (uVar47 >= uVar17) - (uVar47 < uVar17);
joined_r0x1009c546:
        if (cVar18 < (char)local_594) {
          if ((char)local_594 <= cVar33) goto LAB_1009c746;
          FUN_10095a30(local_494,1);
          uVar17 = local_3f4;
          if (local_3f4 < uVar36) {
            uVar17 = uVar36;
          }
          if (uVar17 < 0x29) {
            iVar25 = uVar17 << 2;
            goto LAB_1009c6f0;
          }
          break;
        }
        if (cVar33 < (char)local_594) goto LAB_1009c709;
        uVar17 = 0;
        if (uVar51 == 0) {
LAB_1009c5bb:
          local_3f4 = uVar17;
          uVar51 = uVar17;
        }
        else {
          iVar25 = uVar51 * 4;
          pcVar48 = (char *)0x0;
          ppcVar43 = local_494;
          do {
            lVar5 = ZEXT48(*ppcVar43) * 10 + ZEXT48(pcVar48);
            pcVar48 = (char *)((ulonglong)lVar5 >> 0x20);
            *ppcVar43 = (char *)lVar5;
            ppcVar43 = ppcVar43 + 1;
            iVar25 = iVar25 + -4;
          } while (iVar25 != 0);
          if (pcVar48 != (char *)0x0) {
            if (uVar51 != 0x28) {
              local_494[uVar51] = pcVar48;
              uVar17 = uVar51 + 1;
              goto LAB_1009c5bb;
            }
            goto LAB_1009c854;
          }
          local_3f4 = uVar51;
        }
        uVar17 = 0;
        local_3f4 = uVar51;
        if (uVar42 != 0) {
          iVar25 = uVar42 * 4;
          uVar47 = 0;
          puVar23 = auStack_34c;
          do {
            puVar23 = (uint *)((int)puVar23 + 4);
            lVar5 = (ulonglong)*puVar23 * 10 + (ulonglong)uVar47;
            uVar47 = (uint)((ulonglong)lVar5 >> 0x20);
            *puVar23 = (uint)lVar5;
            iVar25 = iVar25 + -4;
          } while (iVar25 != 0);
          uVar17 = uVar42;
          if (uVar47 != 0) {
            if (uVar42 == 0x28) goto LAB_1009c854;
            *(uint *)(local_344 + uVar42 * 4 + -4) = uVar47;
            uVar17 = uVar42 + 1;
          }
        }
        local_2a8 = uVar17;
        if (local_5d0 == 0) {
          local_5d0 = 0;
        }
        else {
          iVar25 = local_5d0 * 4;
          uVar17 = 0;
          puVar23 = &local_2a4;
          do {
            lVar5 = (ulonglong)*puVar23 * 10 + (ulonglong)uVar17;
            uVar17 = (uint)((ulonglong)lVar5 >> 0x20);
            *puVar23 = (uint)lVar5;
            puVar23 = puVar23 + 1;
            iVar25 = iVar25 + -4;
          } while (iVar25 != 0);
          if (uVar17 != 0) {
            if (local_5d0 == 0x28) goto LAB_1009c854;
            *(uint *)(local_2a0 + local_5d0 * 4 + -4) = uVar17;
            local_5d0 = local_5d0 + 1;
          }
        }
        local_204[0] = local_5d0;
        uVar17 = uVar51;
        if (uVar51 < local_350) {
          uVar17 = local_350;
        }
        local_5c0 = uVar24;
      } while (uVar17 < 0x29);
    }
LAB_1009c7b7:
    FUN_10136a50(0,uVar17,0x28,&PTR_s_C__Users_runneradmin__rustup_too_10145400);
                    /* WARNING: Does not return */
    pcVar6 = (code *)invalidInstructionException();
    (*pcVar6)();
  }
LAB_1009bc29:
  uVar51 = (uVar17 - 1) + (uint)(3 < uVar16);
  if ((uVar47 < (uVar13 < 2)) || (uVar51 < uVar47 || uVar51 - uVar47 < (uint)(uVar49 - 3 < uVar13)))
  goto LAB_1009bd2c;
  uVar24 = uVar24 + 1;
  goto LAB_1009c785;
code_r0x1009c724:
  iVar25 = iVar32 + -1;
  if (acStack_55e[iVar32] != '9') goto code_r0x1009c72e;
  goto LAB_1009c720;
code_r0x1009c72e:
  acStack_55e[iVar32] = acStack_55e[iVar32] + '\x01';
  memset(acStack_55e + iVar32 + 1,0x30,(local_5c0 + 1) - iVar32);
  goto LAB_1009c746;
  while( true ) {
    puVar23 = (uint *)((int)local_204 + iVar25);
    puVar2 = (uint *)((int)&local_498 + iVar25);
    iVar25 = iVar25 + -4;
    if (*puVar2 != *puVar23) break;
LAB_1009c6f0:
    if (iVar25 == 0) goto LAB_1009c709;
  }
  if (*puVar23 <= *puVar2) {
LAB_1009c709:
    iVar25 = local_5c0 + 1;
LAB_1009c720:
    iVar32 = iVar25;
    if (iVar32 != 0) goto code_r0x1009c724;
    acStack_55e[1] = 0x31;
    memset(acStack_55e + 2,0x30,local_5c0);
    if (0xf < local_5c0) {
      FUN_10136b52(uVar24,0x11,&PTR_s_C__Users_runneradmin__rustup_too_10149a24);
                    /* WARNING: Does not return */
      pcVar6 = (code *)invalidInstructionException();
      (*pcVar6)();
    }
    local_58c = local_58c + 1;
    acStack_55e[local_5c0 + 2] = '0';
LAB_1009c782:
    uVar24 = local_5c0 + 2;
    goto LAB_1009c785;
  }
LAB_1009c746:
  if (0x10 < local_5c0) {
    FUN_10136a50(0,uVar24,0x11,&PTR_s_C__Users_runneradmin__rustup_too_10149a34);
                    /* WARNING: Does not return */
    pcVar6 = (code *)invalidInstructionException();
    (*pcVar6)();
  }
LAB_1009c785:
  local_3e8 = FUN_10097690((byte *)(acStack_55e + 1),uVar24,local_58c,0,(undefined2 *)local_538);
  local_3f0[1] = (char *)local_544;
LAB_1009b2aa:
  local_3f0[0] = local_574;
  FUN_10097e20(param_1,(undefined8 *)local_3f0);
  return;
}
