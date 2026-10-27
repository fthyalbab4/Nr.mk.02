// rea decompile_all
// name: FUN_1004cb50
// address: 0x1004cb50
// body: available
// range: 0x1004cb50-0x1004cda6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_1004cb50(undefined4 *param_1,uint param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  int iVar4;
  bool bVar5;
  undefined1 (*pauVar6) [16];
  byte bVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  byte bVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined8 uVar16;
  int local_44;
  uint local_3c;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;

  uVar16 = FUN_1002e000(DAT_10163258,DAT_1016325c,DAT_10163260,DAT_10163264,param_2);
  uVar8 = (uint)uVar16;
  if (DAT_10163250 == 0) {
    FUN_10133d90(1);
  }
  pauVar6 = DAT_10163248;
  bVar5 = false;
  local_44 = 0;
  bVar7 = (byte)((ulonglong)uVar16 >> 0x18);
  bVar12 = bVar7 >> 1;
  auVar13 = ZEXT216(CONCAT11(bVar12,bVar12));
  auVar13 = pshuflw(auVar13,auVar13,0);
  do {
    uVar8 = DAT_1016324c & uVar8;
    auVar3 = *(undefined1 (*) [16])(*DAT_10163248 + uVar8);
    auVar15[0] = -(auVar3[0] == auVar13[0]);
    auVar15[1] = -(auVar3[1] == auVar13[1]);
    auVar15[2] = -(auVar3[2] == auVar13[2]);
    auVar15[3] = -(auVar3[3] == auVar13[3]);
    auVar15[4] = -(auVar3[4] == auVar13[4]);
    auVar15[5] = -(auVar3[5] == auVar13[5]);
    auVar15[6] = -(auVar3[6] == auVar13[6]);
    auVar15[7] = -(auVar3[7] == auVar13[7]);
    auVar15[8] = -(auVar3[8] == auVar13[0]);
    auVar15[9] = -(auVar3[9] == auVar13[1]);
    auVar15[10] = -(auVar3[10] == auVar13[2]);
    auVar15[0xb] = -(auVar3[0xb] == auVar13[3]);
    auVar15[0xc] = -(auVar3[0xc] == auVar13[4]);
    auVar15[0xd] = -(auVar3[0xd] == auVar13[5]);
    bVar12 = auVar3[0xf];
    auVar15[0xe] = -(auVar3[0xe] == auVar13[6]);
    auVar15[0xf] = -(bVar12 == auVar13[7]);
    uVar10 = (uint)(ushort)((ushort)(SUB161(auVar15 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar15 >> 0xf,0) & 1) << 1 |
                            (ushort)(SUB161(auVar15 >> 0x17,0) & 1) << 2 |
                            (ushort)(SUB161(auVar15 >> 0x1f,0) & 1) << 3 |
                            (ushort)(SUB161(auVar15 >> 0x27,0) & 1) << 4 |
                            (ushort)(SUB161(auVar15 >> 0x2f,0) & 1) << 5 |
                            (ushort)(SUB161(auVar15 >> 0x37,0) & 1) << 6 |
                            (ushort)(SUB161(auVar15 >> 0x3f,0) & 1) << 7 |
                            (ushort)(SUB161(auVar15 >> 0x47,0) & 1) << 8 |
                            (ushort)(SUB161(auVar15 >> 0x4f,0) & 1) << 9 |
                            (ushort)(SUB161(auVar15 >> 0x57,0) & 1) << 10 |
                            (ushort)(SUB161(auVar15 >> 0x5f,0) & 1) << 0xb |
                            (ushort)(SUB161(auVar15 >> 0x67,0) & 1) << 0xc |
                            (ushort)(SUB161(auVar15 >> 0x6f,0) & 1) << 0xd |
                            (ushort)(SUB161(auVar15 >> 0x77,0) & 1) << 0xe |
                           (ushort)(auVar15[0xf] >> 7) << 0xf);
    while ((short)uVar10 != 0) {
      iVar4 = 0;
      for (uVar11 = uVar10; (uVar11 & 1) == 0; uVar11 = uVar11 >> 1 | 0x80000000) {
        iVar4 = iVar4 + 1;
      }
      uVar10 = uVar10 - 1 & uVar10;
      uVar11 = iVar4 + uVar8 & DAT_1016324c;
      if (param_2 == *(uint *)((int)DAT_10163248 + uVar11 * -0x28 + -0x28)) {
        uVar16 = param_3[1];
        *(undefined8 *)(param_1 + 8) = *(undefined8 *)((int)DAT_10163248 + uVar11 * -0x28 + -8);
        *(undefined8 *)(param_1 + 6) = *(undefined8 *)((int)pauVar6 + uVar11 * -0x28 + -0x10);
        uVar1 = *(undefined8 *)((int)pauVar6 + uVar11 * -0x28 + -0x18);
        *(undefined8 *)(param_1 + 2) = *(undefined8 *)((int)pauVar6 + uVar11 * -0x28 + -0x20);
        uVar2 = *param_3;
        *(undefined8 *)(param_1 + 4) = uVar1;
        *(undefined8 *)((int)pauVar6 + uVar11 * -0x28 + -0x18) = uVar16;
        *(undefined8 *)((int)pauVar6 + uVar11 * -0x28 + -0x20) = uVar2;
        *(undefined8 *)((int)pauVar6 + uVar11 * -0x28 + -0x10) = param_3[2];
        *(undefined8 *)((int)pauVar6 + uVar11 * -0x28 + -8) = param_3[3];
        uVar9 = 1;
        goto LAB_1004ccc0;
      }
    }
    if (bVar5) goto LAB_1004cc2b;
    uVar10 = (uint)(ushort)((ushort)(SUB161(auVar3 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar3 >> 0xf,0) & 1) << 1 |
                            (ushort)(SUB161(auVar3 >> 0x17,0) & 1) << 2 |
                            (ushort)(SUB161(auVar3 >> 0x1f,0) & 1) << 3 |
                            (ushort)(SUB161(auVar3 >> 0x27,0) & 1) << 4 |
                            (ushort)(SUB161(auVar3 >> 0x2f,0) & 1) << 5 |
                            (ushort)(SUB161(auVar3 >> 0x37,0) & 1) << 6 |
                            (ushort)(SUB161(auVar3 >> 0x3f,0) & 1) << 7 |
                            (ushort)(SUB161(auVar3 >> 0x47,0) & 1) << 8 |
                            (ushort)(SUB161(auVar3 >> 0x4f,0) & 1) << 9 |
                            (ushort)(SUB161(auVar3 >> 0x57,0) & 1) << 10 |
                            (ushort)(SUB161(auVar3 >> 0x5f,0) & 1) << 0xb |
                            (ushort)(SUB161(auVar3 >> 0x67,0) & 1) << 0xc |
                            (ushort)(SUB161(auVar3 >> 0x6f,0) & 1) << 0xd |
                            (ushort)(SUB161(auVar3 >> 0x77,0) & 1) << 0xe |
                           (ushort)(bVar12 >> 7) << 0xf);
    if (uVar10 == 0) {
      bVar5 = false;
    }
    else {
      iVar4 = 0;
      for (; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
        iVar4 = iVar4 + 1;
      }
      local_3c = iVar4 + uVar8 & DAT_1016324c;
LAB_1004cc2b:
      auVar14[0] = -(auVar3[0] == -1);
      auVar14[1] = -(auVar3[1] == -1);
      auVar14[2] = -(auVar3[2] == -1);
      auVar14[3] = -(auVar3[3] == -1);
      auVar14[4] = -(auVar3[4] == -1);
      auVar14[5] = -(auVar3[5] == -1);
      auVar14[6] = -(auVar3[6] == -1);
      auVar14[7] = -(auVar3[7] == 0xff);
      auVar14[8] = -(auVar3[8] == -1);
      auVar14[9] = -(auVar3[9] == -1);
      auVar14[10] = -(auVar3[10] == -1);
      auVar14[0xb] = -(auVar3[0xb] == -1);
      auVar14[0xc] = -(auVar3[0xc] == -1);
      auVar14[0xd] = -(auVar3[0xd] == -1);
      auVar14[0xe] = -(auVar3[0xe] == -1);
      auVar14[0xf] = -(bVar12 == 0xff);
      if ((((((((((((((((SUB161(auVar14 >> 7,0) & 1) != 0 || (SUB161(auVar14 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar14 >> 0x17,0) & 1) != 0) || (SUB161(auVar14 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar14 >> 0x27,0) & 1) != 0) || (SUB161(auVar14 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar14 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar14 >> 0x3f,0) & 1) != 0) || (SUB161(auVar14 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar14 >> 0x4f,0) & 1) != 0) || (SUB161(auVar14 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar14 >> 0x5f,0) & 1) != 0) || (SUB161(auVar14 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar14 >> 0x6f,0) & 1) != 0) || (SUB161(auVar14 >> 0x77,0) & 1) != 0) ||
          auVar14[0xf] < '\0') {
        bVar12 = (*DAT_10163248)[local_3c];
        if (-1 < (char)bVar12) {
          auVar13 = *DAT_10163248;
          local_3c = 0;
          for (uVar8 = (uint)(ushort)((ushort)(SUB161(auVar13 >> 7,0) & 1) |
                                      (ushort)(SUB161(auVar13 >> 0xf,0) & 1) << 1 |
                                      (ushort)(SUB161(auVar13 >> 0x17,0) & 1) << 2 |
                                      (ushort)(SUB161(auVar13 >> 0x1f,0) & 1) << 3 |
                                      (ushort)(SUB161(auVar13 >> 0x27,0) & 1) << 4 |
                                      (ushort)(SUB161(auVar13 >> 0x2f,0) & 1) << 5 |
                                      (ushort)(SUB161(auVar13 >> 0x37,0) & 1) << 6 |
                                      (ushort)(SUB161(auVar13 >> 0x3f,0) & 1) << 7 |
                                      (ushort)(SUB161(auVar13 >> 0x47,0) & 1) << 8 |
                                      (ushort)(SUB161(auVar13 >> 0x4f,0) & 1) << 9 |
                                      (ushort)(SUB161(auVar13 >> 0x57,0) & 1) << 10 |
                                      (ushort)(SUB161(auVar13 >> 0x5f,0) & 1) << 0xb |
                                      (ushort)(SUB161(auVar13 >> 0x67,0) & 1) << 0xc |
                                      (ushort)(SUB161(auVar13 >> 0x6f,0) & 1) << 0xd |
                                      (ushort)(SUB161(auVar13 >> 0x77,0) & 1) << 0xe |
                                     (ushort)(byte)(auVar13[0xf] >> 7) << 0xf); (uVar8 & 1) == 0;
              uVar8 = uVar8 >> 1 | 0x80000000) {
            local_3c = local_3c + 1;
          }
          bVar12 = (*DAT_10163248)[local_3c];
        }
        DAT_10163250 = DAT_10163250 - (uint)(bVar12 & 1);
        uVar8 = local_3c - 0x10 & DAT_1016324c;
        local_18 = (undefined4)param_3[3];
        uStack_14 = (undefined4)((ulonglong)param_3[3] >> 0x20);
        local_28 = (undefined4)param_3[1];
        uStack_24 = (undefined4)((ulonglong)param_3[1] >> 0x20);
        local_20 = (undefined4)param_3[2];
        uStack_1c = (undefined4)((ulonglong)param_3[2] >> 0x20);
        local_30 = (undefined4)*param_3;
        uStack_2c = (undefined4)((ulonglong)*param_3 >> 0x20);
        bVar7 = bVar7 >> 1;
        (*DAT_10163248)[local_3c] = bVar7;
        DAT_10163248[1][uVar8] = bVar7;
        pauVar6 = DAT_10163248;
        DAT_10163254 = DAT_10163254 + 1;
        *(uint *)((int)DAT_10163248 + local_3c * -0x28 + -0x28) = param_2;
        *(ulonglong *)((int)pauVar6 + local_3c * -0x28 + -0x24) = CONCAT44(local_30,uStack_34);
        *(ulonglong *)((int)pauVar6 + local_3c * -0x28 + -0x1c) = CONCAT44(local_28,uStack_2c);
        *(ulonglong *)((int)pauVar6 + local_3c * -0x28 + -0x14) = CONCAT44(local_20,uStack_24);
        *(ulonglong *)((int)pauVar6 + local_3c * -0x28 + -0xc) = CONCAT44(local_18,uStack_1c);
        *(undefined4 *)((int)pauVar6 + local_3c * -0x28 + -4) = uStack_14;
        uVar9 = 0;
LAB_1004ccc0:
        *param_1 = uVar9;
        param_1[1] = 0;
        return;
      }
      bVar5 = true;
    }
    uVar8 = local_44 + 0x10 + uVar8;
    local_44 = local_44 + 0x10;
  } while( true );
}
