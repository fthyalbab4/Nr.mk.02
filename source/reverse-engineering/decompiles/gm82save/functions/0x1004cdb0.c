// rea decompile_all
// name: FUN_1004cdb0
// address: 0x1004cdb0
// body: available
// range: 0x1004cdb0-0x1004cfdd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_1004cdb0(undefined4 *param_1,uint param_2,undefined8 *param_3)

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
  int local_38;
  uint local_34;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;

  uVar16 = FUN_1002e000(DAT_10163278,DAT_1016327c,DAT_10163280,DAT_10163284,param_2);
  uVar8 = (uint)uVar16;
  if (DAT_10163270 == 0) {
    FUN_101342d0(1);
  }
  pauVar6 = DAT_10163268;
  bVar5 = false;
  local_38 = 0;
  bVar7 = (byte)((ulonglong)uVar16 >> 0x18);
  bVar12 = bVar7 >> 1;
  auVar13 = ZEXT216(CONCAT11(bVar12,bVar12));
  auVar13 = pshuflw(auVar13,auVar13,0);
  do {
    uVar8 = DAT_1016326c & uVar8;
    auVar3 = *(undefined1 (*) [16])(*DAT_10163268 + uVar8);
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
    uVar11 = (uint)(ushort)((ushort)(SUB161(auVar15 >> 7,0) & 1) |
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
    while ((short)uVar11 != 0) {
      iVar4 = 0;
      for (uVar10 = uVar11; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
        iVar4 = iVar4 + 1;
      }
      uVar11 = uVar11 - 1 & uVar11;
      uVar10 = iVar4 + uVar8 & DAT_1016326c;
      if (param_2 == *(uint *)DAT_10163268[uVar10 * -2 + -2]) {
        *(undefined8 *)(param_1 + 6) = *(undefined8 *)(DAT_10163268[uVar10 * -2 + -1] + 8);
        uVar16 = param_3[1];
        uVar1 = *(undefined8 *)pauVar6[uVar10 * -2 + -1];
        *(undefined8 *)(param_1 + 2) = *(undefined8 *)(pauVar6[uVar10 * -2 + -2] + 8);
        uVar2 = *param_3;
        *(undefined8 *)(param_1 + 4) = uVar1;
        *(undefined8 *)pauVar6[uVar10 * -2 + -1] = uVar16;
        *(undefined8 *)(pauVar6[uVar10 * -2 + -2] + 8) = uVar2;
        uVar9 = 1;
        *(undefined8 *)(pauVar6[uVar10 * -2 + -1] + 8) = param_3[2];
        goto LAB_1004cf0b;
      }
    }
    if (bVar5) goto LAB_1004ce86;
    uVar11 = (uint)(ushort)((ushort)(SUB161(auVar3 >> 7,0) & 1) |
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
    if (uVar11 == 0) {
      bVar5 = false;
    }
    else {
      iVar4 = 0;
      for (; (uVar11 & 1) == 0; uVar11 = uVar11 >> 1 | 0x80000000) {
        iVar4 = iVar4 + 1;
      }
      local_34 = iVar4 + uVar8 & DAT_1016326c;
LAB_1004ce86:
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
        bVar12 = (*DAT_10163268)[local_34];
        if (-1 < (char)bVar12) {
          auVar13 = *DAT_10163268;
          local_34 = 0;
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
            local_34 = local_34 + 1;
          }
          bVar12 = (*DAT_10163268)[local_34];
        }
        DAT_10163270 = DAT_10163270 - (uint)(bVar12 & 1);
        uVar8 = local_34 - 0x10 & DAT_1016326c;
        local_18 = (undefined4)param_3[2];
        uStack_14 = (undefined4)((ulonglong)param_3[2] >> 0x20);
        local_20 = (undefined4)param_3[1];
        uStack_1c = (undefined4)((ulonglong)param_3[1] >> 0x20);
        local_28 = (undefined4)*param_3;
        uStack_24 = (undefined4)((ulonglong)*param_3 >> 0x20);
        bVar7 = bVar7 >> 1;
        (*DAT_10163268)[local_34] = bVar7;
        DAT_10163268[1][uVar8] = bVar7;
        pauVar6 = DAT_10163268;
        DAT_10163274 = DAT_10163274 + 1;
        *(uint *)DAT_10163268[local_34 * -2 + -2] = param_2;
        *(ulonglong *)(pauVar6[local_34 * -2 + -2] + 4) = CONCAT44(local_28,uStack_2c);
        *(ulonglong *)(pauVar6[local_34 * -2 + -2] + 0xc) = CONCAT44(local_20,uStack_24);
        *(ulonglong *)(pauVar6[local_34 * -2 + -1] + 4) = CONCAT44(local_18,uStack_1c);
        *(undefined4 *)(pauVar6[local_34 * -2 + -1] + 0xc) = uStack_14;
        uVar9 = 0;
LAB_1004cf0b:
        *param_1 = uVar9;
        param_1[1] = 0;
        return;
      }
      bVar5 = true;
    }
    uVar8 = local_38 + 0x10 + uVar8;
    local_38 = local_38 + 0x10;
  } while( true );
}
