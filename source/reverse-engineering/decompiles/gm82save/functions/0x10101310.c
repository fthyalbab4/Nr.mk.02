// rea decompile_all
// name: FUN_10101310
// address: 0x10101310
// body: available
// range: 0x10101310-0x10101379 inclusive
// range: 0x10101380-0x101016ae inclusive
// range: 0x101016b0-0x1010171b inclusive
// range: 0x10101720-0x101018b7 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

undefined4 __fastcall FUN_10101310(undefined4 *param_1,undefined4 *param_2)

{
  byte *pbVar1;
  uint *puVar2;
  code *pcVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  char cVar11;
  undefined1 uVar12;
  int iVar13;
  undefined4 uVar14;
  undefined1 *puVar15;
  byte bVar16;
  byte *pbVar17;
  uint uVar18;
  undefined1 uVar19;
  uint uVar20;
  undefined1 uVar21;
  uint unaff_EBX;
  undefined4 uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint *puVar26;
  bool bVar27;
  char *local_254;
  uint local_250;
  uint local_24c;
  uint local_248;
  uint local_244;
  undefined4 *local_240;
  uint local_23c;
  uint local_238;
  char *local_234;
  byte *local_230;
  char *local_22c;
  int local_228;
  int local_224;
  int local_220;
  uint local_21c;
  uint *local_218;
  uint local_214 [129];

  memset(local_214 + 1,0,0x200);
  local_220 = param_1[3];
  if (local_220 == 0) {
    uVar14 = (**(code **)(param_2[1] + 0xc))(*param_2,*param_1,param_1[1]);
    return uVar14;
  }
  local_230 = (byte *)*param_1;
  local_22c = (char *)param_1[2];
  uVar23 = 0;
  local_228 = param_1[1];
  cVar11 = *local_22c;
  local_240 = param_2;
  if (local_228 != 0) {
    pbVar17 = local_230;
    uVar24 = 0;
    do {
      bVar16 = *pbVar17;
      uVar20 = (uint)bVar16;
      if ((char)bVar16 < '\0') {
        unaff_EBX = pbVar17[1] & 0x3f;
        if (bVar16 < 0xe0) {
          pbVar17 = pbVar17 + 2;
          uVar20 = (uVar20 & 0x1f) << 6 | unaff_EBX;
        }
        else {
          unaff_EBX = unaff_EBX << 6;
          uVar23 = pbVar17[2] & 0x3f | unaff_EBX;
          if (bVar16 < 0xf0) {
            pbVar17 = pbVar17 + 3;
            uVar20 = uVar23 | (uVar20 & 0x1f) << 0xc;
          }
          else {
            pbVar1 = pbVar17 + 3;
            pbVar17 = pbVar17 + 4;
            uVar20 = *pbVar1 & 0x3f | uVar23 << 6 | (uVar20 & 7) << 0x12;
          }
        }
      }
      else {
        pbVar17 = pbVar17 + 1;
      }
      if (uVar24 == 0x80) goto LAB_10101408;
      uVar23 = uVar24 + 1;
      local_214[uVar24 + 1] = uVar20;
      uVar24 = uVar23;
    } while (pbVar17 != local_230 + local_228);
  }
  local_238 = 0x80;
  local_21c = 700;
  uVar24 = 0x48;
  local_234 = local_22c + local_220;
  local_214[0] = 0x80;
  if (0x80 < uVar23) {
    local_214[0] = uVar23;
  }
  uVar20 = 0;
  local_224 = uVar23 * 4;
  local_218 = &local_21c + uVar23;
  local_254 = local_22c;
  local_24c = uVar23;
  do {
    local_224 = local_224 + 4;
    unaff_EBX = 0;
    iVar13 = 0x24 - uVar24;
    if (0x24 < uVar24) {
      iVar13 = 0;
    }
    uVar23 = iVar13 + (uint)(iVar13 == 0);
    if (0x19 < uVar23) {
      uVar23 = 0x1a;
    }
    bVar16 = cVar11 + 0x9f;
    if (0x19 < bVar16) {
      if (9 < (byte)(cVar11 - 0x30U)) goto LAB_10101408;
      bVar16 = cVar11 - 0x16;
    }
    unaff_EBX = (uint)bVar16;
    local_254 = local_254 + 1;
    if (uVar23 <= unaff_EBX) {
      local_244 = uVar20;
      local_23c = uVar24;
      if (local_254 == local_234) {
LAB_10101408:
        uVar14 = *param_2;
        pcVar3 = *(code **)(param_2[1] + 0xc);
        cVar11 = (*pcVar3)(uVar14,"punycode{",9);
        uVar22 = CONCAT31((int3)(unaff_EBX >> 8),1);
        if (cVar11 != '\0') {
          return uVar22;
        }
        if (local_228 != 0) {
          cVar11 = (*pcVar3)(uVar14,local_230,local_228);
          if (cVar11 != '\0') {
            return uVar22;
          }
          cVar11 = (*pcVar3)(uVar14,"-",1);
          if (cVar11 != '\0') {
            return uVar22;
          }
        }
        cVar11 = (*pcVar3)(uVar14,local_22c,local_220);
        if (cVar11 != '\0') {
          return uVar22;
        }
        uVar14 = (*pcVar3)(uVar14,"}",1);
        return uVar14;
      }
      uVar25 = 0x6c;
      iVar13 = 0x48 - uVar24;
      if (0x48 < uVar24) {
        iVar13 = 0;
      }
      uVar18 = iVar13 + (uint)(iVar13 == 0);
      if (0x19 < uVar18) {
        uVar18 = 0x1a;
      }
      local_248 = 0x24 - uVar23;
      while( true ) {
        iVar13 = uVar25 - uVar24;
        if (uVar25 < uVar24) {
          iVar13 = 0;
        }
        cVar11 = *local_254;
        bVar16 = cVar11 + 0x9f;
        if (0x19 < bVar16) {
          if (9 < (byte)(cVar11 - 0x30U)) goto LAB_10101408;
          bVar16 = cVar11 - 0x16;
        }
        lVar4 = (ulonglong)(uint)bVar16 * (ulonglong)local_248;
        uVar23 = (uint)lVar4;
        if (((int)((ulonglong)lVar4 >> 0x20) != 0) ||
           (bVar27 = CARRY4(unaff_EBX,uVar23), unaff_EBX = unaff_EBX + uVar23, bVar27))
        goto LAB_10101408;
        if (bVar16 < uVar18) break;
        lVar4 = (ulonglong)local_248 * (ulonglong)(0x24 - uVar18);
        local_248 = (uint)lVar4;
        if ((int)((ulonglong)lVar4 >> 0x20) != 0) goto LAB_10101408;
        local_254 = local_254 + 1;
        uVar18 = iVar13 + (uint)(iVar13 == 0);
        if (0x19 < uVar18) {
          uVar18 = 0x1a;
        }
        uVar25 = uVar25 + 0x24;
        if (local_254 == local_234) goto LAB_10101408;
      }
      local_254 = local_254 + 1;
    }
    local_23c = unaff_EBX;
    if (CARRY4(uVar20,unaff_EBX)) goto LAB_10101408;
    uVar23 = local_24c + 1;
    uVar24 = (uVar20 + unaff_EBX) / uVar23;
    local_244 = (uVar20 + unaff_EBX) % uVar23;
    bVar27 = CARRY4(local_238,uVar24);
    local_238 = local_238 + uVar24;
    local_23c = unaff_EBX;
    if (((bVar27) || (local_23c = unaff_EBX, (local_238 ^ 0xd800) - 0x110000 < 0xffef0800)) ||
       (local_23c = unaff_EBX, local_24c == local_214[0])) goto LAB_10101408;
    uVar24 = local_24c - local_244;
    local_248 = uVar23;
    local_23c = unaff_EBX;
    if (local_24c < local_244 || uVar24 == 0) {
      if (0x7f < local_244) {
        FUN_10136b52(local_244,0x80,&PTR_s_C__Users_runneradmin__cargo_regi_10155d04);
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
    }
    else {
      uVar20 = local_24c;
      if (7 < uVar24) {
        iVar13 = 0;
        uVar25 = uVar24 & 0xfffffff8;
        uVar20 = local_24c - uVar25;
        do {
          puVar26 = local_218 + iVar13 + -5;
          uVar18 = *puVar26;
          uVar5 = puVar26[1];
          uVar6 = puVar26[2];
          uVar7 = puVar26[3];
          puVar2 = local_218 + iVar13 + -1;
          uVar8 = puVar2[1];
          uVar9 = puVar2[2];
          uVar10 = puVar2[3];
          puVar26 = local_218 + iVar13;
          *puVar26 = *puVar2;
          puVar26[1] = uVar8;
          puVar26[2] = uVar9;
          puVar26[3] = uVar10;
          puVar26 = local_218 + iVar13 + -4;
          *puVar26 = uVar18;
          puVar26[1] = uVar5;
          puVar26[2] = uVar6;
          puVar26[3] = uVar7;
          iVar13 = iVar13 + -8;
        } while (uVar25 + iVar13 != 0);
        if (uVar24 == uVar25) goto LAB_101016bc;
      }
      do {
        local_214[uVar20 + 1] = local_214[uVar20];
        uVar20 = uVar20 - 1;
      } while (local_244 < uVar20);
    }
LAB_101016bc:
    local_214[local_244 + 1] = local_238;
    if (local_254 == local_234) {
      if (0x7f < local_24c) {
        FUN_10136a50(0,uVar23,0x80,&PTR_s_C__Users_runneradmin__cargo_regi_10155ce4);
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      puVar26 = local_214;
      uVar14 = *param_2;
      uVar23 = param_2[2];
      iVar13 = param_2[1];
      while( true ) {
        puVar26 = (uint *)((int)puVar26 + 4);
        uVar24 = *puVar26;
        if ((uVar23 & 0x18000000) == 0) {
          cVar11 = (**(code **)(iVar13 + 0x10))(uVar14,uVar24);
        }
        else {
          uVar12 = (undefined1)uVar24;
          if (uVar24 < 0x80) {
            local_250 = uVar24 & 0xff;
            puVar15 = (undefined1 *)0x1;
          }
          else {
            uVar19 = (undefined1)(uVar24 >> 6);
            if (uVar24 < 0x800) {
              puVar15 = (undefined1 *)0x2;
              local_250 = (ushort)(CONCAT11(uVar12,uVar19) | 0xc0) & 0xffff3fff | 0x8000;
            }
            else {
              uVar21 = (undefined1)(uVar24 >> 0xc);
              param_2 = local_240;
              if (uVar24 < 0x10000) {
                puVar15 = (undefined1 *)0x3;
                local_250 = (CONCAT12(uVar12,CONCAT11(uVar19,uVar21)) & 0xff3fff | 0x80e0) &
                            0xff3fffff | 0x800000;
              }
              else {
                puVar15 = &DAT_00000004;
                local_250 = CONCAT13(uVar12,CONCAT12(uVar19,CONCAT11(uVar21,(char)(uVar24 >> 0x12)))
                                    ) & 0x3f3f3fff | 0x808080f0;
              }
            }
          }
          cVar11 = FUN_10093f00(param_2,(undefined1 (*) [16])&local_250,puVar15);
        }
        if (cVar11 != '\0') break;
        local_224 = local_224 + -4;
        if (local_224 == 0) {
          return 0;
        }
      }
      return CONCAT31((int3)((uint)param_2 >> 8),1);
    }
    iVar13 = 0;
    uVar24 = (int)(((ulonglong)unaff_EBX / (ulonglong)local_21c) / (ulonglong)uVar23) +
             (int)((ulonglong)unaff_EBX / (ulonglong)local_21c);
    if (0x1c7 < uVar24) {
      iVar13 = 0;
      uVar20 = uVar24;
      do {
        iVar13 = iVar13 + 0x24;
        uVar24 = uVar20 / 0x23;
        bVar27 = 0x3e57 < uVar20;
        uVar20 = uVar24;
      } while (bVar27);
    }
    cVar11 = *local_254;
    local_21c = 2;
    uVar24 = (uVar24 * 0x24 & 0xffff) / (uVar24 + 0x26 & 0xffff) + iVar13;
    uVar20 = local_244 + 1;
    local_218 = local_218 + 1;
    local_24c = uVar23;
  } while( true );
}
