// rea decompile_all
// name: FUN_1001a2b0
// address: 0x1001a2b0
// body: available
// range: 0x1001a2b0-0x1001a3a8 inclusive
// range: 0x1001a3b0-0x1001a514 inclusive
// range: 0x1001a520-0x1001a61c inclusive
// range: 0x1001a620-0x1001a6e3 inclusive
// range: 0x1001a6f0-0x1001a746 inclusive
// range: 0x1001a750-0x1001a778 inclusive
// range: 0x1001a780-0x1001aa96 inclusive
// range: 0x1001aaa0-0x1001ab45 inclusive
// range: 0x1001ab50-0x1001ad13 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall
FUN_1001a2b0(undefined4 *param_1,uint param_2,undefined4 *param_3,uint param_4,int param_5,
            undefined4 *param_6)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  uint uVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  uint uVar15;
  int *piVar16;
  uint uVar17;
  undefined4 *puVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  int iVar22;
  uint uVar23;
  int iVar24;
  uint uVar25;
  uint uVar26;
  undefined4 *puVar27;
  int iVar28;
  undefined4 *puVar29;
  bool bVar30;
  int local_44;
  undefined4 *local_40;
  undefined4 *local_38;
  undefined4 *local_34;
  undefined4 *local_24;
  int *local_14;

  if (0x20 < param_2) {
    local_24 = param_6;
    uVar17 = param_2;
    do {
      while( true ) {
        if (param_5 == 0) {
          FUN_10019ca0(param_1,uVar17,param_3,param_4,'\x01');
          return;
        }
        uVar12 = uVar17 >> 3;
        puVar13 = param_1 + uVar12 * 4;
        puVar18 = param_1 + uVar12 * 7;
        if (uVar17 < 0x40) {
          iVar21 = *(int *)*param_1;
          iVar28 = *(int *)*puVar13;
          if (iVar28 < *(int *)*puVar18 != iVar21 < iVar28) {
            puVar13 = puVar18;
          }
          if (iVar21 < *(int *)*puVar18 != iVar21 < iVar28) {
            puVar13 = param_1;
          }
        }
        else {
          puVar13 = FUN_10019640(param_1,puVar13,puVar18,uVar12);
        }
        local_14 = (int *)*puVar13;
        param_5 = param_5 + -1;
        uVar12 = (int)puVar13 - (int)param_1;
        if ((local_24 == (undefined4 *)0x0) || (*(int *)*local_24 < *local_14)) break;
LAB_1001a620:
        if (param_4 < uVar17) {
LAB_1001acf3:
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        puVar13 = param_3 + uVar17;
        uVar26 = 0;
        puVar18 = param_1;
        uVar15 = uVar12 >> 2;
        while( true ) {
          iVar21 = uVar15 - 3;
          if (uVar15 < 3) {
            iVar21 = 0;
          }
          if (puVar18 < param_1 + iVar21) {
            iVar28 = **(int **)((int)param_1 + uVar12);
            do {
              iVar1 = *(int *)*puVar18;
              puVar14 = puVar13 + -1;
              if (iVar1 <= iVar28) {
                puVar14 = param_3;
              }
              iVar22 = (iVar1 <= iVar28) + uVar26;
              puVar14[uVar26] = (int *)*puVar18;
              iVar1 = *(int *)puVar18[1];
              puVar14 = puVar13 + -2;
              if (iVar1 <= iVar28) {
                puVar14 = param_3;
              }
              iVar24 = (uint)(iVar1 <= iVar28) + iVar22;
              puVar14[iVar22] = (int *)puVar18[1];
              iVar1 = *(int *)puVar18[2];
              puVar14 = puVar13 + -3;
              if (iVar1 <= iVar28) {
                puVar14 = param_3;
              }
              puVar13 = puVar13 + -4;
              iVar22 = (uint)(iVar1 <= iVar28) + iVar24;
              puVar14[iVar24] = (int *)puVar18[2];
              puVar14 = puVar18 + 3;
              iVar1 = *(int *)*puVar14;
              puVar27 = puVar13;
              if (iVar1 <= iVar28) {
                puVar27 = param_3;
              }
              puVar18 = puVar18 + 4;
              uVar26 = (uint)(iVar1 <= iVar28) + iVar22;
              puVar27[iVar22] = (int *)*puVar14;
            } while (puVar18 < param_1 + iVar21);
          }
          if (puVar18 < param_1 + uVar15) {
            iVar21 = **(int **)((int)param_1 + uVar12);
            uVar25 = uVar26;
            do {
              piVar3 = (int *)*puVar18;
              puVar13 = puVar13 + -1;
              iVar28 = *piVar3;
              puVar14 = puVar13;
              if (iVar28 <= iVar21) {
                puVar14 = param_3;
              }
              puVar18 = puVar18 + 1;
              uVar26 = (iVar28 <= iVar21) + uVar25;
              puVar14[uVar25] = piVar3;
              uVar25 = uVar26;
            } while (puVar18 < param_1 + uVar15);
          }
          if (uVar15 == uVar17) break;
          uVar2 = *puVar18;
          puVar13 = puVar13 + -1;
          puVar18 = puVar18 + 1;
          param_3[uVar26] = uVar2;
          uVar26 = uVar26 + 1;
          uVar15 = uVar17;
        }
        memcpy(param_1,param_3,uVar26 * 4);
        param_2 = uVar17 - uVar26;
        if (param_2 == 0) {
          return;
        }
        uVar12 = 0;
        if (param_2 < 8) {
LAB_1001a7ff:
          puVar13 = param_3 + ((uVar17 - 1) - uVar12);
          puVar18 = param_1 + uVar12 + uVar26;
          iVar21 = (uVar12 - uVar17) + uVar26;
          do {
            uVar2 = *puVar13;
            puVar13 = puVar13 + -1;
            *puVar18 = uVar2;
            puVar18 = puVar18 + 1;
            iVar21 = iVar21 + 1;
          } while (iVar21 != 0);
        }
        else {
          uVar12 = param_2 & 0xfffffff8;
          puVar18 = param_1 + uVar26 + 4;
          puVar13 = param_3 + (uVar17 - 4);
          uVar15 = uVar12;
          do {
            uVar2 = puVar13[-4];
            uVar5 = puVar13[-3];
            uVar6 = puVar13[-2];
            uVar7 = puVar13[-1];
            uVar8 = *puVar13;
            uVar9 = puVar13[1];
            uVar10 = puVar13[2];
            puVar14 = puVar13 + 3;
            puVar13 = puVar13 + -8;
            puVar18[-4] = *puVar14;
            puVar18[-3] = uVar10;
            puVar18[-2] = uVar9;
            puVar18[-1] = uVar8;
            *puVar18 = uVar7;
            puVar18[1] = uVar6;
            puVar18[2] = uVar5;
            puVar18[3] = uVar2;
            puVar18 = puVar18 + 8;
            uVar15 = uVar15 - 8;
          } while (uVar15 != 0);
          if (param_2 != uVar12) goto LAB_1001a7ff;
        }
        if (uVar17 < uVar26) {
          FUN_10136a50(uVar26,uVar17,uVar17,&PTR_s_C__Users_runneradmin__rustup_too_10153700);
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        local_24 = (undefined4 *)0x0;
        param_1 = param_1 + uVar26;
        uVar17 = param_2;
        if (param_2 < 0x21) goto LAB_1001a2c4;
      }
      if (param_4 < uVar17) goto LAB_1001acf3;
      puVar13 = param_3 + uVar17;
      param_2 = 0;
      puVar18 = param_1;
      uVar26 = uVar12 >> 2;
      while( true ) {
        iVar21 = uVar26 - 3;
        if (uVar26 < 3) {
          iVar21 = 0;
        }
        if (puVar18 < param_1 + iVar21) {
          iVar28 = **(int **)((int)param_1 + uVar12);
          do {
            iVar1 = *(int *)*puVar18;
            puVar14 = puVar13 + -1;
            if (iVar1 < iVar28) {
              puVar14 = param_3;
            }
            puVar14[param_2] = (int *)*puVar18;
            iVar22 = (iVar1 < iVar28) + param_2;
            iVar1 = *(int *)puVar18[1];
            puVar14 = puVar13 + -2;
            if (iVar1 < iVar28) {
              puVar14 = param_3;
            }
            iVar24 = (uint)(iVar1 < iVar28) + iVar22;
            puVar14[iVar22] = (int *)puVar18[1];
            iVar1 = *(int *)puVar18[2];
            puVar14 = puVar13 + -3;
            if (iVar1 < iVar28) {
              puVar14 = param_3;
            }
            puVar13 = puVar13 + -4;
            puVar14[iVar24] = (int *)puVar18[2];
            puVar14 = puVar18 + 3;
            iVar24 = (uint)(iVar1 < iVar28) + iVar24;
            iVar1 = *(int *)*puVar14;
            puVar27 = puVar13;
            if (iVar1 < iVar28) {
              puVar27 = param_3;
            }
            puVar18 = puVar18 + 4;
            param_2 = (uint)(iVar1 < iVar28) + iVar24;
            puVar27[iVar24] = (int *)*puVar14;
          } while (puVar18 < param_1 + iVar21);
        }
        if (puVar18 < param_1 + uVar26) {
          iVar21 = **(int **)((int)param_1 + uVar12);
          uVar15 = param_2;
          do {
            piVar3 = (int *)*puVar18;
            puVar13 = puVar13 + -1;
            iVar28 = *piVar3;
            puVar14 = puVar13;
            if (iVar28 < iVar21) {
              puVar14 = param_3;
            }
            puVar18 = puVar18 + 1;
            param_2 = (iVar28 < iVar21) + uVar15;
            puVar14[uVar15] = piVar3;
            uVar15 = param_2;
          } while (puVar18 < param_1 + uVar26);
        }
        if (uVar26 == uVar17) break;
        uVar2 = *puVar18;
        puVar18 = puVar18 + 1;
        puVar13[param_2 - 1] = uVar2;
        puVar13 = puVar13 + -1;
        uVar26 = uVar17;
      }
      memcpy(param_1,param_3,param_2 * 4);
      uVar26 = uVar17 - param_2;
      if (uVar26 != 0) {
        uVar15 = 0;
        if (7 < uVar26) {
          uVar15 = uVar26 & 0xfffffff8;
          puVar13 = param_1 + param_2 + 4;
          puVar18 = param_3 + (uVar17 - 4);
          uVar25 = uVar15;
          do {
            uVar2 = puVar18[-4];
            uVar5 = puVar18[-3];
            uVar6 = puVar18[-2];
            uVar7 = puVar18[-1];
            uVar8 = *puVar18;
            uVar9 = puVar18[1];
            uVar10 = puVar18[2];
            puVar14 = puVar18 + 3;
            puVar18 = puVar18 + -8;
            puVar13[-4] = *puVar14;
            puVar13[-3] = uVar10;
            puVar13[-2] = uVar9;
            puVar13[-1] = uVar8;
            *puVar13 = uVar7;
            puVar13[1] = uVar6;
            puVar13[2] = uVar5;
            puVar13[3] = uVar2;
            puVar13 = puVar13 + 8;
            uVar25 = uVar25 - 8;
          } while (uVar25 != 0);
          if (uVar26 == uVar15) goto LAB_1001a5dd;
        }
        puVar18 = param_3 + uVar17 + (-1 - uVar15);
        puVar13 = param_1 + uVar15 + param_2;
        iVar21 = (uVar15 - uVar17) + param_2;
        do {
          uVar2 = *puVar18;
          puVar18 = puVar18 + -1;
          *puVar13 = uVar2;
          puVar13 = puVar13 + 1;
          iVar21 = iVar21 + 1;
        } while (iVar21 != 0);
      }
LAB_1001a5dd:
      if (param_2 == 0) goto LAB_1001a620;
      if (uVar17 < param_2) {
        FUN_101369c0("mid > lenC:\\Users\\runneradmin\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\zlib-rs-0.6.3\\src\\deflate\\window.rs"
                     ,0x13,&PTR_s_C__Users_runneradmin__rustup_too_101536f0);
        goto LAB_1001acf3;
      }
      FUN_1001a2b0(param_1 + param_2,uVar26,param_3,param_4,param_5,&local_14);
      uVar17 = param_2;
    } while (0x20 < param_2);
  }
LAB_1001a2c4:
  if (1 < param_2) {
    uVar17 = param_2 >> 1;
    if (param_2 < 0x10) {
      if (param_2 < 8) {
        *param_3 = *param_1;
        param_3[uVar17] = param_1[uVar17];
        uVar12 = 1;
      }
      else {
        uVar25 = (uint)(*(int *)param_1[1] < *(int *)*param_1);
        uVar19 = (uint)(*(int *)*param_1 <= *(int *)param_1[1]);
        uVar20 = (uint)(*(int *)param_1[3] < *(int *)param_1[2]);
        uVar12 = uVar20 + 2;
        uVar26 = uVar20 ^ 3;
        uVar15 = uVar19;
        if (*(int *)param_1[uVar26] < *(int *)param_1[uVar19]) {
          uVar15 = uVar12;
        }
        uVar23 = uVar12;
        uVar11 = uVar25;
        if (*(int *)param_1[uVar20 + 2] < *(int *)param_1[uVar25]) {
          uVar23 = uVar19;
          uVar11 = uVar12;
          uVar15 = uVar25;
        }
        if (*(int *)param_1[uVar26] < *(int *)param_1[uVar19]) {
          uVar23 = uVar26;
          uVar26 = uVar19;
        }
        uVar12 = uVar23;
        if (*(int *)param_1[uVar23] < *(int *)param_1[uVar15]) {
          uVar12 = uVar15;
          uVar15 = uVar23;
        }
        uVar2 = param_1[uVar15];
        *param_3 = param_1[uVar11];
        param_3[1] = uVar2;
        param_3[2] = param_1[uVar12];
        param_3[3] = param_1[uVar26];
        uVar25 = (uint)(*(int *)param_1[uVar17] <= *(int *)param_1[uVar17 + 1]);
        uVar19 = (uint)(*(int *)param_1[uVar17 + 1] < *(int *)param_1[uVar17]);
        uVar20 = (uint)(*(int *)param_1[uVar17 + 3] < *(int *)param_1[uVar17 + 2]);
        uVar12 = uVar20 + 2;
        uVar26 = uVar20 ^ 3;
        uVar15 = uVar25;
        if (*(int *)param_1[uVar17 + uVar26] < *(int *)param_1[uVar17 + uVar25]) {
          uVar15 = uVar12;
        }
        uVar23 = uVar12;
        uVar11 = uVar19;
        if (*(int *)param_1[uVar17 + uVar20 + 2] < *(int *)param_1[uVar17 + uVar19]) {
          uVar23 = uVar25;
          uVar11 = uVar12;
          uVar15 = uVar19;
        }
        if (*(int *)param_1[uVar17 + uVar25] <= *(int *)param_1[uVar17 + uVar26]) {
          uVar25 = uVar26;
          uVar26 = uVar23;
        }
        uVar12 = uVar26;
        if (*(int *)param_1[uVar17 + uVar26] < *(int *)param_1[uVar17 + uVar15]) {
          uVar12 = uVar15;
          uVar15 = uVar26;
        }
        param_3[uVar17] = param_1[uVar17 + uVar11];
        param_3[uVar17 + 1] = param_1[uVar17 + uVar15];
        param_3[uVar17 + 2] = param_1[uVar17 + uVar12];
        param_3[uVar17 + 3] = param_1[uVar17 + uVar25];
        uVar12 = 4;
      }
    }
    else {
      FUN_100197f0(param_1,param_3,param_3 + param_2);
      FUN_100197f0(param_1 + uVar17,param_3 + uVar17,param_3 + param_2 + 8);
      uVar12 = 8;
    }
    if (uVar12 < uVar17) {
      puVar13 = param_3 + uVar12;
      local_44 = uVar12 * -4 + 4;
      uVar26 = uVar12;
      do {
        piVar3 = (int *)param_1[uVar26];
        param_3[uVar26] = piVar3;
        piVar16 = (int *)param_3[uVar26 - 1];
        iVar21 = *piVar3;
        puVar18 = puVar13;
        iVar28 = local_44;
        if (iVar21 < *piVar16) {
          do {
            *puVar18 = piVar16;
            puVar14 = param_3;
            if (iVar28 == 0) break;
            piVar16 = (int *)puVar18[-2];
            puVar14 = puVar18 + -1;
            puVar18 = puVar14;
            iVar28 = iVar28 + 4;
          } while (iVar21 < *piVar16);
          *puVar14 = piVar3;
        }
        local_44 = local_44 + -4;
        uVar26 = uVar26 + 1;
        puVar13 = puVar13 + 1;
      } while (uVar26 != uVar17);
    }
    puVar13 = param_3 + uVar17;
    if (uVar12 < param_2 - uVar17) {
      local_38 = (undefined4 *)(uVar12 * -4 + 4);
      puVar18 = param_3 + uVar12 + uVar17;
      do {
        piVar3 = (int *)param_1[uVar17 + uVar12];
        puVar13[uVar12] = piVar3;
        piVar16 = (int *)puVar13[uVar12 - 1];
        iVar21 = *piVar3;
        puVar14 = local_38;
        puVar27 = puVar18;
        if (iVar21 < *piVar16) {
          do {
            *puVar27 = piVar16;
            puVar29 = puVar13;
            if (puVar14 == (undefined4 *)0x0) break;
            piVar16 = (int *)puVar27[-2];
            puVar29 = puVar27 + -1;
            puVar14 = (undefined4 *)((int)puVar14 + 4);
            puVar27 = puVar29;
          } while (iVar21 < *piVar16);
          *puVar29 = piVar3;
        }
        uVar12 = uVar12 + 1;
        puVar18 = puVar18 + 1;
        local_38 = (undefined4 *)((int)local_38 + -4);
      } while (uVar12 != param_2 - uVar17);
    }
    puVar18 = param_1 + (param_2 - 1);
    local_34 = param_3 + (param_2 - 1);
    local_38 = puVar13 + -1;
    local_40 = param_1;
    do {
      iVar28 = *(int *)*puVar13;
      iVar21 = *(int *)*param_3;
      puVar14 = param_3;
      if (iVar28 < iVar21) {
        puVar14 = puVar13;
      }
      *local_40 = *puVar14;
      local_40 = local_40 + 1;
      iVar22 = *(int *)*local_34;
      iVar1 = *(int *)*local_38;
      puVar13 = puVar13 + (iVar28 < iVar21);
      param_3 = param_3 + (iVar21 <= iVar28);
      puVar14 = local_34;
      if (iVar22 < iVar1) {
        puVar14 = local_38;
      }
      local_34 = local_34 + -(uint)(iVar1 <= iVar22);
      local_38 = local_38 + -(uint)(iVar22 < iVar1);
      *puVar18 = *puVar14;
      puVar18 = puVar18 + -1;
      uVar17 = uVar17 - 1;
    } while (uVar17 != 0);
    if ((param_2 & 1) != 0) {
      bVar30 = param_3 < local_38 + 1;
      puVar18 = puVar13;
      if (bVar30) {
        puVar18 = param_3;
      }
      param_3 = param_3 + bVar30;
      puVar13 = puVar13 + !bVar30;
      *local_40 = *puVar18;
    }
    if ((param_3 != local_38 + 1) || (puVar13 != local_34 + 1)) {
      FUN_10136ce0();
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
  }
  return;
}
