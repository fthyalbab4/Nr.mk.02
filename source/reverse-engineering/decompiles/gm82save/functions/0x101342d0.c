// rea decompile_all
// name: FUN_101342d0
// address: 0x101342d0
// body: available
// range: 0x101342d0-0x10134664 inclusive
// range: 0x10134670-0x101347d0 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint __fastcall FUN_101342d0(uint param_1)

{
  undefined1 auVar1 [16];
  char cVar2;
  undefined4 uVar3;
  LPVOID lpMem;
  code *pcVar4;
  int iVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  char cVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  char cVar17;
  char cVar18;
  char cVar19;
  byte bVar20;
  size_t _Size;
  HANDLE hHeap;
  uint uVar21;
  uint uVar22;
  int iVar23;
  uint uVar24;
  undefined1 (*pauVar25) [16];
  uint uVar26;
  uint uVar27;
  int iVar28;
  undefined1 (*pauVar29) [16];
  undefined1 (*pauVar30) [16];
  bool bVar31;
  undefined1 auVar32 [15];
  undefined8 uVar33;
  undefined1 (*local_20) [16];
  uint local_1c;
  int local_18;

  uVar26 = DAT_1016326c;
  pauVar30 = DAT_10163268;
  uVar21 = param_1 + DAT_10163274;
  if (CARRY4(param_1,DAT_10163274)) {
    FUN_101369c0("Hash table capacity overflowC:\\Users\\runneradmin\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\hashbrown-0.17.1\\src\\raw.rs"
                 ,0x39,&DAT_1014f65c);
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  uVar27 = DAT_1016326c + 1;
  uVar22 = (uVar27 & 0xfffffff8) - (uVar27 >> 3);
  if (DAT_1016326c < 8) {
    uVar22 = DAT_1016326c;
  }
  if (uVar22 >> 1 < uVar21) {
    uVar26 = uVar22 + 1;
    if (uVar22 + 1 <= uVar21) {
      uVar26 = uVar21;
    }
    FUN_10003280((undefined8 *)&local_20,0x20,uVar26);
    uVar26 = local_1c;
    pauVar30 = DAT_10163268;
    uVar21 = DAT_1016326c;
    if (local_20 != (undefined1 (*) [16])0x0) {
      if (DAT_10163274 == 0) {
        uVar26 = 0;
      }
      else {
        auVar1 = *DAT_10163268;
        iVar28 = 0;
        uVar27 = ~(uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
                                 (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
                                 (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
                                 (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
                                 (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
                                 (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
                                 (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
                                 (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
                                 (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
                                 (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
                                 (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
                                 (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
                                 (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
                                 (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
                                 (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe |
                                (ushort)(byte)(auVar1[0xf] >> 7) << 0xf);
        uVar21 = DAT_10163274;
        do {
          if ((short)uVar27 == 0) {
            do {
              auVar1 = pauVar30[1];
              pauVar30 = pauVar30 + 1;
              iVar28 = iVar28 + 0x10;
              uVar27 = (ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
                                (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
                                (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
                                (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
                                (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
                                (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
                                (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
                                (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
                                (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
                                (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
                                (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
                                (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
                                (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
                                (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
                                (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe |
                               (ushort)(byte)(auVar1[0xf] >> 7) << 0xf) ^ 0xffff;
            } while (uVar27 == 0);
          }
          iVar5 = 0;
          for (uVar26 = uVar27; (uVar26 & 1) == 0; uVar26 = uVar26 >> 1 | 0x80000000) {
            iVar5 = iVar5 + 1;
          }
          uVar33 = FUN_1002e000(DAT_10163278,DAT_1016327c,DAT_10163280,DAT_10163284,
                                *(uint *)DAT_10163268[(iVar5 + iVar28) * -2 + -2]);
          uVar22 = local_1c & (uint)uVar33;
          auVar1 = *(undefined1 (*) [16])(*local_20 + uVar22);
          uVar26 = (uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
                                  (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
                                  (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
                                  (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
                                  (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
                                  (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
                                  (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
                                  (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
                                  (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
                                  (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
                                  (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
                                  (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
                                  (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
                                  (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
                                  (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe |
                                 (ushort)(byte)(auVar1[0xf] >> 7) << 0xf);
          if (uVar26 == 0) {
            iVar23 = 0x10;
            do {
              uVar22 = uVar22 + iVar23;
              iVar23 = iVar23 + 0x10;
              uVar22 = uVar22 & local_1c;
              auVar1 = *(undefined1 (*) [16])(*local_20 + uVar22);
              uVar26 = (uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
                                      (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
                                      (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
                                      (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
                                      (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
                                      (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
                                      (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
                                      (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
                                      (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
                                      (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
                                      (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
                                      (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
                                      (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
                                      (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
                                      (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe |
                                     (ushort)(byte)(auVar1[0xf] >> 7) << 0xf);
            } while (uVar26 == 0);
          }
          iVar23 = 0;
          for (; (uVar26 & 1) == 0; uVar26 = uVar26 >> 1 | 0x80000000) {
            iVar23 = iVar23 + 1;
          }
          uVar27 = uVar27 - 1 & uVar27;
          uVar26 = iVar23 + uVar22 & local_1c;
          if (-1 < (char)(*local_20)[uVar26]) {
            auVar1 = *local_20;
            uVar26 = 0;
            for (uVar22 = (uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
                                         (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
                                         (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
                                         (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
                                         (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
                                         (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
                                         (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
                                         (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
                                         (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
                                         (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
                                         (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
                                         (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
                                         (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
                                         (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
                                         (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe |
                                        (ushort)(byte)(auVar1[0xf] >> 7) << 0xf); (uVar22 & 1) == 0;
                uVar22 = uVar22 >> 1 | 0x80000000) {
              uVar26 = uVar26 + 1;
            }
          }
          bVar20 = (byte)((ulonglong)uVar33 >> 0x18) >> 1;
          (*local_20)[uVar26] = bVar20;
          local_20[1][uVar26 - 0x10 & local_1c] = bVar20;
          pauVar29 = DAT_10163268;
          uVar26 = ~uVar26;
          uVar22 = ~(iVar5 + iVar28);
          *(undefined8 *)(local_20[uVar26 * 2 + 1] + 8) =
               *(undefined8 *)(DAT_10163268[uVar22 * 2 + 1] + 8);
          *(undefined8 *)local_20[uVar26 * 2 + 1] = *(undefined8 *)pauVar29[uVar22 * 2 + 1];
          uVar33 = *(undefined8 *)pauVar29[uVar22 * 2];
          uVar21 = uVar21 - 1;
          *(undefined8 *)(local_20[uVar26 * 2] + 8) = *(undefined8 *)(pauVar29[uVar22 * 2] + 8);
          *(undefined8 *)local_20[uVar26 * 2] = uVar33;
          uVar26 = DAT_10163274;
        } while (uVar21 != 0);
      }
      DAT_10163270 = local_18 - uVar26;
      uVar26 = 0xffffffff;
      pauVar30 = local_20;
      uVar21 = local_1c;
      if ((DAT_1016326c != 0) &&
         (iVar28 = DAT_1016326c * 0x20 + 0x20, DAT_1016326c + iVar28 != -0x11)) {
        lpMem = *(LPVOID *)((int)DAT_10163268 + (-4 - iVar28));
        DAT_10163268 = local_20;
        DAT_1016326c = local_1c;
        hHeap = GetProcessHeap();
        HeapFree(hHeap,0,lpMem);
        pauVar30 = DAT_10163268;
        uVar21 = DAT_1016326c;
      }
    }
  }
  else {
    if (uVar27 == 0) {
      uVar26 = 0;
    }
    else {
      iVar28 = ((uVar27 >> 4) + 1) - (uint)((uVar27 & 0xf) == 0);
      pauVar29 = DAT_10163268;
      do {
        iVar28 = iVar28 + -1;
        cVar2 = (*pauVar29)[1];
        cVar6 = (*pauVar29)[2];
        cVar7 = (*pauVar29)[3];
        cVar8 = (*pauVar29)[4];
        cVar9 = (*pauVar29)[5];
        cVar10 = (*pauVar29)[6];
        cVar11 = (*pauVar29)[7];
        cVar12 = (*pauVar29)[8];
        cVar13 = (*pauVar29)[9];
        cVar14 = (*pauVar29)[10];
        cVar15 = (*pauVar29)[0xb];
        cVar16 = (*pauVar29)[0xc];
        cVar17 = (*pauVar29)[0xd];
        cVar18 = (*pauVar29)[0xe];
        cVar19 = (*pauVar29)[0xf];
        auVar32 = SUB1615((undefined1  [16])0x0,1);
        (*pauVar29)[0] = -((char)(*pauVar29)[0] < '\0') | 0x80;
        (*pauVar29)[1] = -(cVar2 < '\0') | 0x80;
        (*pauVar29)[2] = -(cVar6 < '\0') | 0x80;
        (*pauVar29)[3] = -(cVar7 < '\0') | 0x80;
        (*pauVar29)[4] = -(cVar8 < '\0') | 0x80;
        (*pauVar29)[5] = -(cVar9 < '\0') | 0x80;
        (*pauVar29)[6] = -(cVar10 < '\0') | 0x80;
        (*pauVar29)[7] = -(cVar11 < '\0') | 0x80;
        (*pauVar29)[8] = -(cVar12 < '\0') | 0x80;
        (*pauVar29)[9] = -(cVar13 < auVar32[8]) | 0x80;
        (*pauVar29)[10] = -(cVar14 < auVar32[9]) | 0x80;
        (*pauVar29)[0xb] = -(cVar15 < auVar32[10]) | 0x80;
        (*pauVar29)[0xc] = -(cVar16 < auVar32[0xb]) | 0x80;
        (*pauVar29)[0xd] = -(cVar17 < auVar32[0xc]) | 0x80;
        (*pauVar29)[0xe] = -(cVar18 < auVar32[0xd]) | 0x80;
        (*pauVar29)[0xf] = -(cVar19 < auVar32[0xe]) | 0x80;
        pauVar29 = pauVar29 + 1;
      } while (iVar28 != 0);
      if (uVar27 < 0x10) {
        uVar21 = 0x10;
        _Size = uVar27;
      }
      else {
        _Size = 0x10;
        uVar21 = uVar27;
      }
      memmove(*pauVar30 + uVar21,pauVar30,_Size);
      uVar21 = 0;
      do {
        if (SBORROW1('\0',(*DAT_10163268)[uVar21])) {
          pauVar30 = DAT_10163268 + ~uVar21 * 2;
          while( true ) {
            pauVar29 = DAT_10163268;
            uVar33 = FUN_1002e000(DAT_10163278,DAT_1016327c,DAT_10163280,DAT_10163284,
                                  *(uint *)DAT_10163268[uVar21 * -2 + -2]);
            uVar24 = DAT_1016326c & (uint)uVar33;
            auVar1 = *(undefined1 (*) [16])(*pauVar29 + uVar24);
            uVar27 = (uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
                                    (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
                                    (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
                                    (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
                                    (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
                                    (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
                                    (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
                                    (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
                                    (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
                                    (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
                                    (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
                                    (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
                                    (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
                                    (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
                                    (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe |
                                   (ushort)(byte)(auVar1[0xf] >> 7) << 0xf);
            uVar22 = uVar24;
            if (uVar27 == 0) {
              iVar28 = 0x10;
              do {
                uVar22 = uVar22 + iVar28;
                iVar28 = iVar28 + 0x10;
                uVar22 = uVar22 & DAT_1016326c;
                auVar1 = *(undefined1 (*) [16])(*pauVar29 + uVar22);
                uVar27 = (uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
                                        (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
                                        (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
                                        (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
                                        (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
                                        (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
                                        (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
                                        (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
                                        (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
                                        (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
                                        (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
                                        (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
                                        (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
                                        (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
                                        (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe |
                                       (ushort)(byte)(auVar1[0xf] >> 7) << 0xf);
              } while (uVar27 == 0);
            }
            iVar28 = 0;
            for (; (uVar27 & 1) == 0; uVar27 = uVar27 >> 1 | 0x80000000) {
              iVar28 = iVar28 + 1;
            }
            uVar27 = iVar28 + uVar22 & DAT_1016326c;
            if (-1 < (char)(*pauVar29)[uVar27]) {
              auVar1 = *pauVar29;
              uVar27 = 0;
              for (uVar22 = (uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
                                           (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
                                           (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
                                           (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
                                           (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
                                           (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
                                           (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
                                           (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
                                           (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
                                           (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
                                           (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
                                           (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
                                           (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
                                           (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
                                           (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe |
                                          (ushort)(byte)(auVar1[0xf] >> 7) << 0xf);
                  (uVar22 & 1) == 0; uVar22 = uVar22 >> 1 | 0x80000000) {
                uVar27 = uVar27 + 1;
              }
            }
            bVar20 = (byte)((ulonglong)uVar33 >> 0x18);
            if (((uVar27 - uVar24 ^ uVar21 - uVar24) & DAT_1016326c) < 0x10) {
              uVar27 = DAT_1016326c & uVar21 - 0x10;
              bVar20 = bVar20 >> 1;
              (*pauVar29)[uVar21] = bVar20;
              DAT_10163268[1][uVar27] = bVar20;
              goto LAB_10134692;
            }
            uVar22 = uVar27 - 0x10 & DAT_1016326c;
            pauVar25 = pauVar29 + ~uVar27 * 2;
            cVar2 = (*pauVar29)[uVar27];
            bVar20 = bVar20 >> 1;
            (*pauVar29)[uVar27] = bVar20;
            DAT_10163268[1][uVar22] = bVar20;
            if (cVar2 == -1) break;
            uVar3 = *(undefined4 *)*pauVar30;
            *(undefined4 *)*pauVar30 = *(undefined4 *)*pauVar25;
            *(undefined4 *)*pauVar25 = uVar3;
            uVar3 = *(undefined4 *)(*pauVar30 + 4);
            *(undefined4 *)(*pauVar30 + 4) = *(undefined4 *)(*pauVar25 + 4);
            *(undefined4 *)(*pauVar25 + 4) = uVar3;
            uVar3 = *(undefined4 *)(*pauVar30 + 8);
            *(undefined4 *)(*pauVar30 + 8) = *(undefined4 *)(*pauVar25 + 8);
            *(undefined4 *)(*pauVar25 + 8) = uVar3;
            uVar3 = *(undefined4 *)(*pauVar30 + 0xc);
            *(undefined4 *)(*pauVar30 + 0xc) = *(undefined4 *)(*pauVar25 + 0xc);
            *(undefined4 *)(*pauVar25 + 0xc) = uVar3;
            uVar3 = *(undefined4 *)pauVar30[1];
            *(undefined4 *)pauVar30[1] = *(undefined4 *)pauVar25[1];
            *(undefined4 *)pauVar25[1] = uVar3;
            uVar3 = *(undefined4 *)(pauVar30[1] + 4);
            *(undefined4 *)(pauVar30[1] + 4) = *(undefined4 *)(pauVar25[1] + 4);
            *(undefined4 *)(pauVar25[1] + 4) = uVar3;
            uVar3 = *(undefined4 *)(pauVar30[1] + 8);
            *(undefined4 *)(pauVar30[1] + 8) = *(undefined4 *)(pauVar25[1] + 8);
            *(undefined4 *)(pauVar25[1] + 8) = uVar3;
            uVar3 = *(undefined4 *)(pauVar30[1] + 0xc);
            *(undefined4 *)(pauVar30[1] + 0xc) = *(undefined4 *)(pauVar25[1] + 0xc);
            *(undefined4 *)(pauVar25[1] + 0xc) = uVar3;
          }
          uVar27 = uVar21 - 0x10 & DAT_1016326c;
          (*DAT_10163268)[uVar21] = 0xff;
          DAT_10163268[1][uVar27] = 0xff;
          *(undefined8 *)(pauVar25[1] + 8) = *(undefined8 *)(pauVar30[1] + 8);
          *(undefined8 *)pauVar25[1] = *(undefined8 *)pauVar30[1];
          uVar33 = *(undefined8 *)*pauVar30;
          *(undefined8 *)(*pauVar25 + 8) = *(undefined8 *)(*pauVar30 + 8);
          *(undefined8 *)*pauVar25 = uVar33;
        }
LAB_10134692:
        bVar31 = uVar21 != uVar26;
        uVar21 = uVar21 + 1;
      } while (bVar31);
      uVar26 = (DAT_1016326c + 1 & 0xfffffff8) - (DAT_1016326c + 1 >> 3);
      if (DAT_1016326c < 8) {
        uVar26 = DAT_1016326c;
      }
    }
    DAT_10163270 = uVar26 - DAT_10163274;
    uVar26 = 0xffffffff;
    pauVar30 = DAT_10163268;
    uVar21 = DAT_1016326c;
  }
  DAT_1016326c = uVar21;
  DAT_10163268 = pauVar30;
  return uVar26;
}
