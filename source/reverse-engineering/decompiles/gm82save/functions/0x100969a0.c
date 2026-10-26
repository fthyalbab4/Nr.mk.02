// rea decompile_all
// name: FUN_100969a0
// address: 0x100969a0
// body: available
// range: 0x100969a0-0x100969e7 inclusive
// range: 0x100969f0-0x10096a3d inclusive
// range: 0x10096a40-0x10096a6b inclusive
// range: 0x10096a70-0x10096ac2 inclusive
// range: 0x10096ad0-0x10096b5c inclusive
// range: 0x10096b60-0x10096bd6 inclusive
// range: 0x10096be0-0x10096c06 inclusive
// range: 0x10096c10-0x10096c85 inclusive
// range: 0x10096c90-0x10096fb6 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall
FUN_100969a0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,void *param_4,uint param_5)

{
  ushort *puVar1;
  byte bVar2;
  ushort uVar3;
  code *pcVar4;
  undefined1 auVar5 [15];
  undefined1 auVar6 [14];
  undefined1 auVar7 [14];
  undefined1 auVar8 [14];
  undefined1 auVar9 [14];
  undefined1 auVar10 [14];
  undefined1 auVar11 [14];
  undefined1 auVar12 [15];
  undefined1 auVar13 [15];
  undefined1 auVar14 [15];
  undefined1 auVar15 [15];
  undefined1 auVar16 [15];
  undefined1 auVar17 [15];
  undefined1 auVar18 [15];
  undefined1 auVar19 [15];
  undefined1 auVar20 [15];
  undefined1 auVar21 [15];
  undefined1 auVar22 [15];
  undefined1 auVar23 [15];
  undefined1 auVar24 [15];
  undefined1 auVar25 [15];
  undefined1 auVar26 [15];
  undefined1 auVar27 [15];
  undefined1 auVar28 [15];
  undefined1 auVar29 [15];
  undefined1 auVar30 [15];
  undefined1 auVar31 [15];
  uint _Size;
  int iVar32;
  uint uVar33;
  ushort *puVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  byte *pbVar40;
  undefined4 uVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  ushort uVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  uint local_2c;
  uint local_28;
  uint local_24;

  if (param_5 == 1) {
    _Size = 0;
    local_2c = 1;
    uVar35 = 0;
    local_24 = 1;
  }
  else {
    uVar33 = 1;
    uVar36 = 0;
    _Size = 0;
    local_2c = 1;
    uVar35 = 1;
    do {
      uVar39 = _Size + uVar36;
      if (param_5 <= uVar39) goto LAB_10096f88;
      if (*(byte *)((int)param_4 + uVar33) < *(byte *)((int)param_4 + uVar39)) {
        uVar39 = uVar35 + 1 + uVar36;
        uVar36 = 0;
        local_2c = uVar39 - _Size;
      }
      else if (*(byte *)((int)param_4 + uVar33) == *(byte *)((int)param_4 + uVar39)) {
        uVar36 = uVar36 + 1;
        if (uVar36 == local_2c) {
          uVar39 = uVar36;
          uVar36 = 0;
        }
        else {
          uVar39 = 0;
        }
        uVar39 = uVar35 + uVar39;
      }
      else {
        uVar39 = uVar35 + 1;
        uVar36 = 0;
        local_2c = 1;
        _Size = uVar35;
      }
      uVar33 = uVar39 + uVar36;
      uVar35 = uVar39;
    } while (uVar33 < param_5);
    uVar33 = 1;
    uVar36 = 0;
    uVar35 = 0;
    local_24 = 1;
    uVar38 = 1;
    do {
      uVar39 = uVar35 + uVar36;
      if (param_5 <= uVar39) {
LAB_10096f88:
        FUN_10136b52(uVar39,param_5,&PTR_s_C__Users_runneradmin__rustup_too_101455d4);
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      if (*(byte *)((int)param_4 + uVar39) < *(byte *)((int)param_4 + uVar33)) {
        uVar39 = uVar38 + 1 + uVar36;
        uVar36 = 0;
        local_24 = uVar39 - uVar35;
      }
      else if (*(byte *)((int)param_4 + uVar33) == *(byte *)((int)param_4 + uVar39)) {
        uVar36 = uVar36 + 1;
        if (uVar36 == local_24) {
          uVar39 = uVar36;
          uVar36 = 0;
        }
        else {
          uVar39 = 0;
        }
        uVar39 = uVar38 + uVar39;
      }
      else {
        uVar39 = uVar38 + 1;
        uVar36 = 0;
        local_24 = 1;
        uVar35 = uVar38;
      }
      uVar33 = uVar39 + uVar36;
      uVar38 = uVar39;
    } while (uVar33 < param_5);
  }
  if (_Size <= uVar35) {
    local_2c = local_24;
    _Size = uVar35;
  }
  if (param_5 < _Size) {
    FUN_10136a50(0,_Size,param_5,&PTR_s_C__Users_runneradmin__rustup_too_10145614);
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  if ((CARRY4(local_2c,_Size)) || (param_5 < local_2c + _Size)) {
    FUN_10136a50(local_2c,local_2c + _Size,param_5,&PTR_s_C__Users_runneradmin__rustup_too_10145604)
    ;
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  iVar32 = memcmp(param_4,(void *)((int)param_4 + local_2c),_Size);
  auVar5 = DAT_1013ec50._0_15_;
  if (iVar32 == 0) {
    uVar35 = 1;
    uVar36 = 0;
    uVar33 = 1;
    local_24 = 0;
    do {
      while( true ) {
        uVar39 = uVar33;
        if (param_5 <= uVar39 + uVar36) goto LAB_10096bf3;
        uVar33 = (param_5 - uVar36) + ~uVar39;
        if (param_5 <= uVar33) goto LAB_10096f97;
        uVar38 = (param_5 - 1) - (local_24 + uVar36);
        if (param_5 <= uVar38) goto LAB_10096fa6;
        if (*(byte *)((int)param_4 + uVar38) <= *(byte *)((int)param_4 + uVar33)) break;
        uVar33 = uVar36 + 1 + uVar39;
        uVar36 = 0;
        uVar35 = uVar33 - local_24;
LAB_10096b6a:
        if (uVar35 == local_2c) goto LAB_10096bf3;
      }
      if (*(byte *)((int)param_4 + uVar33) == *(byte *)((int)param_4 + uVar38)) {
        uVar33 = uVar36 + 1;
        if (uVar33 == uVar35) {
          uVar36 = 0;
        }
        else {
          uVar36 = uVar33;
          uVar33 = 0;
        }
        uVar33 = uVar33 + uVar39;
        goto LAB_10096b6a;
      }
      uVar36 = 0;
      uVar35 = 1;
      uVar33 = uVar39 + 1;
      local_24 = uVar39;
    } while (local_2c != 1);
LAB_10096bf3:
    uVar37 = 1;
    uVar35 = 0;
    uVar39 = 0;
    uVar36 = 1;
LAB_10096c25:
    do {
      if (param_5 <= uVar36 + uVar35) break;
      uVar33 = (param_5 - uVar35) + ~uVar36;
      if (param_5 <= uVar33) {
LAB_10096f97:
        FUN_10136b52(uVar33,param_5,&PTR_s_C__Users_runneradmin__rustup_too_101455e4);
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      uVar38 = (param_5 - 1) - (uVar39 + uVar35);
      if (param_5 <= uVar38) {
LAB_10096fa6:
        FUN_10136b52(uVar38,param_5,&PTR_s_C__Users_runneradmin__rustup_too_101455f4);
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      if (*(byte *)((int)param_4 + uVar38) < *(byte *)((int)param_4 + uVar33)) {
        uVar36 = uVar35 + 1 + uVar36;
        uVar35 = 0;
        uVar37 = uVar36 - uVar39;
LAB_10096c1a:
        if (uVar37 == local_2c) break;
        goto LAB_10096c25;
      }
      if (*(byte *)((int)param_4 + uVar33) == *(byte *)((int)param_4 + uVar38)) {
        uVar33 = uVar35 + 1;
        if (uVar33 == uVar37) {
          uVar35 = 0;
        }
        else {
          uVar35 = uVar33;
          uVar33 = 0;
        }
        uVar36 = uVar33 + uVar36;
        goto LAB_10096c1a;
      }
      uVar35 = 0;
      uVar37 = 1;
      uVar39 = uVar36;
      uVar36 = uVar36 + 1;
    } while (local_2c != 1);
    if (local_24 < uVar39) {
      local_24 = uVar39;
    }
    local_24 = param_5 - local_24;
    if (local_2c == 0) {
      local_2c = 0;
      uVar36 = 0;
      uVar33 = 0;
    }
    else {
      if (local_2c < 4) {
        uVar35 = 0;
        uVar36 = 0;
        uVar33 = 0;
      }
      else {
        uVar35 = local_2c & 0xfffffffc;
        auVar44 = ZEXT816(0);
        auVar43 = ZEXT816(0);
        puVar34 = (ushort *)((int)param_4 + 2);
        uVar33 = uVar35;
        do {
          puVar1 = puVar34 + -1;
          uVar3 = *puVar34;
          puVar34 = puVar34 + 2;
          uVar33 = uVar33 - 4;
          auVar26._9_6_ = 0;
          auVar26._0_9_ = SUB159(ZEXT815(0) << 0x38,6);
          auVar27._10_5_ = 0;
          auVar27._0_10_ = SUB1510(auVar26 << 0x30,5);
          auVar28._11_4_ = 0;
          auVar28._0_11_ = SUB1511(auVar27 << 0x28,4);
          uVar45 = SUB152(ZEXT215(*puVar1) & auVar5,0);
          auVar14[2] = SUB151(ZEXT215(*puVar1) & auVar5,1);
          auVar14._0_2_ = uVar45;
          auVar14._3_12_ = SUB1512(auVar28 << 0x20,3);
          auVar18._2_13_ = auVar14._2_13_;
          auVar18._0_2_ = uVar45 & 0xff;
          auVar8._4_2_ = auVar14._2_2_;
          auVar8._0_4_ = auVar18._0_4_;
          auVar8._6_8_ = SUB148(ZEXT214(0) << 0x40,6);
          uVar36 = auVar18._0_4_ & 0xffff;
          auVar11._4_10_ = auVar8._4_10_;
          auVar11._0_4_ = uVar36;
          auVar47._8_8_ = 1L << (auVar11._0_8_ >> 0x20);
          auVar47._0_8_ = 1L << (ulonglong)uVar36;
          auVar29._9_6_ = 0;
          auVar29._0_9_ = SUB159(ZEXT815(0) << 0x38,6);
          auVar30._10_5_ = 0;
          auVar30._0_10_ = SUB1510(auVar29 << 0x30,5);
          auVar31._11_4_ = 0;
          auVar31._0_11_ = SUB1511(auVar30 << 0x28,4);
          uVar45 = SUB152(ZEXT215(uVar3) & auVar5,0);
          auVar15[2] = SUB151(ZEXT215(uVar3) & auVar5,1);
          auVar15._0_2_ = uVar45;
          auVar15._3_12_ = SUB1512(auVar31 << 0x20,3);
          auVar19._2_13_ = auVar15._2_13_;
          auVar19._0_2_ = uVar45 & 0xff;
          auVar44 = auVar44 | auVar47;
          auVar9._4_2_ = auVar15._2_2_;
          auVar9._0_4_ = auVar19._0_4_;
          auVar9._6_8_ = SUB148(ZEXT214(0) << 0x40,6);
          auVar49._8_8_ = 1L << (auVar9._4_8_ & 0xffffffff);
          auVar49._0_8_ =
               1L << (CONCAT44((int)((ulonglong)(0L << (ulonglong)uVar36) >> 0x20),auVar19._0_4_) &
                     0xffffffff0000ffff);
          auVar43 = auVar43 | auVar49;
        } while (uVar33 != 0);
        auVar43 = auVar43 | auVar44;
        auVar44._0_8_ = auVar43._8_8_;
        auVar44._8_4_ = auVar43._8_4_;
        auVar44._12_4_ = auVar43._12_4_;
        uVar36 = SUB164(auVar44 | auVar43,0);
        uVar33 = SUB164(auVar44 | auVar43,4);
        if (local_2c == uVar35) goto LAB_10096efb;
      }
      do {
        bVar2 = *(byte *)((int)param_4 + uVar35);
        uVar37 = 1 << (bVar2 & 0x1f);
        uVar38 = uVar37;
        uVar39 = 0 << (bVar2 & 0x1f) | 1U >> 0x20 - (bVar2 & 0x1f);
        if ((bVar2 & 0x20) != 0) {
          uVar38 = 0;
          uVar39 = uVar37;
        }
        uVar35 = uVar35 + 1;
        uVar33 = uVar33 | uVar39;
        uVar36 = uVar36 | uVar38;
      } while (local_2c != uVar35);
    }
LAB_10096efb:
    uVar41 = 0;
    local_28 = param_5;
    goto LAB_10096f03;
  }
  if (param_5 < 4) {
    uVar35 = 0;
    uVar36 = 0;
    uVar33 = 0;
LAB_10096d96:
    iVar32 = param_5 - uVar35;
    pbVar40 = (byte *)(uVar35 + (int)param_4);
    do {
      bVar2 = *pbVar40;
      uVar38 = 1 << (bVar2 & 0x1f);
      uVar39 = uVar38;
      uVar35 = 0 << (bVar2 & 0x1f) | 1U >> 0x20 - (bVar2 & 0x1f);
      if ((bVar2 & 0x20) != 0) {
        uVar39 = 0;
        uVar35 = uVar38;
      }
      pbVar40 = pbVar40 + 1;
      uVar33 = uVar33 | uVar35;
      uVar36 = uVar36 | uVar39;
      iVar32 = iVar32 + -1;
    } while (iVar32 != 0);
  }
  else {
    puVar34 = (ushort *)((int)param_4 + 2);
    auVar44 = ZEXT816(0);
    auVar43 = ZEXT816(0);
    uVar35 = param_5 & 0x1c;
    uVar33 = uVar35;
    do {
      puVar1 = puVar34 + -1;
      uVar3 = *puVar34;
      puVar34 = puVar34 + 2;
      uVar33 = uVar33 - 4;
      auVar20._9_6_ = 0;
      auVar20._0_9_ = SUB159(ZEXT815(0) << 0x38,6);
      auVar21._10_5_ = 0;
      auVar21._0_10_ = SUB1510(auVar20 << 0x30,5);
      auVar22._11_4_ = 0;
      auVar22._0_11_ = SUB1511(auVar21 << 0x28,4);
      uVar45 = SUB152(ZEXT215(*puVar1) & auVar5,0);
      auVar12[2] = SUB151(ZEXT215(*puVar1) & auVar5,1);
      auVar12._0_2_ = uVar45;
      auVar12._3_12_ = SUB1512(auVar22 << 0x20,3);
      auVar16._2_13_ = auVar12._2_13_;
      auVar16._0_2_ = uVar45 & 0xff;
      auVar6._4_2_ = auVar12._2_2_;
      auVar6._0_4_ = auVar16._0_4_;
      auVar6._6_8_ = SUB148(ZEXT214(0) << 0x40,6);
      uVar36 = auVar16._0_4_ & 0xffff;
      auVar10._4_10_ = auVar6._4_10_;
      auVar10._0_4_ = uVar36;
      auVar46._8_8_ = 1L << (auVar10._0_8_ >> 0x20);
      auVar46._0_8_ = 1L << (ulonglong)uVar36;
      auVar23._9_6_ = 0;
      auVar23._0_9_ = SUB159(ZEXT815(0) << 0x38,6);
      auVar24._10_5_ = 0;
      auVar24._0_10_ = SUB1510(auVar23 << 0x30,5);
      auVar25._11_4_ = 0;
      auVar25._0_11_ = SUB1511(auVar24 << 0x28,4);
      uVar45 = SUB152(ZEXT215(uVar3) & auVar5,0);
      auVar13[2] = SUB151(ZEXT215(uVar3) & auVar5,1);
      auVar13._0_2_ = uVar45;
      auVar13._3_12_ = SUB1512(auVar25 << 0x20,3);
      auVar17._2_13_ = auVar13._2_13_;
      auVar17._0_2_ = uVar45 & 0xff;
      auVar44 = auVar44 | auVar46;
      auVar7._4_2_ = auVar13._2_2_;
      auVar7._0_4_ = auVar17._0_4_;
      auVar7._6_8_ = SUB148(ZEXT214(0) << 0x40,6);
      auVar48._8_8_ = 1L << (auVar7._4_8_ & 0xffffffff);
      auVar48._0_8_ =
           1L << (CONCAT44((int)((ulonglong)(0L << (ulonglong)uVar36) >> 0x20),auVar17._0_4_) &
                 0xffffffff0000ffff);
      auVar43 = auVar43 | auVar48;
    } while (uVar33 != 0);
    auVar43 = auVar43 | auVar44;
    auVar42._0_8_ = auVar43._8_8_;
    auVar42._8_4_ = auVar43._8_4_;
    auVar42._12_4_ = auVar43._12_4_;
    uVar36 = SUB164(auVar42 | auVar43,0);
    uVar33 = SUB164(auVar42 | auVar43,4);
    if (param_5 != uVar35) goto LAB_10096d96;
  }
  uVar41 = 0xffffffff;
  local_28 = 0xffffffff;
  local_2c = param_5 - _Size;
  if (param_5 - _Size <= _Size) {
    local_2c = _Size;
  }
  local_2c = local_2c + 1;
  local_24 = _Size;
LAB_10096f03:
  param_1[0xc] = param_2;
  param_1[0xd] = param_3;
  param_1[0xe] = param_4;
  param_1[0xf] = param_5;
  *param_1 = 1;
  param_1[2] = uVar36;
  param_1[3] = uVar33;
  param_1[4] = _Size;
  param_1[5] = local_24;
  param_1[6] = local_2c;
  param_1[7] = 0;
  param_1[8] = param_3;
  param_1[9] = uVar41;
  param_1[10] = local_28;
  return;
}
