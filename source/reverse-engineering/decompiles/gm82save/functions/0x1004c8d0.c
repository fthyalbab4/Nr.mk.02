// rea decompile_all
// name: FUN_1004c8d0
// address: 0x1004c8d0
// body: available
// range: 0x1004c8d0-0x1004cb42 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_1004c8d0(undefined4 *param_1,uint *param_2)

{
  uint uVar1;
  undefined1 (*pauVar2) [16];
  uint uVar3;
  uint uVar4;
  bool bVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  void *_Buf2;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  byte bVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  char cVar19;
  char cVar20;
  char cVar21;
  char cVar22;
  char cVar23;
  char cVar24;
  char cVar25;
  undefined8 uVar26;
  byte bVar15;

  uVar26 = FUN_1002d7d0(param_1[4],param_1[5],param_1[6],param_1[7],param_2);
  if (param_1[2] == 0) {
    FUN_10132630(param_1,param_1 + 4);
  }
  uVar1 = param_1[1];
  pauVar2 = (undefined1 (*) [16])*param_1;
  uVar10 = uVar1 & (uint)uVar26;
  bVar6 = (byte)((ulonglong)uVar26 >> 0x18);
  bVar12 = bVar6 >> 1;
  auVar13 = ZEXT216(CONCAT11(bVar12,bVar12));
  auVar13 = pshuflw(auVar13,auVar13,0);
  cVar23 = auVar13[4];
  cVar24 = auVar13[5];
  cVar25 = auVar13[6];
  bVar12 = auVar13[7];
  cVar19 = auVar13[0];
  cVar20 = auVar13[1];
  cVar21 = auVar13[2];
  cVar22 = auVar13[3];
  puVar9 = param_2;
  if (param_2 == (uint *)0x0) {
    iVar8 = 0;
    bVar5 = false;
    do {
      auVar13 = *(undefined1 (*) [16])(*pauVar2 + uVar10);
      auVar18[0] = -(auVar13[0] == cVar19);
      auVar18[1] = -(auVar13[1] == cVar20);
      auVar18[2] = -(auVar13[2] == cVar21);
      auVar18[3] = -(auVar13[3] == cVar22);
      auVar18[4] = -(auVar13[4] == cVar23);
      auVar18[5] = -(auVar13[5] == cVar24);
      auVar18[6] = -(auVar13[6] == cVar25);
      auVar18[7] = -(auVar13[7] == bVar12);
      auVar18[8] = -(auVar13[8] == cVar19);
      auVar18[9] = -(auVar13[9] == cVar20);
      auVar18[10] = -(auVar13[10] == cVar21);
      auVar18[0xb] = -(auVar13[0xb] == cVar22);
      auVar18[0xc] = -(auVar13[0xc] == cVar23);
      auVar18[0xd] = -(auVar13[0xd] == cVar24);
      bVar15 = auVar13[0xf];
      auVar18[0xe] = -(auVar13[0xe] == cVar25);
      auVar18[0xf] = -(bVar15 == bVar12);
      uVar11 = (uint)(ushort)((ushort)(SUB161(auVar18 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar18 >> 0xf,0) & 1) << 1 |
                              (ushort)(SUB161(auVar18 >> 0x17,0) & 1) << 2 |
                              (ushort)(SUB161(auVar18 >> 0x1f,0) & 1) << 3 |
                              (ushort)(SUB161(auVar18 >> 0x27,0) & 1) << 4 |
                              (ushort)(SUB161(auVar18 >> 0x2f,0) & 1) << 5 |
                              (ushort)(SUB161(auVar18 >> 0x37,0) & 1) << 6 |
                              (ushort)(SUB161(auVar18 >> 0x3f,0) & 1) << 7 |
                              (ushort)(SUB161(auVar18 >> 0x47,0) & 1) << 8 |
                              (ushort)(SUB161(auVar18 >> 0x4f,0) & 1) << 9 |
                              (ushort)(SUB161(auVar18 >> 0x57,0) & 1) << 10 |
                              (ushort)(SUB161(auVar18 >> 0x5f,0) & 1) << 0xb |
                              (ushort)(SUB161(auVar18 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar18 >> 0x6f,0) & 1) << 0xd |
                              (ushort)(SUB161(auVar18 >> 0x77,0) & 1) << 0xe |
                             (ushort)(auVar18[0xf] >> 7) << 0xf);
      if (uVar11 != 0) {
        do {
          iVar7 = 0;
          for (uVar3 = uVar11; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
            iVar7 = iVar7 + 1;
          }
          iVar7 = *(int *)((int)pauVar2 + (iVar7 + uVar10 & uVar1) * -4 + -4);
          if ((iVar7 == 0) || (*(int *)(iVar7 + -4) == 0)) goto LAB_1004cada;
          uVar11 = uVar11 - 1 & uVar11;
        } while ((short)uVar11 != 0);
      }
      if (bVar5) {
LAB_1004caaa:
        auVar16[0] = -(auVar13[0] == -1);
        auVar16[1] = -(auVar13[1] == -1);
        auVar16[2] = -(auVar13[2] == -1);
        auVar16[3] = -(auVar13[3] == -1);
        auVar16[4] = -(auVar13[4] == -1);
        auVar16[5] = -(auVar13[5] == -1);
        auVar16[6] = -(auVar13[6] == -1);
        auVar16[7] = -(auVar13[7] == 0xff);
        auVar16[8] = -(auVar13[8] == -1);
        auVar16[9] = -(auVar13[9] == -1);
        auVar16[10] = -(auVar13[10] == -1);
        auVar16[0xb] = -(auVar13[0xb] == -1);
        auVar16[0xc] = -(auVar13[0xc] == -1);
        auVar16[0xd] = -(auVar13[0xd] == -1);
        auVar16[0xe] = -(auVar13[0xe] == -1);
        auVar16[0xf] = -(bVar15 == 0xff);
        if ((((((((((((((((SUB161(auVar16 >> 7,0) & 1) != 0 || (SUB161(auVar16 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar16 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar16 >> 0x1f,0) & 1) != 0) || (SUB161(auVar16 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar16 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar16 >> 0x37,0) & 1) != 0) || (SUB161(auVar16 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar16 >> 0x47,0) & 1) != 0) || (SUB161(auVar16 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar16 >> 0x57,0) & 1) != 0) || (SUB161(auVar16 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar16 >> 0x67,0) & 1) != 0) || (SUB161(auVar16 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar16 >> 0x77,0) & 1) != 0) || auVar16[0xf] < '\0') goto LAB_1004cae7;
        bVar5 = true;
      }
      else {
        uVar11 = (uint)(ushort)((ushort)(SUB161(auVar13 >> 7,0) & 1) |
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
                               (ushort)(bVar15 >> 7) << 0xf);
        if (uVar11 != 0) {
          iVar7 = 0;
          for (; (uVar11 & 1) == 0; uVar11 = uVar11 >> 1 | 0x80000000) {
            iVar7 = iVar7 + 1;
          }
          puVar9 = (uint *)(iVar7 + uVar10 & uVar1);
          goto LAB_1004caaa;
        }
        bVar5 = false;
      }
      iVar7 = iVar8 + 0x10;
      iVar8 = iVar8 + 0x10;
      uVar10 = iVar7 + uVar10 & uVar1;
    } while( true );
  }
  iVar8 = 0;
  bVar5 = false;
  do {
    auVar13 = *(undefined1 (*) [16])(*pauVar2 + uVar10);
    auVar14[0] = -(auVar13[0] == cVar19);
    auVar14[1] = -(auVar13[1] == cVar20);
    auVar14[2] = -(auVar13[2] == cVar21);
    auVar14[3] = -(auVar13[3] == cVar22);
    auVar14[4] = -(auVar13[4] == cVar23);
    auVar14[5] = -(auVar13[5] == cVar24);
    auVar14[6] = -(auVar13[6] == cVar25);
    auVar14[7] = -(auVar13[7] == bVar12);
    auVar14[8] = -(auVar13[8] == cVar19);
    auVar14[9] = -(auVar13[9] == cVar20);
    auVar14[10] = -(auVar13[10] == cVar21);
    auVar14[0xb] = -(auVar13[0xb] == cVar22);
    auVar14[0xc] = -(auVar13[0xc] == cVar23);
    auVar14[0xd] = -(auVar13[0xd] == cVar24);
    bVar15 = auVar13[0xf];
    auVar14[0xe] = -(auVar13[0xe] == cVar25);
    auVar14[0xf] = -(bVar15 == bVar12);
    uVar11 = (uint)(ushort)((ushort)(SUB161(auVar14 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar14 >> 0xf,0) & 1) << 1 |
                            (ushort)(SUB161(auVar14 >> 0x17,0) & 1) << 2 |
                            (ushort)(SUB161(auVar14 >> 0x1f,0) & 1) << 3 |
                            (ushort)(SUB161(auVar14 >> 0x27,0) & 1) << 4 |
                            (ushort)(SUB161(auVar14 >> 0x2f,0) & 1) << 5 |
                            (ushort)(SUB161(auVar14 >> 0x37,0) & 1) << 6 |
                            (ushort)(SUB161(auVar14 >> 0x3f,0) & 1) << 7 |
                            (ushort)(SUB161(auVar14 >> 0x47,0) & 1) << 8 |
                            (ushort)(SUB161(auVar14 >> 0x4f,0) & 1) << 9 |
                            (ushort)(SUB161(auVar14 >> 0x57,0) & 1) << 10 |
                            (ushort)(SUB161(auVar14 >> 0x5f,0) & 1) << 0xb |
                            (ushort)(SUB161(auVar14 >> 0x67,0) & 1) << 0xc |
                            (ushort)(SUB161(auVar14 >> 0x6f,0) & 1) << 0xd |
                            (ushort)(SUB161(auVar14 >> 0x77,0) & 1) << 0xe |
                           (ushort)(auVar14[0xf] >> 7) << 0xf);
    if (uVar11 != 0) {
      uVar3 = param_2[-1];
      do {
        iVar7 = 0;
        for (uVar4 = uVar11; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
          iVar7 = iVar7 + 1;
        }
        _Buf2 = *(void **)((int)pauVar2 + (iVar7 + uVar10 & uVar1) * -4 + -4);
        if (_Buf2 == (void *)0x0) {
          _Buf2 = (void *)0x2;
          if (uVar3 == 0) goto LAB_1004c9a7;
        }
        else if (uVar3 == *(uint *)((int)_Buf2 + -4)) {
LAB_1004c9a7:
          iVar7 = memcmp(param_2,_Buf2,uVar3 * 2);
          if (iVar7 == 0) {
LAB_1004cada:
            (*(code *)0x407ea8)();
            return;
          }
        }
        uVar11 = uVar11 - 1 & uVar11;
      } while ((short)uVar11 != 0);
    }
    if (bVar5) {
LAB_1004ca08:
      auVar17[0] = -(auVar13[0] == -1);
      auVar17[1] = -(auVar13[1] == -1);
      auVar17[2] = -(auVar13[2] == -1);
      auVar17[3] = -(auVar13[3] == -1);
      auVar17[4] = -(auVar13[4] == -1);
      auVar17[5] = -(auVar13[5] == -1);
      auVar17[6] = -(auVar13[6] == -1);
      auVar17[7] = -(auVar13[7] == 0xff);
      auVar17[8] = -(auVar13[8] == -1);
      auVar17[9] = -(auVar13[9] == -1);
      auVar17[10] = -(auVar13[10] == -1);
      auVar17[0xb] = -(auVar13[0xb] == -1);
      auVar17[0xc] = -(auVar13[0xc] == -1);
      auVar17[0xd] = -(auVar13[0xd] == -1);
      auVar17[0xe] = -(auVar13[0xe] == -1);
      auVar17[0xf] = -(bVar15 == 0xff);
      if ((((((((((((((((SUB161(auVar17 >> 7,0) & 1) != 0 || (SUB161(auVar17 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar17 >> 0x17,0) & 1) != 0) || (SUB161(auVar17 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar17 >> 0x27,0) & 1) != 0) || (SUB161(auVar17 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar17 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar17 >> 0x3f,0) & 1) != 0) || (SUB161(auVar17 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar17 >> 0x4f,0) & 1) != 0) || (SUB161(auVar17 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar17 >> 0x5f,0) & 1) != 0) || (SUB161(auVar17 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar17 >> 0x6f,0) & 1) != 0) || (SUB161(auVar17 >> 0x77,0) & 1) != 0) ||
          auVar17[0xf] < '\0') {
LAB_1004cae7:
        bVar12 = (*pauVar2)[(int)puVar9];
        if (-1 < (char)bVar12) {
          auVar13 = *pauVar2;
          puVar9 = (uint *)0x0;
          for (uVar10 = (uint)(ushort)((ushort)(SUB161(auVar13 >> 7,0) & 1) |
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
                                      (ushort)(byte)(auVar13[0xf] >> 7) << 0xf); (uVar10 & 1) == 0;
              uVar10 = uVar10 >> 1 | 0x80000000) {
            puVar9 = (uint *)((int)puVar9 + 1);
          }
          bVar12 = (*pauVar2)[(int)puVar9];
        }
        param_1[2] = param_1[2] - (uint)(bVar12 & 1);
        bVar6 = bVar6 >> 1;
        (*pauVar2)[(int)puVar9] = bVar6;
        pauVar2[1][(uint)(puVar9 + -4) & uVar1] = bVar6;
        param_1[3] = param_1[3] + 1;
        *(uint **)((int)pauVar2 + (int)puVar9 * -4 + -4) = param_2;
        return;
      }
      bVar5 = true;
    }
    else {
      uVar11 = (uint)(ushort)((ushort)(SUB161(auVar13 >> 7,0) & 1) |
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
                             (ushort)(bVar15 >> 7) << 0xf);
      if (uVar11 != 0) {
        iVar7 = 0;
        for (; (uVar11 & 1) == 0; uVar11 = uVar11 >> 1 | 0x80000000) {
          iVar7 = iVar7 + 1;
        }
        puVar9 = (uint *)(iVar7 + uVar10 & uVar1);
        goto LAB_1004ca08;
      }
      bVar5 = false;
    }
    iVar7 = iVar8 + 0x10;
    iVar8 = iVar8 + 0x10;
    uVar10 = iVar7 + uVar10 & uVar1;
  } while( true );
}
