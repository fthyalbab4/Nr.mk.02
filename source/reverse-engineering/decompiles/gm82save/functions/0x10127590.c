// rea decompile_all
// name: FUN_10127590
// address: 0x10127590
// body: available
// range: 0x10127590-0x101275ea inclusive
// range: 0x101275f0-0x101277d7 inclusive
// range: 0x101277e0-0x10127940 inclusive
// range: 0x10127950-0x10127a53 inclusive
// range: 0x10127a60-0x10127b02 inclusive
// range: 0x10127b10-0x10127c42 inclusive
// range: 0x10127c50-0x10127c6b inclusive
// range: 0x10127c70-0x10128058 inclusive
// range: 0x10128060-0x101281b7 inclusive
// range: 0x101281c0-0x101282bd inclusive
// range: 0x101282c0-0x10128365 inclusive
// range: 0x10128370-0x10128492 inclusive
// range: 0x101284a0-0x101284bb inclusive
// range: 0x101284c0-0x1012897e inclusive
// range: 0x10128980-0x10128ad7 inclusive
// range: 0x10128ae0-0x10128bdd inclusive
// range: 0x10128be0-0x10128da2 inclusive
// range: 0x10128db0-0x10128dcb inclusive
// range: 0x10128dd0-0x1012913a inclusive
// range: 0x10129140-0x101291d5 inclusive
// range: 0x101291e0-0x10129223 inclusive
// range: 0x10129230-0x10129524 inclusive
// range: 0x10129530-0x10129637 inclusive
// range: 0x10129640-0x101296bb inclusive
// range: 0x101296c0-0x10129707 inclusive
// range: 0x10129710-0x10129b66 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall FUN_10127590(int param_1,byte param_2)

