// rea decompile_all
// name: FUN_1002d2b0
// address: 0x1002d2b0
// body: available
// range: 0x1002d2b0-0x1002d381 inclusive
// range: 0x1002d390-0x1002d3cc inclusive
// range: 0x1002d3d0-0x1002d7cc inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x1002d348) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 __fastcall FUN_1002d2b0(int *param_1,uint param_2,uint param_3,uint param_4,int *param_5)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined1 uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  byte *pbVar12;
  uint uVar13;
  uint uVar14;
  byte *pbVar15;
  uint *puVar16;
  uint uVar17;
  uint *puVar18;
  uint uVar19;
  uint uVar20;
  uint local_7c;
  undefined1 local_70 [2];
  undefined1 auStack_6e [2];
  uint local_6c;
  uint local_68;
  uint local_64;
  uint local_60;
  uint local_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  uint local_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  int *local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  undefined8 local_28;
  undefined8 local_20;

  local_58 = (uint)param_1 ^ 0x70736575;
  uStack_54 = param_2 ^ 0x736f6d65;
  uStack_50 = (uint)param_1 ^ 0x6e657261;
  uStack_4c = param_2 ^ 0x6c796765;
  pbVar12 = (byte *)param_5[2];
  local_48 = param_3 ^ 0x6e646f6d;
  uStack_44 = param_4 ^ 0x646f7261;
  uStack_40 = param_3 ^ 0x79746573;
  uStack_3c = param_4 ^ 0x74656462;
  local_30 = param_3;
  iVar9 = param_5[3];
  local_2c = param_4;
  local_28 = 0;
  local_20 = 0;
  local_38 = param_1;
  local_34 = param_2;
  if (*param_5 == 1) {
    pbVar15 = pbVar12 + iVar9;
    _local_70 = 0;
LAB_1002d370:
    if (pbVar12 != pbVar15) {
      bVar2 = *pbVar12;
      uVar10 = (uint)bVar2;
      if ((char)bVar2 < '\0') {
        pbVar1 = pbVar12 + 1;
        if (bVar2 < 0xe0) {
          pbVar12 = pbVar12 + 2;
          uVar10 = (uVar10 & 0x1f) << 6 | *pbVar1 & 0x3f;
        }
        else {
          uVar7 = pbVar12[2] & 0x3f | (*pbVar1 & 0x3f) << 6;
          if (bVar2 < 0xf0) {
            pbVar12 = pbVar12 + 3;
            uVar10 = uVar7 | (uVar10 & 0x1f) << 0xc;
          }
          else {
            pbVar1 = pbVar12 + 3;
            pbVar12 = pbVar12 + 4;
            uVar10 = *pbVar1 & 0x3f | uVar7 << 6 | (uVar10 & 7) << 0x12;
          }
        }
      }
      else {
        pbVar12 = pbVar12 + 1;
      }
      FUN_1011fc20(&local_6c,uVar10);
      uVar10 = local_68;
      uVar7 = _local_70;
      uVar3 = local_6c;
      local_7c = local_64;
      if (local_6c == 0xffffffff) goto LAB_1002d5ab;
      while (_local_70 = uVar7, uVar3 != 0xffffffff) {
        iVar9 = uVar3 - 0x110000;
        if (uVar3 < 0x110000) {
          iVar9 = 3;
        }
        if (iVar9 == 0) break;
        uVar4 = uVar10;
        if (iVar9 == 1) {
          uVar6 = 0x110000;
          uVar5 = uVar10;
        }
        else if (iVar9 == 2) {
          uVar6 = 0x110001;
          uVar5 = local_7c;
        }
        else {
          uVar6 = 0x110002;
          uVar5 = uVar3;
          uVar4 = local_7c;
          local_7c = uVar10;
        }
        if (uVar4 == 0xffffffff) goto LAB_1002d5ab;
        local_60 = uVar6;
        uVar8 = (undefined1)uVar4;
        if (uVar4 < 0x80) {
          _local_70 = CONCAT31((int3)(uVar7 >> 8),uVar8);
          puVar16 = (uint *)(local_70 + 1);
        }
        else {
          auStack_6e = SUB42(uVar7 >> 0x10,0);
          if (uVar4 < 0x800) {
            puVar16 = (uint *)(local_70 + 2);
            _local_70 = CONCAT22(auStack_6e,CONCAT11(uVar8,(char)(uVar4 >> 6))) & 0xffff3fff |
                        0x80c0;
          }
          else if (uVar4 < 0x10000) {
            puVar16 = (uint *)(local_70 + 3);
            uVar10 = CONCAT22(auStack_6e,CONCAT11((char)(uVar4 >> 6),(char)(uVar4 >> 0xc))) &
                     0xffff3fff;
            auStack_6e[1] = (undefined1)(uVar10 >> 0x18);
            _local_70 = CONCAT13(auStack_6e[1],CONCAT12(uVar8,(short)uVar10)) & 0xff3fffff |
                        0x8080e0;
          }
          else {
            puVar16 = &local_6c;
            _local_70 = (uVar4 << 0x18 |
                        (uVar4 & 0x3fc0) << 10 | uVar4 >> 4 & 0xff00 | uVar4 >> 0x12) &
                        (uint)DAT_1013e540 | (uint)DAT_1013e550;
          }
        }
        puVar18 = (uint *)local_70;
        do {
          uVar10 = *puVar18;
          puVar18 = (uint *)((int)puVar18 + 1);
          local_6c = CONCAT31(local_6c._1_3_,(char)uVar10);
          FUN_100a8280(&local_58,&local_6c,1);
          uVar10 = uVar5;
          uVar7 = _local_70;
          uVar3 = local_60;
        } while (puVar18 != puVar16);
      }
      goto LAB_1002d370;
    }
  }
  else if (iVar9 != 0) {
    do {
      bVar2 = *pbVar12;
      pbVar12 = pbVar12 + 1;
      local_6c = CONCAT31(local_6c._1_3_,((byte)(bVar2 + 0xbf) < 0x1a) << 5 | bVar2);
      FUN_100a8280(&local_58,&local_6c,1);
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
LAB_1002d5ab:
  local_6c = CONCAT31(local_6c._1_3_,0xff);
  FUN_100a8280(&local_58,&local_6c,1);
  local_28._4_4_ = (int)local_20 << 0x18 | local_28._4_4_;
  uStack_3c = uStack_3c ^ local_28._4_4_;
  uStack_40 = uStack_40 ^ (uint)local_28;
  uVar3 = uStack_54 + uStack_44 + (uint)CARRY4(local_58,local_48);
  uVar13 = uStack_50 + uStack_40;
  uVar10 = uStack_4c + uStack_3c + (uint)CARRY4(uStack_50,uStack_40);
  uVar4 = (local_48 << 0xd | uStack_44 >> 0x13) ^ local_58 + local_48;
  uVar11 = (uStack_40 >> 0x10 | uStack_3c << 0x10) ^ uVar10;
  uVar5 = (uStack_40 << 0x10 | uStack_3c >> 0x10) ^ uVar13;
  uVar17 = (uStack_44 << 0xd | local_48 >> 0x13) ^ uVar3;
  uVar10 = uVar10 + uVar17 + (uint)CARRY4(uVar13,uVar4);
  uVar7 = local_58 + local_48 + uVar11 + (uint)CARRY4(uVar3,uVar5);
  uVar19 = (uVar4 << 0x11 | uVar17 >> 0xf) ^ uVar13 + uVar4;
  uVar6 = (uVar5 >> 0xb | uVar11 << 0x15) ^ uVar7;
  uVar14 = (uVar5 << 0x15 | uVar11 >> 0xb) ^ uVar3 + uVar5;
  local_28._0_4_ = uVar3 + uVar5 ^ (uint)local_28;
  uVar3 = (uVar4 >> 0xf | uVar17 << 0x11) ^ uVar10;
  uVar10 = uVar10 ^ 0xff;
  uVar5 = (uint)local_28 + uVar19;
  uVar7 = (uVar7 ^ local_28._4_4_) + uVar3 + (uint)CARRY4((uint)local_28,uVar19);
  uVar11 = uVar10 + uVar14;
  uVar10 = uVar13 + uVar4 + uVar6 + (uint)CARRY4(uVar10,uVar14);
  uVar20 = (uVar19 >> 0x13 | uVar3 << 0xd) ^ uVar7;
  uVar13 = (uVar19 << 0xd | uVar3 >> 0x13) ^ uVar5;
  uVar17 = (uVar14 >> 0x10 | uVar6 << 0x10) ^ uVar10;
  uVar14 = (uVar14 << 0x10 | uVar6 >> 0x10) ^ uVar11;
  uVar4 = uVar10 + uVar20 + (uint)CARRY4(uVar11,uVar13);
  uVar3 = uVar7 + uVar14;
  uVar10 = uVar5 + uVar17 + (uint)CARRY4(uVar7,uVar14);
  uVar5 = (uVar13 << 0x11 | uVar20 >> 0xf) ^ uVar11 + uVar13;
  uVar6 = (uVar13 >> 0xf | uVar20 << 0x11) ^ uVar4;
  uVar19 = (uVar14 << 0x15 | uVar17 >> 0xb) ^ uVar3;
  uVar17 = (uVar14 >> 0xb | uVar17 << 0x15) ^ uVar10;
  uVar14 = uVar10 + uVar6 + (uint)CARRY4(uVar3,uVar5);
  uVar10 = uVar4 + uVar19;
  uVar7 = uVar11 + uVar13 + uVar17 + (uint)CARRY4(uVar4,uVar19);
  uVar4 = (uVar5 << 0xd | uVar6 >> 0x13) ^ uVar3 + uVar5;
  uVar6 = (uVar5 >> 0x13 | uVar6 << 0xd) ^ uVar14;
  uVar13 = (uVar19 << 0x10 | uVar17 >> 0x10) ^ uVar10;
  uVar20 = (uVar19 >> 0x10 | uVar17 << 0x10) ^ uVar7;
  uVar17 = uVar7 + uVar6 + (uint)CARRY4(uVar10,uVar4);
  uVar19 = uVar14 + uVar13;
  uVar7 = uVar3 + uVar5 + uVar20 + (uint)CARRY4(uVar14,uVar13);
  uVar11 = (uVar4 << 0x11 | uVar6 >> 0xf) ^ uVar10 + uVar4;
  uVar5 = (uVar4 >> 0xf | uVar6 << 0x11) ^ uVar17;
  uVar6 = (uVar13 << 0x15 | uVar20 >> 0xb) ^ uVar19;
  uVar13 = (uVar13 >> 0xb | uVar20 << 0x15) ^ uVar7;
  uVar3 = uVar17 + uVar6;
  uVar10 = uVar10 + uVar4 + uVar13 + (uint)CARRY4(uVar17,uVar6);
  uVar14 = (uVar11 << 0xd | uVar5 >> 0x13) ^ uVar19 + uVar11;
  uVar4 = (uVar11 >> 0x13 | uVar5 << 0xd) ^ uVar7 + uVar5 + (uint)CARRY4(uVar19,uVar11);
  uVar7 = (uVar6 >> 0x10 | uVar13 << 0x10) ^ uVar10;
  uVar5 = (uVar6 << 0x10 | uVar13 >> 0x10) ^ uVar3;
  uVar10 = uVar10 + uVar4 + (uint)CARRY4(uVar3,uVar14);
  return CONCAT44((uVar4 << 0x11 | uVar14 >> 0xf) ^ uVar3 + uVar14 ^ (uVar5 >> 0xb | uVar7 << 0x15)
                  ^ uVar10,(uVar14 << 0x11 | uVar4 >> 0xf) ^ uVar10 ^ (uVar5 << 0x15 | uVar7 >> 0xb)
                           ^ uVar3 + uVar14);
}
