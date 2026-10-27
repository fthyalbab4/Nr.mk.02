// rea decompile_all
// name: FUN_1003bc50
// address: 0x1003bc50
// body: available
// range: 0x1003bc50-0x1003bcb2 inclusive
// range: 0x1003bcc0-0x1003bd28 inclusive
// range: 0x1003bd30-0x1003be3a inclusive
// range: 0x1003be40-0x1003bea5 inclusive
// range: 0x1003beb0-0x1003bf76 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1003bc50(int param_1)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  byte bVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined8 uVar20;
  int local_78;
  int local_74;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40 [12];

  iVar13 = _DAT_0077f2e4;
  if (DAT_10163248 != 0) {
    iVar13 = *(int *)(param_1 + 0x2f4);
    iVar4 = *(int *)(param_1 + 0x2f0);
    if (iVar13 == 0) {
      iVar13 = 4;
    }
    iVar12 = iVar4 + _DAT_0077f2e0;
    if (iVar4 != 0) {
      iVar3 = _DAT_0077f2e0 + 1;
      iVar11 = 0;
      iVar1 = iVar13 + iVar4 * 0x18;
      _DAT_0077f2e0 = iVar4 + _DAT_0077f2e0;
      do {
        uVar5 = *(uint *)(iVar13 + 0xc);
        uVar7 = iVar3 + iVar11;
        *(uint *)(iVar13 + 0xc) = uVar7;
        if (DAT_10163254 != 0) {
          uVar20 = FUN_1002e000(DAT_10163258,DAT_1016325c,DAT_10163260,DAT_10163264,uVar5);
          uVar10 = (uint)uVar20;
          local_74 = 0;
          bVar14 = (byte)((ulonglong)uVar20 >> 0x18) >> 1;
          auVar15 = ZEXT216(CONCAT11(bVar14,bVar14));
          auVar15 = pshuflw(auVar15,auVar15,0);
          while( true ) {
            uVar10 = DAT_1016324c & uVar10;
            pcVar2 = (char *)(DAT_10163248 + uVar10);
            auVar18[0] = -(*pcVar2 == auVar15[0]);
            auVar18[1] = -(pcVar2[1] == auVar15[1]);
            auVar18[2] = -(pcVar2[2] == auVar15[2]);
            auVar18[3] = -(pcVar2[3] == auVar15[3]);
            auVar18[4] = -(pcVar2[4] == auVar15[4]);
            auVar18[5] = -(pcVar2[5] == auVar15[5]);
            auVar18[6] = -(pcVar2[6] == auVar15[6]);
            auVar18[7] = -(pcVar2[7] == auVar15[7]);
            auVar18[8] = -(pcVar2[8] == auVar15[0]);
            auVar18[9] = -(pcVar2[9] == auVar15[1]);
            auVar18[10] = -(pcVar2[10] == auVar15[2]);
            auVar18[0xb] = -(pcVar2[0xb] == auVar15[3]);
            auVar18[0xc] = -(pcVar2[0xc] == auVar15[4]);
            auVar18[0xd] = -(pcVar2[0xd] == auVar15[5]);
            auVar18[0xe] = -(pcVar2[0xe] == auVar15[6]);
            auVar18[0xf] = -(pcVar2[0xf] == auVar15[7]);
            uVar8 = (uint)(ushort)((ushort)(SUB161(auVar18 >> 7,0) & 1) |
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
            while ((short)uVar8 != 0) {
              uVar9 = uVar8 - 1 & uVar8;
              iVar4 = 0;
              for (; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
                iVar4 = iVar4 + 1;
              }
              uVar6 = iVar4 + uVar10 & DAT_1016324c;
              uVar8 = uVar9;
              if (uVar5 == *(uint *)(DAT_10163248 + -0x28 + uVar6 * -0x28)) {
                iVar4 = DAT_10163248 + uVar6 * -0x28;
                local_48 = *(undefined8 *)(iVar4 + -8);
                local_50 = *(undefined8 *)(iVar4 + -0x10);
                local_60 = *(undefined8 *)(iVar4 + -0x20);
                local_58 = *(undefined8 *)(iVar4 + -0x18);
                FUN_1004cb50(local_40,uVar7,&local_60);
                goto LAB_1003bd74;
              }
            }
            auVar16[0] = -(*pcVar2 == -1);
            auVar16[1] = -(pcVar2[1] == -1);
            auVar16[2] = -(pcVar2[2] == -1);
            auVar16[3] = -(pcVar2[3] == -1);
            auVar16[4] = -(pcVar2[4] == -1);
            auVar16[5] = -(pcVar2[5] == -1);
            auVar16[6] = -(pcVar2[6] == -1);
            auVar16[7] = -(pcVar2[7] == -1);
            auVar16[8] = -(pcVar2[8] == -1);
            auVar16[9] = -(pcVar2[9] == -1);
            auVar16[10] = -(pcVar2[10] == -1);
            auVar16[0xb] = -(pcVar2[0xb] == -1);
            auVar16[0xc] = -(pcVar2[0xc] == -1);
            auVar16[0xd] = -(pcVar2[0xd] == -1);
            auVar16[0xe] = -(pcVar2[0xe] == -1);
            auVar16[0xf] = -(pcVar2[0xf] == -1);
            if ((((((((((((((((SUB161(auVar16 >> 7,0) & 1) != 0 ||
                             (SUB161(auVar16 >> 0xf,0) & 1) != 0) ||
                            (SUB161(auVar16 >> 0x17,0) & 1) != 0) ||
                           (SUB161(auVar16 >> 0x1f,0) & 1) != 0) ||
                          (SUB161(auVar16 >> 0x27,0) & 1) != 0) ||
                         (SUB161(auVar16 >> 0x2f,0) & 1) != 0) ||
                        (SUB161(auVar16 >> 0x37,0) & 1) != 0) ||
                       (SUB161(auVar16 >> 0x3f,0) & 1) != 0) || (SUB161(auVar16 >> 0x47,0) & 1) != 0
                      ) || (SUB161(auVar16 >> 0x4f,0) & 1) != 0) ||
                    (SUB161(auVar16 >> 0x57,0) & 1) != 0) || (SUB161(auVar16 >> 0x5f,0) & 1) != 0)
                  || (SUB161(auVar16 >> 0x67,0) & 1) != 0) || (SUB161(auVar16 >> 0x6f,0) & 1) != 0)
                || (SUB161(auVar16 >> 0x77,0) & 1) != 0) || auVar16[0xf] < '\0') break;
            uVar10 = uVar10 + 0x10 + local_74;
            local_74 = local_74 + 0x10;
          }
        }
LAB_1003bd74:
        iVar13 = iVar13 + 0x18;
        iVar11 = iVar11 + 1;
        iVar12 = _DAT_0077f2e0;
      } while (iVar13 != iVar1);
    }
    _DAT_0077f2e0 = iVar12;
    iVar4 = *(int *)(param_1 + 0x2f8);
    iVar12 = 4;
    if (*(int *)(param_1 + 0x2fc) != 0) {
      iVar12 = *(int *)(param_1 + 0x2fc);
    }
    iVar13 = iVar4 + _DAT_0077f2e4;
    if (iVar4 != 0) {
      iVar3 = _DAT_0077f2e4 + 1;
      iVar11 = 0;
      iVar1 = iVar12 + iVar4 * 0x28;
      _DAT_0077f2e4 = iVar4 + _DAT_0077f2e4;
      do {
        uVar5 = *(uint *)(iVar12 + 0x20);
        uVar7 = iVar3 + iVar11;
        *(uint *)(iVar12 + 0x20) = uVar7;
        if (DAT_10163274 != 0) {
          uVar20 = FUN_1002e000(DAT_10163278,DAT_1016327c,DAT_10163280,DAT_10163284,uVar5);
          uVar10 = (uint)uVar20;
          local_78 = 0;
          bVar14 = (byte)((ulonglong)uVar20 >> 0x18) >> 1;
          auVar15 = ZEXT216(CONCAT11(bVar14,bVar14));
          auVar15 = pshuflw(auVar15,auVar15,0);
          while( true ) {
            uVar10 = DAT_1016326c & uVar10;
            pcVar2 = (char *)(DAT_10163268 + uVar10);
            auVar19[0] = -(*pcVar2 == auVar15[0]);
            auVar19[1] = -(pcVar2[1] == auVar15[1]);
            auVar19[2] = -(pcVar2[2] == auVar15[2]);
            auVar19[3] = -(pcVar2[3] == auVar15[3]);
            auVar19[4] = -(pcVar2[4] == auVar15[4]);
            auVar19[5] = -(pcVar2[5] == auVar15[5]);
            auVar19[6] = -(pcVar2[6] == auVar15[6]);
            auVar19[7] = -(pcVar2[7] == auVar15[7]);
            auVar19[8] = -(pcVar2[8] == auVar15[0]);
            auVar19[9] = -(pcVar2[9] == auVar15[1]);
            auVar19[10] = -(pcVar2[10] == auVar15[2]);
            auVar19[0xb] = -(pcVar2[0xb] == auVar15[3]);
            auVar19[0xc] = -(pcVar2[0xc] == auVar15[4]);
            auVar19[0xd] = -(pcVar2[0xd] == auVar15[5]);
            auVar19[0xe] = -(pcVar2[0xe] == auVar15[6]);
            auVar19[0xf] = -(pcVar2[0xf] == auVar15[7]);
            uVar8 = (uint)(ushort)((ushort)(SUB161(auVar19 >> 7,0) & 1) |
                                   (ushort)(SUB161(auVar19 >> 0xf,0) & 1) << 1 |
                                   (ushort)(SUB161(auVar19 >> 0x17,0) & 1) << 2 |
                                   (ushort)(SUB161(auVar19 >> 0x1f,0) & 1) << 3 |
                                   (ushort)(SUB161(auVar19 >> 0x27,0) & 1) << 4 |
                                   (ushort)(SUB161(auVar19 >> 0x2f,0) & 1) << 5 |
                                   (ushort)(SUB161(auVar19 >> 0x37,0) & 1) << 6 |
                                   (ushort)(SUB161(auVar19 >> 0x3f,0) & 1) << 7 |
                                   (ushort)(SUB161(auVar19 >> 0x47,0) & 1) << 8 |
                                   (ushort)(SUB161(auVar19 >> 0x4f,0) & 1) << 9 |
                                   (ushort)(SUB161(auVar19 >> 0x57,0) & 1) << 10 |
                                   (ushort)(SUB161(auVar19 >> 0x5f,0) & 1) << 0xb |
                                   (ushort)(SUB161(auVar19 >> 0x67,0) & 1) << 0xc |
                                   (ushort)(SUB161(auVar19 >> 0x6f,0) & 1) << 0xd |
                                   (ushort)(SUB161(auVar19 >> 0x77,0) & 1) << 0xe |
                                  (ushort)(auVar19[0xf] >> 7) << 0xf);
            while ((short)uVar8 != 0) {
              iVar13 = 0;
              for (uVar9 = uVar8; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
                iVar13 = iVar13 + 1;
              }
              uVar8 = uVar8 - 1 & uVar8;
              iVar13 = DAT_10163268 + (iVar13 + uVar10 & DAT_1016326c) * -0x20;
              if (uVar5 == *(uint *)(iVar13 + -0x20)) {
                local_50 = *(undefined8 *)(iVar13 + -8);
                local_60 = *(undefined8 *)(iVar13 + -0x18);
                local_58 = *(undefined8 *)(iVar13 + -0x10);
                FUN_1004cdb0(local_40,uVar7,&local_60);
                goto LAB_1003beea;
              }
            }
            auVar17[0] = -(*pcVar2 == -1);
            auVar17[1] = -(pcVar2[1] == -1);
            auVar17[2] = -(pcVar2[2] == -1);
            auVar17[3] = -(pcVar2[3] == -1);
            auVar17[4] = -(pcVar2[4] == -1);
            auVar17[5] = -(pcVar2[5] == -1);
            auVar17[6] = -(pcVar2[6] == -1);
            auVar17[7] = -(pcVar2[7] == -1);
            auVar17[8] = -(pcVar2[8] == -1);
            auVar17[9] = -(pcVar2[9] == -1);
            auVar17[10] = -(pcVar2[10] == -1);
            auVar17[0xb] = -(pcVar2[0xb] == -1);
            auVar17[0xc] = -(pcVar2[0xc] == -1);
            auVar17[0xd] = -(pcVar2[0xd] == -1);
            auVar17[0xe] = -(pcVar2[0xe] == -1);
            auVar17[0xf] = -(pcVar2[0xf] == -1);
            if ((((((((((((((((SUB161(auVar17 >> 7,0) & 1) != 0 ||
                             (SUB161(auVar17 >> 0xf,0) & 1) != 0) ||
                            (SUB161(auVar17 >> 0x17,0) & 1) != 0) ||
                           (SUB161(auVar17 >> 0x1f,0) & 1) != 0) ||
                          (SUB161(auVar17 >> 0x27,0) & 1) != 0) ||
                         (SUB161(auVar17 >> 0x2f,0) & 1) != 0) ||
                        (SUB161(auVar17 >> 0x37,0) & 1) != 0) ||
                       (SUB161(auVar17 >> 0x3f,0) & 1) != 0) || (SUB161(auVar17 >> 0x47,0) & 1) != 0
                      ) || (SUB161(auVar17 >> 0x4f,0) & 1) != 0) ||
                    (SUB161(auVar17 >> 0x57,0) & 1) != 0) || (SUB161(auVar17 >> 0x5f,0) & 1) != 0)
                  || (SUB161(auVar17 >> 0x67,0) & 1) != 0) || (SUB161(auVar17 >> 0x6f,0) & 1) != 0)
                || (SUB161(auVar17 >> 0x77,0) & 1) != 0) || auVar17[0xf] < '\0') break;
            uVar10 = uVar10 + 0x10 + local_78;
            local_78 = local_78 + 0x10;
          }
        }
LAB_1003beea:
        iVar12 = iVar12 + 0x28;
        iVar11 = iVar11 + 1;
        iVar13 = _DAT_0077f2e4;
      } while (iVar12 != iVar1);
    }
  }
  _DAT_0077f2e4 = iVar13;
  return;
}
