// rea decompile_all
// name: FUN_10098960
// address: 0x10098960
// body: available
// range: 0x10098960-0x10098b3c inclusive
// range: 0x10098b40-0x10099922 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10098960(undefined1 *param_1,uint *param_2,uint param_3)

{
  char cVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  code *pcVar6;
  ulonglong uVar7;
  undefined1 uVar8;
  uint3 uVar9;
  uint uVar10;
  uint uVar11;
  byte bVar12;
  int iVar13;
  byte bVar14;
  int iVar15;
  uint uVar16;
  byte *pbVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  uint *puVar23;
  uint uVar24;
  bool bVar25;
  bool bVar26;
  double dVar27;
  undefined8 uVar28;
  uint *local_69c;
  uint local_698;
  uint *local_694;
  int local_690;
  int local_684;
  uint local_680;
  int local_678;
  uint local_674;
  int local_664;
  uint local_660;
  uint local_65c;
  uint local_658;
  uint local_630;
  uint local_62c;
  uint local_628 [192];
  undefined1 local_328;
  uint local_320;
  undefined4 local_31c;
  byte local_318 [768];
  char local_18;

  if (param_3 != 0) {
    cVar1 = (char)*param_2;
    if ((cVar1 != '-') && (cVar1 != '+')) {
LAB_1009898f:
      uVar2 = 0;
      local_69c = param_2;
      local_698 = param_3;
      if (param_3 < 8) goto LAB_10098ac0;
      uVar2 = 0;
      do {
        uVar10 = *local_69c;
        uVar19 = uVar10 + 0xcfcfcfd0;
        uVar11 = local_69c[1] + 0xcfcfcfcf + (uint)(0x3030302f < uVar10);
        if (((local_69c[1] + 0x46464646 + (uint)(0xb9b9b9b9 < uVar10) | uVar11) & 0x80808080) != 0
            || ((uVar10 + 0x46464646 | uVar19) & 0x80808080) != 0) goto LAB_10098ac0;
        lVar3 = (uVar2 & 0xffffffff) * 100000000;
        uVar20 = uVar19 >> 8 | uVar11 * 0x1000000;
        uVar10 = (uint)((ulonglong)uVar19 * 10);
        uVar21 = uVar20 + uVar10;
        uVar10 = (uVar11 >> 8) + (int)((ulonglong)uVar19 * 10 >> 0x20) + uVar11 * 10 +
                 (uint)CARRY4(uVar20,uVar10);
        lVar4 = CONCAT44((int)(uVar2 >> 0x20) * 100000000,
                         (uVar21 >> 0x10 & 0xff) * 10000 + (uVar10 >> 0x10 & 0xff) +
                         (uVar21 & 0xff) * 1000000 + (uVar10 & 0xff) * 100);
        uVar2 = lVar3 + lVar4;
        local_69c = local_69c + 2;
        local_698 = local_698 - 8;
        uVar7 = lVar3 + lVar4;
      } while (7 < local_698);
      for (; uVar2 = uVar7, local_698 != 0; local_698 = local_698 - 1) {
LAB_10098ac0:
        bVar14 = (byte)*local_69c - 0x30;
        if (9 < bVar14) {
          uVar10 = param_3 - local_698;
          if ((byte)*local_69c != 0x2e) {
            local_680 = 0;
            local_690 = 0;
            local_694 = (uint *)local_698;
            goto joined_r0x10098dc4;
          }
          local_69c = (uint *)((int)local_69c + 1);
          uVar11 = local_698 - 1;
          local_694 = (uint *)uVar11;
          if ((int)local_698 < 9) goto LAB_10098d48;
          goto LAB_10098c20;
        }
        local_69c = (uint *)((int)local_69c + 1);
        uVar7 = (uVar2 & 0xffffffff) * 10 + CONCAT44((int)(uVar2 >> 0x20) * 10,(uint)bVar14);
      }
      bVar25 = true;
      local_698 = 0;
      uVar11 = 0;
      iVar22 = 0;
      local_680 = 0;
      local_690 = 0;
      uVar10 = param_3;
      goto LAB_10098b15;
    }
    param_3 = param_3 - 1;
    if (param_3 != 0) {
      param_2 = (uint *)((int)param_2 + 1);
      goto LAB_1009898f;
    }
    goto LAB_1009932c;
  }
  param_1[1] = 0;
LAB_10099330:
  uVar8 = 1;
  goto LAB_100996a8;
  while( true ) {
    uVar16 = uVar21 >> 8 | uVar20 * 0x1000000;
    uVar19 = (uint)((ulonglong)uVar21 * 10);
    uVar24 = uVar16 + uVar19;
    uVar19 = (uVar20 >> 8) + (int)((ulonglong)uVar21 * 10 >> 0x20) + uVar20 * 10 +
             (uint)CARRY4(uVar16,uVar19);
    uVar2 = (uVar2 & 0xffffffff) * 100000000 +
            CONCAT44((int)(uVar2 >> 0x20) * 100000000,
                     (uVar24 >> 0x10 & 0xff) * 10000 + (uVar19 >> 0x10 & 0xff) +
                     (uVar24 & 0xff) * 1000000 + (uVar19 & 0xff) * 100);
    local_694 = (uint *)((int)local_694 - 8);
    local_69c = local_69c + 2;
    if (local_694 < 8) break;
LAB_10098c20:
    uVar19 = *local_69c;
    uVar21 = uVar19 + 0xcfcfcfd0;
    uVar20 = local_69c[1] + 0xcfcfcfcf + (uint)(0x3030302f < uVar19);
    if (((local_69c[1] + 0x46464646 + (uint)(0xb9b9b9b9 < uVar19) | uVar20) & 0x80808080) != 0 ||
        ((uVar19 + 0x46464646 | uVar21) & 0x80808080) != 0) goto LAB_10098d5d;
  }
LAB_10098d48:
  puVar23 = local_69c;
  if (local_694 != (uint *)0x0) {
LAB_10098d5d:
    puVar23 = (uint *)((int)local_69c + (int)local_694);
    do {
      bVar14 = (byte)*local_69c - 0x30;
      if (9 < bVar14) goto LAB_10098da3;
      local_69c = (uint *)((int)local_69c + 1);
      uVar2 = (uVar2 & 0xffffffff) * 10 + CONCAT44((int)(uVar2 >> 0x20) * 10,(uint)bVar14);
      local_694 = (uint *)((int)local_694 - 1);
    } while (local_694 != (uint *)0x0);
  }
  local_69c = puVar23;
  local_694 = (uint *)0x0;
LAB_10098da3:
  local_680 = -(uVar11 - (int)local_694);
  local_690 = (int)local_680 >> 0x1f;
  uVar10 = (uVar11 - (int)local_694) + uVar10;
joined_r0x10098dc4:
  if (uVar10 == 0) goto LAB_100992cc;
  if (local_694 != (uint *)0x0) {
    if ((byte)((byte)*local_69c | 0x20) != 0x65) {
      iVar22 = 0;
      uVar11 = 0;
      bVar25 = false;
      goto LAB_10098b15;
    }
    local_684 = (int)local_694 - 1;
    if (local_684 != 0) {
      bVar14 = *(byte *)((int)local_69c + 1);
      if ((bVar14 == 0x2d) || (bVar14 == 0x2b)) {
        local_684 = (int)local_694 - 2;
        if (local_684 == 0) goto LAB_100992cc;
        pbVar17 = (byte *)((int)local_69c + 2);
        local_69c = (uint *)((int)local_69c + 2);
        bVar12 = *pbVar17;
      }
      else {
        local_69c = (uint *)((int)local_69c + 1);
        bVar12 = bVar14;
      }
      if ((byte)(bVar12 - 0x30) < 10) {
        local_674 = 0;
        local_678 = 0;
        local_694 = (uint *)0x0;
        local_664 = 0;
        do {
          bVar12 = *(byte *)local_69c - 0x30;
          if (9 < bVar12) goto LAB_10099290;
          local_69c = (uint *)((int)local_69c + 1);
          uVar11 = (uint)(ZEXT48(local_694) * 10);
          uVar19 = bVar12 + uVar11;
          iVar22 = local_664 * 10 + (int)(ZEXT48(local_694) * 10 >> 0x20) +
                   (uint)CARRY4((uint)bVar12,uVar11);
          if (local_664 < (int)(uint)(local_694 < 0x10000)) {
            local_678 = iVar22;
            local_694 = (uint *)uVar19;
            local_674 = uVar19;
            local_664 = iVar22;
          }
          local_684 = local_684 + -1;
        } while (local_684 != 0);
        local_684 = 0;
LAB_10099290:
        iVar22 = -(uint)(local_674 != 0) - local_678;
        uVar11 = -local_674;
        if (bVar14 != 0x2d) {
          iVar22 = local_678;
          uVar11 = local_674;
        }
        bVar25 = CARRY4(local_680,uVar11);
        local_680 = local_680 + uVar11;
        local_690 = local_690 + iVar22 + (uint)bVar25;
        bVar25 = local_684 == 0;
        goto LAB_10098b15;
      }
    }
LAB_100992cc:
    if (param_3 == 3) {
      uVar9 = (uint3)*param_2 & 0xdfdfdf;
      if (uVar9 == 0x464e49) {
LAB_10099337:
        dVar27 = INFINITY;
        goto joined_r0x10099344;
      }
      if (uVar9 == 0x4e414e) {
        dVar27 = NAN;
        goto joined_r0x10099344;
      }
    }
    else if ((param_3 == 8) &&
            ((*param_2 & 0xdfdfdfdf) == 0x49464e49 && (param_2[1] & 0xdfdfdfdf) == 0x5954494e))
    goto LAB_10099337;
LAB_1009932c:
    param_1[1] = 1;
    goto LAB_10099330;
  }
  iVar22 = 0;
  bVar25 = true;
  uVar11 = 0;
LAB_10098b15:
  if ((int)uVar10 < 0x14) {
LAB_10098d2e:
    bVar26 = false;
  }
  else {
    iVar15 = uVar10 - 0x13;
    uVar10 = param_3;
    puVar23 = param_2;
    do {
      bVar14 = (byte)*puVar23;
      if ((bVar14 != 0x2e) && (bVar14 != 0x30)) break;
      puVar23 = (uint *)((int)puVar23 + 1);
      uVar19 = (uint)(byte)(bVar14 - 0x2f);
      if (bVar14 < 0x2f) {
        uVar19 = 0;
      }
      iVar15 = iVar15 - uVar19;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
    if (iVar15 < 1) goto LAB_10098d2e;
    uVar2 = 0;
    puVar23 = param_2;
    iVar15 = -param_3;
    do {
      iVar18 = iVar15;
      bVar14 = (byte)*puVar23 - 0x30;
      iVar15 = iVar18;
      if (9 < bVar14) goto LAB_10098e58;
      puVar23 = (uint *)((int)puVar23 + 1);
      uVar2 = (uVar2 & 0xffffffff) * 10 + CONCAT44((int)(uVar2 >> 0x20) * 10,(uint)bVar14);
      uVar10 = (uint)(uVar2 >> 0x20);
      iVar15 = iVar18 + 1;
      bVar26 = (uint)(0xa763ffff < (uint)uVar2) <= 0xde0b6b3 - uVar10;
    } while ((uVar10 < 0xde0b6b4 && bVar26) && (iVar15 != 0));
    if (uVar10 < 0xde0b6b4 && bVar26) {
      if (iVar18 == -1) {
        FUN_10136a50(1,0,0,&PTR_s_C__Users_runneradmin__rustup_too_10146918);
                    /* WARNING: Does not return */
        pcVar6 = (code *)invalidInstructionException();
        (*pcVar6)();
      }
LAB_10098e58:
      iVar15 = -1 - iVar15;
      iVar18 = iVar15;
      if (iVar15 == 0) {
        iVar13 = 0;
      }
      else {
        while( true ) {
          puVar23 = (uint *)((int)puVar23 + 1);
          iVar13 = iVar18;
          if (9 < (byte)(*(byte *)puVar23 - 0x30)) break;
          uVar2 = (uVar2 & 0xffffffff) * 10 +
                  CONCAT44((int)(uVar2 >> 0x20) * 10,(uint)(byte)(*(byte *)puVar23 - 0x30));
          uVar10 = (uint)(uVar2 >> 0x20);
          iVar13 = iVar18 + -1;
          if ((0xde0b6b3 < uVar10 || 0xde0b6b3 - uVar10 < (uint)(0xa763ffff < (uint)uVar2)) ||
             (bVar26 = iVar18 == 1, iVar18 = iVar13, bVar26)) break;
        }
      }
      uVar10 = iVar13 - iVar15;
    }
    else {
      uVar10 = -(local_698 + iVar15);
    }
    local_680 = uVar11 + uVar10;
    local_690 = iVar22 + ((int)uVar10 >> 0x1f) + (uint)CARRY4(uVar11,uVar10);
    bVar26 = true;
  }
  if (!bVar25) goto LAB_100992cc;
  uVar10 = (uint)(uVar2 >> 0x20);
  iVar22 = local_690 + -1 + (uint)(0x25 < local_680);
  if (((0x200000 < uVar10 || 0x200000 - uVar10 < (uint)((uint)uVar2 != 0)) || bVar26) ||
      (iVar22 != -1 || iVar22 + 1U < (uint)(local_680 - 0x26 < 0xffffffc4))) {
LAB_10098fd8:
    FUN_10099930(&local_660,local_680,local_690,(uint)uVar2,uVar10);
    if (!(bool)(bVar26 & -1 < (int)local_658)) {
      if (-1 < (int)local_658) goto LAB_1009967f;
LAB_10099060:
      memset(&local_630,0,0x309);
      uVar11 = 0;
      uVar10 = param_3;
      do {
        bVar14 = *(byte *)((int)param_2 + uVar11);
        if (bVar14 != 0x30) {
          bVar12 = bVar14 - 0x30;
          if (bVar12 < 10) {
            uVar19 = 0;
            goto LAB_100990c6;
          }
          local_694 = (uint *)(uVar11 + (int)param_2);
          if (bVar14 != 0x2e) {
            uVar21 = 0;
            local_69c = (uint *)0x0;
            goto LAB_10099543;
          }
          uVar20 = uVar10 - 1;
          puVar23 = (uint *)((int)local_694 + 1);
          goto LAB_10099198;
        }
        uVar11 = uVar11 + 1;
        uVar10 = uVar10 - 1;
      } while (param_3 != uVar11);
      uVar21 = 0;
      goto LAB_10099601;
    }
    FUN_10099930(&local_630,local_680,local_690,(uint)(uVar2 + 1),(uint)(uVar2 + 1 >> 0x20));
    if ((local_660 != local_630 || local_65c != local_62c) ||
       (local_660 = local_630, local_65c = local_62c, local_658 != local_628[0])) goto LAB_10099060;
    goto LAB_1009967f;
  }
  if ((SBORROW4(0,local_690) != SBORROW4(-local_690,(uint)(0x16 < local_680))) ==
      (int)(-local_690 - (uint)(0x16 < local_680)) < 0) {
    if (local_690 < 0) {
      dVar27 = (double)(longlong)uVar2 / *(double *)(&DAT_10149ba8 + local_680 * -8);
    }
    else {
      dVar27 = (double)(longlong)uVar2 * *(double *)(&DAT_10149ba8 + local_680 * 8);
    }
  }
  else {
    lVar3 = (ulonglong)uVar10 * (ulonglong)*(uint *)(&DAT_10144b10 + local_680 * 8);
    lVar4 = (ulonglong)*(uint *)(&DAT_10144b14 + local_680 * 8) * (uVar2 & 0xffffffff);
    uVar11 = (int)lVar3 + (int)lVar4;
    lVar5 = (uVar2 & 0xffffffff) * (ulonglong)*(uint *)(&DAT_10144b10 + local_680 * 8);
    uVar19 = (uint)((ulonglong)lVar5 >> 0x20);
    iVar22 = (int)lVar5;
    uVar20 = uVar19 + uVar11;
    if ((0x200000 < uVar20 || 0x200000 - uVar20 < (uint)(iVar22 != 0)) ||
        (CARRY4(uVar19,uVar11) ||
        (((int)((ulonglong)lVar4 >> 0x20) != 0 || (int)((ulonglong)lVar3 >> 0x20) != 0) ||
        uVar10 != 0 && *(uint *)(&DAT_10144b14 + local_680 * 8) != 0))) goto LAB_10098fd8;
    dVar27 = (double)CONCAT44(uVar20,iVar22) * 1e+22;
  }
joined_r0x10099344:
  if (cVar1 == '-') {
    dVar27 = -dVar27;
  }
  goto LAB_100996a1;
  while( true ) {
    uVar10 = uVar20 - 1;
    bVar14 = *(byte *)((int)param_2 + uVar11 + uVar19 + 1);
    bVar12 = bVar14 - 0x30;
    uVar19 = uVar21;
    if (9 < bVar12) break;
LAB_100990c6:
    uVar20 = uVar10;
    if (uVar19 < 0x300) {
      *(byte *)((int)local_628 + uVar19) = bVar12;
    }
    uVar21 = uVar19 + 1;
    local_630 = uVar21;
    if (~uVar11 + param_3 == uVar19) {
      local_69c = (uint *)0x0;
      uVar10 = 0;
      local_694 = (uint *)((int)param_2 + uVar19 + uVar11 + 1);
      goto LAB_100994ee;
    }
  }
  local_694 = (uint *)((int)param_2 + uVar21 + uVar11);
  if (bVar14 == 0x2e) {
    uVar20 = uVar20 - 2;
    puVar23 = (uint *)((int)param_2 + uVar21 + uVar11 + 1);
    uVar19 = uVar20;
    uVar11 = uVar21;
    if (uVar21 != 0) {
joined_r0x100993a2:
      do {
        uVar10 = uVar19;
        if (uVar10 < 8) goto LAB_10099436;
        uVar11 = uVar21 + 8;
        if (0x2ff < uVar11) goto LAB_1009945f;
        uVar19 = *puVar23;
        uVar16 = puVar23[1] + 0xcfcfcfcf + (uint)(0x3030302f < uVar19);
        if (((puVar23[1] + 0x46464646 + (uint)(0xb9b9b9b9 < uVar19) | uVar16) & 0x80808080) != 0 ||
            ((uVar19 + 0x46464646 | uVar19 + 0xcfcfcfd0) & 0x80808080) != 0) goto LAB_1009945f;
        if (0x300 < uVar21) {
          FUN_10136a50(uVar21,0x300,0x300,&PTR_s_C__Users_runneradmin__rustup_too_10146348);
                    /* WARNING: Does not return */
          pcVar6 = (code *)invalidInstructionException();
          (*pcVar6)();
        }
        *(uint *)((int)local_628 + uVar21 + 4) = uVar16;
        *(uint *)((int)local_628 + uVar21) = uVar19 + 0xcfcfcfd0;
        puVar23 = puVar23 + 2;
        uVar21 = uVar11;
        uVar19 = uVar10 - 8;
      } while( true );
    }
LAB_10099198:
    if (uVar20 == 0) {
      uVar20 = 0;
      uVar21 = 0;
      uVar10 = 0;
    }
    else {
      local_694 = (uint *)((int)local_694 + uVar10);
      uVar19 = uVar20;
      do {
        if ((byte)*puVar23 != 0x30) {
          uVar21 = 0;
          uVar11 = local_630;
          goto joined_r0x100993a2;
        }
        puVar23 = (uint *)((int)puVar23 + 1);
        uVar19 = uVar19 - 1;
      } while (uVar19 != 0);
      uVar21 = 0;
      uVar10 = 0;
      puVar23 = local_694;
    }
    goto LAB_100994de;
  }
  local_69c = (uint *)0x0;
  goto LAB_100994ee;
LAB_10099436:
  if (uVar10 == 0) {
    uVar10 = 0;
    local_630 = uVar11;
  }
  else {
LAB_1009945f:
    bVar14 = (byte)*puVar23 - 0x30;
    local_630 = uVar21;
    if (bVar14 < 10) {
      iVar22 = uVar10 - 1;
      iVar15 = 0;
      do {
        iVar18 = iVar15;
        if (uVar21 + iVar18 < 0x300) {
          *(byte *)((int)local_628 + iVar18 + uVar21) = bVar14;
        }
        if (iVar22 == iVar18) {
          uVar10 = 0;
          break;
        }
        uVar10 = uVar10 - 1;
        bVar14 = *(byte *)((int)puVar23 + iVar18 + 1) - 0x30;
        iVar15 = iVar18 + 1;
      } while (bVar14 < 10);
      uVar21 = uVar21 + 1 + iVar18;
      puVar23 = (uint *)((int)puVar23 + iVar18 + 1);
      local_630 = uVar21;
    }
  }
LAB_100994de:
  local_69c = (uint *)(uVar10 - uVar20);
  local_694 = puVar23;
  local_62c = (uint)local_69c;
LAB_100994ee:
  if (uVar21 == 0) {
    uVar21 = 0;
  }
  else {
    uVar11 = param_3 - uVar10;
    if (param_3 < uVar10) {
      FUN_10136a50(0,uVar11,param_3,&PTR_s_C__Users_runneradmin__rustup_too_10146358);
                    /* WARNING: Does not return */
      pcVar6 = (code *)invalidInstructionException();
      (*pcVar6)();
    }
    iVar22 = 0;
    if (param_3 != uVar10) {
      iVar22 = 0;
      do {
        bVar14 = *(byte *)((int)param_2 + (uVar11 - 1));
        if (bVar14 != 0x2e) {
          if (bVar14 != 0x30) break;
          iVar22 = iVar22 + 1;
        }
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    local_69c = (uint *)((int)local_69c + uVar21);
    uVar21 = uVar21 - iVar22;
    local_630 = uVar21;
    local_62c = (uint)local_69c;
    if (0x300 < uVar21) {
      uVar21 = 0x300;
      local_328 = 1;
      local_630 = 0x300;
    }
  }
LAB_10099543:
  if ((uVar10 != 0) && ((byte)((byte)*local_694 | 0x20) == 0x65)) {
    iVar22 = uVar10 - 1;
    if (iVar22 == 0) {
      iVar22 = 0;
    }
    else {
      pbVar17 = (byte *)((int)local_694 + 1);
      bVar14 = *pbVar17;
      if ((bVar14 == 0x2d) || (bVar14 == 0x2b)) {
        iVar22 = uVar10 - 2;
        if (iVar22 != 0) {
          pbVar17 = (byte *)((int)local_694 + 2);
          goto LAB_10099589;
        }
        iVar15 = 0;
      }
      else {
LAB_10099589:
        iVar15 = 0;
        iVar18 = 0;
        do {
          bVar12 = *pbVar17;
          if (9 < (byte)(bVar12 - 0x30)) break;
          pbVar17 = pbVar17 + 1;
          iVar13 = (uint)(byte)(bVar12 - 0x30) + iVar18 * 10;
          if (iVar18 < 0x10000) {
            iVar18 = iVar13;
            iVar15 = iVar13;
          }
          iVar22 = iVar22 + -1;
        } while (iVar22 != 0);
      }
      iVar22 = -iVar15;
      if (bVar14 != 0x2d) {
        iVar22 = iVar15;
      }
    }
    local_62c = (int)local_69c + iVar22;
  }
  if (uVar21 < 0x13) {
LAB_10099601:
    memset((void *)((int)local_628 + uVar21),0,0x13 - uVar21);
  }
  memcpy(&local_320,&local_630,0x30c);
  if ((int)local_31c < -0x144 || local_320 == 0) {
LAB_1009964d:
    local_698 = 0;
    goto LAB_10099657;
  }
  local_660 = 0;
  if ((int)local_31c < 0x136) {
    iVar22 = 0;
    local_698 = 0x7ff;
    if (0 < (int)local_31c) {
      iVar22 = 0;
      do {
        uVar10 = 0x3c;
        if (local_31c < 0x13) {
          uVar10 = (uint)(byte)(&DAT_10144e34)[local_31c];
        }
        FUN_10095ed0(&local_320,(byte)uVar10);
        if ((int)local_31c < -0x7ff) goto LAB_1009964d;
        iVar22 = iVar22 + uVar10;
      } while (0 < (int)local_31c);
    }
    do {
      if (local_31c == 0) {
        if (4 < local_318[0]) break;
        uVar10 = (local_318[0] < 2) + 1;
      }
      else {
        uVar10 = 0x3c;
        if (-local_31c < 0x13) {
          uVar10 = (uint)(byte)(&DAT_10144e34)[-local_31c];
        }
      }
      FUN_10095bf0(&local_320,uVar10);
      if (0x7ff < (int)local_31c) goto LAB_10099657;
      iVar22 = iVar22 - uVar10;
    } while ((int)local_31c < 1);
    uVar10 = iVar22 - 1;
    if ((int)uVar10 < -0x3fe) {
      do {
        uVar11 = -uVar10 - 0x3fe;
        if (0x3b < uVar11) {
          uVar11 = 0x3c;
        }
        FUN_10095ed0(&local_320,(byte)uVar11);
        uVar10 = uVar11 + uVar10;
      } while (uVar10 < 0xfffffc02);
    }
    if ((int)(uVar10 + 0x3ff) < 0x7ff) {
      FUN_10095bf0(&local_320,0x35);
      if ((local_320 != 0) && (-1 < (int)local_31c)) {
        if (local_31c < 0x13) {
          if (local_31c == 0) {
            uVar19 = 0;
            uVar11 = 0;
          }
          else {
            uVar19 = 0;
            uVar11 = 0;
            uVar20 = 0;
            do {
              uVar2 = (ulonglong)uVar19;
              uVar19 = (uint)(uVar2 * 10);
              uVar11 = (int)(uVar2 * 10 >> 0x20) + uVar11 * 10;
              if (uVar20 < local_320) {
                bVar25 = CARRY4(uVar19,(uint)local_318[uVar20]);
                uVar19 = uVar19 + local_318[uVar20];
                uVar11 = uVar11 + bVar25;
              }
              uVar20 = uVar20 + 1;
            } while (local_31c != uVar20);
          }
          if (local_31c < local_320) {
            if (local_31c + 1 == local_320 && local_318[local_31c] == 5) {
              if ((local_18 != '\0') || ((local_31c != 0 && ((local_318[local_31c - 1] & 1) != 0))))
              {
LAB_1009985f:
                bVar25 = 0xfffffffe < uVar19;
                uVar19 = uVar19 + 1;
                uVar11 = uVar11 + bVar25;
              }
            }
            else if (4 < local_318[local_31c]) goto LAB_1009985f;
          }
          uVar28 = CONCAT44(uVar11,uVar19);
          if (0x1fffff < uVar11) goto LAB_1009986f;
        }
        else {
LAB_1009986f:
          FUN_10095ed0(&local_320,1);
          uVar28 = FUN_10096160(&local_320);
          local_660 = 0;
          local_65c = 0;
          local_658 = local_698;
          if (0x7fe < (int)(uVar10 + 0x400)) goto LAB_1009967f;
          uVar10 = uVar10 + 1;
        }
        uVar11 = (uint)((ulonglong)uVar28 >> 0x20);
        local_660 = (uint)uVar28;
        local_65c = uVar11 & 0xfffff;
        local_658 = (0x3ff - (uint)(uVar11 < 0x100000)) + uVar10;
        goto LAB_1009967f;
      }
      local_698 = uVar10 + 0x3fe;
    }
LAB_10099657:
    local_660 = 0;
    local_65c = 0;
    local_658 = local_698;
  }
  else {
    local_698 = 0x7ff;
    local_65c = 0;
    local_658 = local_698;
  }
LAB_1009967f:
  dVar27 = (double)CONCAT44(local_658 << 0x14 | local_65c,local_660);
  if (cVar1 == '-') {
    dVar27 = (double)((ulonglong)dVar27 ^ (ulonglong)DAT_1013ec80);
  }
LAB_100996a1:
  *(double *)(param_1 + 8) = dVar27;
  uVar8 = 0;
LAB_100996a8:
  *param_1 = uVar8;
  return;
}
