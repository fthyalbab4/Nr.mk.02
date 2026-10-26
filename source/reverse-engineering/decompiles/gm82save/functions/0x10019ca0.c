// rea decompile_all
// name: FUN_10019ca0
// address: 0x10019ca0
// body: available
// range: 0x10019ca0-0x10019db4 inclusive
// range: 0x10019dc0-0x10019de0 inclusive
// range: 0x10019df0-0x1001a080 inclusive
// range: 0x1001a090-0x1001a0ed inclusive
// range: 0x1001a0f0-0x1001a22c inclusive
// range: 0x1001a230-0x1001a2a2 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall
FUN_10019ca0(undefined4 *param_1,uint param_2,undefined4 *param_3,uint param_4,char param_5)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
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
  longlong lVar19;
  uint uVar20;
  undefined4 *puVar21;
  byte bVar22;
  int iVar23;
  undefined4 *_Src;
  undefined4 *puVar24;
  undefined4 *puVar25;
  uint uVar26;
  undefined4 *puVar27;
  uint uVar28;
  int iVar29;
  uint uVar30;
  undefined4 *puVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  ulonglong uVar35;
  uint local_1a4;
  uint local_18c;
  byte local_184;
  uint local_180;
  int local_16c;
  byte abStack_15b [67];
  uint auStack_118 [66];

  uVar35 = __aulldiv(0,0x40000000,param_2,0);
  lVar4 = (uVar35 & 0xffffffff) * (ulonglong)param_2;
  uVar35 = uVar35 + ((int)((ulonglong)lVar4 >> 0x20) + (int)(uVar35 >> 0x20) * param_2 != 0x40000000
                    || (int)lVar4 != 0);
  if (param_2 < 0x1001) {
    uVar28 = param_2 - (param_2 >> 1);
    local_18c = 0x40;
    if (uVar28 < 0x40) {
      local_18c = uVar28;
    }
  }
  else {
    uVar28 = 0x1f;
    if ((param_2 | 1) != 0) {
      for (; (param_2 | 1) >> uVar28 == 0; uVar28 = uVar28 - 1) {
      }
    }
    bVar22 = ((byte)uVar28 & 1) + (char)(uVar28 >> 1);
    local_18c = (param_2 >> (bVar22 & 0x1f)) + (1 << (bVar22 & 0x1f)) >> 1;
  }
  uVar34 = 0;
  uVar28 = 0;
  local_1a4 = 1;
  do {
    local_180 = param_2 - uVar34;
    puVar1 = param_1 + uVar34;
    if (param_2 < uVar34 || local_180 == 0) {
      local_184 = 0;
      local_180 = 1;
    }
    else {
      if (local_180 < local_18c) {
LAB_10019d71:
        if (param_5 == '\0') {
          if (local_18c <= local_180) {
            local_180 = local_18c;
          }
          local_180 = local_180 * 2;
        }
        else {
          if (0x1f < local_180) {
            local_180 = 0x20;
          }
          FUN_1001a2b0(puVar1,local_180,param_3,param_4,0,(undefined4 *)0x0);
          local_180 = local_180 * 2 + 1;
        }
      }
      else {
        uVar26 = local_180;
        if (1 < local_180) {
          iVar23 = *(int *)(param_1 + uVar34)[1];
          iVar3 = *(int *)param_1[uVar34];
          if (iVar23 < iVar3) {
            if (local_180 == 2) {
              uVar33 = 0;
              uVar32 = 1;
              puVar25 = param_1 + uVar34 + 2;
              uVar20 = 2;
              goto LAB_10019e43;
            }
            uVar26 = 2;
            iVar29 = iVar23;
            do {
              puVar25 = puVar1 + uVar26;
              uVar20 = uVar26;
              if (iVar29 <= *(int *)*puVar25) break;
              uVar26 = uVar26 + 1;
              uVar20 = local_180;
              iVar29 = *(int *)*puVar25;
            } while (local_180 != uVar26);
LAB_10019ec6:
            if (uVar20 < local_18c) goto LAB_10019d71;
            uVar26 = uVar20;
            if ((iVar23 < iVar3) && (uVar32 = uVar20 >> 1, uVar32 != 0)) {
              uVar33 = 0;
              puVar25 = puVar1 + uVar20;
              if (7 < uVar32) {
                uVar33 = uVar32 & 0xfffffff8;
                puVar27 = param_1 + uVar34 + 4;
                puVar21 = param_1 + uVar20 + (uVar34 - 4);
                uVar30 = uVar33;
                do {
                  uVar2 = puVar27[-4];
                  uVar5 = puVar27[-3];
                  uVar6 = puVar27[-2];
                  uVar7 = puVar27[-1];
                  uVar8 = *puVar27;
                  uVar9 = puVar27[1];
                  uVar10 = puVar27[2];
                  uVar11 = puVar27[3];
                  uVar12 = puVar21[-4];
                  uVar13 = puVar21[-3];
                  uVar14 = puVar21[-2];
                  uVar15 = puVar21[-1];
                  uVar16 = *puVar21;
                  uVar17 = puVar21[1];
                  uVar18 = puVar21[2];
                  puVar27[-4] = puVar21[3];
                  puVar27[-3] = uVar18;
                  puVar27[-2] = uVar17;
                  puVar27[-1] = uVar16;
                  *puVar27 = uVar15;
                  puVar27[1] = uVar14;
                  puVar27[2] = uVar13;
                  puVar27[3] = uVar12;
                  *puVar21 = uVar7;
                  puVar21[1] = uVar6;
                  puVar21[2] = uVar5;
                  puVar21[3] = uVar2;
                  puVar21[-4] = uVar11;
                  puVar21[-3] = uVar10;
                  puVar21[-2] = uVar9;
                  puVar21[-1] = uVar8;
                  puVar27 = puVar27 + 8;
                  puVar21 = puVar21 + -8;
                  uVar30 = uVar30 - 8;
                } while (uVar30 != 0);
                if (uVar32 == uVar33) goto LAB_10019f80;
              }
LAB_10019e43:
              iVar23 = uVar32 - uVar33;
              puVar25 = puVar25 + -uVar33;
              puVar27 = param_1 + uVar33 + uVar34;
              do {
                puVar25 = puVar25 + -1;
                uVar2 = *puVar27;
                *puVar27 = *puVar25;
                *puVar25 = uVar2;
                puVar27 = puVar27 + 1;
                iVar23 = iVar23 + -1;
                uVar26 = uVar20;
              } while (iVar23 != 0);
            }
          }
          else {
            uVar26 = 2;
            iVar29 = iVar23;
            if (local_180 != 2) {
              do {
                puVar25 = puVar1 + uVar26;
                uVar20 = uVar26;
                if (*(int *)*puVar25 < iVar29) break;
                uVar26 = uVar26 + 1;
                uVar20 = local_180;
                iVar29 = *(int *)*puVar25;
              } while (local_180 != uVar26);
              goto LAB_10019ec6;
            }
          }
        }
LAB_10019f80:
        local_180 = uVar26 * 2 + 1;
      }
      local_16c = (int)(uVar35 >> 0x20);
      uVar20 = uVar34 - (local_1a4 >> 1);
      uVar26 = (local_180 >> 1) + uVar34 * 2;
      lVar19 = uVar35 * CONCAT14(CARRY4(uVar20,uVar34),uVar20 + uVar34);
      lVar4 = (uVar35 & 0xffffffff) * (ulonglong)uVar26;
      uVar20 = (uint)lVar4 ^ (uint)lVar19;
      uVar26 = (int)((ulonglong)lVar4 >> 0x20) + local_16c * uVar26 ^
               (uint)((ulonglong)lVar19 >> 0x20);
      iVar23 = 0x1f;
      if (uVar26 != 0) {
        for (; uVar26 >> iVar23 == 0; iVar23 = iVar23 + -1) {
        }
      }
      iVar3 = 0x1f;
      if (uVar20 != 0) {
        for (; uVar20 >> iVar3 == 0; iVar3 = iVar3 + -1) {
        }
      }
      bVar22 = (byte)iVar3;
      if (uVar20 == 0) {
        bVar22 = 0x3f;
      }
      local_184 = (bVar22 ^ 0x1f) + 0x20;
      if (uVar26 != 0) {
        local_184 = (byte)iVar23 ^ 0x1f;
      }
    }
    if (1 < uVar28) {
      do {
        while( true ) {
          if (abStack_15b[uVar28] < local_184) goto LAB_1001a235;
          uVar28 = uVar28 - 1;
          uVar26 = auStack_118[uVar28];
          uVar20 = local_1a4 >> 1;
          uVar32 = uVar26 >> 1;
          uVar33 = uVar32 + uVar20;
          if ((param_4 < uVar33) || (((uVar26 | local_1a4) & 1) != 0)) break;
          local_1a4 = uVar33 * 2;
          if (uVar28 < 2) goto LAB_1001a230;
        }
        puVar25 = param_1 + (uVar34 - uVar33);
        if ((uVar26 & 1) == 0) {
          uVar26 = 0x1f;
          if ((uVar32 | 1) != 0) {
            for (; (uVar32 | 1) >> uVar26 == 0; uVar26 = uVar26 - 1) {
            }
          }
          FUN_1001a2b0(puVar25,uVar32,param_3,param_4,(uVar26 ^ 0x1f) * 2 ^ 0x3e,(undefined4 *)0x0);
        }
        if ((local_1a4 & 1) == 0) {
          uVar26 = 0x1f;
          if ((uVar20 | 1) != 0) {
            for (; (uVar20 | 1) >> uVar26 == 0; uVar26 = uVar26 - 1) {
            }
          }
          FUN_1001a2b0(puVar25 + uVar32,uVar20,param_3,param_4,(uVar26 ^ 0x1f) * 2 ^ 0x3e,
                       (undefined4 *)0x0);
        }
        if ((uVar20 != 0) && (uVar32 != 0)) {
          uVar26 = uVar32;
          if (uVar20 < uVar32) {
            uVar26 = uVar20;
          }
          if (uVar26 <= param_4) {
            puVar27 = puVar25 + uVar32;
            puVar21 = puVar25;
            if (uVar20 < uVar32) {
              puVar21 = puVar27;
            }
            memcpy(param_3,puVar21,uVar26 * 4);
            puVar21 = param_3 + uVar26;
            puVar24 = param_1 + (uVar34 - 1);
            _Src = param_3;
            if (uVar20 < uVar32) {
              do {
                iVar3 = *(int *)puVar21[-1];
                iVar23 = *(int *)puVar27[-1];
                puVar31 = puVar21;
                if (iVar3 < iVar23) {
                  puVar31 = puVar27;
                }
                puVar27 = puVar27 + ((iVar23 <= iVar3) - 1);
                puVar21 = puVar21 + ((iVar3 < iVar23) - 1);
                *puVar24 = puVar31[-1];
                puVar31 = puVar27;
              } while ((puVar27 != puVar25) && (puVar24 = puVar24 + -1, puVar21 != param_3));
            }
            else {
              do {
                iVar3 = *(int *)*puVar27;
                iVar23 = *(int *)*_Src;
                puVar24 = _Src;
                if (iVar3 < iVar23) {
                  puVar24 = puVar27;
                }
                _Src = _Src + (iVar23 <= iVar3);
                *puVar25 = *puVar24;
                puVar25 = puVar25 + 1;
                puVar31 = puVar25;
              } while ((_Src != puVar21) &&
                      (puVar27 = puVar27 + (iVar3 < iVar23), puVar27 != puVar1));
            }
            memcpy(puVar31,_Src,(int)puVar21 - (int)_Src);
          }
        }
        local_1a4 = uVar33 * 2 + 1;
      } while (1 < uVar28);
LAB_1001a230:
      uVar28 = 1;
    }
LAB_1001a235:
    auStack_118[uVar28] = local_1a4;
    abStack_15b[uVar28 + 1] = local_184;
    if (param_2 <= uVar34) {
      if ((local_1a4 & 1) == 0) {
        uVar28 = 0x1f;
        if ((param_2 | 1) != 0) {
          for (; (param_2 | 1) >> uVar28 == 0; uVar28 = uVar28 - 1) {
          }
        }
        FUN_1001a2b0(param_1,param_2,param_3,param_4,(uVar28 ^ 0x1f) * 2 ^ 0x3e,(undefined4 *)0x0);
      }
      return;
    }
    uVar28 = uVar28 + 1;
    uVar34 = uVar34 + (local_180 >> 1);
    local_1a4 = local_180;
  } while( true );
}
