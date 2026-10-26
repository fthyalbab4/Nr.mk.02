// rea decompile_all
// name: FUN_100c1430
// address: 0x100c1430
// body: available
// range: 0x100c1430-0x100c1552 inclusive
// range: 0x100c1560-0x100c1584 inclusive
// range: 0x100c1590-0x100c1894 inclusive
// range: 0x100c18a0-0x100c1901 inclusive
// range: 0x100c1910-0x100c1aec inclusive
// range: 0x100c1af0-0x100c1b5d inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall
FUN_100c1430(undefined8 *param_1,uint param_2,undefined8 *param_3,uint param_4,char param_5)

{
  undefined8 uVar1;
  byte bVar2;
  void *pvVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  bool bVar12;
  longlong lVar13;
  bool bVar14;
  uint uVar15;
  undefined8 *_Src;
  undefined8 *puVar16;
  int iVar17;
  byte bVar18;
  uint uVar19;
  undefined8 *puVar20;
  uint uVar21;
  uint uVar22;
  undefined8 *puVar23;
  uint uVar24;
  undefined8 *puVar25;
  uint uVar26;
  undefined8 *puVar27;
  uint uVar28;
  int iVar29;
  byte *pbVar30;
  ulonglong uVar31;
  void *local_198;
  uint local_194;
  byte local_190;
  uint local_178;
  int local_164;
  byte abStack_15b [67];
  uint auStack_118 [66];

  uVar31 = __aulldiv(0,0x40000000,param_2,0);
  lVar4 = (uVar31 & 0xffffffff) * (ulonglong)param_2;
  uVar31 = uVar31 + ((int)((ulonglong)lVar4 >> 0x20) + (int)(uVar31 >> 0x20) * param_2 != 0x40000000
                    || (int)lVar4 != 0);
  if (param_2 < 0x1001) {
    uVar19 = param_2 - (param_2 >> 1);
    local_178 = 0x40;
    if (uVar19 < 0x40) {
      local_178 = uVar19;
    }
  }
  else {
    uVar19 = 0x1f;
    if ((param_2 | 1) != 0) {
      for (; (param_2 | 1) >> uVar19 == 0; uVar19 = uVar19 - 1) {
      }
    }
    bVar18 = ((byte)uVar19 & 1) + (char)(uVar19 >> 1);
    local_178 = (param_2 >> (bVar18 & 0x1f)) + (1 << (bVar18 & 0x1f)) >> 1;
  }
  uVar24 = 0;
  uVar21 = 0;
  uVar19 = 1;
  do {
    local_194 = param_2 - uVar24;
    if (param_2 < uVar24 || local_194 == 0) {
      local_190 = 0;
      local_194 = 1;
    }
    else {
      puVar25 = param_1 + uVar24 * 2;
      if (local_194 < local_178) {
LAB_100c1519:
        if (param_5 == '\0') {
          if (local_178 <= local_194) {
            local_194 = local_178;
          }
          local_194 = local_194 * 2;
        }
        else {
          if (0x1f < local_194) {
            local_194 = 0x20;
          }
          FUN_100c1b60(puVar25,local_194,param_3,param_4,0,0);
          local_194 = local_194 * 2 + 1;
        }
      }
      else if (local_194 < 2) {
        local_194 = local_194 * 2 + 1;
      }
      else {
        uVar22 = *(uint *)(puVar25 + 3);
        uVar15 = *(uint *)(puVar25 + 1);
        local_198 = *(void **)((int)puVar25 + 0x14);
        uVar26 = uVar15;
        if (uVar22 < uVar15) {
          uVar26 = uVar22;
        }
        iVar17 = memcmp(local_198,*(void **)((int)puVar25 + 4),uVar26);
        iVar29 = uVar22 - uVar15;
        if (iVar17 != 0) {
          iVar29 = iVar17;
        }
        bVar18 = *(byte *)((int)puVar25 + 0x1c);
        bVar14 = iVar29 < 0;
        if (iVar29 == 0) {
          bVar14 = bVar18 < *(byte *)((int)puVar25 + 0xc);
        }
        if (bVar14) {
          if (local_194 != 2) {
            pbVar30 = (byte *)((int)param_1 + uVar24 * 0x10 + 0x2c);
            uVar15 = 2;
            do {
              uVar26 = *(uint *)(pbVar30 + -4);
              pvVar3 = *(void **)(pbVar30 + -8);
              uVar28 = uVar22;
              if (uVar26 < uVar22) {
                uVar28 = uVar26;
              }
              iVar17 = memcmp(pvVar3,local_198,uVar28);
              iVar29 = uVar26 - uVar22;
              if (iVar17 != 0) {
                iVar29 = iVar17;
              }
              bVar2 = *pbVar30;
              bVar12 = iVar29 < 0;
              if (iVar29 == 0) {
                bVar12 = bVar2 < bVar18;
              }
              uVar28 = uVar15;
              if (!bVar12) break;
              pbVar30 = pbVar30 + 0x10;
              uVar15 = uVar15 + 1;
              uVar28 = local_194;
              uVar22 = uVar26;
              bVar18 = bVar2;
              local_198 = pvVar3;
            } while (local_194 != uVar15);
            goto LAB_100c1726;
          }
          uVar28 = 2;
          uVar22 = 1;
LAB_100c1749:
          puVar20 = param_1 + uVar24 * 2 + uVar28 * 2 + -2;
          do {
            uVar5 = *(undefined4 *)puVar25;
            uVar6 = *(undefined4 *)((int)puVar25 + 4);
            uVar7 = *(undefined4 *)(puVar25 + 1);
            uVar8 = *(undefined4 *)((int)puVar25 + 0xc);
            uVar9 = *(undefined4 *)((int)puVar20 + 4);
            uVar10 = *(undefined4 *)(puVar20 + 1);
            uVar11 = *(undefined4 *)((int)puVar20 + 0xc);
            *(undefined4 *)puVar25 = *(undefined4 *)puVar20;
            *(undefined4 *)((int)puVar25 + 4) = uVar9;
            *(undefined4 *)(puVar25 + 1) = uVar10;
            *(undefined4 *)((int)puVar25 + 0xc) = uVar11;
            *(undefined4 *)puVar20 = uVar5;
            *(undefined4 *)((int)puVar20 + 4) = uVar6;
            *(undefined4 *)(puVar20 + 1) = uVar7;
            *(undefined4 *)((int)puVar20 + 0xc) = uVar8;
            puVar25 = puVar25 + 2;
            puVar20 = puVar20 + -2;
            uVar22 = uVar22 - 1;
          } while (uVar22 != 0);
        }
        else {
          uVar28 = 2;
          if (local_194 != 2) {
            pbVar30 = (byte *)((int)param_1 + uVar24 * 0x10 + 0x2c);
            uVar15 = 2;
            do {
              uVar26 = *(uint *)(pbVar30 + -4);
              pvVar3 = *(void **)(pbVar30 + -8);
              uVar28 = uVar22;
              if (uVar26 < uVar22) {
                uVar28 = uVar26;
              }
              iVar17 = memcmp(pvVar3,local_198,uVar28);
              iVar29 = uVar26 - uVar22;
              if (iVar17 != 0) {
                iVar29 = iVar17;
              }
              bVar2 = *pbVar30;
              bVar12 = iVar29 < 0;
              if (iVar29 == 0) {
                bVar12 = bVar2 < bVar18;
              }
              uVar28 = uVar15;
              if (bVar12) break;
              pbVar30 = pbVar30 + 0x10;
              uVar15 = uVar15 + 1;
              uVar28 = local_194;
              uVar22 = uVar26;
              bVar18 = bVar2;
              local_198 = pvVar3;
            } while (local_194 != uVar15);
LAB_100c1726:
            if (uVar28 < local_178) goto LAB_100c1519;
            if ((bVar14) && (uVar22 = uVar28 >> 1, uVar22 != 0)) goto LAB_100c1749;
          }
        }
        local_194 = uVar28 * 2 + 1;
      }
      local_164 = (int)(uVar31 >> 0x20);
      uVar15 = uVar24 - (uVar19 >> 1);
      uVar22 = (local_194 >> 1) + uVar24 * 2;
      lVar13 = uVar31 * CONCAT14(CARRY4(uVar15,uVar24),uVar15 + uVar24);
      lVar4 = (uVar31 & 0xffffffff) * (ulonglong)uVar22;
      uVar15 = (uint)lVar4 ^ (uint)lVar13;
      uVar22 = (int)((ulonglong)lVar4 >> 0x20) + local_164 * uVar22 ^
               (uint)((ulonglong)lVar13 >> 0x20);
      iVar29 = 0x1f;
      if (uVar22 != 0) {
        for (; uVar22 >> iVar29 == 0; iVar29 = iVar29 + -1) {
        }
      }
      iVar17 = 0x1f;
      if (uVar15 != 0) {
        for (; uVar15 >> iVar17 == 0; iVar17 = iVar17 + -1) {
        }
      }
      bVar18 = (byte)iVar17;
      if (uVar15 == 0) {
        bVar18 = 0x3f;
      }
      local_190 = (bVar18 ^ 0x1f) + 0x20;
      if (uVar22 != 0) {
        local_190 = (byte)iVar29 ^ 0x1f;
      }
    }
    if (1 < uVar21) {
      do {
        while( true ) {
          if (abStack_15b[uVar21] < local_190) goto LAB_100c1af9;
          uVar21 = uVar21 - 1;
          uVar22 = auStack_118[uVar21];
          uVar15 = uVar19 >> 1;
          uVar28 = uVar22 >> 1;
          uVar26 = uVar15 + uVar28;
          if ((param_4 < uVar26) || (((uVar22 | uVar19) & 1) != 0)) break;
          uVar19 = uVar26 * 2;
          if (uVar21 < 2) goto LAB_100c1af0;
        }
        puVar25 = param_1 + (uVar24 - (uVar15 + uVar28)) * 2;
        if ((uVar22 & 1) == 0) {
          uVar22 = 0x1f;
          if ((uVar28 | 1) != 0) {
            for (; (uVar28 | 1) >> uVar22 == 0; uVar22 = uVar22 - 1) {
            }
          }
          FUN_100c1b60(puVar25,uVar28,param_3,param_4,(uVar22 ^ 0x1f) * 2 ^ 0x3e,0);
        }
        if ((uVar19 & 1) == 0) {
          uVar19 = 0x1f;
          if ((uVar15 | 1) != 0) {
            for (; (uVar15 | 1) >> uVar19 == 0; uVar19 = uVar19 - 1) {
            }
          }
          FUN_100c1b60(puVar25 + uVar28 * 2,uVar15,param_3,param_4,(uVar19 ^ 0x1f) * 2 ^ 0x3e,0);
        }
        if ((uVar15 != 0) && (uVar28 != 0)) {
          uVar19 = uVar28;
          if (uVar15 < uVar28) {
            uVar19 = uVar15;
          }
          if (uVar19 <= param_4) {
            puVar20 = puVar25 + uVar28 * 2;
            puVar16 = puVar25;
            if (uVar15 < uVar28) {
              puVar16 = puVar20;
            }
            memcpy(param_3,puVar16,uVar19 * 0x10);
            puVar16 = param_3 + uVar19 * 2;
            _Src = param_3;
            puVar23 = param_1 + uVar24 * 2 + -2;
            if (uVar15 < uVar28) {
              do {
                uVar19 = *(uint *)(puVar16 + -1);
                uVar22 = *(uint *)(puVar20 + -1);
                uVar15 = uVar19;
                if (uVar22 <= uVar19) {
                  uVar15 = uVar22;
                }
                iVar17 = memcmp(*(void **)((int)puVar16 + -0xc),*(void **)((int)puVar20 + -0xc),
                                uVar15);
                iVar29 = uVar19 - uVar22;
                if (iVar17 != 0) {
                  iVar29 = iVar17;
                }
                bVar14 = iVar29 < 0;
                if (iVar29 == 0) {
                  bVar14 = *(byte *)((int)puVar16 + -4) < *(byte *)((int)puVar20 + -4);
                }
                puVar27 = puVar16;
                if (bVar14 != false) {
                  puVar27 = puVar20;
                }
                uVar1 = puVar27[-2];
                puVar20 = puVar20 + (uint)(bVar14 ^ 1) * 2 + -2;
                puVar23[1] = puVar27[-1];
                *puVar23 = uVar1;
                puVar16 = puVar16 + (uint)bVar14 * 2 + -2;
                puVar27 = puVar20;
              } while ((puVar20 != puVar25) && (puVar23 = puVar23 + -2, puVar16 != param_3));
            }
            else {
              do {
                uVar19 = *(uint *)(puVar20 + 1);
                uVar22 = *(uint *)(_Src + 1);
                uVar15 = uVar22;
                if (uVar19 < uVar22) {
                  uVar15 = uVar19;
                }
                iVar17 = memcmp(*(void **)((int)puVar20 + 4),*(void **)((int)_Src + 4),uVar15);
                iVar29 = uVar19 - uVar22;
                if (iVar17 != 0) {
                  iVar29 = iVar17;
                }
                bVar14 = iVar29 < 0;
                if (iVar29 == 0) {
                  bVar14 = *(byte *)((int)puVar20 + 0xc) < *(byte *)((int)_Src + 0xc);
                }
                puVar23 = _Src;
                if (bVar14 != false) {
                  puVar23 = puVar20;
                }
                uVar1 = *puVar23;
                _Src = _Src + (uint)(bVar14 ^ 1) * 2;
                puVar25[1] = puVar23[1];
                *puVar25 = uVar1;
                puVar25 = puVar25 + 2;
                puVar27 = puVar25;
              } while ((_Src != puVar16) &&
                      (puVar20 = puVar20 + (uint)bVar14 * 2, puVar20 != param_1 + uVar24 * 2));
            }
            memcpy(puVar27,_Src,(int)puVar16 - (int)_Src);
          }
        }
        uVar19 = uVar26 * 2 + 1;
      } while (1 < uVar21);
LAB_100c1af0:
      uVar21 = 1;
    }
LAB_100c1af9:
    auStack_118[uVar21] = uVar19;
    abStack_15b[uVar21 + 1] = local_190;
    if (param_2 <= uVar24) {
      if ((uVar19 & 1) == 0) {
        uVar19 = 0x1f;
        if ((param_2 | 1) != 0) {
          for (; (param_2 | 1) >> uVar19 == 0; uVar19 = uVar19 - 1) {
          }
        }
        FUN_100c1b60(param_1,param_2,param_3,param_4,(uVar19 ^ 0x1f) * 2 ^ 0x3e,0);
      }
      return;
    }
    uVar21 = uVar21 + 1;
    uVar24 = uVar24 + (local_194 >> 1);
    uVar19 = local_194;
  } while( true );
}