{
  ushort uVar1;
  char *pcVar2;
  short *psVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  ushort uVar7;
  code *pcVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  undefined4 uVar53;
  undefined4 uVar54;
  undefined4 uVar55;
  undefined4 uVar56;
  undefined4 uVar57;
  undefined4 uVar58;
  undefined4 uVar59;
  undefined4 uVar60;
  undefined4 uVar61;
  undefined4 uVar62;
  undefined4 uVar63;
  undefined4 uVar64;
  undefined4 uVar65;
  undefined4 uVar66;
  byte bVar67;
  byte bVar68;
  int iVar69;
  uint uVar70;
  uint uVar71;
  int *piVar72;
  byte bVar73;
  int iVar74;
  uint uVar75;
  char cVar76;
  uint uVar77;
  int iVar78;
  ushort uVar79;
  int iVar80;
  uint uVar81;
  short sVar82;
  uint uVar83;
  uint uVar84;
  ushort *puVar85;
  bool bVar86;
  int local_14c4;
  int local_14c0;
  uint local_14bc;
  uint local_14b4;
  uint local_14ac;
  uint local_14a4;
  uint local_14a0;
  int local_1498;
  undefined4 local_1480;
  undefined4 uStack_147c;
  undefined4 uStack_1478;
  undefined4 uStack_1474;
  undefined4 local_1470;
  undefined4 uStack_146c;
  undefined4 uStack_1468;
  undefined4 uStack_1464;
  uint local_1454;
  int local_1450;
  int *local_144c;
  undefined4 uStack_1448;
  uint auStack_1444 [58];
  undefined8 local_135c;
  uint local_1354;
  undefined4 local_b6c [4];
  undefined8 local_b5c;
  uint local_b54;
  undefined8 local_b50;
  uint local_25c [2];
  undefined1 local_254 [576];
  undefined4 uStack_14;

  uStack_14 = 0x101275a3;
  iVar78 = *(int *)(param_1 + 0x1c);
  uVar77 = *(uint *)(iVar78 + 0x10);
  uVar75 = *(uint *)(iVar78 + 0x3c);
  local_1450 = uVar77 - uVar75;
  if (*(int *)(iVar78 + 0x48) == 0) {
    uVar71 = 0;
    *(undefined4 *)(iVar78 + 0x7c) = 7;
joined_r0x1012761a:
    if ((-1 < (int)uVar75) && (local_1450 + 4U <= uVar71)) {
LAB_10129096:
      FUN_1012a720(iVar78,uVar75,uVar77,param_2);
      goto LAB_101292d2;
    }
    bVar68 = *(byte *)(iVar78 + 0x70);
    bVar73 = param_2 | 2;
    bVar67 = bVar68 + 3;
    if (bVar67 < 0x40) {
      uVar71 = (uint)bVar73 << (bVar68 & 0x1f);
      uVar75 = uVar71;
      uVar77 = 0 << (bVar68 & 0x1f) | (uint)(bVar73 >> 0x20 - (bVar68 & 0x1f));
      if ((bVar68 & 0x20) != 0) {
        uVar75 = 0;
        uVar77 = uVar71;
      }
      *(uint *)(iVar78 + 0x6c) = *(uint *)(iVar78 + 0x6c) | uVar77;
      *(uint *)(iVar78 + 0x68) = *(uint *)(iVar78 + 0x68) | uVar75;
      *(byte *)(iVar78 + 0x70) = bVar67;
    }
    else {
      FUN_1012a990((int *)(iVar78 + 0x58),(uint)bVar73,0,bVar67);
    }
    piVar72 = (int *)(iVar78 + 0x58);
    uVar77 = *(uint *)(iVar78 + 0x44);
    uVar75 = *(uint *)(iVar78 + 0x48);
    if (uVar77 < uVar75) {
LAB_10129847:
      FUN_10136a50(0,uVar75,uVar77,&PTR_s_C__Users_runneradmin__cargo_regi_1015b930);
                    /* WARNING: Does not return */
      pcVar8 = (code *)invalidInstructionException();
      (*pcVar8)();
    }
    uVar77 = (uVar75 / 3) * 3;
    if (2 < uVar77) {
      puVar85 = *(ushort **)(iVar78 + 0x40);
      do {
        uVar7 = *puVar85;
        uVar75 = (uint)(byte)puVar85[1];
        if (uVar7 == 0) {
          bVar68 = *(byte *)(iVar78 + 0x70);
          uVar7 = *(ushort *)(&DAT_1015c46c + uVar75 * 4);
          bVar67 = (&DAT_1015c46e)[uVar75 * 4] + bVar68;
          if (bVar67 < 0x40) {
            uVar81 = (uint)uVar7 << (bVar68 & 0x1f);
            uVar71 = uVar81;
            uVar75 = 0 << (bVar68 & 0x1f) | (uint)(uVar7 >> 0x20 - (bVar68 & 0x1f));
            if ((bVar68 & 0x20) != 0) {
              uVar71 = 0;
              uVar75 = uVar81;
            }
            *(uint *)(iVar78 + 0x68) = *(uint *)(iVar78 + 0x68) | uVar71;
            *(uint *)(iVar78 + 0x6c) = *(uint *)(iVar78 + 0x6c) | uVar75;
            *(byte *)(iVar78 + 0x70) = bVar67;
          }
          else {
            FUN_1012a990(piVar72,(uint)uVar7,0,bVar67);
          }
        }
        else {
          uVar79 = uVar7 - 1;
          uVar71 = (uVar79 >> 7) + 0x100;
          if (uVar7 < 0x101) {
            uVar71 = (uint)uVar79;
          }
          if (0x1ff < uVar71) goto LAB_10129a64;
          uVar71 = (uint)(byte)(&DAT_1015ca5c)[uVar71];
          uVar81 = (uint)*(ushort *)(&DAT_1015c3d4 + uVar71 * 4);
          if (uVar71 < 4) {
            cVar76 = '\x05';
          }
          else {
            cVar76 = (&DAT_1015cca8)[uVar71] + '\x05';
            uVar81 = (uint)(ushort)(uVar79 - *(short *)(&DAT_1015ce9e + uVar71 * 2)) << 5 | uVar81;
          }
          bVar68 = (byte)*(ushort *)(&DAT_1015bfd6 + uVar75 * 4);
          uVar70 = uVar81 << (bVar68 & 0x1f);
          uVar83 = uVar70;
          uVar71 = 0 << (bVar68 & 0x1f) | uVar81 >> 0x20 - (bVar68 & 0x1f);
          if ((*(ushort *)(&DAT_1015bfd6 + uVar75 * 4) & 0x20) != 0) {
            uVar83 = 0;
            uVar71 = uVar70;
          }
          uVar83 = uVar83 | *(ushort *)(&DAT_1015bfd4 + uVar75 * 4);
          bVar67 = *(byte *)(iVar78 + 0x70);
          bVar68 = cVar76 + bVar68 + bVar67;
          if (bVar68 < 0x40) {
            uVar70 = uVar83 << (bVar67 & 0x1f);
            uVar81 = uVar70;
            uVar75 = uVar71 << (bVar67 & 0x1f) | uVar83 >> 0x20 - (bVar67 & 0x1f);
            if ((bVar67 & 0x20) != 0) {
              uVar81 = 0;
              uVar75 = uVar70;
            }
            *(uint *)(iVar78 + 0x68) = *(uint *)(iVar78 + 0x68) | uVar81;
            *(uint *)(iVar78 + 0x6c) = *(uint *)(iVar78 + 0x6c) | uVar75;
            *(byte *)(iVar78 + 0x70) = bVar68;
          }
          else {
            FUN_1012a990(piVar72,uVar83,uVar71,bVar68);
          }
        }
        puVar85 = (ushort *)((int)puVar85 + 3);
        uVar77 = uVar77 - 3;
      } while (2 < uVar77);
    }
    bVar68 = *(char *)(iVar78 + 0x70) + 7;
    if (0x3f < bVar68) {
      uVar77 = 0;
LAB_101292c3:
      FUN_1012a990(piVar72,uVar77,0,bVar68);
      goto LAB_101292d2;
    }
  }
  else {
    if (*(char *)(iVar78 + 4) < '\x01') {
      if ((int)uVar75 < 0) {
        FUN_101369c0(&DAT_1015d0f0,0x11,&PTR_s_C__Users_runneradmin__cargo_regi_1015d0f8);
                    /* WARNING: Does not return */
        pcVar8 = (code *)invalidInstructionException();
        (*pcVar8)();
      }
      uVar71 = local_1450 + 5;
      goto joined_r0x1012761a;
    }
    if (*(int *)(param_1 + 0x2c) == 2) {
      uVar71 = 0xf3ffc07f;
      iVar74 = -0x80;
      do {
        if (((uVar71 & 1) != 0) && (*(short *)(iVar78 + 0x130 + iVar74) != 0)) {
          uVar71 = 0;
          goto LAB_10127680;
        }
        uVar71 = uVar71 >> 1;
        iVar74 = iVar74 + 4;
      } while (iVar74 != 0);
      uVar71 = 1;
      if (((*(short *)(iVar78 + 0xd4) == 0) && (*(short *)(iVar78 + 0xd8) == 0)) &&
         (*(short *)(iVar78 + 0xe4) == 0)) {
        iVar74 = -0x380;
        do {
          iVar69 = iVar74;
          if (iVar69 == 0) break;
          iVar74 = iVar69 + 4;
        } while (*(short *)(iVar78 + 0x4b0 + iVar69) == 0);
        uVar71 = (uint)(iVar69 != 0);
      }
LAB_10127680:
      *(uint *)(param_1 + 0x2c) = uVar71;
    }
    local_1454 = uVar77;
    memcpy(&local_144c,&PTR_DAT_1015d108,0x8fc);
    iVar74 = -0x8e0;
    do {
      uVar9 = *(undefined4 *)((int)local_b6c + iVar74);
      uVar10 = *(undefined4 *)((int)local_b6c + iVar74 + 4);
      uVar11 = *(undefined4 *)((int)local_b6c + iVar74 + 8);
      uVar12 = *(undefined4 *)((int)local_b6c + iVar74 + 0xc);
      uVar13 = *(undefined4 *)((int)&local_b5c + iVar74);
      uVar14 = *(undefined4 *)((int)&local_b5c + iVar74 + 4);
      uVar15 = *(undefined4 *)((int)&local_b54 + iVar74);
      uVar16 = *(undefined4 *)((int)&local_b50 + iVar74);
      puVar4 = (undefined4 *)(iVar78 + 0x98c + iVar74);
      uVar17 = puVar4[1];
      uVar18 = puVar4[2];
      uVar19 = puVar4[3];
      puVar5 = (undefined4 *)(iVar78 + 0x99c + iVar74);
      uVar20 = *puVar5;
      uVar21 = puVar5[1];
      uVar22 = puVar5[2];
      uVar23 = puVar5[3];
      *(undefined4 *)((int)local_b6c + iVar74) = *puVar4;
      *(undefined4 *)((int)local_b6c + iVar74 + 4) = uVar17;
      *(undefined4 *)((int)local_b6c + iVar74 + 8) = uVar18;
      *(undefined4 *)((int)local_b6c + iVar74 + 0xc) = uVar19;
      *(undefined4 *)((int)&local_b5c + iVar74) = uVar20;
      *(undefined4 *)((int)&local_b5c + iVar74 + 4) = uVar21;
      *(undefined4 *)((int)&local_b54 + iVar74) = uVar22;
      *(undefined4 *)((int)&local_b50 + iVar74) = uVar23;
      puVar4 = (undefined4 *)(iVar78 + 0x98c + iVar74);
      *puVar4 = uVar9;
      puVar4[1] = uVar10;
      puVar4[2] = uVar11;
      puVar4[3] = uVar12;
      puVar4 = (undefined4 *)(iVar78 + 0x99c + iVar74);
      *puVar4 = uVar13;
      puVar4[1] = uVar14;
      puVar4[2] = uVar15;
      puVar4[3] = uVar16;
      iVar74 = iVar74 + 0x20;
    } while (iVar74 != 0);
    uVar9 = *(undefined4 *)(iVar78 + 0x98c);
    uVar10 = *(undefined4 *)(iVar78 + 0x990);
    uVar11 = *(undefined4 *)(iVar78 + 0x994);
    uVar12 = *(undefined4 *)(iVar78 + 0x998);
    *(undefined4 *)(iVar78 + 0x98c) = local_b6c[0];
    *(undefined4 *)(iVar78 + 0x990) = local_b6c[1];
    *(undefined4 *)(iVar78 + 0x994) = local_b6c[2];
    *(undefined4 *)(iVar78 + 0x998) = local_b6c[3];
    uVar6 = *(undefined8 *)(iVar78 + 0x99c);
    *(undefined8 *)(iVar78 + 0x99c) = local_b5c;
    uVar77 = *(uint *)(iVar78 + 0x9a4);
    *(uint *)(iVar78 + 0x9a4) = local_b54;
    iVar74 = *local_144c;
    uVar81 = local_144c[1];
    uVar71 = local_144c[5];
    local_b6c[0] = uVar9;
    local_b6c[1] = uVar10;
    local_b6c[2] = uVar11;
    local_b6c[3] = uVar12;
    local_b5c = uVar6;
    local_b54 = uVar77;
    memset(&local_b50,0,0x8f4);
    memset(local_254,0,0x23d);
    if (0x23d < uVar71) {
      FUN_10136a50(0,uVar71,0x23d,&PTR_s_C__Users_runneradmin__cargo_regi_10159aa8);
                    /* WARNING: Does not return */
      pcVar8 = (code *)invalidInstructionException();
      (*pcVar8)();
    }
    uVar77 = 0;
    local_25c[0] = 0;
    local_25c[1] = 0x23d;
    if (uVar71 == 0) {
      local_14b4 = 0xffffffff;
LAB_10127a43:
      iVar69 = *(int *)(iVar78 + 0x78);
      local_14c4 = *(int *)(iVar78 + 0x7c);
      do {
        iVar69 = iVar69 + -1;
        local_25c[0] = uVar77 + 1;
        uVar83 = local_14b4 + 1;
        uVar70 = 0;
        if ((int)local_14b4 < 2) {
          local_14b4 = uVar83;
          uVar70 = uVar83;
        }
        *(uint *)((int)&local_b50 + uVar77 * 4 + 4) = uVar70;
        if (0x23c < uVar70) {
          FUN_10136b52(uVar70,0x23d,&PTR_s_C__Users_runneradmin__cargo_regi_10159a88);
                    /* WARNING: Does not return */
          pcVar8 = (code *)invalidInstructionException();
          (*pcVar8)();
        }
        *(undefined2 *)(auStack_1444 + (uVar70 - 1)) = 1;
        local_254[uVar70] = 0;
        *(int *)(iVar78 + 0x78) = iVar69;
        if (uVar81 != 0) {
          if (uVar81 <= uVar70) goto LAB_1012833f;
          local_14c4 = local_14c4 - (uint)*(ushort *)(iVar74 + 2 + uVar70 * 4);
          *(int *)(iVar78 + 0x7c) = local_14c4;
        }
        uVar77 = local_25c[0];
      } while (local_25c[0] < 2);
    }
    else {
      iVar69 = uVar71 * 4;
      local_14b4 = 0xffffffff;
      uVar77 = 0;
      do {
        while (uVar83 = local_25c[0], (short)auStack_1444[uVar77 - 1] != 0) {
          local_25c[0] = local_25c[0] + 1;
          if (0x23c < local_25c[0]) goto LAB_10129968;
          *(uint *)((int)&local_b50 + uVar83 * 4 + 4) = uVar77;
          local_254[uVar77] = 0;
          iVar69 = iVar69 + -4;
          local_14b4 = uVar77;
          uVar77 = uVar77 + 1;
          if (iVar69 == 0) goto LAB_1012782f;
        }
        *(undefined2 *)((int)auStack_1444 + uVar77 * 4 + -2) = 0;
        uVar77 = uVar77 + 1;
        iVar69 = iVar69 + -4;
      } while (iVar69 != 0);
LAB_1012782f:
      uVar77 = local_25c[0];
      if (local_25c[0] < 2) goto LAB_10127a43;
    }
    uVar77 = local_25c[0] >> 1;
    local_b54 = local_14b4;
    do {
      FUN_1012a180((int)&local_b50,(int)&uStack_1448,0x23d,uVar77);
      uVar77 = uVar77 - 1;
    } while (uVar77 != 0);
    FUN_10129fc0((int)&local_b50,(int)&uStack_1448,0x23d,uVar71);
    uVar71 = local_b54;
    local_14a0 = local_144c[1];
    iVar74 = local_144c[2];
    iVar69 = *local_144c;
    local_14a4 = local_144c[3];
    uVar77 = local_144c[4];
    uVar7 = *(ushort *)(local_144c + 6);
    local_14bc = (uint)uVar7;
    local_1480 = 0;
    uStack_147c = 0;
    uStack_1478 = 0;
    uStack_1474 = 0;
    local_1470 = 0;
    uStack_146c = 0;
    uStack_1468 = 0;
    uStack_1464 = 0;
    if (0x23c < local_25c[1]) goto LAB_10129a8e;
    uVar81 = *(uint *)((int)&local_b50 + local_25c[1] * 4);
    if (0x23c < uVar81) {
      FUN_10136b52(uVar81,0x23d,&PTR_s_C__Users_runneradmin__cargo_regi_10159ac8);
                    /* WARNING: Does not return */
      pcVar8 = (code *)invalidInstructionException();
      (*pcVar8)();
    }
    *(undefined2 *)((int)auStack_1444 + uVar81 * 4 + -2) = 0;
    if (local_25c[1] != 0x23c) {
      local_14c4 = *(int *)(iVar78 + 0x78);
      if (local_14a0 == 0) {
        iVar69 = local_25c[1] - 0x23c;
        local_14c0 = 0;
        do {
          uVar81 = local_25c[iVar69];
          if (0x23c < uVar81) goto LAB_101299b8;
          uVar83 = (uint)*(ushort *)((int)auStack_1444 + uVar81 * 4 + -2);
          if (0x23c < uVar83) goto LAB_101299cc;
          uVar83 = *(ushort *)((int)auStack_1444 + uVar83 * 4 + -2) + 1;
          uVar79 = (ushort)uVar83;
          if (uVar7 <= uVar79) {
            uVar83 = local_14bc;
          }
          *(ushort *)((int)auStack_1444 + uVar81 * 4 + -2) = (ushort)uVar83;
          if (uVar81 <= uVar71) {
            uVar70 = uVar83 & 0xffff;
            if (0xf < (ushort)uVar83) goto LAB_10129a7a;
            psVar3 = (short *)((int)&local_1480 + uVar70 * 2);
            *psVar3 = *psVar3 + 1;
            uVar84 = 0;
            uVar83 = uVar81 - uVar77;
            if (uVar77 <= uVar81) {
              if (local_14a4 <= uVar83) goto LAB_10129a4d;
              uVar84 = (uint)*(byte *)(iVar74 + uVar83);
            }
            local_14c4 = local_14c4 + (uVar84 + uVar70) * (uint)(ushort)auStack_1444[uVar81 - 1];
            *(int *)(iVar78 + 0x78) = local_14c4;
          }
          local_14c0 = local_14c0 + (uint)(uVar7 < uVar79);
          iVar69 = iVar69 + 1;
        } while (iVar69 != 0);
      }
      else {
        local_1498 = *(int *)(iVar78 + 0x7c);
        iVar80 = local_25c[1] - 0x23c;
        local_14c0 = 0;
        local_14ac = local_14c4;
        do {
          uVar81 = local_25c[iVar80];
          if (0x23c < uVar81) {
LAB_101299b8:
            FUN_10136b52(uVar81,0x23d,&PTR_s_C__Users_runneradmin__cargo_regi_10159b28);
                    /* WARNING: Does not return */
            pcVar8 = (code *)invalidInstructionException();
            (*pcVar8)();
          }
          uVar83 = (uint)*(ushort *)((int)auStack_1444 + uVar81 * 4 + -2);
          if (0x23c < uVar83) {
LAB_101299cc:
            FUN_10136b52(uVar83,0x23d,&PTR_s_C__Users_runneradmin__cargo_regi_10159b38);
                    /* WARNING: Does not return */
            pcVar8 = (code *)invalidInstructionException();
            (*pcVar8)();
          }
          uVar83 = *(ushort *)((int)auStack_1444 + uVar83 * 4 + -2) + 1;
          uVar79 = (ushort)uVar83;
          if (uVar7 <= uVar79) {
            uVar83 = local_14bc;
          }
          *(ushort *)((int)auStack_1444 + uVar81 * 4 + -2) = (ushort)uVar83;
          if (uVar81 <= uVar71) {
            uVar70 = uVar83 & 0xffff;
            if (0xf < (ushort)uVar83) goto LAB_10129a7a;
            psVar3 = (short *)((int)&local_1480 + uVar70 * 2);
            *psVar3 = *psVar3 + 1;
            uVar84 = 0;
            uVar83 = uVar81 - uVar77;
            if (uVar77 <= uVar81) {
              if (local_14a4 <= uVar83) goto LAB_10129a4d;
              uVar84 = (uint)*(byte *)(iVar74 + uVar83);
            }
            uVar83 = auStack_1444[uVar81 - 1];
            local_14ac = (uVar70 + uVar84) * (uint)(ushort)uVar83 + local_14ac;
            *(uint *)(iVar78 + 0x78) = local_14ac;
            if (local_14a0 <= uVar81) goto LAB_10129a3a;
            local_1498 = local_1498 +
                         (uVar84 + *(ushort *)(iVar69 + 2 + uVar81 * 4)) * (uint)(ushort)uVar83;
            *(int *)(iVar78 + 0x7c) = local_1498;
          }
          local_14c0 = local_14c0 + (uint)(uVar7 < uVar79);
          iVar80 = iVar80 + 1;
          local_14c4 = local_14ac;
        } while (iVar80 != 0);
      }
      if (local_14c0 != 0) {
        uVar77 = local_14bc;
        if (0xf < uVar7) {
          do {
            uVar77 = uVar77 - 1;
            if (0xf < uVar77) goto LAB_10129b3b;
          } while (*(short *)((int)&local_1480 + uVar77 * 2) == 0);
          goto LAB_10129b1d;
        }
        uVar77 = local_14bc - 1;
        do {
          do {
            if (0xf < uVar77) goto LAB_10129b3b;
            sVar82 = *(short *)((int)&local_1480 + uVar77 * 2);
            uVar77 = uVar77 - 1;
          } while (sVar82 == 0);
          *(short *)((int)&local_1480 + uVar77 * 2 + 2) = sVar82 + -1;
          psVar3 = (short *)((int)&uStack_147c + uVar77 * 2);
          *psVar3 = *psVar3 + 2;
          psVar3 = (short *)((int)&local_1480 + local_14bc * 2);
          *psVar3 = *psVar3 + -1;
          local_14c0 = local_14c0 + -2;
          uVar77 = local_14bc - 1;
        } while (0 < local_14c0);
        if (local_14bc != 0) {
          uVar77 = 0x23d;
          do {
            for (sVar82 = *(short *)((int)&local_1480 + local_14bc * 2); sVar82 != 0;
                sVar82 = sVar82 + -1) {
              do {
                uVar81 = uVar77 - 1;
                if (0x23c < uVar81) goto LAB_10129833;
                uVar83 = (&local_b54)[uVar77];
                uVar77 = uVar81;
              } while (uVar71 < uVar83);
              if (0x23c < uVar83) {
                FUN_10136b52(uVar83,0x23d,&PTR_s_C__Users_runneradmin__cargo_regi_10159b18);
                    /* WARNING: Does not return */
                pcVar8 = (code *)invalidInstructionException();
                (*pcVar8)();
              }
              uVar81 = (uint)*(ushort *)((int)auStack_1444 + uVar83 * 4 + -2);
              if (local_14bc != uVar81) {
                local_14c4 = (local_14c4 + (auStack_1444[uVar83 - 1] * local_14bc & 0xffff)) -
                             (uVar81 * auStack_1444[uVar83 - 1] & 0xffff);
                *(int *)(iVar78 + 0x78) = local_14c4;
                *(short *)((int)auStack_1444 + uVar83 * 4 + -2) = (short)local_14bc;
              }
            }
            bVar86 = local_14bc != 1;
            local_14bc = local_14bc - 1;
          } while (bVar86);
        }
      }
    }
    FUN_1012a300((int)&uStack_1448,0x23d,local_14b4,(short *)&local_1480);
    iVar74 = -0x8e0;
    do {
      uVar9 = *(undefined4 *)((int)local_b6c + iVar74);
      uVar10 = *(undefined4 *)((int)local_b6c + iVar74 + 4);
      uVar11 = *(undefined4 *)((int)local_b6c + iVar74 + 8);
      uVar12 = *(undefined4 *)((int)local_b6c + iVar74 + 0xc);
      uVar13 = *(undefined4 *)((int)&local_b5c + iVar74);
      uVar14 = *(undefined4 *)((int)&local_b5c + iVar74 + 4);
      uVar15 = *(undefined4 *)((int)&local_b54 + iVar74);
      uVar16 = *(undefined4 *)((int)&local_b50 + iVar74);
      puVar4 = (undefined4 *)(iVar78 + 0x98c + iVar74);
      uVar17 = puVar4[1];
      uVar18 = puVar4[2];
      uVar19 = puVar4[3];
      puVar5 = (undefined4 *)(iVar78 + 0x99c + iVar74);
      uVar20 = *puVar5;
      uVar21 = puVar5[1];
      uVar22 = puVar5[2];
      uVar23 = puVar5[3];
      *(undefined4 *)((int)local_b6c + iVar74) = *puVar4;
      *(undefined4 *)((int)local_b6c + iVar74 + 4) = uVar17;
      *(undefined4 *)((int)local_b6c + iVar74 + 8) = uVar18;
      *(undefined4 *)((int)local_b6c + iVar74 + 0xc) = uVar19;
      *(undefined4 *)((int)&local_b5c + iVar74) = uVar20;
      *(undefined4 *)((int)&local_b5c + iVar74 + 4) = uVar21;
      *(undefined4 *)((int)&local_b54 + iVar74) = uVar22;
      *(undefined4 *)((int)&local_b50 + iVar74) = uVar23;
      puVar4 = (undefined4 *)(iVar78 + 0x98c + iVar74);
      *puVar4 = uVar9;
      puVar4[1] = uVar10;
      puVar4[2] = uVar11;
      puVar4[3] = uVar12;
      puVar4 = (undefined4 *)(iVar78 + 0x99c + iVar74);
      *puVar4 = uVar13;
      puVar4[1] = uVar14;
      puVar4[2] = uVar15;
      puVar4[3] = uVar16;
      iVar74 = iVar74 + 0x20;
    } while (iVar74 != 0);
    uVar9 = *(undefined4 *)(iVar78 + 0x98c);
    uVar10 = *(undefined4 *)(iVar78 + 0x990);
    uVar11 = *(undefined4 *)(iVar78 + 0x994);
    uVar12 = *(undefined4 *)(iVar78 + 0x998);
    *(undefined4 *)(iVar78 + 0x98c) = local_b6c[0];
    *(undefined4 *)(iVar78 + 0x990) = local_b6c[1];
    *(undefined4 *)(iVar78 + 0x994) = local_b6c[2];
    *(undefined4 *)(iVar78 + 0x998) = local_b6c[3];
    uVar6 = *(undefined8 *)(iVar78 + 0x99c);
    *(undefined8 *)(iVar78 + 0x99c) = local_b5c;
    uVar77 = *(uint *)(iVar78 + 0x9a4);
    *(uint *)(iVar78 + 0x9a4) = local_b54;
    local_b6c[0] = uVar9;
    local_b6c[1] = uVar10;
    local_b6c[2] = uVar11;
    local_b6c[3] = uVar12;
    local_b5c = uVar6;
    local_b54 = uVar77;
    memcpy(&local_144c,&PTR_DAT_1015da08,0xfc);
    piVar72 = *(int **)(iVar78 + 0x9a8);
    uVar9 = *(undefined4 *)(iVar78 + 0x9ac);
    uVar83 = *(uint *)(iVar78 + 0x9b0);
    uVar10 = *(undefined4 *)(iVar78 + 0x9b4);
    uVar11 = *(undefined4 *)(iVar78 + 0x9b8);
    uVar12 = *(undefined4 *)(iVar78 + 0x9bc);
    uVar13 = *(undefined4 *)(iVar78 + 0x9c0);
    uVar14 = *(undefined4 *)(iVar78 + 0x9c4);
    *(int **)(iVar78 + 0x9a8) = local_144c;
    *(undefined4 *)(iVar78 + 0x9ac) = uStack_1448;
    *(uint *)(iVar78 + 0x9b0) = auStack_1444[0];
    *(uint *)(iVar78 + 0x9b4) = auStack_1444[1];
    *(uint *)(iVar78 + 0x9b8) = auStack_1444[2];
    *(uint *)(iVar78 + 0x9bc) = auStack_1444[3];
    *(uint *)(iVar78 + 0x9c0) = auStack_1444[4];
    *(uint *)(iVar78 + 0x9c4) = auStack_1444[5];
    uVar15 = *(undefined4 *)(iVar78 + 0x9c8);
    uVar16 = *(undefined4 *)(iVar78 + 0x9cc);
    uVar17 = *(undefined4 *)(iVar78 + 0x9d0);
    uVar18 = *(undefined4 *)(iVar78 + 0x9d4);
    uVar19 = *(undefined4 *)(iVar78 + 0x9d8);
    uVar20 = *(undefined4 *)(iVar78 + 0x9dc);
    uVar21 = *(undefined4 *)(iVar78 + 0x9e0);
    uVar22 = *(undefined4 *)(iVar78 + 0x9e4);
    *(uint *)(iVar78 + 0x9c8) = auStack_1444[6];
    *(uint *)(iVar78 + 0x9cc) = auStack_1444[7];
    *(uint *)(iVar78 + 0x9d0) = auStack_1444[8];
    *(uint *)(iVar78 + 0x9d4) = auStack_1444[9];
    *(uint *)(iVar78 + 0x9d8) = auStack_1444[10];
    *(uint *)(iVar78 + 0x9dc) = auStack_1444[0xb];
    *(uint *)(iVar78 + 0x9e0) = auStack_1444[0xc];
    *(uint *)(iVar78 + 0x9e4) = auStack_1444[0xd];
    uVar70 = *(uint *)(iVar78 + 0x9e8);
    uVar23 = *(undefined4 *)(iVar78 + 0x9ec);
    uVar24 = *(undefined4 *)(iVar78 + 0x9f0);
    uVar25 = *(undefined4 *)(iVar78 + 0x9f4);
    uVar26 = *(undefined4 *)(iVar78 + 0x9f8);
    uVar27 = *(undefined4 *)(iVar78 + 0x9fc);
    uVar28 = *(undefined4 *)(iVar78 + 0xa00);
    uVar29 = *(undefined4 *)(iVar78 + 0xa04);
    *(uint *)(iVar78 + 0x9e8) = auStack_1444[0xe];
    *(uint *)(iVar78 + 0x9ec) = auStack_1444[0xf];
    *(uint *)(iVar78 + 0x9f0) = auStack_1444[0x10];
    *(uint *)(iVar78 + 0x9f4) = auStack_1444[0x11];
    *(uint *)(iVar78 + 0x9f8) = auStack_1444[0x12];
    *(uint *)(iVar78 + 0x9fc) = auStack_1444[0x13];
    *(uint *)(iVar78 + 0xa00) = auStack_1444[0x14];
    *(uint *)(iVar78 + 0xa04) = auStack_1444[0x15];
    uVar30 = *(undefined4 *)(iVar78 + 0xa08);
    uVar31 = *(undefined4 *)(iVar78 + 0xa0c);
    uVar32 = *(undefined4 *)(iVar78 + 0xa10);
    uVar33 = *(undefined4 *)(iVar78 + 0xa14);
    uVar34 = *(undefined4 *)(iVar78 + 0xa18);
    uVar35 = *(undefined4 *)(iVar78 + 0xa1c);
    uVar36 = *(undefined4 *)(iVar78 + 0xa20);
    uVar37 = *(undefined4 *)(iVar78 + 0xa24);
    *(uint *)(iVar78 + 0xa08) = auStack_1444[0x16];
    *(uint *)(iVar78 + 0xa0c) = auStack_1444[0x17];
    *(uint *)(iVar78 + 0xa10) = auStack_1444[0x18];
    *(uint *)(iVar78 + 0xa14) = auStack_1444[0x19];
    *(uint *)(iVar78 + 0xa18) = auStack_1444[0x1a];
    *(uint *)(iVar78 + 0xa1c) = auStack_1444[0x1b];
    *(uint *)(iVar78 + 0xa20) = auStack_1444[0x1c];
    *(uint *)(iVar78 + 0xa24) = auStack_1444[0x1d];
    uVar38 = *(undefined4 *)(iVar78 + 0xa28);
    uVar39 = *(undefined4 *)(iVar78 + 0xa2c);
    uVar40 = *(undefined4 *)(iVar78 + 0xa30);
    uVar41 = *(undefined4 *)(iVar78 + 0xa34);
    uVar42 = *(undefined4 *)(iVar78 + 0xa38);
    uVar43 = *(undefined4 *)(iVar78 + 0xa3c);
    uVar44 = *(undefined4 *)(iVar78 + 0xa40);
    uVar45 = *(undefined4 *)(iVar78 + 0xa44);
    *(uint *)(iVar78 + 0xa28) = auStack_1444[0x1e];
    *(uint *)(iVar78 + 0xa2c) = auStack_1444[0x1f];
    *(uint *)(iVar78 + 0xa30) = auStack_1444[0x20];
    *(uint *)(iVar78 + 0xa34) = auStack_1444[0x21];
    *(uint *)(iVar78 + 0xa38) = auStack_1444[0x22];
    *(uint *)(iVar78 + 0xa3c) = auStack_1444[0x23];
    *(uint *)(iVar78 + 0xa40) = auStack_1444[0x24];
    *(uint *)(iVar78 + 0xa44) = auStack_1444[0x25];
    uVar84 = *(uint *)(iVar78 + 0xa48);
    uVar46 = *(undefined4 *)(iVar78 + 0xa4c);
    uVar47 = *(undefined4 *)(iVar78 + 0xa50);
    uVar48 = *(undefined4 *)(iVar78 + 0xa54);
    uVar49 = *(undefined4 *)(iVar78 + 0xa58);
    uVar50 = *(undefined4 *)(iVar78 + 0xa5c);
    uVar51 = *(undefined4 *)(iVar78 + 0xa60);
    uVar52 = *(undefined4 *)(iVar78 + 0xa64);
    *(uint *)(iVar78 + 0xa48) = auStack_1444[0x26];
    *(uint *)(iVar78 + 0xa4c) = auStack_1444[0x27];
    *(uint *)(iVar78 + 0xa50) = auStack_1444[0x28];
    *(uint *)(iVar78 + 0xa54) = auStack_1444[0x29];
    *(uint *)(iVar78 + 0xa58) = auStack_1444[0x2a];
    *(uint *)(iVar78 + 0xa5c) = auStack_1444[0x2b];
    *(uint *)(iVar78 + 0xa60) = auStack_1444[0x2c];
    *(uint *)(iVar78 + 0xa64) = auStack_1444[0x2d];
    uVar53 = *(undefined4 *)(iVar78 + 0xa68);
    uVar54 = *(undefined4 *)(iVar78 + 0xa6c);
    uVar55 = *(undefined4 *)(iVar78 + 0xa70);
    uVar56 = *(undefined4 *)(iVar78 + 0xa74);
    uVar57 = *(undefined4 *)(iVar78 + 0xa78);
    uVar58 = *(undefined4 *)(iVar78 + 0xa7c);
    uVar59 = *(undefined4 *)(iVar78 + 0xa80);
    uVar60 = *(undefined4 *)(iVar78 + 0xa84);
    *(uint *)(iVar78 + 0xa68) = auStack_1444[0x2e];
    *(uint *)(iVar78 + 0xa6c) = auStack_1444[0x2f];
    *(uint *)(iVar78 + 0xa70) = auStack_1444[0x30];
    *(uint *)(iVar78 + 0xa74) = auStack_1444[0x31];
    *(uint *)(iVar78 + 0xa78) = auStack_1444[0x32];
    *(uint *)(iVar78 + 0xa7c) = auStack_1444[0x33];
    *(uint *)(iVar78 + 0xa80) = auStack_1444[0x34];
    *(uint *)(iVar78 + 0xa84) = auStack_1444[0x35];
    uVar61 = *(undefined4 *)(iVar78 + 0xa88);
    uVar62 = *(undefined4 *)(iVar78 + 0xa8c);
    uVar63 = *(undefined4 *)(iVar78 + 0xa90);
    uVar64 = *(undefined4 *)(iVar78 + 0xa94);
    *(uint *)(iVar78 + 0xa88) = auStack_1444[0x36];
    *(uint *)(iVar78 + 0xa8c) = auStack_1444[0x37];
    *(uint *)(iVar78 + 0xa90) = auStack_1444[0x38];
    *(uint *)(iVar78 + 0xa94) = auStack_1444[0x39];
    uVar6 = *(undefined8 *)(iVar78 + 0xa98);
    *(undefined8 *)(iVar78 + 0xa98) = local_135c;
    uVar77 = *(uint *)(iVar78 + 0xaa0);
    *(uint *)(iVar78 + 0xaa0) = local_1354;
    iVar74 = *piVar72;
    uVar81 = piVar72[1];
    uVar71 = piVar72[5];
    local_144c = piVar72;
    uStack_1448 = uVar9;
    auStack_1444[0] = uVar83;
    auStack_1444[1] = uVar10;
    auStack_1444[2] = uVar11;
    auStack_1444[3] = uVar12;
    auStack_1444[4] = uVar13;
    auStack_1444[5] = uVar14;
    auStack_1444[6] = uVar15;
    auStack_1444[7] = uVar16;
    auStack_1444[8] = uVar17;
    auStack_1444[9] = uVar18;
    auStack_1444[10] = uVar19;
    auStack_1444[0xb] = uVar20;
    auStack_1444[0xc] = uVar21;
    auStack_1444[0xd] = uVar22;
    auStack_1444[0xe] = uVar70;
    auStack_1444[0xf] = uVar23;
    auStack_1444[0x10] = uVar24;
    auStack_1444[0x11] = uVar25;
    auStack_1444[0x12] = uVar26;
    auStack_1444[0x13] = uVar27;
    auStack_1444[0x14] = uVar28;
    auStack_1444[0x15] = uVar29;
    auStack_1444[0x16] = uVar30;
    auStack_1444[0x17] = uVar31;
    auStack_1444[0x18] = uVar32;
    auStack_1444[0x19] = uVar33;
    auStack_1444[0x1a] = uVar34;
    auStack_1444[0x1b] = uVar35;
    auStack_1444[0x1c] = uVar36;
    auStack_1444[0x1d] = uVar37;
    auStack_1444[0x1e] = uVar38;
    auStack_1444[0x1f] = uVar39;
    auStack_1444[0x20] = uVar40;
    auStack_1444[0x21] = uVar41;
    auStack_1444[0x22] = uVar42;
    auStack_1444[0x23] = uVar43;
    auStack_1444[0x24] = uVar44;
    auStack_1444[0x25] = uVar45;
    auStack_1444[0x26] = uVar84;
    auStack_1444[0x27] = uVar46;
    auStack_1444[0x28] = uVar47;
    auStack_1444[0x29] = uVar48;
    auStack_1444[0x2a] = uVar49;
    auStack_1444[0x2b] = uVar50;
    auStack_1444[0x2c] = uVar51;
    auStack_1444[0x2d] = uVar52;
    auStack_1444[0x2e] = uVar53;
    auStack_1444[0x2f] = uVar54;
    auStack_1444[0x30] = uVar55;
    auStack_1444[0x31] = uVar56;
    auStack_1444[0x32] = uVar57;
    auStack_1444[0x33] = uVar58;
    auStack_1444[0x34] = uVar59;
    auStack_1444[0x35] = uVar60;
    auStack_1444[0x36] = uVar61;
    auStack_1444[0x37] = uVar62;
    auStack_1444[0x38] = uVar63;
    auStack_1444[0x39] = uVar64;
    local_135c = uVar6;
    local_1354 = uVar77;
    memset(&local_b50,0,0x8f4);
    memset(local_254,0,0x23d);
    if (0x3d < uVar71) {
      FUN_10136a50(0,uVar71,0x3d,&PTR_s_C__Users_runneradmin__cargo_regi_10159aa8);
                    /* WARNING: Does not return */
      pcVar8 = (code *)invalidInstructionException();
      (*pcVar8)();
    }
    uVar77 = 0;
    local_25c[0] = 0;
    local_25c[1] = 0x23d;
    if (uVar71 == 0) {
      local_14b4 = 0xffffffff;
LAB_101282ad:
      iVar69 = *(int *)(iVar78 + 0x78);
      local_14c4 = *(int *)(iVar78 + 0x7c);
      do {
        iVar69 = iVar69 + -1;
        local_25c[0] = uVar77 + 1;
        uVar83 = local_14b4 + 1;
        uVar70 = 0;
        if ((int)local_14b4 < 2) {
          local_14b4 = uVar83;
          uVar70 = uVar83;
        }
        *(uint *)((int)&local_b50 + uVar77 * 4 + 4) = uVar70;
        if (0x3c < uVar70) {
          FUN_10136b52(uVar70,0x3d,&PTR_s_C__Users_runneradmin__cargo_regi_10159a88);
                    /* WARNING: Does not return */
          pcVar8 = (code *)invalidInstructionException();
          (*pcVar8)();
        }
        *(undefined2 *)(auStack_1444 + (uVar70 - 1)) = 1;
        local_254[uVar70] = 0;
        *(int *)(iVar78 + 0x78) = iVar69;
        if (uVar81 != 0) {
          if (uVar81 <= uVar70) goto LAB_1012833f;
          local_14c4 = local_14c4 - (uint)*(ushort *)(iVar74 + 2 + uVar70 * 4);
          *(int *)(iVar78 + 0x7c) = local_14c4;
        }
        uVar77 = local_25c[0];
      } while (local_25c[0] < 2);
    }
    else {
      iVar69 = uVar71 * 4;
      local_14b4 = 0xffffffff;
      uVar77 = 0;
      do {
        while (uVar83 = local_25c[0], (short)auStack_1444[uVar77 - 1] != 0) {
          local_25c[0] = local_25c[0] + 1;
          if (0x23c < local_25c[0]) goto LAB_10129968;
          *(uint *)((int)&local_b50 + uVar83 * 4 + 4) = uVar77;
          local_254[uVar77] = 0;
          iVar69 = iVar69 + -4;
          local_14b4 = uVar77;
          uVar77 = uVar77 + 1;
          if (iVar69 == 0) goto LAB_101280af;
        }
        *(undefined2 *)((int)auStack_1444 + uVar77 * 4 + -2) = 0;
        uVar77 = uVar77 + 1;
        iVar69 = iVar69 + -4;
      } while (iVar69 != 0);
LAB_101280af:
      uVar77 = local_25c[0];
      if (local_25c[0] < 2) goto LAB_101282ad;
    }
    uVar77 = local_25c[0] >> 1;
    local_1354 = local_14b4;
    do {
      FUN_1012a180((int)&local_b50,(int)&uStack_1448,0x3d,uVar77);
      uVar77 = uVar77 - 1;
    } while (uVar77 != 0);
    FUN_10129fc0((int)&local_b50,(int)&uStack_1448,0x3d,uVar71);
    uVar71 = local_1354;
    local_14a0 = local_144c[1];
    iVar74 = local_144c[2];
    iVar69 = *local_144c;
    local_14a4 = local_144c[3];
    uVar77 = local_144c[4];
    uVar7 = *(ushort *)(local_144c + 6);
    local_14bc = (uint)uVar7;
    local_1480 = 0;
    uStack_147c = 0;
    uStack_1478 = 0;
    uStack_1474 = 0;
    local_1470 = 0;
    uStack_146c = 0;
    uStack_1468 = 0;
    uStack_1464 = 0;
    if (0x23c < local_25c[1]) goto LAB_10129a8e;
    uVar81 = *(uint *)((int)&local_b50 + local_25c[1] * 4);
    if (0x3c < uVar81) {
      FUN_10136b52(uVar81,0x3d,&PTR_s_C__Users_runneradmin__cargo_regi_10159ac8);
                    /* WARNING: Does not return */
      pcVar8 = (code *)invalidInstructionException();
      (*pcVar8)();
    }
    *(undefined2 *)((int)auStack_1444 + uVar81 * 4 + -2) = 0;
    if (local_25c[1] != 0x23c) {
      local_14c4 = *(int *)(iVar78 + 0x78);
      if (local_14a0 == 0) {
        iVar69 = local_25c[1] - 0x23c;
        local_14c0 = 0;
        do {
          uVar81 = local_25c[iVar69];
          if (0x3c < uVar81) goto LAB_101299e2;
          uVar83 = (uint)*(ushort *)((int)auStack_1444 + uVar81 * 4 + -2);
          if (0x3c < uVar83) goto LAB_101299f6;
          uVar83 = *(ushort *)((int)auStack_1444 + uVar83 * 4 + -2) + 1;
          uVar79 = (ushort)uVar83;
          if (uVar7 <= uVar79) {
            uVar83 = local_14bc;
          }
          *(ushort *)((int)auStack_1444 + uVar81 * 4 + -2) = (ushort)uVar83;
          if (uVar81 <= uVar71) {
            uVar70 = uVar83 & 0xffff;
            if (0xf < (ushort)uVar83) goto LAB_10129a7a;
            psVar3 = (short *)((int)&local_1480 + uVar70 * 2);
            *psVar3 = *psVar3 + 1;
            uVar84 = 0;
            uVar83 = uVar81 - uVar77;
            if (uVar77 <= uVar81) {
              if (local_14a4 <= uVar83) goto LAB_10129a4d;
              uVar84 = (uint)*(byte *)(iVar74 + uVar83);
            }
            local_14c4 = local_14c4 + (uVar84 + uVar70) * (uint)(ushort)auStack_1444[uVar81 - 1];
            *(int *)(iVar78 + 0x78) = local_14c4;
          }
          local_14c0 = local_14c0 + (uint)(uVar7 < uVar79);
          iVar69 = iVar69 + 1;
        } while (iVar69 != 0);
      }
      else {
        local_1498 = *(int *)(iVar78 + 0x7c);
        iVar80 = local_25c[1] - 0x23c;
        local_14c0 = 0;
        local_14ac = local_14c4;
        do {
          uVar81 = local_25c[iVar80];
          if (0x3c < uVar81) {
LAB_101299e2:
            FUN_10136b52(uVar81,0x3d,&PTR_s_C__Users_runneradmin__cargo_regi_10159b28);
                    /* WARNING: Does not return */
            pcVar8 = (code *)invalidInstructionException();
            (*pcVar8)();
          }
          uVar83 = (uint)*(ushort *)((int)auStack_1444 + uVar81 * 4 + -2);
          if (0x3c < uVar83) {
LAB_101299f6:
            FUN_10136b52(uVar83,0x3d,&PTR_s_C__Users_runneradmin__cargo_regi_10159b38);
                    /* WARNING: Does not return */
            pcVar8 = (code *)invalidInstructionException();
            (*pcVar8)();
          }
          uVar83 = *(ushort *)((int)auStack_1444 + uVar83 * 4 + -2) + 1;
          uVar79 = (ushort)uVar83;
          if (uVar7 <= uVar79) {
            uVar83 = local_14bc;
          }
          *(ushort *)((int)auStack_1444 + uVar81 * 4 + -2) = (ushort)uVar83;
          if (uVar81 <= uVar71) {
            uVar70 = uVar83 & 0xffff;
            if (0xf < (ushort)uVar83) goto LAB_10129a7a;
            psVar3 = (short *)((int)&local_1480 + uVar70 * 2);
            *psVar3 = *psVar3 + 1;
            uVar84 = 0;
            uVar83 = uVar81 - uVar77;
            if (uVar77 <= uVar81) {
              if (local_14a4 <= uVar83) goto LAB_10129a4d;
              uVar84 = (uint)*(byte *)(iVar74 + uVar83);
            }
            uVar83 = auStack_1444[uVar81 - 1];
            local_14ac = (uVar70 + uVar84) * (uint)(ushort)uVar83 + local_14ac;
            *(uint *)(iVar78 + 0x78) = local_14ac;
            if (local_14a0 <= uVar81) goto LAB_10129a3a;
            local_1498 = local_1498 +
                         (uVar84 + *(ushort *)(iVar69 + 2 + uVar81 * 4)) * (uint)(ushort)uVar83;
            *(int *)(iVar78 + 0x7c) = local_1498;
          }
          local_14c0 = local_14c0 + (uint)(uVar7 < uVar79);
          iVar80 = iVar80 + 1;
          local_14c4 = local_14ac;
        } while (iVar80 != 0);
      }
      if (local_14c0 != 0) {
        uVar77 = local_14bc;
        if (0xf < uVar7) {
          do {
            uVar77 = uVar77 - 1;
            if (0xf < uVar77) goto LAB_10129b3b;
          } while (*(short *)((int)&local_1480 + uVar77 * 2) == 0);
          goto LAB_10129b1d;
        }
        uVar77 = local_14bc - 1;
        do {
          do {
            if (0xf < uVar77) goto LAB_10129b3b;
            sVar82 = *(short *)((int)&local_1480 + uVar77 * 2);
            uVar77 = uVar77 - 1;
          } while (sVar82 == 0);
          *(short *)((int)&local_1480 + uVar77 * 2 + 2) = sVar82 + -1;
          psVar3 = (short *)((int)&uStack_147c + uVar77 * 2);
          *psVar3 = *psVar3 + 2;
          psVar3 = (short *)((int)&local_1480 + local_14bc * 2);
          *psVar3 = *psVar3 + -1;
          local_14c0 = local_14c0 + -2;
          uVar77 = local_14bc - 1;
        } while (0 < local_14c0);
        if (local_14bc != 0) {
          uVar77 = 0x23d;
          do {
            for (sVar82 = *(short *)((int)&local_1480 + local_14bc * 2); sVar82 != 0;
                sVar82 = sVar82 + -1) {
              do {
                uVar81 = uVar77 - 1;
                if (0x23c < uVar81) goto LAB_10129833;
                uVar83 = (&local_b54)[uVar77];
                uVar77 = uVar81;
              } while (uVar71 < uVar83);
              if (0x3c < uVar83) {
                FUN_10136b52(uVar83,0x3d,&PTR_s_C__Users_runneradmin__cargo_regi_10159b18);
                    /* WARNING: Does not return */
                pcVar8 = (code *)invalidInstructionException();
                (*pcVar8)();
              }
              uVar81 = (uint)*(ushort *)((int)auStack_1444 + uVar83 * 4 + -2);
              if (local_14bc != uVar81) {
                local_14c4 = (local_14c4 + (auStack_1444[uVar83 - 1] * local_14bc & 0xffff)) -
                             (uVar81 * auStack_1444[uVar83 - 1] & 0xffff);
                *(int *)(iVar78 + 0x78) = local_14c4;
                *(short *)((int)auStack_1444 + uVar83 * 4 + -2) = (short)local_14bc;
              }
            }
            bVar86 = local_14bc != 1;
            local_14bc = local_14bc - 1;
          } while (bVar86);
        }
      }
    }
    FUN_1012a300((int)&uStack_1448,0x3d,local_14b4,(short *)&local_1480);
    piVar72 = *(int **)(iVar78 + 0x9a8);
    uVar9 = *(undefined4 *)(iVar78 + 0x9ac);
    uVar71 = *(uint *)(iVar78 + 0x9b0);
    uVar10 = *(undefined4 *)(iVar78 + 0x9b4);
    uVar11 = *(undefined4 *)(iVar78 + 0x9b8);
    uVar12 = *(undefined4 *)(iVar78 + 0x9bc);
    uVar13 = *(undefined4 *)(iVar78 + 0x9c0);
    uVar14 = *(undefined4 *)(iVar78 + 0x9c4);
    *(int **)(iVar78 + 0x9a8) = local_144c;
    *(undefined4 *)(iVar78 + 0x9ac) = uStack_1448;
    *(uint *)(iVar78 + 0x9b0) = auStack_1444[0];
    *(uint *)(iVar78 + 0x9b4) = auStack_1444[1];
    *(uint *)(iVar78 + 0x9b8) = auStack_1444[2];
    *(uint *)(iVar78 + 0x9bc) = auStack_1444[3];
    *(uint *)(iVar78 + 0x9c0) = auStack_1444[4];
    *(uint *)(iVar78 + 0x9c4) = auStack_1444[5];
    uVar15 = *(undefined4 *)(iVar78 + 0x9c8);
    uVar16 = *(undefined4 *)(iVar78 + 0x9cc);
    uVar17 = *(undefined4 *)(iVar78 + 0x9d0);
    uVar18 = *(undefined4 *)(iVar78 + 0x9d4);
    uVar19 = *(undefined4 *)(iVar78 + 0x9d8);
    uVar20 = *(undefined4 *)(iVar78 + 0x9dc);
    uVar21 = *(undefined4 *)(iVar78 + 0x9e0);
    uVar22 = *(undefined4 *)(iVar78 + 0x9e4);
    *(uint *)(iVar78 + 0x9c8) = auStack_1444[6];
    *(uint *)(iVar78 + 0x9cc) = auStack_1444[7];
    *(uint *)(iVar78 + 0x9d0) = auStack_1444[8];
    *(uint *)(iVar78 + 0x9d4) = auStack_1444[9];
    *(uint *)(iVar78 + 0x9d8) = auStack_1444[10];
    *(uint *)(iVar78 + 0x9dc) = auStack_1444[0xb];
    *(uint *)(iVar78 + 0x9e0) = auStack_1444[0xc];
    *(uint *)(iVar78 + 0x9e4) = auStack_1444[0xd];
    uVar23 = *(undefined4 *)(iVar78 + 0x9e8);
    uVar24 = *(undefined4 *)(iVar78 + 0x9ec);
    uVar25 = *(undefined4 *)(iVar78 + 0x9f0);
    uVar26 = *(undefined4 *)(iVar78 + 0x9f4);
    uVar27 = *(undefined4 *)(iVar78 + 0x9f8);
    uVar28 = *(undefined4 *)(iVar78 + 0x9fc);
    uVar29 = *(undefined4 *)(iVar78 + 0xa00);
    uVar30 = *(undefined4 *)(iVar78 + 0xa04);
    *(uint *)(iVar78 + 0x9e8) = auStack_1444[0xe];
    *(uint *)(iVar78 + 0x9ec) = auStack_1444[0xf];
    *(uint *)(iVar78 + 0x9f0) = auStack_1444[0x10];
    *(uint *)(iVar78 + 0x9f4) = auStack_1444[0x11];
    *(uint *)(iVar78 + 0x9f8) = auStack_1444[0x12];
    *(uint *)(iVar78 + 0x9fc) = auStack_1444[0x13];
    *(uint *)(iVar78 + 0xa00) = auStack_1444[0x14];
    *(uint *)(iVar78 + 0xa04) = auStack_1444[0x15];
    uVar31 = *(undefined4 *)(iVar78 + 0xa08);
    uVar32 = *(undefined4 *)(iVar78 + 0xa0c);
    uVar33 = *(undefined4 *)(iVar78 + 0xa10);
    uVar34 = *(undefined4 *)(iVar78 + 0xa14);
    uVar35 = *(undefined4 *)(iVar78 + 0xa18);
    uVar36 = *(undefined4 *)(iVar78 + 0xa1c);
    uVar37 = *(undefined4 *)(iVar78 + 0xa20);
    uVar38 = *(undefined4 *)(iVar78 + 0xa24);
    *(uint *)(iVar78 + 0xa08) = auStack_1444[0x16];
    *(uint *)(iVar78 + 0xa0c) = auStack_1444[0x17];
    *(uint *)(iVar78 + 0xa10) = auStack_1444[0x18];
    *(uint *)(iVar78 + 0xa14) = auStack_1444[0x19];
    *(uint *)(iVar78 + 0xa18) = auStack_1444[0x1a];
    *(uint *)(iVar78 + 0xa1c) = auStack_1444[0x1b];
    *(uint *)(iVar78 + 0xa20) = auStack_1444[0x1c];
    *(uint *)(iVar78 + 0xa24) = auStack_1444[0x1d];
    uVar39 = *(undefined4 *)(iVar78 + 0xa28);
    uVar40 = *(undefined4 *)(iVar78 + 0xa2c);
    uVar41 = *(undefined4 *)(iVar78 + 0xa30);
    uVar42 = *(undefined4 *)(iVar78 + 0xa34);
    uVar43 = *(undefined4 *)(iVar78 + 0xa38);
    uVar44 = *(undefined4 *)(iVar78 + 0xa3c);
    uVar45 = *(undefined4 *)(iVar78 + 0xa40);
    uVar46 = *(undefined4 *)(iVar78 + 0xa44);
    *(uint *)(iVar78 + 0xa28) = auStack_1444[0x1e];
    *(uint *)(iVar78 + 0xa2c) = auStack_1444[0x1f];
    *(uint *)(iVar78 + 0xa30) = auStack_1444[0x20];
    *(uint *)(iVar78 + 0xa34) = auStack_1444[0x21];
    *(uint *)(iVar78 + 0xa38) = auStack_1444[0x22];
    *(uint *)(iVar78 + 0xa3c) = auStack_1444[0x23];
    *(uint *)(iVar78 + 0xa40) = auStack_1444[0x24];
    *(uint *)(iVar78 + 0xa44) = auStack_1444[0x25];
    uVar47 = *(undefined4 *)(iVar78 + 0xa48);
    uVar48 = *(undefined4 *)(iVar78 + 0xa4c);
    uVar49 = *(undefined4 *)(iVar78 + 0xa50);
    uVar50 = *(undefined4 *)(iVar78 + 0xa54);
    uVar51 = *(undefined4 *)(iVar78 + 0xa58);
    uVar52 = *(undefined4 *)(iVar78 + 0xa5c);
    uVar53 = *(undefined4 *)(iVar78 + 0xa60);
    uVar54 = *(undefined4 *)(iVar78 + 0xa64);
    *(uint *)(iVar78 + 0xa48) = auStack_1444[0x26];
    *(uint *)(iVar78 + 0xa4c) = auStack_1444[0x27];
    *(uint *)(iVar78 + 0xa50) = auStack_1444[0x28];
    *(uint *)(iVar78 + 0xa54) = auStack_1444[0x29];
    *(uint *)(iVar78 + 0xa58) = auStack_1444[0x2a];
    *(uint *)(iVar78 + 0xa5c) = auStack_1444[0x2b];
    *(uint *)(iVar78 + 0xa60) = auStack_1444[0x2c];
    *(uint *)(iVar78 + 0xa64) = auStack_1444[0x2d];
    uVar55 = *(undefined4 *)(iVar78 + 0xa68);
    uVar56 = *(undefined4 *)(iVar78 + 0xa6c);
    uVar57 = *(undefined4 *)(iVar78 + 0xa70);
    uVar58 = *(undefined4 *)(iVar78 + 0xa74);
    uVar59 = *(undefined4 *)(iVar78 + 0xa78);
    uVar60 = *(undefined4 *)(iVar78 + 0xa7c);
    uVar61 = *(undefined4 *)(iVar78 + 0xa80);
    uVar62 = *(undefined4 *)(iVar78 + 0xa84);
    *(uint *)(iVar78 + 0xa68) = auStack_1444[0x2e];
    *(uint *)(iVar78 + 0xa6c) = auStack_1444[0x2f];
    *(uint *)(iVar78 + 0xa70) = auStack_1444[0x30];
    *(uint *)(iVar78 + 0xa74) = auStack_1444[0x31];
    *(uint *)(iVar78 + 0xa78) = auStack_1444[0x32];
    *(uint *)(iVar78 + 0xa7c) = auStack_1444[0x33];
    *(uint *)(iVar78 + 0xa80) = auStack_1444[0x34];
    *(uint *)(iVar78 + 0xa84) = auStack_1444[0x35];
    uVar63 = *(undefined4 *)(iVar78 + 0xa88);
    uVar64 = *(undefined4 *)(iVar78 + 0xa8c);
    uVar65 = *(undefined4 *)(iVar78 + 0xa90);
    uVar66 = *(undefined4 *)(iVar78 + 0xa94);
    *(uint *)(iVar78 + 0xa88) = auStack_1444[0x36];
    *(uint *)(iVar78 + 0xa8c) = auStack_1444[0x37];
    *(uint *)(iVar78 + 0xa90) = auStack_1444[0x38];
    *(uint *)(iVar78 + 0xa94) = auStack_1444[0x39];
    uVar6 = *(undefined8 *)(iVar78 + 0xa98);
    *(undefined8 *)(iVar78 + 0xa98) = local_135c;
    uVar77 = *(uint *)(iVar78 + 0xaa0);
    *(uint *)(iVar78 + 0xaa0) = local_1354;
    local_144c = piVar72;
    uStack_1448 = uVar9;
    auStack_1444[0] = uVar71;
    auStack_1444[1] = uVar10;
    auStack_1444[2] = uVar11;
    auStack_1444[3] = uVar12;
    auStack_1444[4] = uVar13;
    auStack_1444[5] = uVar14;
    auStack_1444[6] = uVar15;
    auStack_1444[7] = uVar16;
    auStack_1444[8] = uVar17;
    auStack_1444[9] = uVar18;
    auStack_1444[10] = uVar19;
    auStack_1444[0xb] = uVar20;
    auStack_1444[0xc] = uVar21;
    auStack_1444[0xd] = uVar22;
    auStack_1444[0xe] = uVar23;
    auStack_1444[0xf] = uVar24;
    auStack_1444[0x10] = uVar25;
    auStack_1444[0x11] = uVar26;
    auStack_1444[0x12] = uVar27;
    auStack_1444[0x13] = uVar28;
    auStack_1444[0x14] = uVar29;
    auStack_1444[0x15] = uVar30;
    auStack_1444[0x16] = uVar31;
    auStack_1444[0x17] = uVar32;
    auStack_1444[0x18] = uVar33;
    auStack_1444[0x19] = uVar34;
    auStack_1444[0x1a] = uVar35;
    auStack_1444[0x1b] = uVar36;
    auStack_1444[0x1c] = uVar37;
    auStack_1444[0x1d] = uVar38;
    auStack_1444[0x1e] = uVar39;
    auStack_1444[0x1f] = uVar40;
    auStack_1444[0x20] = uVar41;
    auStack_1444[0x21] = uVar42;
    auStack_1444[0x22] = uVar43;
    auStack_1444[0x23] = uVar44;
    auStack_1444[0x24] = uVar45;
    auStack_1444[0x25] = uVar46;
    auStack_1444[0x26] = uVar47;
    auStack_1444[0x27] = uVar48;
    auStack_1444[0x28] = uVar49;
    auStack_1444[0x29] = uVar50;
    auStack_1444[0x2a] = uVar51;
    auStack_1444[0x2b] = uVar52;
    auStack_1444[0x2c] = uVar53;
    auStack_1444[0x2d] = uVar54;
    auStack_1444[0x2e] = uVar55;
    auStack_1444[0x2f] = uVar56;
    auStack_1444[0x30] = uVar57;
    auStack_1444[0x31] = uVar58;
    auStack_1444[0x32] = uVar59;
    auStack_1444[0x33] = uVar60;
    auStack_1444[0x34] = uVar61;
    auStack_1444[0x35] = uVar62;
    auStack_1444[0x36] = uVar63;
    auStack_1444[0x37] = uVar64;
    auStack_1444[0x38] = uVar65;
    auStack_1444[0x39] = uVar66;
    local_135c = uVar6;
    local_1354 = uVar77;
    FUN_1012a580(iVar78 + 0xaa4,iVar78 + 0xb0,0x23d,*(uint *)(iVar78 + 0x9a4));
    FUN_1012a580(iVar78 + 0xaa4,iVar78 + 0x9ac,0x3d,*(uint *)(iVar78 + 0xaa0));
    memcpy(&local_144c,&PTR_DAT_1015cfcc,0xa4);
    local_144c = *(int **)(iVar78 + 0xaa4);
    uStack_1448 = *(undefined4 *)(iVar78 + 0xaa8);
    auStack_1444[0] = *(uint *)(iVar78 + 0xaac);
    auStack_1444[1] = *(undefined4 *)(iVar78 + 0xab0);
    *(undefined **)(iVar78 + 0xaa4) = &DAT_1015cfb0;
    auStack_1444[2] = *(undefined4 *)(iVar78 + 0xab4);
    auStack_1444[3] = *(undefined4 *)(iVar78 + 0xab8);
    auStack_1444[4] = *(undefined4 *)(iVar78 + 0xabc);
    auStack_1444[5] = *(undefined4 *)(iVar78 + 0xac0);
    *(undefined4 *)(iVar78 + 0xaa8) = 0;
    *(undefined4 *)(iVar78 + 0xaac) = 0;
    *(undefined4 *)(iVar78 + 0xab0) = 0;
    *(undefined4 *)(iVar78 + 0xab4) = 0;
    auStack_1444[6] = *(undefined4 *)(iVar78 + 0xac4);
    auStack_1444[7] = *(undefined4 *)(iVar78 + 0xac8);
    auStack_1444[8] = *(undefined4 *)(iVar78 + 0xacc);
    auStack_1444[9] = *(undefined4 *)(iVar78 + 0xad0);
    *(undefined4 *)(iVar78 + 0xab8) = 0;
    *(undefined4 *)(iVar78 + 0xabc) = 0;
    *(undefined4 *)(iVar78 + 0xac0) = 0;
    *(undefined4 *)(iVar78 + 0xac4) = 0;
    auStack_1444[10] = *(undefined4 *)(iVar78 + 0xad4);
    auStack_1444[0xb] = *(undefined4 *)(iVar78 + 0xad8);
    uVar9 = *(undefined4 *)(iVar78 + 0xadc);
    uVar10 = *(undefined4 *)(iVar78 + 0xae0);
    *(undefined4 *)(iVar78 + 0xac8) = 0;
    *(undefined4 *)(iVar78 + 0xacc) = 0;
    *(undefined4 *)(iVar78 + 0xad0) = 0;
    *(undefined4 *)(iVar78 + 0xad4) = 0;
    *(undefined4 *)(iVar78 + 0xad8) = 0;
    uVar83 = *(uint *)(iVar78 + 0xae4);
    uVar11 = *(undefined4 *)(iVar78 + 0xae8);
    uVar12 = *(undefined4 *)(iVar78 + 0xaec);
    uVar13 = *(undefined4 *)(iVar78 + 0xaf0);
    *(uint *)(iVar78 + 0xadc) = auStack_1444[0xc];
    *(uint *)(iVar78 + 0xae0) = auStack_1444[0xd];
    *(uint *)(iVar78 + 0xae4) = auStack_1444[0xe];
    *(uint *)(iVar78 + 0xae8) = auStack_1444[0xf];
    uVar14 = *(undefined4 *)(iVar78 + 0xaf4);
    uVar15 = *(undefined4 *)(iVar78 + 0xaf8);
    uVar16 = *(undefined4 *)(iVar78 + 0xafc);
    uVar17 = *(undefined4 *)(iVar78 + 0xb00);
    *(uint *)(iVar78 + 0xaec) = auStack_1444[0x10];
    *(uint *)(iVar78 + 0xaf0) = auStack_1444[0x11];
    *(uint *)(iVar78 + 0xaf4) = auStack_1444[0x12];
    *(uint *)(iVar78 + 0xaf8) = auStack_1444[0x13];
    uVar18 = *(undefined4 *)(iVar78 + 0xb04);
    uVar19 = *(undefined4 *)(iVar78 + 0xb08);
    uVar20 = *(undefined4 *)(iVar78 + 0xb0c);
    uVar21 = *(undefined4 *)(iVar78 + 0xb10);
    *(uint *)(iVar78 + 0xafc) = auStack_1444[0x14];
    *(uint *)(iVar78 + 0xb00) = auStack_1444[0x15];
    *(uint *)(iVar78 + 0xb04) = auStack_1444[0x16];
    *(uint *)(iVar78 + 0xb08) = auStack_1444[0x17];
    uVar22 = *(undefined4 *)(iVar78 + 0xb14);
    uVar23 = *(undefined4 *)(iVar78 + 0xb18);
    uVar24 = *(undefined4 *)(iVar78 + 0xb1c);
    uVar25 = *(undefined4 *)(iVar78 + 0xb20);
    *(uint *)(iVar78 + 0xb0c) = auStack_1444[0x18];
    *(uint *)(iVar78 + 0xb10) = auStack_1444[0x19];
    *(uint *)(iVar78 + 0xb14) = auStack_1444[0x1a];
    *(uint *)(iVar78 + 0xb18) = auStack_1444[0x1b];
    uVar26 = *(undefined4 *)(iVar78 + 0xb24);
    uVar27 = *(undefined4 *)(iVar78 + 0xb28);
    uVar28 = *(undefined4 *)(iVar78 + 0xb2c);
    uVar29 = *(undefined4 *)(iVar78 + 0xb30);
    *(uint *)(iVar78 + 0xb1c) = auStack_1444[0x1c];
    *(uint *)(iVar78 + 0xb20) = auStack_1444[0x1d];
    *(uint *)(iVar78 + 0xb24) = auStack_1444[0x1e];
    *(uint *)(iVar78 + 0xb28) = auStack_1444[0x1f];
    uVar6 = CONCAT44(auStack_1444[0x25],auStack_1444[0x24]);
    uVar30 = *(undefined4 *)(iVar78 + 0xb34);
    uVar31 = *(undefined4 *)(iVar78 + 0xb38);
    auStack_1444[0x24] = *(undefined4 *)(iVar78 + 0xb3c);
    auStack_1444[0x25] = *(undefined4 *)(iVar78 + 0xb40);
    *(uint *)(iVar78 + 0xb2c) = auStack_1444[0x20];
    *(uint *)(iVar78 + 0xb30) = auStack_1444[0x21];
    *(uint *)(iVar78 + 0xb34) = auStack_1444[0x22];
    *(uint *)(iVar78 + 0xb38) = auStack_1444[0x23];
    *(undefined8 *)(iVar78 + 0xb3c) = uVar6;
    uVar77 = *(uint *)(iVar78 + 0xb44);
    *(uint *)(iVar78 + 0xb44) = auStack_1444[0x26];
    iVar74 = *local_144c;
    uVar81 = local_144c[1];
    uVar71 = local_144c[5];
    auStack_1444[0xc] = uVar9;
    auStack_1444[0xd] = uVar10;
    auStack_1444[0xe] = uVar83;
    auStack_1444[0xf] = uVar11;
    auStack_1444[0x10] = uVar12;
    auStack_1444[0x11] = uVar13;
    auStack_1444[0x12] = uVar14;
    auStack_1444[0x13] = uVar15;
    auStack_1444[0x14] = uVar16;
    auStack_1444[0x15] = uVar17;
    auStack_1444[0x16] = uVar18;
    auStack_1444[0x17] = uVar19;
    auStack_1444[0x18] = uVar20;
    auStack_1444[0x19] = uVar21;
    auStack_1444[0x1a] = uVar22;
    auStack_1444[0x1b] = uVar23;
    auStack_1444[0x1c] = uVar24;
    auStack_1444[0x1d] = uVar25;
    auStack_1444[0x1e] = uVar26;
    auStack_1444[0x1f] = uVar27;
    auStack_1444[0x20] = uVar28;
    auStack_1444[0x21] = uVar29;
    auStack_1444[0x22] = uVar30;
    auStack_1444[0x23] = uVar31;
    auStack_1444[0x26] = uVar77;
    memset(&local_b50,0,0x8f4);
    memset(local_254,0,0x23d);
    if (0x27 < uVar71) {
      FUN_10136a50(0,uVar71,0x27,&PTR_s_C__Users_runneradmin__cargo_regi_10159aa8);
                    /* WARNING: Does not return */
      pcVar8 = (code *)invalidInstructionException();
      (*pcVar8)();
    }
    uVar77 = 0;
    local_25c[0] = 0;
    local_25c[1] = 0x23d;
    if (uVar71 == 0) {
      local_14b4 = 0xffffffff;
LAB_10128bcd:
      iVar69 = *(int *)(iVar78 + 0x78);
      local_14c4 = *(int *)(iVar78 + 0x7c);
      do {
        local_25c[1] = 0x23d;
        iVar69 = iVar69 + -1;
        local_25c[0] = uVar77 + 1;
        uVar83 = local_14b4 + 1;
        uVar70 = 0;
        if ((int)local_14b4 < 2) {
          local_14b4 = uVar83;
          uVar70 = uVar83;
        }
        *(uint *)((int)&local_b50 + uVar77 * 4 + 4) = uVar70;
        if (0x26 < uVar70) {
          FUN_10136b52(uVar70,0x27,&PTR_s_C__Users_runneradmin__cargo_regi_10159a88);
                    /* WARNING: Does not return */
          pcVar8 = (code *)invalidInstructionException();
          (*pcVar8)();
        }
        *(undefined2 *)(auStack_1444 + (uVar70 - 1)) = 1;
        local_254[uVar70] = 0;
        *(int *)(iVar78 + 0x78) = iVar69;
        if (uVar81 != 0) {
          if (uVar81 <= uVar70) {
LAB_1012833f:
            local_25c[1] = 0x23d;
            FUN_10136b52(uVar70,uVar81,&PTR_s_C__Users_runneradmin__cargo_regi_10159a98);
                    /* WARNING: Does not return */
            pcVar8 = (code *)invalidInstructionException();
            (*pcVar8)();
          }
          local_14c4 = local_14c4 - (uint)*(ushort *)(iVar74 + 2 + uVar70 * 4);
          *(int *)(iVar78 + 0x7c) = local_14c4;
        }
        uVar77 = local_25c[0];
      } while (local_25c[0] < 2);
    }
    else {
      iVar69 = uVar71 * 4;
      local_14b4 = 0xffffffff;
      uVar77 = 0;
      do {
        while (uVar83 = local_25c[0], (short)auStack_1444[uVar77 - 1] != 0) {
          local_25c[0] = local_25c[0] + 1;
          if (0x23c < local_25c[0]) {
LAB_10129968:
            local_25c[1] = 0x23d;
            FUN_10136b52(local_25c[0],0x23d,&PTR_s_C__Users_runneradmin__cargo_regi_1015cda0);
                    /* WARNING: Does not return */
            pcVar8 = (code *)invalidInstructionException();
            (*pcVar8)();
          }
          *(uint *)((int)&local_b50 + uVar83 * 4 + 4) = uVar77;
          local_254[uVar77] = 0;
          iVar69 = iVar69 + -4;
          local_14b4 = uVar77;
          uVar77 = uVar77 + 1;
          if (iVar69 == 0) goto LAB_101289cf;
        }
        *(undefined2 *)((int)auStack_1444 + uVar77 * 4 + -2) = 0;
        uVar77 = uVar77 + 1;
        iVar69 = iVar69 + -4;
      } while (iVar69 != 0);
LAB_101289cf:
      uVar77 = local_25c[0];
      if (local_25c[0] < 2) goto LAB_10128bcd;
    }
    local_25c[1] = 0x23d;
    uVar77 = local_25c[0] >> 1;
    auStack_1444[0x26] = local_14b4;
    do {
      FUN_1012a180((int)&local_b50,(int)&uStack_1448,0x27,uVar77);
      uVar77 = uVar77 - 1;
    } while (uVar77 != 0);
    FUN_10129fc0((int)&local_b50,(int)&uStack_1448,0x27,uVar71);
    uVar71 = auStack_1444[0x26];
    local_14a0 = local_144c[1];
    iVar74 = local_144c[2];
    iVar69 = *local_144c;
    local_14a4 = local_144c[3];
    uVar77 = local_144c[4];
    uVar7 = *(ushort *)(local_144c + 6);
    local_14bc = (uint)uVar7;
    local_1480 = 0;
    uStack_147c = 0;
    uStack_1478 = 0;
    uStack_1474 = 0;
    local_1470 = 0;
    uStack_146c = 0;
    uStack_1468 = 0;
    uStack_1464 = 0;
    if (0x23c < local_25c[1]) {
LAB_10129a8e:
      uStack_1464 = 0;
      uStack_1468 = 0;
      uStack_146c = 0;
      local_1470 = 0;
      uStack_1474 = 0;
      uStack_1478 = 0;
      uStack_147c = 0;
      local_1480 = 0;
      FUN_10136b52(local_25c[1],0x23d,&PTR_s_C__Users_runneradmin__cargo_regi_10159ab8);
                    /* WARNING: Does not return */
      pcVar8 = (code *)invalidInstructionException();
      (*pcVar8)();
    }
    uVar81 = *(uint *)((int)&local_b50 + local_25c[1] * 4);
    if (0x26 < uVar81) {
      FUN_10136b52(uVar81,0x27,&PTR_s_C__Users_runneradmin__cargo_regi_10159ac8);
                    /* WARNING: Does not return */
      pcVar8 = (code *)invalidInstructionException();
      (*pcVar8)();
    }
    *(undefined2 *)((int)auStack_1444 + uVar81 * 4 + -2) = 0;
    if (local_25c[1] != 0x23c) {
      local_14c4 = *(int *)(iVar78 + 0x78);
      if (local_14a0 == 0) {
        iVar69 = local_25c[1] - 0x23c;
        local_14c0 = 0;
        do {
          uVar81 = local_25c[iVar69];
          if (0x26 < uVar81) goto LAB_10129a0c;
          uVar83 = (uint)*(ushort *)((int)auStack_1444 + uVar81 * 4 + -2);
          if (0x26 < uVar83) goto LAB_10129a20;
          uVar83 = *(ushort *)((int)auStack_1444 + uVar83 * 4 + -2) + 1;
          uVar79 = (ushort)uVar83;
          if (uVar7 <= uVar79) {
            uVar83 = local_14bc;
          }
          *(ushort *)((int)auStack_1444 + uVar81 * 4 + -2) = (ushort)uVar83;
          if (uVar81 <= uVar71) {
            uVar70 = uVar83 & 0xffff;
            if (0xf < (ushort)uVar83) goto LAB_10129a7a;
            psVar3 = (short *)((int)&local_1480 + uVar70 * 2);
            *psVar3 = *psVar3 + 1;
            uVar84 = 0;
            uVar83 = uVar81 - uVar77;
            if (uVar77 <= uVar81) {
              if (local_14a4 <= uVar83) goto LAB_10129a4d;
              uVar84 = (uint)*(byte *)(iVar74 + uVar83);
            }
            local_14c4 = local_14c4 + (uVar84 + uVar70) * (uint)(ushort)auStack_1444[uVar81 - 1];
            *(int *)(iVar78 + 0x78) = local_14c4;
          }
          local_14c0 = local_14c0 + (uint)(uVar7 < uVar79);
          iVar69 = iVar69 + 1;
        } while (iVar69 != 0);
      }
      else {
        local_1498 = *(int *)(iVar78 + 0x7c);
        iVar80 = local_25c[1] - 0x23c;
        local_14c0 = 0;
        local_14ac = local_14c4;
        do {
          uVar81 = local_25c[iVar80];
          if (0x26 < uVar81) {
LAB_10129a0c:
            FUN_10136b52(uVar81,0x27,&PTR_s_C__Users_runneradmin__cargo_regi_10159b28);
                    /* WARNING: Does not return */
            pcVar8 = (code *)invalidInstructionException();
            (*pcVar8)();
          }
          uVar83 = (uint)*(ushort *)((int)auStack_1444 + uVar81 * 4 + -2);
          if (0x26 < uVar83) {
LAB_10129a20:
            FUN_10136b52(uVar83,0x27,&PTR_s_C__Users_runneradmin__cargo_regi_10159b38);
                    /* WARNING: Does not return */
            pcVar8 = (code *)invalidInstructionException();
            (*pcVar8)();
          }
          uVar83 = *(ushort *)((int)auStack_1444 + uVar83 * 4 + -2) + 1;
          uVar79 = (ushort)uVar83;
          if (uVar7 <= uVar79) {
            uVar83 = local_14bc;
          }
          *(ushort *)((int)auStack_1444 + uVar81 * 4 + -2) = (ushort)uVar83;
          if (uVar81 <= uVar71) {
            uVar70 = uVar83 & 0xffff;
            if (0xf < (ushort)uVar83) {
LAB_10129a7a:
              FUN_10136b52(uVar70,0x10,&PTR_s_C__Users_runneradmin__cargo_regi_10159b48);
                    /* WARNING: Does not return */
              pcVar8 = (code *)invalidInstructionException();
              (*pcVar8)();
            }
            psVar3 = (short *)((int)&local_1480 + uVar70 * 2);
            *psVar3 = *psVar3 + 1;
            uVar84 = 0;
            uVar83 = uVar81 - uVar77;
            if (uVar77 <= uVar81) {
              if (local_14a4 <= uVar83) {
LAB_10129a4d:
                FUN_10136b52(uVar83,local_14a4,&PTR_s_C__Users_runneradmin__cargo_regi_10159b58);
                    /* WARNING: Does not return */
                pcVar8 = (code *)invalidInstructionException();
                (*pcVar8)();
              }
              uVar84 = (uint)*(byte *)(iVar74 + uVar83);
            }
            uVar83 = auStack_1444[uVar81 - 1];
            local_14ac = (uVar70 + uVar84) * (uint)(ushort)uVar83 + local_14ac;
            *(uint *)(iVar78 + 0x78) = local_14ac;
            if (local_14a0 <= uVar81) {
LAB_10129a3a:
              FUN_10136b52(uVar81,local_14a0,&PTR_s_C__Users_runneradmin__cargo_regi_10159b68);
                    /* WARNING: Does not return */
              pcVar8 = (code *)invalidInstructionException();
              (*pcVar8)();
            }
            local_1498 = local_1498 +
                         (uVar84 + *(ushort *)(iVar69 + 2 + uVar81 * 4)) * (uint)(ushort)uVar83;
            *(int *)(iVar78 + 0x7c) = local_1498;
          }
          local_14c0 = local_14c0 + (uint)(uVar7 < uVar79);
          iVar80 = iVar80 + 1;
          local_14c4 = local_14ac;
        } while (iVar80 != 0);
      }
      if (local_14c0 != 0) {
        uVar77 = local_14bc;
        if (0xf < uVar7) {
          do {
            uVar77 = uVar77 - 1;
            if (0xf < uVar77) goto LAB_10129b3b;
          } while (*(short *)((int)&local_1480 + uVar77 * 2) == 0);
LAB_10129b1d:
          if (uVar77 == 0xf) {
            FUN_10136b52(0x10,0x10,&PTR_s_C__Users_runneradmin__cargo_regi_10159ae8);
                    /* WARNING: Does not return */
            pcVar8 = (code *)invalidInstructionException();
            (*pcVar8)();
          }
          FUN_10136b52(local_14bc,0x10,&PTR_s_C__Users_runneradmin__cargo_regi_10159af8);
                    /* WARNING: Does not return */
          pcVar8 = (code *)invalidInstructionException();
          (*pcVar8)();
        }
        uVar77 = local_14bc - 1;
        do {
          do {
            if (0xf < uVar77) {
LAB_10129b3b:
              FUN_10136b52(uVar77,0x10,&PTR_s_C__Users_runneradmin__cargo_regi_10159ad8);
                    /* WARNING: Does not return */
              pcVar8 = (code *)invalidInstructionException();
              (*pcVar8)();
            }
            sVar82 = *(short *)((int)&local_1480 + uVar77 * 2);
            uVar77 = uVar77 - 1;
          } while (sVar82 == 0);
          *(short *)((int)&local_1480 + uVar77 * 2 + 2) = sVar82 + -1;
          psVar3 = (short *)((int)&uStack_147c + uVar77 * 2);
          *psVar3 = *psVar3 + 2;
          psVar3 = (short *)((int)&local_1480 + local_14bc * 2);
          *psVar3 = *psVar3 + -1;
          local_14c0 = local_14c0 + -2;
          uVar77 = local_14bc - 1;
        } while (0 < local_14c0);
        if (local_14bc != 0) {
          uVar77 = 0x23d;
          do {
            for (sVar82 = *(short *)((int)&local_1480 + local_14bc * 2); sVar82 != 0;
                sVar82 = sVar82 + -1) {
              do {
                uVar81 = uVar77 - 1;
                if (0x23c < uVar81) {
LAB_10129833:
                  FUN_10136b52(uVar81,0x23d,&PTR_s_C__Users_runneradmin__cargo_regi_10159b08);
                    /* WARNING: Does not return */
                  pcVar8 = (code *)invalidInstructionException();
                  (*pcVar8)();
                }
                uVar83 = (&local_b54)[uVar77];
                uVar77 = uVar81;
              } while (uVar71 < uVar83);
              if (0x26 < uVar83) {
                FUN_10136b52(uVar83,0x27,&PTR_s_C__Users_runneradmin__cargo_regi_10159b18);
                    /* WARNING: Does not return */
                pcVar8 = (code *)invalidInstructionException();
                (*pcVar8)();
              }
              uVar81 = (uint)*(ushort *)((int)auStack_1444 + uVar83 * 4 + -2);
              if (local_14bc != uVar81) {
                local_14c4 = (local_14c4 + (auStack_1444[uVar83 - 1] * local_14bc & 0xffff)) -
                             (uVar81 * auStack_1444[uVar83 - 1] & 0xffff);
                *(int *)(iVar78 + 0x78) = local_14c4;
                *(short *)((int)auStack_1444 + uVar83 * 4 + -2) = (short)local_14bc;
              }
            }
            bVar86 = local_14bc != 1;
            local_14bc = local_14bc - 1;
          } while (bVar86);
        }
      }
    }
    FUN_1012a300((int)&uStack_1448,0x27,local_14b4,(short *)&local_1480);
    uVar81 = 0x12;
    *(int **)(iVar78 + 0xaa4) = local_144c;
    *(undefined4 *)(iVar78 + 0xaa8) = uStack_1448;
    *(uint *)(iVar78 + 0xaac) = auStack_1444[0];
    *(uint *)(iVar78 + 0xab0) = auStack_1444[1];
    *(uint *)(iVar78 + 0xab4) = auStack_1444[2];
    *(uint *)(iVar78 + 0xab8) = auStack_1444[3];
    *(uint *)(iVar78 + 0xabc) = auStack_1444[4];
    *(uint *)(iVar78 + 0xac0) = auStack_1444[5];
    *(uint *)(iVar78 + 0xac4) = auStack_1444[6];
    *(uint *)(iVar78 + 0xac8) = auStack_1444[7];
    *(uint *)(iVar78 + 0xacc) = auStack_1444[8];
    *(uint *)(iVar78 + 0xad0) = auStack_1444[9];
    *(uint *)(iVar78 + 0xad4) = auStack_1444[10];
    *(uint *)(iVar78 + 0xad8) = auStack_1444[0xb];
    *(uint *)(iVar78 + 0xadc) = auStack_1444[0xc];
    *(uint *)(iVar78 + 0xae0) = auStack_1444[0xd];
    *(uint *)(iVar78 + 0xae4) = auStack_1444[0xe];
    *(uint *)(iVar78 + 0xae8) = auStack_1444[0xf];
    *(uint *)(iVar78 + 0xaec) = auStack_1444[0x10];
    *(uint *)(iVar78 + 0xaf0) = auStack_1444[0x11];
    *(uint *)(iVar78 + 0xaf4) = auStack_1444[0x12];
    *(uint *)(iVar78 + 0xaf8) = auStack_1444[0x13];
    *(uint *)(iVar78 + 0xafc) = auStack_1444[0x14];
    *(uint *)(iVar78 + 0xb00) = auStack_1444[0x15];
    *(uint *)(iVar78 + 0xb04) = auStack_1444[0x16];
    *(uint *)(iVar78 + 0xb08) = auStack_1444[0x17];
    *(uint *)(iVar78 + 0xb0c) = auStack_1444[0x18];
    *(uint *)(iVar78 + 0xb10) = auStack_1444[0x19];
    *(uint *)(iVar78 + 0xb14) = auStack_1444[0x1a];
    *(uint *)(iVar78 + 0xb18) = auStack_1444[0x1b];
    *(uint *)(iVar78 + 0xb1c) = auStack_1444[0x1c];
    *(uint *)(iVar78 + 0xb20) = auStack_1444[0x1d];
    *(uint *)(iVar78 + 0xb24) = auStack_1444[0x1e];
    *(uint *)(iVar78 + 0xb28) = auStack_1444[0x1f];
    *(uint *)(iVar78 + 0xb2c) = auStack_1444[0x20];
    *(uint *)(iVar78 + 0xb30) = auStack_1444[0x21];
    *(uint *)(iVar78 + 0xb34) = auStack_1444[0x22];
    *(uint *)(iVar78 + 0xb38) = auStack_1444[0x23];
    *(uint *)(iVar78 + 0xb3c) = auStack_1444[0x24];
    *(uint *)(iVar78 + 0xb40) = auStack_1444[0x25];
    *(uint *)(iVar78 + 0xb44) = auStack_1444[0x26];
    if ((((auStack_1444[0xe] < 0x10000) && (uVar81 = 0x11, *(short *)(iVar78 + 0xaae) == 0)) &&
        ((uVar81 = 0x10, *(short *)(iVar78 + 0xae2) == 0 &&
         ((uVar81 = 0xf, *(short *)(iVar78 + 0xab2) == 0 &&
          (uVar81 = 0xe, *(short *)(iVar78 + 0xade) == 0)))))) &&
       ((uVar81 = 0xd, *(short *)(iVar78 + 0xab6) == 0 &&
        ((((((uVar81 = 0xc, *(short *)(iVar78 + 0xada) == 0 &&
             (uVar81 = 0xb, *(short *)(iVar78 + 0xaba) == 0)) &&
            (uVar81 = 10, *(short *)(iVar78 + 0xad6) == 0)) &&
           ((uVar81 = 9, *(short *)(iVar78 + 0xabe) == 0 &&
            (uVar81 = 8, *(short *)(iVar78 + 0xad2) == 0)))) &&
          ((uVar81 = 7, *(short *)(iVar78 + 0xac2) == 0 &&
           ((uVar81 = 6, *(short *)(iVar78 + 0xace) == 0 &&
            (uVar81 = 5, *(short *)(iVar78 + 0xac6) == 0)))))) &&
         (uVar81 = 4, *(short *)(iVar78 + 0xaca) == 0)))))) {
      uVar81 = 3 - (*(short *)(iVar78 + 0xaaa) == 0);
    }
    uVar83 = *(int *)(iVar78 + 0x78) + 0x1b + uVar81 * 3 >> 3;
    uVar71 = *(int *)(iVar78 + 0x7c) + 10U >> 3;
    *(uint *)(iVar78 + 0x78) = *(int *)(iVar78 + 0x78) + 0x11 + uVar81 * 3;
    uVar77 = local_1454;
    if (uVar71 <= uVar83) {
      iVar78 = *(int *)(param_1 + 0x1c);
      goto joined_r0x1012761a;
    }
    pcVar2 = (char *)(iVar78 + 3);
    iVar78 = *(int *)(param_1 + 0x1c);
    if (*pcVar2 == '\x04') goto joined_r0x1012761a;
    if ((-1 < (int)uVar75) && (local_1450 + 4U <= uVar83)) goto LAB_10129096;
    bVar68 = *(byte *)(iVar78 + 0x70);
    bVar73 = param_2 | 4;
    piVar72 = (int *)(iVar78 + 0x58);
    bVar67 = bVar68 + 3;
    if (bVar67 < 0x40) {
      uVar71 = (uint)bVar73 << (bVar68 & 0x1f);
      uVar75 = uVar71;
      uVar77 = 0 << (bVar68 & 0x1f) | (uint)(bVar73 >> 0x20 - (bVar68 & 0x1f));
      if ((bVar68 & 0x20) != 0) {
        uVar75 = 0;
        uVar77 = uVar71;
      }
      *(uint *)(iVar78 + 0x68) = *(uint *)(iVar78 + 0x68) | uVar75;
      *(uint *)(iVar78 + 0x6c) = *(uint *)(iVar78 + 0x6c) | uVar77;
      *(byte *)(iVar78 + 0x70) = bVar67;
    }
    else {
      FUN_1012a990(piVar72,(uint)bVar73,0,bVar67);
    }
    if (uVar81 < 3) {
LAB_101298f4:
      FUN_101369c0(&DAT_1015d070,0x21,&PTR_s_C__Users_runneradmin__cargo_regi_1015d080);
                    /* WARNING: Does not return */
      pcVar8 = (code *)invalidInstructionException();
      (*pcVar8)();
    }
    uVar75 = *(uint *)(iVar78 + 0x9a4);
    uVar77 = uVar75 + 1;
    if (uVar77 < 0x101) goto LAB_101298f4;
    uVar71 = *(uint *)(iVar78 + 0xaa0);
    if (uVar71 == 0xffffffff) goto LAB_101298f4;
    if ((0x11e < uVar77) || (0x1e < uVar71 + 1)) {
      FUN_101369c0("too many codes",0x1d,&PTR_s_C__Users_runneradmin__cargo_regi_1015d0a0);
                    /* WARNING: Does not return */
      pcVar8 = (code *)invalidInstructionException();
      (*pcVar8)();
    }
    uVar83 = uVar75 - 0x100;
    uVar77 = (0x100 < uVar77) - 1;
    bVar68 = *(byte *)(iVar78 + 0x70);
    bVar67 = bVar68 + 5;
    if (bVar67 < 0x40) {
      uVar84 = uVar83 << (bVar68 & 0x1f);
      uVar70 = uVar84;
      uVar77 = uVar77 << (bVar68 & 0x1f) | uVar83 >> 0x20 - (bVar68 & 0x1f);
      if ((bVar68 & 0x20) != 0) {
        uVar70 = 0;
        uVar77 = uVar84;
      }
      *(uint *)(iVar78 + 0x68) = *(uint *)(iVar78 + 0x68) | uVar70;
      *(uint *)(iVar78 + 0x6c) = *(uint *)(iVar78 + 0x6c) | uVar77;
      *(byte *)(iVar78 + 0x70) = bVar67;
    }
    else {
      FUN_1012a990(piVar72,uVar83,uVar77,bVar67);
      bVar67 = *(byte *)(iVar78 + 0x70);
    }
    uVar77 = (uVar71 != 0xffffffff) - 1;
    bVar68 = bVar67 + 5;
    if (bVar68 < 0x40) {
      uVar70 = uVar71 << (bVar67 & 0x1f);
      uVar83 = uVar70;
      uVar77 = uVar77 << (bVar67 & 0x1f) | uVar71 >> 0x20 - (bVar67 & 0x1f);
      if ((bVar67 & 0x20) != 0) {
        uVar83 = 0;
        uVar77 = uVar70;
      }
      *(uint *)(iVar78 + 0x68) = *(uint *)(iVar78 + 0x68) | uVar83;
      *(uint *)(iVar78 + 0x6c) = *(uint *)(iVar78 + 0x6c) | uVar77;
      *(byte *)(iVar78 + 0x70) = bVar68;
    }
    else {
      FUN_1012a990(piVar72,uVar71,uVar77,bVar68);
      bVar68 = *(byte *)(iVar78 + 0x70);
    }
    uVar77 = uVar81 - 3;
    uVar83 = (2 < uVar81) - 1;
    bVar67 = bVar68 + 4;
    if (bVar67 < 0x40) {
      uVar84 = uVar77 << (bVar68 & 0x1f);
      uVar70 = uVar84;
      uVar77 = uVar83 << (bVar68 & 0x1f) | uVar77 >> 0x20 - (bVar68 & 0x1f);
      if ((bVar68 & 0x20) != 0) {
        uVar70 = 0;
        uVar77 = uVar84;
      }
      *(uint *)(iVar78 + 0x68) = *(uint *)(iVar78 + 0x68) | uVar70;
      *(uint *)(iVar78 + 0x6c) = *(uint *)(iVar78 + 0x6c) | uVar77;
      *(byte *)(iVar78 + 0x70) = bVar67;
    }
    else {
      FUN_1012a990(piVar72,uVar77,uVar83,bVar67);
    }
    uVar77 = 0xffffffff;
    do {
      while( true ) {
        bVar68 = *(byte *)(iVar78 + 0x70);
        uVar7 = *(ushort *)(iVar78 + 0xaaa + (uint)(byte)(&DAT_1015be2e)[uVar77] * 4);
        bVar67 = bVar68 + 3;
        if (bVar67 < 0x40) break;
        FUN_1012a990(piVar72,(uint)uVar7,0,bVar67);
        uVar77 = uVar77 + 1;
        if (uVar81 == uVar77) goto LAB_10129591;
      }
      uVar84 = (uint)uVar7 << (bVar68 & 0x1f);
      uVar70 = uVar84;
      uVar83 = 0 << (bVar68 & 0x1f) | (uint)(uVar7 >> 0x20 - (bVar68 & 0x1f));
      if ((bVar68 & 0x20) != 0) {
        uVar70 = 0;
        uVar83 = uVar84;
      }
      *(uint *)(iVar78 + 0x68) = *(uint *)(iVar78 + 0x68) | uVar70;
      *(uint *)(iVar78 + 0x6c) = *(uint *)(iVar78 + 0x6c) | uVar83;
      *(byte *)(iVar78 + 0x70) = bVar67;
      uVar77 = uVar77 + 1;
    } while (uVar81 != uVar77);
LAB_10129591:
    FUN_1012aac0(piVar72,iVar78 + 0xb0,0x23d,iVar78 + 0xaa8,uVar75);
    FUN_1012aac0(piVar72,iVar78 + 0x9ac,0x3d,iVar78 + 0xaa8,uVar71);
    uVar77 = *(uint *)(iVar78 + 0x44);
    uVar75 = *(uint *)(iVar78 + 0x48);
    if (uVar77 < uVar75) goto LAB_10129847;
    uVar77 = (uVar75 / 3) * 3;
    if (2 < uVar77) {
      puVar85 = *(ushort **)(iVar78 + 0x40);
      do {
        uVar7 = *puVar85;
        uVar75 = (uint)(byte)puVar85[1];
        if (uVar7 == 0) {
          bVar68 = *(byte *)(iVar78 + 0x70);
          uVar7 = *(ushort *)(iVar78 + 0xb0 + uVar75 * 4);
          bVar67 = *(char *)(iVar78 + 0xb2 + uVar75 * 4) + bVar68;
          if (bVar67 < 0x40) {
            uVar81 = (uint)uVar7 << (bVar68 & 0x1f);
            uVar71 = uVar81;
            uVar75 = 0 << (bVar68 & 0x1f) | (uint)(uVar7 >> 0x20 - (bVar68 & 0x1f));
            if ((bVar68 & 0x20) != 0) {
              uVar71 = 0;
              uVar75 = uVar81;
            }
            *(uint *)(iVar78 + 0x6c) = *(uint *)(iVar78 + 0x6c) | uVar75;
            *(uint *)(iVar78 + 0x68) = *(uint *)(iVar78 + 0x68) | uVar71;
            *(byte *)(iVar78 + 0x70) = bVar67;
          }
          else {
            FUN_1012a990(piVar72,(uint)uVar7,0,bVar67);
          }
        }
        else {
          uVar71 = (uint)(byte)(&DAT_1015c94c)[uVar75];
          local_14b4 = 0;
          local_14ac = (uint)*(ushort *)(iVar78 + 0x4b4 + uVar71 * 4);
          uVar79 = *(ushort *)(iVar78 + 0x4b6 + uVar71 * 4);
          if (0xeb < (byte)((&DAT_1015c94c)[uVar75] - 0x1c)) {
            bVar68 = (byte)uVar79 & 0x1f;
            uVar83 = uVar75 - (byte)(&DAT_1015ce80)[uVar71] << ((byte)uVar79 & 0x1f);
            uVar81 = uVar83;
            local_14b4 = 0 << bVar68 | uVar75 - (byte)(&DAT_1015ce80)[uVar71] >> 0x20 - bVar68;
            if ((uVar79 & 0x20) != 0) {
              uVar81 = 0;
              local_14b4 = uVar83;
            }
            local_14ac = uVar81 | local_14ac;
            uVar79 = uVar79 + (byte)(&DAT_1015cc6c)[uVar71];
          }
          uVar1 = uVar7 - 1;
          uVar71 = (uVar1 >> 7) + 0x100;
          if (uVar7 < 0x101) {
            uVar71 = (uint)uVar1;
          }
          if (0x1ff < uVar71) {
LAB_10129a64:
            FUN_10136b52(uVar71,0x200,&PTR_s_C__Users_runneradmin__cargo_regi_1015cc5c);
                    /* WARNING: Does not return */
            pcVar8 = (code *)invalidInstructionException();
            (*pcVar8)();
          }
          uVar81 = (uint)(byte)(&DAT_1015ca5c)[uVar71];
          uVar75 = 0;
          uVar71 = (uint)*(ushort *)(iVar78 + 0x9ac + uVar81 * 4);
          uVar7 = *(ushort *)(iVar78 + 0x9ae + uVar81 * 4);
          bVar68 = (byte)uVar7;
          if (3 < uVar81) {
            uVar70 = (uint)(ushort)(uVar1 - *(short *)(&DAT_1015ce9e + uVar81 * 2)) <<
                     (bVar68 & 0x1f);
            uVar83 = uVar70;
            uVar75 = 0 << (bVar68 & 0x1f) |
                     (uint)((ushort)(uVar1 - *(short *)(&DAT_1015ce9e + uVar81 * 2)) >>
                           0x20 - (bVar68 & 0x1f));
            if ((uVar7 & 0x20) != 0) {
              uVar83 = 0;
              uVar75 = uVar70;
            }
            uVar71 = uVar83 | uVar71;
            bVar68 = bVar68 + (&DAT_1015cca8)[uVar81];
          }
          bVar67 = (byte)uVar79;
          uVar83 = uVar71 << (bVar67 & 0x1f);
          uVar81 = uVar83;
          uVar75 = uVar75 << (bVar67 & 0x1f) | uVar71 >> 0x20 - (bVar67 & 0x1f);
          if ((uVar79 & 0x20) != 0) {
            uVar81 = 0;
            uVar75 = uVar83;
          }
          bVar73 = *(byte *)(iVar78 + 0x70);
          uVar81 = uVar81 | local_14ac;
          bVar68 = bVar68 + bVar67 + bVar73;
          if (bVar68 < 0x40) {
            uVar83 = uVar81 << (bVar73 & 0x1f);
            uVar71 = uVar83;
            uVar75 = (uVar75 | local_14b4) << (bVar73 & 0x1f) | uVar81 >> 0x20 - (bVar73 & 0x1f);
            if ((bVar73 & 0x20) != 0) {
              uVar71 = 0;
              uVar75 = uVar83;
            }
            *(uint *)(iVar78 + 0x68) = *(uint *)(iVar78 + 0x68) | uVar71;
            *(uint *)(iVar78 + 0x6c) = *(uint *)(iVar78 + 0x6c) | uVar75;
            *(byte *)(iVar78 + 0x70) = bVar68;
          }
          else {
            FUN_1012a990(piVar72,uVar81,uVar75 | local_14b4,bVar68);
          }
        }
        uVar77 = uVar77 - 3;
        puVar85 = (ushort *)((int)puVar85 + 3);
      } while (2 < uVar77);
    }
    bVar67 = *(byte *)(iVar78 + 0x70);
    bVar68 = *(char *)(iVar78 + 0x4b2) + bVar67;
    uVar77 = (uint)*(ushort *)(iVar78 + 0x4b0);
    if (0x3f < bVar68) goto LAB_101292c3;
    uVar77 = uVar77 << (bVar67 & 0x1f);
    uVar71 = uVar77;
    uVar75 = 0 << (bVar67 & 0x1f) | (uint)(*(ushort *)(iVar78 + 0x4b0) >> 0x20 - (bVar67 & 0x1f));
    if ((bVar67 & 0x20) != 0) {
      uVar71 = 0;
      uVar75 = uVar77;
    }
    *(uint *)(iVar78 + 0x68) = *(uint *)(iVar78 + 0x68) | uVar71;
    *(uint *)(iVar78 + 0x6c) = *(uint *)(iVar78 + 0x6c) | uVar75;
  }
  *(byte *)(iVar78 + 0x70) = bVar68;
LAB_101292d2:
  FUN_10124250(iVar78);
  if (param_2 != 0) {
    local_b50 = *(undefined8 *)(iVar78 + 0x68);
    bVar68 = ((*(byte *)(iVar78 + 0x70) >> 3) + 1) - ((*(byte *)(iVar78 + 0x70) & 7) == 0);
    uVar77 = (uint)bVar68;
    if (8 < bVar68) {
      FUN_10136a50(0,uVar77,8,&PTR_s_C__Users_runneradmin__cargo_regi_1015bfa4);
                    /* WARNING: Does not return */
      pcVar8 = (code *)invalidInstructionException();
      (*pcVar8)();
    }
    uVar75 = *(uint *)(iVar78 + 0x5c);
    iVar74 = *(int *)(iVar78 + 100);
    uVar71 = *(int *)(iVar78 + 0x60) + iVar74;
    if (uVar75 - uVar71 < uVar77) {
      FUN_101369c0("buf.len() must fit in remaining()",0x43,
                   &PTR_s_C__Users_runneradmin__cargo_regi_1015bf94);
                    /* WARNING: Does not return */
      pcVar8 = (code *)invalidInstructionException();
      (*pcVar8)();
    }
    if (uVar75 < uVar71) {
      FUN_10136a50(uVar71,uVar75,uVar75,&PTR_s_C__Users_runneradmin__cargo_regi_1015bf94);
                    /* WARNING: Does not return */
      pcVar8 = (code *)invalidInstructionException();
      (*pcVar8)();
    }
    memcpy((void *)(uVar71 + *(int *)(iVar78 + 0x58)),&local_b50,uVar77);
    *(uint *)(iVar78 + 100) = iVar74 + uVar77;
    *(undefined1 *)(iVar78 + 0x70) = 0;
    *(undefined4 *)(iVar78 + 0x6c) = 0;
    *(undefined4 *)(iVar78 + 0x68) = 0;
  }
  *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x3c) =
       *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x10);
  FUN_1012b0b0(param_1);
  return;
}
