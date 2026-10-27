// rea decompile_all
// name: FUN_10133d90
// address: 0x10133d90
// body: available
// range: 0x10133d90-0x10134151 inclusive
// range: 0x10134160-0x101342cd inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint __fastcall FUN_10133d90(uint param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [16];
  char cVar4;
  undefined4 uVar5;
  LPVOID lpMem;
  code *pcVar6;
  int iVar7;
  int iVar8;
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
  char cVar20;
  char cVar21;
  char cVar22;
  byte bVar23;
  uint uVar24;
  size_t _Size;
  HANDLE hHeap;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  int iVar29;
  undefined1 (*pauVar30) [16];
  undefined1 (*pauVar31) [16];
  bool bVar32;
  undefined1 auVar33 [15];
  undefined8 uVar34;
  int local_30;
  undefined1 (*local_20) [16];
  uint local_1c;
  int local_18;

  uVar27 = DAT_1016324c;
  pauVar31 = DAT_10163248;
  uVar25 = param_1 + DAT_10163254;
  if (CARRY4(param_1,DAT_10163254)) {
    FUN_101369c0("Hash table capacity overflowC:\\Users\\runneradmin\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\hashbrown-0.17.1\\src\\raw.rs"
                 ,0x39,&DAT_1014f65c);
                    /* WARNING: Does not return */
    pcVar6 = (code *)invalidInstructionException();
    (*pcVar6)();
  }
  uVar24 = DAT_1016324c + 1;
  uVar26 = (uVar24 & 0xfffffff8) - (uVar24 >> 3);
  if (DAT_1016324c < 8) {
    uVar26 = DAT_1016324c;
  }
  if (uVar26 >> 1 < uVar25) {
    uVar27 = uVar26 + 1;
    if (uVar26 + 1 <= uVar25) {
      uVar27 = uVar25;
    }
    FUN_10003280((undefined8 *)&local_20,0x28,uVar27);
    uVar27 = local_1c;
    pauVar31 = DAT_10163248;
    uVar25 = DAT_1016324c;
    if (local_20 != (undefined1 (*) [16])0x0) {
      if (DAT_10163254 == 0) {
        uVar27 = 0;
      }
      else {
        auVar3 = *DAT_10163248;
        iVar29 = 0;
        uVar25 = ~(uint)(ushort)((ushort)(SUB161(auVar3 >> 7,0) & 1) |
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
                                (ushort)(byte)(auVar3[0xf] >> 7) << 0xf);
        uVar24 = DAT_10163254;
        do {
          if ((short)uVar25 == 0) {
            do {
              auVar3 = pauVar31[1];
              pauVar31 = pauVar31 + 1;
              iVar29 = iVar29 + 0x10;
              uVar25 = (ushort)((ushort)(SUB161(auVar3 >> 7,0) & 1) |
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
                               (ushort)(byte)(auVar3[0xf] >> 7) << 0xf) ^ 0xffff;
            } while (uVar25 == 0);
          }
          iVar7 = 0;
          for (uVar27 = uVar25; (uVar27 & 1) == 0; uVar27 = uVar27 >> 1 | 0x80000000) {
            iVar7 = iVar7 + 1;
          }
          uVar34 = FUN_1002e000(DAT_10163258,DAT_1016325c,DAT_10163260,DAT_10163264,
                                *(uint *)((int)DAT_10163248 + (iVar7 + iVar29) * -0x28 + -0x28));
          uVar26 = local_1c & (uint)uVar34;
          auVar3 = *(undefined1 (*) [16])(*local_20 + uVar26);
          uVar27 = (uint)(ushort)((ushort)(SUB161(auVar3 >> 7,0) & 1) |
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
                                 (ushort)(byte)(auVar3[0xf] >> 7) << 0xf);
          if (uVar27 == 0) {
            local_30 = 0x10;
            do {
              uVar26 = uVar26 + local_30;
              local_30 = local_30 + 0x10;
              uVar26 = uVar26 & local_1c;
              auVar3 = *(undefined1 (*) [16])(*local_20 + uVar26);
              uVar27 = (uint)(ushort)((ushort)(SUB161(auVar3 >> 7,0) & 1) |
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
                                     (ushort)(byte)(auVar3[0xf] >> 7) << 0xf);
            } while (uVar27 == 0);
          }
          uVar25 = uVar25 - 1 & uVar25;
          iVar8 = 0;
          for (; (uVar27 & 1) == 0; uVar27 = uVar27 >> 1 | 0x80000000) {
            iVar8 = iVar8 + 1;
          }
          uVar27 = iVar8 + uVar26 & local_1c;
          if (-1 < (char)(*local_20)[uVar27]) {
            auVar3 = *local_20;
            uVar27 = 0;
            for (uVar26 = (uint)(ushort)((ushort)(SUB161(auVar3 >> 7,0) & 1) |
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
                                        (ushort)(byte)(auVar3[0xf] >> 7) << 0xf); (uVar26 & 1) == 0;
                uVar26 = uVar26 >> 1 | 0x80000000) {
              uVar27 = uVar27 + 1;
            }
          }
          bVar23 = (byte)((ulonglong)uVar34 >> 0x18) >> 1;
          (*local_20)[uVar27] = bVar23;
          uVar26 = ~uVar27;
          local_20[1][uVar27 - 0x10 & local_1c] = bVar23;
          pauVar30 = DAT_10163248;
          uVar27 = ~(iVar7 + iVar29);
          *(undefined8 *)((int)local_20 + uVar26 * 0x28 + 0x20) =
               *(undefined8 *)((int)DAT_10163248 + uVar27 * 0x28 + 0x20);
          *(undefined8 *)((int)local_20 + uVar26 * 0x28 + 0x18) =
               *(undefined8 *)((int)pauVar30 + uVar27 * 0x28 + 0x18);
          *(undefined8 *)((int)local_20 + uVar26 * 0x28 + 0x10) =
               *(undefined8 *)((int)pauVar30 + uVar27 * 0x28 + 0x10);
          uVar34 = *(undefined8 *)((int)pauVar30 + uVar27 * 0x28);
          uVar24 = uVar24 - 1;
          *(undefined8 *)((int)local_20 + uVar26 * 0x28 + 8) =
               *(undefined8 *)((int)pauVar30 + uVar27 * 0x28 + 8);
          *(undefined8 *)((int)local_20 + uVar26 * 0x28) = uVar34;
          uVar27 = DAT_10163254;
        } while (uVar24 != 0);
      }
      DAT_10163250 = local_18 - uVar27;
      uVar27 = 0xffffffff;
      pauVar31 = local_20;
      uVar25 = local_1c;
      if ((DAT_1016324c != 0) &&
         (uVar24 = DAT_1016324c * 0x28 + 0x37 & 0xfffffff0, DAT_1016324c + uVar24 != -0x11)) {
        lpMem = *(LPVOID *)((int)DAT_10163248 + (-4 - uVar24));
        DAT_10163248 = local_20;
        DAT_1016324c = local_1c;
        hHeap = GetProcessHeap();
        HeapFree(hHeap,0,lpMem);
        pauVar31 = DAT_10163248;
        uVar25 = DAT_1016324c;
      }
    }
  }
  else {
    if (uVar24 == 0) {
      uVar27 = 0;
    }
    else {
      iVar29 = ((uVar24 >> 4) + 1) - (uint)((uVar24 & 0xf) == 0);
      pauVar30 = DAT_10163248;
      do {
        iVar29 = iVar29 + -1;
        cVar4 = (*pauVar30)[1];
        cVar9 = (*pauVar30)[2];
        cVar10 = (*pauVar30)[3];
        cVar11 = (*pauVar30)[4];
        cVar12 = (*pauVar30)[5];
        cVar13 = (*pauVar30)[6];
        cVar14 = (*pauVar30)[7];
        cVar15 = (*pauVar30)[8];
        cVar16 = (*pauVar30)[9];
        cVar17 = (*pauVar30)[10];
        cVar18 = (*pauVar30)[0xb];
        cVar19 = (*pauVar30)[0xc];
        cVar20 = (*pauVar30)[0xd];
        cVar21 = (*pauVar30)[0xe];
        cVar22 = (*pauVar30)[0xf];
        auVar33 = SUB1615((undefined1  [16])0x0,1);
        (*pauVar30)[0] = -((char)(*pauVar30)[0] < '\0') | 0x80;
        (*pauVar30)[1] = -(cVar4 < '\0') | 0x80;
        (*pauVar30)[2] = -(cVar9 < '\0') | 0x80;
        (*pauVar30)[3] = -(cVar10 < '\0') | 0x80;
        (*pauVar30)[4] = -(cVar11 < '\0') | 0x80;
        (*pauVar30)[5] = -(cVar12 < '\0') | 0x80;
        (*pauVar30)[6] = -(cVar13 < '\0') | 0x80;
        (*pauVar30)[7] = -(cVar14 < '\0') | 0x80;
        (*pauVar30)[8] = -(cVar15 < '\0') | 0x80;
        (*pauVar30)[9] = -(cVar16 < auVar33[8]) | 0x80;
        (*pauVar30)[10] = -(cVar17 < auVar33[9]) | 0x80;
        (*pauVar30)[0xb] = -(cVar18 < auVar33[10]) | 0x80;
        (*pauVar30)[0xc] = -(cVar19 < auVar33[0xb]) | 0x80;
        (*pauVar30)[0xd] = -(cVar20 < auVar33[0xc]) | 0x80;
        (*pauVar30)[0xe] = -(cVar21 < auVar33[0xd]) | 0x80;
        (*pauVar30)[0xf] = -(cVar22 < auVar33[0xe]) | 0x80;
        pauVar30 = pauVar30 + 1;
      } while (iVar29 != 0);
      if (uVar24 < 0x10) {
        uVar25 = 0x10;
        _Size = uVar24;
      }
      else {
        _Size = 0x10;
        uVar25 = uVar24;
      }
      memmove(*pauVar31 + uVar25,pauVar31,_Size);
      uVar25 = 0;
      do {
        if (SBORROW1('\0',(*DAT_10163248)[uVar25])) {
          puVar2 = (undefined8 *)((int)DAT_10163248 + ~uVar25 * 0x28);
          while( true ) {
            pauVar31 = DAT_10163248;
            uVar34 = FUN_1002e000(DAT_10163258,DAT_1016325c,DAT_10163260,DAT_10163264,
                                  *(uint *)((int)DAT_10163248 + uVar25 * -0x28 + -0x28));
            uVar28 = DAT_1016324c & (uint)uVar34;
            auVar3 = *(undefined1 (*) [16])(*pauVar31 + uVar28);
            uVar24 = (uint)(ushort)((ushort)(SUB161(auVar3 >> 7,0) & 1) |
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
                                   (ushort)(byte)(auVar3[0xf] >> 7) << 0xf);
            uVar26 = uVar28;
            if (uVar24 == 0) {
              iVar29 = 0x10;
              do {
                uVar26 = uVar26 + iVar29;
                iVar29 = iVar29 + 0x10;
                uVar26 = uVar26 & DAT_1016324c;
                auVar3 = *(undefined1 (*) [16])(*pauVar31 + uVar26);
                uVar24 = (uint)(ushort)((ushort)(SUB161(auVar3 >> 7,0) & 1) |
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
                                       (ushort)(byte)(auVar3[0xf] >> 7) << 0xf);
              } while (uVar24 == 0);
            }
            iVar29 = 0;
            for (; (uVar24 & 1) == 0; uVar24 = uVar24 >> 1 | 0x80000000) {
              iVar29 = iVar29 + 1;
            }
            uVar24 = iVar29 + uVar26 & DAT_1016324c;
            if (-1 < (char)(*pauVar31)[uVar24]) {
              auVar3 = *pauVar31;
              uVar24 = 0;
              for (uVar26 = (uint)(ushort)((ushort)(SUB161(auVar3 >> 7,0) & 1) |
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
                                          (ushort)(byte)(auVar3[0xf] >> 7) << 0xf);
                  (uVar26 & 1) == 0; uVar26 = uVar26 >> 1 | 0x80000000) {
                uVar24 = uVar24 + 1;
              }
            }
            bVar23 = (byte)((ulonglong)uVar34 >> 0x18);
            if (((uVar24 - uVar28 ^ uVar25 - uVar28) & DAT_1016324c) < 0x10) {
              uVar24 = DAT_1016324c & uVar25 - 0x10;
              bVar23 = bVar23 >> 1;
              (*pauVar31)[uVar25] = bVar23;
              DAT_10163248[1][uVar24] = bVar23;
              goto LAB_10134182;
            }
            cVar4 = (*pauVar31)[uVar24];
            uVar26 = uVar24 - 0x10 & DAT_1016324c;
            puVar1 = (undefined8 *)((int)pauVar31 + ~uVar24 * 0x28);
            bVar23 = bVar23 >> 1;
            (*pauVar31)[uVar24] = bVar23;
            DAT_10163248[1][uVar26] = bVar23;
            if (cVar4 == -1) break;
            uVar5 = *(undefined4 *)puVar2;
            *(undefined4 *)puVar2 = *(undefined4 *)puVar1;
            *(undefined4 *)puVar1 = uVar5;
            uVar5 = *(undefined4 *)((int)puVar2 + 4);
            *(undefined4 *)((int)puVar2 + 4) = *(undefined4 *)((int)puVar1 + 4);
            *(undefined4 *)((int)puVar1 + 4) = uVar5;
            uVar5 = *(undefined4 *)(puVar2 + 1);
            *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar1 + 1);
            *(undefined4 *)(puVar1 + 1) = uVar5;
            uVar5 = *(undefined4 *)((int)puVar2 + 0xc);
            *(undefined4 *)((int)puVar2 + 0xc) = *(undefined4 *)((int)puVar1 + 0xc);
            *(undefined4 *)((int)puVar1 + 0xc) = uVar5;
            uVar5 = *(undefined4 *)(puVar2 + 2);
            *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(puVar1 + 2);
            *(undefined4 *)(puVar1 + 2) = uVar5;
            uVar5 = *(undefined4 *)((int)puVar2 + 0x14);
            *(undefined4 *)((int)puVar2 + 0x14) = *(undefined4 *)((int)puVar1 + 0x14);
            *(undefined4 *)((int)puVar1 + 0x14) = uVar5;
            uVar5 = *(undefined4 *)(puVar2 + 3);
            *(undefined4 *)(puVar2 + 3) = *(undefined4 *)(puVar1 + 3);
            *(undefined4 *)(puVar1 + 3) = uVar5;
            uVar5 = *(undefined4 *)((int)puVar2 + 0x1c);
            *(undefined4 *)((int)puVar2 + 0x1c) = *(undefined4 *)((int)puVar1 + 0x1c);
            *(undefined4 *)((int)puVar1 + 0x1c) = uVar5;
            uVar5 = *(undefined4 *)(puVar2 + 4);
            *(undefined4 *)(puVar2 + 4) = *(undefined4 *)(puVar1 + 4);
            *(undefined4 *)(puVar1 + 4) = uVar5;
            uVar5 = *(undefined4 *)((int)puVar2 + 0x24);
            *(undefined4 *)((int)puVar2 + 0x24) = *(undefined4 *)((int)puVar1 + 0x24);
            *(undefined4 *)((int)puVar1 + 0x24) = uVar5;
          }
          uVar24 = uVar25 - 0x10 & DAT_1016324c;
          (*DAT_10163248)[uVar25] = 0xff;
          DAT_10163248[1][uVar24] = 0xff;
          puVar1[4] = puVar2[4];
          puVar1[3] = puVar2[3];
          puVar1[2] = puVar2[2];
          uVar34 = *puVar2;
          puVar1[1] = puVar2[1];
          *puVar1 = uVar34;
        }
LAB_10134182:
        bVar32 = uVar25 != uVar27;
        uVar25 = uVar25 + 1;
      } while (bVar32);
      uVar27 = (DAT_1016324c + 1 & 0xfffffff8) - (DAT_1016324c + 1 >> 3);
      if (DAT_1016324c < 8) {
        uVar27 = DAT_1016324c;
      }
    }
    DAT_10163250 = uVar27 - DAT_10163254;
    uVar27 = 0xffffffff;
    pauVar31 = DAT_10163248;
    uVar25 = DAT_1016324c;
  }
  DAT_1016324c = uVar25;
  DAT_10163248 = pauVar31;
  return uVar27;
}
