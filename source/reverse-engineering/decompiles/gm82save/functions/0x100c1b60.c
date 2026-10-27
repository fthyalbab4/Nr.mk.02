// rea decompile_all
// name: FUN_100c1b60
// address: 0x100c1b60
// body: available
// range: 0x100c1b60-0x100c1d7c inclusive
// range: 0x100c1d80-0x100c2014 inclusive
// range: 0x100c2020-0x100c20e7 inclusive
// range: 0x100c20f0-0x100c218c inclusive
// range: 0x100c2190-0x100c2384 inclusive
// range: 0x100c2390-0x100c245c inclusive
// range: 0x100c2460-0x100c257c inclusive
// range: 0x100c2580-0x100c26fb inclusive
// range: 0x100c2700-0x100c289b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall
FUN_100c1b60(undefined8 *param_1,uint param_2,undefined8 *param_3,uint param_4,int param_5,
            int param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  byte bVar5;
  undefined1 uVar6;
  byte bVar7;
  undefined2 uVar8;
  void *_Buf2;
  void *_Buf2_00;
  void *pvVar9;
  undefined4 uVar10;
  code *pcVar11;
  bool bVar12;
  uint uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  bool bVar20;
  uint uVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  uint uVar24;
  int iVar25;
  int iVar26;
  uint uVar27;
  int local_38;
  int local_34;
  undefined8 local_20;
  undefined8 local_18;

  if (0x20 < param_2) {
    local_34 = param_6;
    uVar27 = param_2;
    do {
      while( true ) {
        if (param_5 == 0) {
          FUN_100c1430(param_1,uVar27,param_3,param_4,'\x01');
          return;
        }
        uVar13 = uVar27 >> 3;
        puVar15 = param_1 + uVar13 * 0xe;
        puVar23 = param_1 + uVar13 * 8;
        if (uVar27 < 0x40) {
          uVar13 = *(uint *)(param_1 + 1);
          uVar24 = *(uint *)(puVar23 + 1);
          pvVar9 = *(void **)((int)param_1 + 4);
          _Buf2 = *(void **)((int)puVar23 + 4);
          uVar21 = uVar24;
          if (uVar13 < uVar24) {
            uVar21 = uVar13;
          }
          iVar26 = memcmp(pvVar9,_Buf2,uVar21);
          bVar7 = *(byte *)((int)param_1 + 0xc);
          bVar4 = *(byte *)((int)puVar23 + 0xc);
          iVar25 = uVar13 - uVar24;
          if (iVar26 != 0) {
            iVar25 = iVar26;
          }
          bVar12 = iVar25 < 0;
          if (iVar25 == 0) {
            bVar12 = bVar7 < bVar4;
          }
          uVar21 = *(uint *)(puVar15 + 1);
          _Buf2_00 = *(void **)((int)puVar15 + 4);
          uVar19 = uVar13;
          if (uVar21 <= uVar13) {
            uVar19 = uVar21;
          }
          iVar26 = memcmp(pvVar9,_Buf2_00,uVar19);
          iVar25 = uVar13 - uVar21;
          if (iVar26 != 0) {
            iVar25 = iVar26;
          }
          bVar5 = *(byte *)((int)puVar15 + 0xc);
          bVar20 = iVar25 < 0;
          if (iVar25 == 0) {
            bVar20 = bVar7 < bVar5;
          }
          puVar14 = param_1;
          if (bVar12 == bVar20) {
            uVar13 = uVar21;
            if (uVar24 < uVar21) {
              uVar13 = uVar24;
            }
            iVar26 = memcmp(_Buf2,_Buf2_00,uVar13);
            iVar25 = uVar24 - uVar21;
            if (iVar26 != 0) {
              iVar25 = iVar26;
            }
            bVar20 = iVar25 < 0;
            if (iVar25 == 0) {
              bVar20 = bVar4 < bVar5;
            }
            puVar14 = puVar23;
            if (bVar12 != bVar20) {
              puVar14 = puVar15;
            }
          }
        }
        else {
          puVar14 = (undefined8 *)FUN_100c2c60((int)param_1,(int)puVar23,(int)puVar15,uVar13);
        }
        local_20 = *puVar14;
        local_18 = puVar14[1];
        uVar13 = (uint)((int)puVar14 - (int)param_1) >> 4;
        param_5 = param_5 + -1;
        if (local_34 == 0) break;
        uVar24 = *(uint *)(local_34 + 8);
        uVar21 = *(uint *)(puVar14 + 1);
        uVar19 = uVar21;
        if (uVar24 < uVar21) {
          uVar19 = uVar24;
        }
        iVar26 = memcmp(*(void **)(local_34 + 4),*(void **)((int)puVar14 + 4),uVar19);
        iVar25 = uVar24 - uVar21;
        if (iVar26 != 0) {
          iVar25 = iVar26;
        }
        bVar12 = iVar25 < 0;
        if (iVar25 == 0) {
          bVar12 = *(byte *)(local_34 + 0xc) < *(byte *)((int)puVar14 + 0xc);
        }
        if (bVar12) break;
LAB_100c2190:
        if (param_4 < uVar27) {
LAB_100c2888:
                    /* WARNING: Does not return */
          pcVar11 = (code *)invalidInstructionException();
          (*pcVar11)();
        }
        uVar24 = 0;
        puVar15 = param_3 + uVar27 * 2;
        puVar23 = param_1;
        while( true ) {
          iVar25 = uVar13 - 3;
          if (uVar13 < 3) {
            iVar25 = 0;
          }
          for (; puVar23 < param_1 + iVar25 * 2; puVar23 = puVar23 + 8) {
            uVar21 = *(uint *)(puVar14 + 1);
            uVar19 = *(uint *)(puVar23 + 1);
            uVar17 = uVar19;
            if (uVar21 < uVar19) {
              uVar17 = uVar21;
            }
            iVar16 = memcmp(*(void **)((int)puVar14 + 4),*(void **)((int)puVar23 + 4),uVar17);
            uVar3 = *puVar23;
            iVar26 = uVar21 - uVar19;
            if (iVar16 != 0) {
              iVar26 = iVar16;
            }
            bVar12 = -1 < iVar26;
            if (iVar26 == 0) {
              bVar12 = *(byte *)((int)puVar23 + 0xc) <= *(byte *)((int)puVar14 + 0xc);
            }
            uVar21 = *(uint *)(puVar14 + 1);
            puVar22 = puVar15 + -2;
            if (bVar12 != false) {
              puVar22 = param_3;
            }
            iVar26 = bVar12 + uVar24;
            puVar22[uVar24 * 2 + 1] = puVar23[1];
            puVar22[uVar24 * 2] = uVar3;
            uVar24 = *(uint *)(puVar23 + 3);
            uVar19 = uVar24;
            if (uVar21 < uVar24) {
              uVar19 = uVar21;
            }
            iVar18 = memcmp(*(void **)((int)puVar14 + 4),*(void **)((int)puVar23 + 0x14),uVar19);
            uVar3 = puVar23[2];
            iVar16 = uVar21 - uVar24;
            if (iVar18 != 0) {
              iVar16 = iVar18;
            }
            bVar12 = -1 < iVar16;
            if (iVar16 == 0) {
              bVar12 = *(byte *)((int)puVar23 + 0x1c) <= *(byte *)((int)puVar14 + 0xc);
            }
            uVar24 = *(uint *)(puVar14 + 1);
            puVar22 = puVar15 + -4;
            if (bVar12 != false) {
              puVar22 = param_3;
            }
            iVar16 = (uint)bVar12 + iVar26;
            puVar22[iVar26 * 2 + 1] = puVar23[3];
            puVar22[iVar26 * 2] = uVar3;
            uVar21 = *(uint *)(puVar23 + 5);
            uVar19 = uVar21;
            if (uVar24 < uVar21) {
              uVar19 = uVar24;
            }
            iVar18 = memcmp(*(void **)((int)puVar14 + 4),*(void **)((int)puVar23 + 0x24),uVar19);
            uVar3 = puVar23[4];
            iVar26 = uVar24 - uVar21;
            if (iVar18 != 0) {
              iVar26 = iVar18;
            }
            bVar12 = -1 < iVar26;
            if (iVar26 == 0) {
              bVar12 = *(byte *)((int)puVar23 + 0x2c) <= *(byte *)((int)puVar14 + 0xc);
            }
            uVar24 = *(uint *)(puVar14 + 1);
            puVar22 = puVar15 + -6;
            if (bVar12 != false) {
              puVar22 = param_3;
            }
            iVar26 = (uint)bVar12 + iVar16;
            puVar22[iVar16 * 2 + 1] = puVar23[5];
            puVar22[iVar16 * 2] = uVar3;
            uVar21 = *(uint *)(puVar23 + 7);
            uVar19 = uVar21;
            if (uVar24 < uVar21) {
              uVar19 = uVar24;
            }
            iVar18 = memcmp(*(void **)((int)puVar14 + 4),*(void **)((int)puVar23 + 0x34),uVar19);
            uVar3 = puVar23[6];
            iVar16 = uVar24 - uVar21;
            if (iVar18 != 0) {
              iVar16 = iVar18;
            }
            bVar12 = -1 < iVar16;
            if (iVar16 == 0) {
              bVar12 = *(byte *)((int)puVar23 + 0x3c) <= *(byte *)((int)puVar14 + 0xc);
            }
            puVar15 = puVar15 + -8;
            puVar22 = puVar15;
            if (bVar12 != false) {
              puVar22 = param_3;
            }
            uVar24 = (uint)bVar12 + iVar26;
            puVar22[iVar26 * 2 + 1] = puVar23[7];
            puVar22[iVar26 * 2] = uVar3;
          }
          uVar21 = uVar24;
          for (; puVar23 < param_1 + uVar13 * 2; puVar23 = puVar23 + 2) {
            uVar24 = *(uint *)(puVar14 + 1);
            uVar19 = *(uint *)(puVar23 + 1);
            uVar17 = uVar19;
            if (uVar24 < uVar19) {
              uVar17 = uVar24;
            }
            iVar26 = memcmp(*(void **)((int)puVar14 + 4),*(void **)((int)puVar23 + 4),uVar17);
            uVar3 = *puVar23;
            iVar25 = uVar24 - uVar19;
            if (iVar26 != 0) {
              iVar25 = iVar26;
            }
            bVar12 = -1 < iVar25;
            if (iVar25 == 0) {
              bVar12 = *(byte *)((int)puVar23 + 0xc) <= *(byte *)((int)puVar14 + 0xc);
            }
            puVar15 = puVar15 + -2;
            puVar22 = puVar15;
            if (bVar12 != false) {
              puVar22 = param_3;
            }
            puVar22[uVar21 * 2 + 1] = puVar23[1];
            puVar22[uVar21 * 2] = uVar3;
            uVar21 = uVar21 + bVar12;
          }
          if (uVar13 == uVar27) break;
          uVar3 = *puVar23;
          puVar22 = puVar23 + 1;
          puVar15 = puVar15 + -2;
          uVar24 = uVar21 + 1;
          puVar23 = puVar23 + 2;
          param_3[uVar21 * 2 + 1] = *puVar22;
          param_3[uVar21 * 2] = uVar3;
          uVar13 = uVar27;
        }
        memcpy(param_1,param_3,uVar21 * 0x10);
        param_2 = uVar27 - uVar21;
        if (param_2 == 0) {
          return;
        }
        param_1 = param_1 + uVar21 * 2;
        puVar23 = param_3 + uVar27 * 2 + -2;
        uVar13 = param_2;
        puVar15 = param_1;
        do {
          uVar3 = *puVar23;
          puVar14 = puVar23 + 1;
          puVar23 = puVar23 + -2;
          puVar15[1] = *puVar14;
          *puVar15 = uVar3;
          puVar15 = puVar15 + 2;
          uVar13 = uVar13 - 1;
        } while (uVar13 != 0);
        if (uVar27 < uVar21) {
          FUN_10136a50(uVar21,uVar27,uVar27,&PTR_s_C__Users_runneradmin__rustup_too_10153700);
                    /* WARNING: Does not return */
          pcVar11 = (code *)invalidInstructionException();
          (*pcVar11)();
        }
        local_34 = 0;
        uVar27 = param_2;
        if (param_2 < 0x21) goto LAB_100c1b78;
      }
      if (param_4 < uVar27) goto LAB_100c2888;
      param_2 = 0;
      puVar15 = param_3 + uVar27 * 2;
      uVar24 = uVar13;
      puVar23 = param_1;
      while( true ) {
        iVar25 = uVar24 - 3;
        if (uVar24 < 3) {
          iVar25 = 0;
        }
        for (; puVar23 < param_1 + iVar25 * 2; puVar23 = puVar23 + 8) {
          uVar21 = *(uint *)(puVar23 + 1);
          uVar19 = *(uint *)(puVar14 + 1);
          uVar17 = uVar19;
          if (uVar21 < uVar19) {
            uVar17 = uVar21;
          }
          iVar16 = memcmp(*(void **)((int)puVar23 + 4),*(void **)((int)puVar14 + 4),uVar17);
          uVar3 = *puVar23;
          iVar26 = uVar21 - uVar19;
          if (iVar16 != 0) {
            iVar26 = iVar16;
          }
          bVar12 = iVar26 < 0;
          if (iVar26 == 0) {
            bVar12 = *(byte *)((int)puVar23 + 0xc) < *(byte *)((int)puVar14 + 0xc);
          }
          uVar21 = *(uint *)(puVar23 + 3);
          puVar22 = puVar15 + -2;
          if (bVar12 != false) {
            puVar22 = param_3;
          }
          iVar26 = bVar12 + param_2;
          puVar22[param_2 * 2 + 1] = puVar23[1];
          puVar22[param_2 * 2] = uVar3;
          uVar19 = *(uint *)(puVar14 + 1);
          uVar17 = uVar19;
          if (uVar21 < uVar19) {
            uVar17 = uVar21;
          }
          iVar18 = memcmp(*(void **)((int)puVar23 + 0x14),*(void **)((int)puVar14 + 4),uVar17);
          uVar3 = puVar23[2];
          iVar16 = uVar21 - uVar19;
          if (iVar18 != 0) {
            iVar16 = iVar18;
          }
          bVar12 = iVar16 < 0;
          if (iVar16 == 0) {
            bVar12 = *(byte *)((int)puVar23 + 0x1c) < *(byte *)((int)puVar14 + 0xc);
          }
          uVar21 = *(uint *)(puVar23 + 5);
          puVar22 = puVar15 + -4;
          if (bVar12 != false) {
            puVar22 = param_3;
          }
          iVar16 = (uint)bVar12 + iVar26;
          puVar22[iVar26 * 2 + 1] = puVar23[3];
          puVar22[iVar26 * 2] = uVar3;
          uVar19 = *(uint *)(puVar14 + 1);
          uVar17 = uVar19;
          if (uVar21 < uVar19) {
            uVar17 = uVar21;
          }
          iVar18 = memcmp(*(void **)((int)puVar23 + 0x24),*(void **)((int)puVar14 + 4),uVar17);
          uVar3 = puVar23[4];
          iVar26 = uVar21 - uVar19;
          if (iVar18 != 0) {
            iVar26 = iVar18;
          }
          bVar12 = iVar26 < 0;
          if (iVar26 == 0) {
            bVar12 = *(byte *)((int)puVar23 + 0x2c) < *(byte *)((int)puVar14 + 0xc);
          }
          uVar21 = *(uint *)(puVar23 + 7);
          puVar22 = puVar15 + -6;
          if (bVar12 != false) {
            puVar22 = param_3;
          }
          iVar26 = (uint)bVar12 + iVar16;
          puVar22[iVar16 * 2 + 1] = puVar23[5];
          puVar22[iVar16 * 2] = uVar3;
          uVar19 = *(uint *)(puVar14 + 1);
          uVar17 = uVar19;
          if (uVar21 < uVar19) {
            uVar17 = uVar21;
          }
          iVar18 = memcmp(*(void **)((int)puVar23 + 0x34),*(void **)((int)puVar14 + 4),uVar17);
          uVar3 = puVar23[6];
          iVar16 = uVar21 - uVar19;
          if (iVar18 != 0) {
            iVar16 = iVar18;
          }
          bVar12 = iVar16 < 0;
          if (iVar16 == 0) {
            bVar12 = *(byte *)((int)puVar23 + 0x3c) < *(byte *)((int)puVar14 + 0xc);
          }
          puVar15 = puVar15 + -8;
          puVar22 = puVar15;
          if (bVar12 != false) {
            puVar22 = param_3;
          }
          param_2 = (uint)bVar12 + iVar26;
          puVar22[iVar26 * 2 + 1] = puVar23[7];
          puVar22[iVar26 * 2] = uVar3;
        }
        for (; puVar23 < param_1 + uVar24 * 2; puVar23 = puVar23 + 2) {
          uVar21 = *(uint *)(puVar23 + 1);
          uVar19 = *(uint *)(puVar14 + 1);
          uVar17 = uVar19;
          if (uVar21 < uVar19) {
            uVar17 = uVar21;
          }
          iVar26 = memcmp(*(void **)((int)puVar23 + 4),*(void **)((int)puVar14 + 4),uVar17);
          uVar3 = *puVar23;
          iVar25 = uVar21 - uVar19;
          if (iVar26 != 0) {
            iVar25 = iVar26;
          }
          bVar12 = iVar25 < 0;
          if (iVar25 == 0) {
            bVar12 = *(byte *)((int)puVar23 + 0xc) < *(byte *)((int)puVar14 + 0xc);
          }
          puVar15 = puVar15 + -2;
          puVar22 = puVar15;
          if (bVar12 != false) {
            puVar22 = param_3;
          }
          puVar22[param_2 * 2 + 1] = puVar23[1];
          puVar22[param_2 * 2] = uVar3;
          param_2 = param_2 + bVar12;
        }
        if (uVar24 == uVar27) break;
        uVar3 = *puVar23;
        puVar22 = puVar23 + 1;
        puVar23 = puVar23 + 2;
        puVar15[param_2 * 2 + -1] = *puVar22;
        puVar15[param_2 * 2 + -2] = uVar3;
        puVar15 = puVar15 + -2;
        uVar24 = uVar27;
      }
      memcpy(param_1,param_3,param_2 * 0x10);
      uVar24 = uVar27 - param_2;
      if (uVar24 != 0) {
        puVar23 = param_3 + uVar27 * 2 + -2;
        puVar15 = param_1 + param_2 * 2;
        uVar21 = uVar24;
        do {
          uVar3 = *puVar23;
          puVar22 = puVar23 + 1;
          puVar23 = puVar23 + -2;
          puVar15[1] = *puVar22;
          *puVar15 = uVar3;
          puVar15 = puVar15 + 2;
          uVar21 = uVar21 - 1;
        } while (uVar21 != 0);
      }
      if (param_2 == 0) goto LAB_100c2190;
      if (uVar27 < param_2) {
        FUN_101369c0("mid > lenC:\\Users\\runneradmin\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\zlib-rs-0.6.3\\src\\deflate\\window.rs"
                     ,0x13,&PTR_s_C__Users_runneradmin__rustup_too_101536f0);
        goto LAB_100c2888;
      }
      FUN_100c1b60(param_1 + param_2 * 2,uVar24,param_3,param_4,param_5,(int)&local_20);
      uVar27 = param_2;
    } while (0x20 < param_2);
  }
LAB_100c1b78:
  if (1 < param_2) {
    uVar27 = param_2 >> 1;
    if (param_2 < 0x10) {
      puVar15 = param_1 + uVar27 * 2;
      puVar23 = param_3 + uVar27 * 2;
      if (param_2 < 8) {
        uVar3 = param_1[1];
        uVar1 = puVar15[1];
        uVar13 = 1;
        *param_3 = *param_1;
        uVar2 = *puVar15;
        param_3[1] = uVar3;
        puVar23[1] = uVar1;
        *puVar23 = uVar2;
      }
      else {
        FUN_100c28a0((int)param_1,param_3);
        FUN_100c28a0((int)puVar15,puVar23);
        uVar13 = 4;
      }
    }
    else {
      FUN_100c28a0((int)param_1,param_3 + param_2 * 2);
      FUN_100c28a0((int)(param_1 + 8),param_3 + param_2 * 2 + 8);
      FUN_100c2ab0(param_3 + param_2 * 2,8,param_3);
      FUN_100c28a0((int)(param_1 + uVar27 * 2),param_3 + param_2 * 2 + 0x10);
      FUN_100c28a0((int)(param_1 + uVar27 * 2 + 8),param_3 + param_2 * 2 + 0x18);
      FUN_100c2ab0(param_3 + param_2 * 2 + 0x10,8,param_3 + uVar27 * 2);
      uVar13 = 8;
    }
    if (uVar13 < uVar27) {
      local_38 = uVar13 * -0x10 + 0x10;
      uVar24 = uVar13;
      do {
        iVar25 = uVar24 * 0x10;
        uVar3 = param_1[uVar24 * 2 + 1];
        param_3[uVar24 * 2] = param_1[uVar24 * 2];
        param_3[uVar24 * 2 + 1] = uVar3;
        uVar21 = *(uint *)(param_3 + uVar24 * 2 + 1);
        uVar19 = *(uint *)(param_3 + uVar24 * 2 + -1);
        pvVar9 = *(void **)((int)param_3 + iVar25 + 4);
        uVar17 = uVar19;
        if (uVar21 < uVar19) {
          uVar17 = uVar21;
        }
        iVar16 = memcmp(pvVar9,*(void **)((int)param_3 + iVar25 + -0xc),uVar17);
        bVar7 = *(byte *)((int)param_3 + iVar25 + 0xc);
        iVar26 = uVar21 - uVar19;
        if (iVar16 != 0) {
          iVar26 = iVar16;
        }
        bVar12 = bVar7 < *(byte *)((int)param_3 + iVar25 + -4);
        if (iVar26 != 0) {
          bVar12 = iVar26 < 0;
        }
        if (bVar12) {
          uVar10 = *(undefined4 *)(param_3 + uVar24 * 2);
          puVar15 = param_3 + uVar24 * 2;
          iVar26 = local_38;
          do {
            puVar23 = puVar15;
            puVar23[1] = puVar23[-1];
            *puVar23 = puVar23[-2];
            puVar15 = param_3;
            if (iVar26 == 0) break;
            uVar19 = *(uint *)(puVar23 + -3);
            puVar15 = puVar23 + -2;
            uVar17 = uVar19;
            if (uVar21 < uVar19) {
              uVar17 = uVar21;
            }
            iVar18 = memcmp(pvVar9,*(void **)((int)puVar23 + -0x1c),uVar17);
            iVar16 = uVar21 - uVar19;
            if (iVar18 != 0) {
              iVar16 = iVar18;
            }
            bVar12 = iVar16 < 0;
            if (iVar16 == 0) {
              bVar12 = bVar7 < *(byte *)((int)puVar23 + -0x14);
            }
            iVar26 = iVar26 + 0x10;
          } while (bVar12);
          *(undefined4 *)puVar15 = uVar10;
          *(void **)((int)puVar23 + -0xc) = pvVar9;
          *(uint *)(puVar23 + -1) = uVar21;
          uVar8 = *(undefined2 *)((int)param_1 + iVar25 + 0xd);
          uVar6 = *(undefined1 *)((int)param_1 + iVar25 + 0xf);
          *(byte *)((int)puVar23 + -4) = bVar7;
          *(undefined2 *)((int)puVar23 + -3) = uVar8;
          *(undefined1 *)((int)puVar23 + -1) = uVar6;
        }
        local_38 = local_38 + -0x10;
        uVar24 = uVar24 + 1;
      } while (uVar24 != uVar27);
    }
    if (uVar13 < param_2 - uVar27) {
      puVar15 = param_3 + uVar27 * 2;
      local_38 = uVar13 * -0x10 + 0x10;
      do {
        iVar25 = uVar13 * 0x10;
        uVar3 = param_1[uVar27 * 2 + uVar13 * 2 + 1];
        puVar15[uVar13 * 2] = param_1[uVar27 * 2 + uVar13 * 2];
        puVar15[uVar13 * 2 + 1] = uVar3;
        uVar24 = *(uint *)(puVar15 + uVar13 * 2 + 1);
        uVar21 = *(uint *)(puVar15 + uVar13 * 2 + -1);
        pvVar9 = *(void **)((int)puVar15 + iVar25 + 4);
        uVar19 = uVar21;
        if (uVar24 < uVar21) {
          uVar19 = uVar24;
        }
        iVar16 = memcmp(pvVar9,*(void **)((int)puVar15 + iVar25 + -0xc),uVar19);
        bVar7 = *(byte *)((int)puVar15 + iVar25 + 0xc);
        iVar26 = uVar24 - uVar21;
        if (iVar16 != 0) {
          iVar26 = iVar16;
        }
        bVar12 = bVar7 < *(byte *)((int)puVar15 + iVar25 + -4);
        if (iVar26 != 0) {
          bVar12 = iVar26 < 0;
        }
        if (bVar12) {
          iVar25 = iVar25 + uVar27 * 0x10;
          uVar10 = *(undefined4 *)(puVar15 + uVar13 * 2);
          puVar23 = puVar15 + uVar13 * 2;
          iVar26 = local_38;
          do {
            puVar14 = puVar23;
            puVar14[1] = puVar14[-1];
            *puVar14 = puVar14[-2];
            puVar23 = puVar15;
            if (iVar26 == 0) break;
            uVar21 = *(uint *)(puVar14 + -3);
            puVar23 = puVar14 + -2;
            uVar19 = uVar21;
            if (uVar24 < uVar21) {
              uVar19 = uVar24;
            }
            iVar18 = memcmp(pvVar9,*(void **)((int)puVar14 + -0x1c),uVar19);
            iVar16 = uVar24 - uVar21;
            if (iVar18 != 0) {
              iVar16 = iVar18;
            }
            bVar12 = iVar16 < 0;
            if (iVar16 == 0) {
              bVar12 = bVar7 < *(byte *)((int)puVar14 + -0x14);
            }
            iVar26 = iVar26 + 0x10;
          } while (bVar12);
          *(undefined4 *)puVar23 = uVar10;
          *(void **)((int)puVar14 + -0xc) = pvVar9;
          *(uint *)(puVar14 + -1) = uVar24;
          *(byte *)((int)puVar14 + -4) = bVar7;
          uVar6 = *(undefined1 *)((int)param_1 + iVar25 + 0xf);
          *(undefined2 *)((int)puVar14 + -3) = *(undefined2 *)((int)param_1 + iVar25 + 0xd);
          *(undefined1 *)((int)puVar14 + -1) = uVar6;
        }
        local_38 = local_38 + -0x10;
        uVar13 = uVar13 + 1;
      } while (uVar13 != param_2 - uVar27);
    }
    FUN_100c2ab0(param_3,param_2,param_1);
  }
  return;
}
