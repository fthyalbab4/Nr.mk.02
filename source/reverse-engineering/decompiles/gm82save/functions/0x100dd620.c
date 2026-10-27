// rea decompile_all
// name: FUN_100dd620
// address: 0x100dd620
// body: available
// range: 0x100dd620-0x100dd728 inclusive
// range: 0x100dd730-0x100dd750 inclusive
// range: 0x100dd760-0x100dd9bd inclusive
// range: 0x100dd9c0-0x100dda18 inclusive
// range: 0x100dda20-0x100ddb0a inclusive
// range: 0x100ddb10-0x100ddb5d inclusive
// range: 0x100ddb60-0x100ddbcc inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_100dd620(byte *param_1,uint param_2,byte *param_3,uint param_4,char param_5)

{
  byte *pbVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  bool bVar6;
  longlong lVar7;
  uint uVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte bVar11;
  uint uVar12;
  byte *pbVar13;
  byte bVar14;
  bool bVar15;
  byte *pbVar16;
  uint uVar17;
  byte *_Src;
  uint uVar18;
  uint uVar19;
  byte *pbVar20;
  uint uVar21;
  ulonglong uVar22;
  uint local_198;
  byte local_190;
  uint local_188;
  uint local_180;
  int local_168;
  byte abStack_15b [67];
  uint auStack_118 [66];

  uVar22 = __aulldiv(0,0x40000000,param_2,0);
  lVar5 = (uVar22 & 0xffffffff) * (ulonglong)param_2;
  uVar22 = uVar22 + ((int)((ulonglong)lVar5 >> 0x20) + (int)(uVar22 >> 0x20) * param_2 != 0x40000000
                    || (int)lVar5 != 0);
  if (param_2 < 0x1001) {
    uVar12 = param_2 - (param_2 >> 1);
    local_180 = 0x40;
    if (uVar12 < 0x40) {
      local_180 = uVar12;
    }
  }
  else {
    uVar12 = 0x1f;
    if ((param_2 | 1) != 0) {
      for (; (param_2 | 1) >> uVar12 == 0; uVar12 = uVar12 - 1) {
      }
    }
    bVar11 = ((byte)uVar12 & 1) + (char)(uVar12 >> 1);
    local_180 = (param_2 >> (bVar11 & 0x1f)) + (1 << (bVar11 & 0x1f)) >> 1;
  }
  uVar18 = 0;
  uVar12 = 0;
  local_198 = 1;
  do {
    local_188 = param_2 - uVar18;
    pbVar1 = param_1 + uVar18 * 2;
    if (param_2 < uVar18 || local_188 == 0) {
      local_190 = 0;
      local_188 = 1;
    }
    else {
      if (local_188 < local_180) {
LAB_100dd6f1:
        if (param_5 == '\0') {
          if (local_180 <= local_188) {
            local_188 = local_180;
          }
          local_188 = local_188 * 2;
        }
        else {
          if (0x1f < local_188) {
            local_188 = 0x20;
          }
          FUN_100ddbd0(pbVar1,local_188,param_3,param_4,0,(byte *)0x0);
          local_188 = local_188 * 2 + 1;
        }
      }
      else if (local_188 < 2) {
        local_188 = local_188 * 2 + 1;
      }
      else {
        bVar11 = (byte)*(ushort *)(pbVar1 + 2);
        uVar17 = (uint)*(ushort *)(pbVar1 + 2);
        bVar15 = bVar11 < *pbVar1;
        if (bVar11 == *pbVar1) {
          bVar15 = pbVar1[3] < pbVar1[1];
        }
        if (bVar15) {
          if (local_188 == 2) {
            uVar8 = 2;
            uVar17 = 1;
          }
          else {
            uVar8 = 2;
            do {
              uVar19 = uVar17 >> 8;
              bVar14 = (byte)uVar17;
              bVar11 = pbVar1[uVar8 * 2];
              uVar17 = (uint)CONCAT11(pbVar1[uVar8 * 2 + 1],bVar11);
              bVar6 = bVar11 < bVar14;
              if (bVar11 == bVar14) {
                bVar6 = pbVar1[uVar8 * 2 + 1] < (byte)uVar19;
              }
              uVar19 = uVar8;
            } while ((bVar6) && (uVar8 = uVar8 + 1, uVar19 = local_188, local_188 != uVar8));
joined_r0x100dd85c:
            uVar8 = uVar19;
            if (uVar8 < local_180) goto LAB_100dd6f1;
            if ((!bVar15) || (uVar17 = uVar8 >> 1, uVar17 == 0)) goto LAB_100dd899;
          }
          pbVar16 = param_1 + uVar18 * 2 + uVar8 * 2 + -2;
          pbVar20 = pbVar1;
          do {
            uVar2 = *(undefined2 *)pbVar20;
            *(undefined2 *)pbVar20 = *(undefined2 *)pbVar16;
            *(undefined2 *)pbVar16 = uVar2;
            pbVar20 = pbVar20 + 2;
            pbVar16 = pbVar16 + -2;
            uVar17 = uVar17 - 1;
          } while (uVar17 != 0);
        }
        else {
          uVar8 = 2;
          if (local_188 != 2) {
            do {
              uVar19 = uVar17 >> 8;
              bVar14 = (byte)uVar17;
              bVar11 = pbVar1[uVar8 * 2];
              uVar17 = (uint)CONCAT11(pbVar1[uVar8 * 2 + 1],bVar11);
              bVar6 = bVar11 < bVar14;
              if (bVar11 == bVar14) {
                bVar6 = pbVar1[uVar8 * 2 + 1] < (byte)uVar19;
              }
              uVar19 = uVar8;
            } while ((!bVar6) && (uVar8 = uVar8 + 1, uVar19 = local_188, local_188 != uVar8));
            goto joined_r0x100dd85c;
          }
        }
LAB_100dd899:
        local_188 = uVar8 * 2 + 1;
      }
      local_168 = (int)(uVar22 >> 0x20);
      uVar8 = uVar18 - (local_198 >> 1);
      uVar17 = (local_188 >> 1) + uVar18 * 2;
      lVar7 = uVar22 * CONCAT14(CARRY4(uVar8,uVar18),uVar8 + uVar18);
      lVar5 = (uVar22 & 0xffffffff) * (ulonglong)uVar17;
      uVar8 = (uint)lVar5 ^ (uint)lVar7;
      uVar17 = (int)((ulonglong)lVar5 >> 0x20) + local_168 * uVar17 ^
               (uint)((ulonglong)lVar7 >> 0x20);
      iVar3 = 0x1f;
      if (uVar17 != 0) {
        for (; uVar17 >> iVar3 == 0; iVar3 = iVar3 + -1) {
        }
      }
      iVar4 = 0x1f;
      if (uVar8 != 0) {
        for (; uVar8 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      bVar11 = (byte)iVar4;
      if (uVar8 == 0) {
        bVar11 = 0x3f;
      }
      local_190 = (bVar11 ^ 0x1f) + 0x20;
      if (uVar17 != 0) {
        local_190 = (byte)iVar3 ^ 0x1f;
      }
    }
    if (1 < uVar12) {
      do {
        while( true ) {
          if (abStack_15b[uVar12] < local_190) goto LAB_100ddb65;
          uVar12 = uVar12 - 1;
          uVar17 = auStack_118[uVar12];
          uVar21 = local_198 >> 1;
          uVar8 = uVar17 >> 1;
          uVar19 = uVar8 + uVar21;
          if ((param_4 < uVar19) || (((uVar17 | local_198) & 1) != 0)) break;
          local_198 = uVar19 * 2;
          if (uVar12 < 2) goto LAB_100ddb60;
        }
        pbVar20 = param_1 + (uVar18 - (uVar21 + uVar8)) * 2;
        if ((uVar17 & 1) == 0) {
          uVar17 = 0x1f;
          if ((uVar8 | 1) != 0) {
            for (; (uVar8 | 1) >> uVar17 == 0; uVar17 = uVar17 - 1) {
            }
          }
          FUN_100ddbd0(pbVar20,uVar8,param_3,param_4,(uVar17 ^ 0x1f) * 2 ^ 0x3e,(byte *)0x0);
        }
        if ((local_198 & 1) == 0) {
          uVar17 = 0x1f;
          if ((uVar21 | 1) != 0) {
            for (; (uVar21 | 1) >> uVar17 == 0; uVar17 = uVar17 - 1) {
            }
          }
          FUN_100ddbd0(pbVar20 + uVar8 * 2,uVar21,param_3,param_4,(uVar17 ^ 0x1f) * 2 ^ 0x3e,
                       (byte *)0x0);
        }
        if ((uVar21 != 0) && (uVar8 != 0)) {
          uVar17 = uVar8;
          if (uVar21 < uVar8) {
            uVar17 = uVar21;
          }
          if (uVar17 <= param_4) {
            pbVar16 = pbVar20 + uVar8 * 2;
            pbVar9 = pbVar20;
            if (uVar21 < uVar8) {
              pbVar9 = pbVar16;
            }
            memcpy(param_3,pbVar9,uVar17 * 2);
            pbVar9 = param_3 + uVar17 * 2;
            pbVar13 = param_1 + uVar18 * 2 + -2;
            _Src = param_3;
            if (uVar21 < uVar8) {
              do {
                bVar15 = pbVar9[-2] < pbVar16[-2];
                if (pbVar9[-2] == pbVar16[-2]) {
                  bVar15 = pbVar9[-1] < pbVar16[-1];
                }
                pbVar10 = pbVar9;
                if (bVar15 != false) {
                  pbVar10 = pbVar16;
                }
                *(undefined2 *)pbVar13 = *(undefined2 *)(pbVar10 + -2);
                pbVar9 = pbVar9 + (uint)bVar15 * 2 + -2;
                pbVar16 = pbVar16 + (uint)(bVar15 ^ 1) * 2 + -2;
                pbVar10 = pbVar16;
              } while ((pbVar16 != pbVar20) && (pbVar13 = pbVar13 + -2, pbVar9 != param_3));
            }
            else {
              do {
                bVar15 = *pbVar16 < *_Src;
                if (*pbVar16 == *_Src) {
                  bVar15 = pbVar16[1] < _Src[1];
                }
                pbVar13 = _Src;
                if (bVar15 != false) {
                  pbVar13 = pbVar16;
                }
                _Src = _Src + (uint)(bVar15 ^ 1) * 2;
                *(undefined2 *)pbVar20 = *(undefined2 *)pbVar13;
                pbVar20 = pbVar20 + 2;
                pbVar10 = pbVar20;
              } while ((_Src != pbVar9) && (pbVar16 = pbVar16 + (uint)bVar15 * 2, pbVar16 != pbVar1)
                      );
            }
            memcpy(pbVar10,_Src,(int)pbVar9 - (int)_Src);
          }
        }
        local_198 = uVar19 * 2 + 1;
      } while (1 < uVar12);
LAB_100ddb60:
      uVar12 = 1;
    }
LAB_100ddb65:
    auStack_118[uVar12] = local_198;
    abStack_15b[uVar12 + 1] = local_190;
    if (param_2 <= uVar18) {
      if ((local_198 & 1) == 0) {
        uVar12 = 0x1f;
        if ((param_2 | 1) != 0) {
          for (; (param_2 | 1) >> uVar12 == 0; uVar12 = uVar12 - 1) {
          }
        }
        FUN_100ddbd0(param_1,param_2,param_3,param_4,(uVar12 ^ 0x1f) * 2 ^ 0x3e,(byte *)0x0);
      }
      return;
    }
    uVar12 = uVar12 + 1;
    uVar18 = uVar18 + (local_188 >> 1);
    local_198 = local_188;
  } while( true );
}
