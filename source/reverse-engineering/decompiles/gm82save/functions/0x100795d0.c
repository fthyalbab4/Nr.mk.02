// rea decompile_all
// name: FUN_100795d0
// address: 0x100795d0
// body: available
// range: 0x100795d0-0x10079750 inclusive
// range: 0x10079760-0x100797e7 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_100795d0(uint param_1)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  LPVOID lpMem;
  ushort uVar4;
  ushort uVar5;
  short sVar6;
  int iVar7;
  HANDLE hHeap;
  undefined1 uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  undefined1 (*pauVar12) [16];
  ushort uVar13;
  uint uVar14;
  byte bVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined8 uVar20;
  uint local_24;
  int local_1c;

  iVar3 = DAT_101632b8;
  if (DAT_101632b8 != 0) {
    uVar20 = FUN_1002e000(DAT_101632c8,DAT_101632cc,DAT_101632d0,DAT_101632d4,param_1);
    uVar9 = (uint)uVar20;
    local_24 = 0;
    bVar15 = (byte)((ulonglong)uVar20 >> 0x18) >> 1;
    auVar16 = ZEXT216(CONCAT11(bVar15,bVar15));
    auVar16 = pshuflw(auVar16,auVar16,0);
    while( true ) {
      uVar9 = DAT_101632bc & uVar9;
      pcVar1 = (char *)(iVar3 + uVar9);
      auVar19[0] = -(*pcVar1 == auVar16[0]);
      auVar19[1] = -(pcVar1[1] == auVar16[1]);
      auVar19[2] = -(pcVar1[2] == auVar16[2]);
      auVar19[3] = -(pcVar1[3] == auVar16[3]);
      auVar19[4] = -(pcVar1[4] == auVar16[4]);
      auVar19[5] = -(pcVar1[5] == auVar16[5]);
      auVar19[6] = -(pcVar1[6] == auVar16[6]);
      auVar19[7] = -(pcVar1[7] == auVar16[7]);
      auVar19[8] = -(pcVar1[8] == auVar16[0]);
      auVar19[9] = -(pcVar1[9] == auVar16[1]);
      auVar19[10] = -(pcVar1[10] == auVar16[2]);
      auVar19[0xb] = -(pcVar1[0xb] == auVar16[3]);
      auVar19[0xc] = -(pcVar1[0xc] == auVar16[4]);
      auVar19[0xd] = -(pcVar1[0xd] == auVar16[5]);
      auVar19[0xe] = -(pcVar1[0xe] == auVar16[6]);
      auVar19[0xf] = -(pcVar1[0xf] == auVar16[7]);
      uVar11 = (uint)(ushort)((ushort)(SUB161(auVar19 >> 7,0) & 1) |
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
      while ((short)uVar11 != 0) {
        iVar7 = 0;
        for (uVar14 = uVar11; (uVar14 & 1) == 0; uVar14 = uVar14 >> 1 | 0x80000000) {
          iVar7 = iVar7 + 1;
        }
        uVar11 = uVar11 - 1 & uVar11;
        uVar14 = iVar7 + uVar9 & DAT_101632bc;
        iVar7 = uVar14 * -0x30;
        if (param_1 == *(uint *)(iVar3 + -0x30 + iVar7)) {
          iVar7 = iVar7 + iVar3;
          iVar10 = ((int)(uVar14 * 0x30) >> 4) * -0x55555555;
          pcVar1 = (char *)(iVar3 + iVar10);
          uVar9 = iVar10 - 0x10U & DAT_101632bc;
          pcVar2 = (char *)(iVar3 + uVar9);
          auVar18[0] = -(*pcVar1 == -1);
          auVar18[1] = -(pcVar1[1] == -1);
          auVar18[2] = -(pcVar1[2] == -1);
          auVar18[3] = -(pcVar1[3] == -1);
          auVar18[4] = -(pcVar1[4] == -1);
          auVar18[5] = -(pcVar1[5] == -1);
          auVar18[6] = -(pcVar1[6] == -1);
          auVar18[7] = -(pcVar1[7] == -1);
          auVar18[8] = -(pcVar1[8] == -1);
          auVar18[9] = -(pcVar1[9] == -1);
          auVar18[10] = -(pcVar1[10] == -1);
          auVar18[0xb] = -(pcVar1[0xb] == -1);
          auVar18[0xc] = -(pcVar1[0xc] == -1);
          auVar18[0xd] = -(pcVar1[0xd] == -1);
          auVar18[0xe] = -(pcVar1[0xe] == -1);
          auVar18[0xf] = -(pcVar1[0xf] == -1);
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
          uVar5 = (ushort)(SUB161(auVar16 >> 7,0) & 1) | (ushort)(SUB161(auVar16 >> 0xf,0) & 1) << 1
                  | (ushort)(SUB161(auVar16 >> 0x17,0) & 1) << 2 |
                  (ushort)(SUB161(auVar16 >> 0x1f,0) & 1) << 3 |
                  (ushort)(SUB161(auVar16 >> 0x27,0) & 1) << 4 |
                  (ushort)(SUB161(auVar16 >> 0x2f,0) & 1) << 5 |
                  (ushort)(SUB161(auVar16 >> 0x37,0) & 1) << 6 |
                  (ushort)(SUB161(auVar16 >> 0x3f,0) & 1) << 7 |
                  (ushort)(SUB161(auVar16 >> 0x47,0) & 1) << 8 |
                  (ushort)(SUB161(auVar16 >> 0x4f,0) & 1) << 9 |
                  (ushort)(SUB161(auVar16 >> 0x57,0) & 1) << 10 |
                  (ushort)(SUB161(auVar16 >> 0x5f,0) & 1) << 0xb |
                  (ushort)(SUB161(auVar16 >> 0x67,0) & 1) << 0xc |
                  (ushort)(SUB161(auVar16 >> 0x6f,0) & 1) << 0xd |
                  (ushort)(SUB161(auVar16 >> 0x77,0) & 1) << 0xe |
                  (ushort)(auVar16[0xf] >> 7) << 0xf;
          uVar4 = 0xf;
          if (uVar5 != 0) {
            for (; uVar5 >> uVar4 == 0; uVar4 = uVar4 - 1) {
            }
          }
          uVar13 = 0x1f;
          if (uVar5 != 0) {
            uVar13 = uVar4;
          }
          uVar8 = 0x80;
          sVar6 = 0;
          for (uVar11 = (ushort)((ushort)(SUB161(auVar18 >> 7,0) & 1) |
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
                                (ushort)(auVar18[0xf] >> 7) << 0xf) | 0x10000; (uVar11 & 1) == 0;
              uVar11 = uVar11 >> 1 | 0x80000000) {
            sVar6 = sVar6 + 1;
          }
          if ((ushort)(sVar6 + (uVar13 ^ 0xf)) < 0x10) {
            _DAT_101632c0 = _DAT_101632c0 + 1;
            uVar8 = 0xff;
          }
          *(undefined1 *)(iVar3 + iVar10) = uVar8;
          *(undefined1 *)(iVar3 + 0x10 + uVar9) = uVar8;
          _DAT_101632c4 = _DAT_101632c4 + -1;
          pauVar12 = *(undefined1 (**) [16])(iVar7 + -0x20);
          if (pauVar12 == (undefined1 (*) [16])0x0) {
            return;
          }
          iVar3 = *(int *)(iVar7 + -0x1c);
          iVar7 = *(int *)(iVar7 + -0x14);
          if (iVar3 != 0) {
            uVar9 = iVar3 * 0xc + 0x1bU & 0xfffffff0;
            local_1c = (int)pauVar12 - uVar9;
            local_24 = (uint)(iVar3 + uVar9 == -0x11);
          }
          if (iVar7 != 0) {
            auVar16 = *pauVar12;
            pauVar12 = pauVar12 + 1;
            uVar9 = ~(uint)(ushort)((ushort)(SUB161(auVar16 >> 7,0) & 1) |
                                    (ushort)(SUB161(auVar16 >> 0xf,0) & 1) << 1 |
                                    (ushort)(SUB161(auVar16 >> 0x17,0) & 1) << 2 |
                                    (ushort)(SUB161(auVar16 >> 0x1f,0) & 1) << 3 |
                                    (ushort)(SUB161(auVar16 >> 0x27,0) & 1) << 4 |
                                    (ushort)(SUB161(auVar16 >> 0x2f,0) & 1) << 5 |
                                    (ushort)(SUB161(auVar16 >> 0x37,0) & 1) << 6 |
                                    (ushort)(SUB161(auVar16 >> 0x3f,0) & 1) << 7 |
                                    (ushort)(SUB161(auVar16 >> 0x47,0) & 1) << 8 |
                                    (ushort)(SUB161(auVar16 >> 0x4f,0) & 1) << 9 |
                                    (ushort)(SUB161(auVar16 >> 0x57,0) & 1) << 10 |
                                    (ushort)(SUB161(auVar16 >> 0x5f,0) & 1) << 0xb |
                                    (ushort)(SUB161(auVar16 >> 0x67,0) & 1) << 0xc |
                                    (ushort)(SUB161(auVar16 >> 0x6f,0) & 1) << 0xd |
                                    (ushort)(SUB161(auVar16 >> 0x77,0) & 1) << 0xe |
                                   (ushort)(byte)(auVar16[0xf] >> 7) << 0xf);
            do {
              uVar11 = uVar9;
              if ((short)uVar9 == 0) {
                do {
                  auVar16 = *pauVar12;
                  pauVar12 = pauVar12 + 1;
                  uVar9 = (ushort)((ushort)(SUB161(auVar16 >> 7,0) & 1) |
                                   (ushort)(SUB161(auVar16 >> 0xf,0) & 1) << 1 |
                                   (ushort)(SUB161(auVar16 >> 0x17,0) & 1) << 2 |
                                   (ushort)(SUB161(auVar16 >> 0x1f,0) & 1) << 3 |
                                   (ushort)(SUB161(auVar16 >> 0x27,0) & 1) << 4 |
                                   (ushort)(SUB161(auVar16 >> 0x2f,0) & 1) << 5 |
                                   (ushort)(SUB161(auVar16 >> 0x37,0) & 1) << 6 |
                                   (ushort)(SUB161(auVar16 >> 0x3f,0) & 1) << 7 |
                                   (ushort)(SUB161(auVar16 >> 0x47,0) & 1) << 8 |
                                   (ushort)(SUB161(auVar16 >> 0x4f,0) & 1) << 9 |
                                   (ushort)(SUB161(auVar16 >> 0x57,0) & 1) << 10 |
                                   (ushort)(SUB161(auVar16 >> 0x5f,0) & 1) << 0xb |
                                   (ushort)(SUB161(auVar16 >> 0x67,0) & 1) << 0xc |
                                   (ushort)(SUB161(auVar16 >> 0x6f,0) & 1) << 0xd |
                                   (ushort)(SUB161(auVar16 >> 0x77,0) & 1) << 0xe |
                                  (ushort)(byte)(auVar16[0xf] >> 7) << 0xf) ^ 0xffff;
                  uVar11 = uVar9;
                } while (uVar9 == 0);
              }
              for (; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
              }
              uVar9 = uVar11 - 1 & uVar11;
              (*(code *)0x405a7c)();
              (*(code *)0x407ea8)();
              iVar7 = iVar7 + -1;
            } while (iVar7 != 0);
          }
          if (iVar3 == 0 || (local_24 & 1) != 0) {
            return;
          }
          lpMem = *(LPVOID *)(local_1c + -4);
          hHeap = GetProcessHeap();
          HeapFree(hHeap,0,lpMem);
          return;
        }
      }
      auVar17[0] = -(*pcVar1 == -1);
      auVar17[1] = -(pcVar1[1] == -1);
      auVar17[2] = -(pcVar1[2] == -1);
      auVar17[3] = -(pcVar1[3] == -1);
      auVar17[4] = -(pcVar1[4] == -1);
      auVar17[5] = -(pcVar1[5] == -1);
      auVar17[6] = -(pcVar1[6] == -1);
      auVar17[7] = -(pcVar1[7] == -1);
      auVar17[8] = -(pcVar1[8] == -1);
      auVar17[9] = -(pcVar1[9] == -1);
      auVar17[10] = -(pcVar1[10] == -1);
      auVar17[0xb] = -(pcVar1[0xb] == -1);
      auVar17[0xc] = -(pcVar1[0xc] == -1);
      auVar17[0xd] = -(pcVar1[0xd] == -1);
      auVar17[0xe] = -(pcVar1[0xe] == -1);
      auVar17[0xf] = -(pcVar1[0xf] == -1);
      if ((((((((((((((((SUB161(auVar17 >> 7,0) & 1) != 0 || (SUB161(auVar17 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar17 >> 0x17,0) & 1) != 0) || (SUB161(auVar17 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar17 >> 0x27,0) & 1) != 0) || (SUB161(auVar17 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar17 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar17 >> 0x3f,0) & 1) != 0) || (SUB161(auVar17 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar17 >> 0x4f,0) & 1) != 0) || (SUB161(auVar17 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar17 >> 0x5f,0) & 1) != 0) || (SUB161(auVar17 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar17 >> 0x6f,0) & 1) != 0) || (SUB161(auVar17 >> 0x77,0) & 1) != 0) ||
          auVar17[0xf] < '\0') break;
      uVar9 = uVar9 + 0x10 + local_24;
      local_24 = local_24 + 0x10;
    }
  }
  return;
}
