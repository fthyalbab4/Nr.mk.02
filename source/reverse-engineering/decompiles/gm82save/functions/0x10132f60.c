// rea decompile_all
// name: FUN_10132f60
// address: 0x10132f60
// body: available
// range: 0x10132f60-0x10133297 inclusive
// range: 0x101332a0-0x101333d1 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint __fastcall FUN_10132f60(undefined4 *param_1,uint param_2,uint *param_3)

{
  undefined1 auVar1 [16];
  char cVar2;
  uint uVar3;
  uint uVar4;
  LPVOID lpMem;
  code *pcVar5;
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
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  byte bVar27;
  uint uVar28;
  size_t _Size;
  HANDLE hHeap;
  uint uVar29;
  int iVar30;
  uint uVar31;
  uint uVar32;
  undefined1 (*pauVar33) [16];
  undefined1 (*pauVar34) [16];
  uint uVar35;
  undefined1 (*pauVar36) [16];
  uint uVar37;
  uint uVar38;
  uint uVar39;
  int iVar40;
  uint uVar41;
  bool bVar42;
  undefined1 auVar43 [15];
  undefined8 uVar44;
  undefined1 (*local_20) [16];
  uint local_1c;
  int local_18;

  uVar3 = param_1[3];
  uVar31 = param_2 + uVar3;
  if (CARRY4(param_2,uVar3)) {
    FUN_101369c0("Hash table capacity overflowC:\\Users\\runneradmin\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\hashbrown-0.17.1\\src\\raw.rs"
                 ,0x39,&DAT_1014f65c);
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  uVar4 = param_1[1];
  uVar39 = uVar4 + 1;
  uVar37 = (uVar39 & 0xfffffff8) - (uVar39 >> 3);
  uVar38 = uVar37;
  if (uVar4 < 8) {
    uVar38 = uVar4;
  }
  if (uVar38 >> 1 < uVar31) {
    uVar39 = uVar38 + 1;
    if (uVar38 + 1 <= uVar31) {
      uVar39 = uVar31;
    }
    FUN_10003280((undefined8 *)&local_20,0x10,uVar39);
    uVar31 = local_1c;
    if (local_20 != (undefined1 (*) [16])0x0) {
      pauVar33 = (undefined1 (*) [16])*param_1;
      if (uVar3 != 0) {
        auVar1 = *pauVar33;
        iVar40 = 0;
        uVar31 = param_3[3];
        uVar39 = param_3[1];
        uVar37 = *param_3;
        uVar38 = param_3[2];
        uVar35 = ~(uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
        pauVar36 = pauVar33;
        uVar41 = uVar3;
        do {
          if ((short)uVar35 == 0) {
            do {
              auVar1 = pauVar36[1];
              pauVar36 = pauVar36 + 1;
              iVar40 = iVar40 + 0x10;
              uVar35 = (ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
            } while (uVar35 == 0);
          }
          iVar30 = 0;
          for (uVar32 = uVar35; (uVar32 & 1) == 0; uVar32 = uVar32 >> 1 | 0x80000000) {
            iVar30 = iVar30 + 1;
          }
          uVar28 = iVar30 + iVar40;
          uVar44 = FUN_1002dd50(uVar37,uVar39,uVar38,uVar31,*(uint **)(pauVar33[-1 - uVar28] + 4),
                                *(uint *)(pauVar33[-1 - uVar28] + 8));
          uVar29 = local_1c & (uint)uVar44;
          auVar1 = *(undefined1 (*) [16])(*local_20 + uVar29);
          uVar32 = (uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
          if (uVar32 == 0) {
            iVar30 = 0x10;
            do {
              uVar29 = uVar29 + iVar30;
              iVar30 = iVar30 + 0x10;
              uVar29 = uVar29 & local_1c;
              auVar1 = *(undefined1 (*) [16])(*local_20 + uVar29);
              uVar32 = (uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
            } while (uVar32 == 0);
          }
          iVar30 = 0;
          for (; (uVar32 & 1) == 0; uVar32 = uVar32 >> 1 | 0x80000000) {
            iVar30 = iVar30 + 1;
          }
          uVar35 = uVar35 - 1 & uVar35;
          uVar32 = iVar30 + uVar29 & local_1c;
          if (-1 < (char)(*local_20)[uVar32]) {
            auVar1 = *local_20;
            uVar32 = 0;
            for (uVar29 = (uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
                                        (ushort)(byte)(auVar1[0xf] >> 7) << 0xf); (uVar29 & 1) == 0;
                uVar29 = uVar29 >> 1 | 0x80000000) {
              uVar32 = uVar32 + 1;
            }
          }
          uVar41 = uVar41 - 1;
          bVar27 = (byte)((ulonglong)uVar44 >> 0x18) >> 1;
          (*local_20)[uVar32] = bVar27;
          local_20[1][uVar32 - 0x10 & local_1c] = bVar27;
          uVar44 = *(undefined8 *)pauVar33[~uVar28];
          *(undefined8 *)(local_20[~uVar32] + 8) = *(undefined8 *)(pauVar33[~uVar28] + 8);
          *(undefined8 *)local_20[~uVar32] = uVar44;
        } while (uVar41 != 0);
      }
      uVar31 = 0xffffffff;
      *param_1 = local_20;
      param_1[1] = local_1c;
      param_1[2] = local_18 - uVar3;
      if ((uVar4 != 0) && (iVar40 = uVar4 * 0x10 + 0x10, uVar4 + iVar40 != -0x11)) {
        lpMem = *(LPVOID *)((int)pauVar33 + (-4 - iVar40));
        hHeap = GetProcessHeap();
        HeapFree(hHeap,0,lpMem);
      }
    }
  }
  else {
    if (uVar39 == 0) {
      uVar37 = 0;
    }
    else {
      pauVar36 = (undefined1 (*) [16])*param_1;
      iVar40 = ((uVar39 >> 4) + 1) - (uint)((uVar39 & 0xf) == 0);
      pauVar33 = pauVar36;
      do {
        iVar40 = iVar40 + -1;
        cVar2 = (*pauVar33)[1];
        cVar6 = (*pauVar33)[2];
        cVar7 = (*pauVar33)[3];
        cVar8 = (*pauVar33)[4];
        cVar9 = (*pauVar33)[5];
        cVar10 = (*pauVar33)[6];
        cVar11 = (*pauVar33)[7];
        cVar12 = (*pauVar33)[8];
        cVar13 = (*pauVar33)[9];
        cVar14 = (*pauVar33)[10];
        cVar15 = (*pauVar33)[0xb];
        cVar16 = (*pauVar33)[0xc];
        cVar17 = (*pauVar33)[0xd];
        cVar18 = (*pauVar33)[0xe];
        cVar19 = (*pauVar33)[0xf];
        auVar43 = SUB1615((undefined1  [16])0x0,1);
        (*pauVar33)[0] = -((char)(*pauVar33)[0] < '\0') | 0x80;
        (*pauVar33)[1] = -(cVar2 < '\0') | 0x80;
        (*pauVar33)[2] = -(cVar6 < '\0') | 0x80;
        (*pauVar33)[3] = -(cVar7 < '\0') | 0x80;
        (*pauVar33)[4] = -(cVar8 < '\0') | 0x80;
        (*pauVar33)[5] = -(cVar9 < '\0') | 0x80;
        (*pauVar33)[6] = -(cVar10 < '\0') | 0x80;
        (*pauVar33)[7] = -(cVar11 < '\0') | 0x80;
        (*pauVar33)[8] = -(cVar12 < '\0') | 0x80;
        (*pauVar33)[9] = -(cVar13 < auVar43[8]) | 0x80;
        (*pauVar33)[10] = -(cVar14 < auVar43[9]) | 0x80;
        (*pauVar33)[0xb] = -(cVar15 < auVar43[10]) | 0x80;
        (*pauVar33)[0xc] = -(cVar16 < auVar43[0xb]) | 0x80;
        (*pauVar33)[0xd] = -(cVar17 < auVar43[0xc]) | 0x80;
        (*pauVar33)[0xe] = -(cVar18 < auVar43[0xd]) | 0x80;
        (*pauVar33)[0xf] = -(cVar19 < auVar43[0xe]) | 0x80;
        pauVar33 = pauVar33 + 1;
      } while (iVar40 != 0);
      if (uVar39 < 0x10) {
        uVar31 = 0x10;
        _Size = uVar39;
      }
      else {
        _Size = 0x10;
        uVar31 = uVar39;
      }
      memmove(*pauVar36 + uVar31,pauVar36,_Size);
      uVar31 = 0;
      do {
        if (SBORROW1('\0',(*pauVar36)[uVar31])) {
          pauVar33 = pauVar36 + ~uVar31;
          uVar39 = *param_3;
          uVar38 = param_3[1];
          uVar41 = param_3[3];
          uVar35 = param_3[2];
          while( true ) {
            uVar44 = FUN_1002dd50(uVar39,uVar38,uVar35,uVar41,*(uint **)(pauVar36[-1 - uVar31] + 4),
                                  *(uint *)(pauVar36[-1 - uVar31] + 8));
            uVar29 = uVar4 & (uint)uVar44;
            auVar1 = *(undefined1 (*) [16])(*pauVar36 + uVar29);
            uVar32 = (uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
            uVar28 = uVar29;
            if (uVar32 == 0) {
              iVar40 = 0x10;
              do {
                uVar28 = uVar28 + iVar40;
                iVar40 = iVar40 + 0x10;
                uVar28 = uVar28 & uVar4;
                auVar1 = *(undefined1 (*) [16])(*pauVar36 + uVar28);
                uVar32 = (uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
              } while (uVar32 == 0);
            }
            iVar40 = 0;
            for (; (uVar32 & 1) == 0; uVar32 = uVar32 >> 1 | 0x80000000) {
              iVar40 = iVar40 + 1;
            }
            uVar32 = iVar40 + uVar28 & uVar4;
            if (-1 < (char)(*pauVar36)[uVar32]) {
              auVar1 = *pauVar36;
              uVar32 = 0;
              for (uVar28 = (uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
                  (uVar28 & 1) == 0; uVar28 = uVar28 >> 1 | 0x80000000) {
                uVar32 = uVar32 + 1;
              }
            }
            bVar27 = (byte)((ulonglong)uVar44 >> 0x18);
            if (((uVar32 - uVar29 ^ uVar31 - uVar29) & uVar4) < 0x10) {
              bVar27 = bVar27 >> 1;
              (*pauVar36)[uVar31] = bVar27;
              pauVar36[1][uVar31 - 0x10 & uVar4] = bVar27;
              goto LAB_101332b8;
            }
            cVar2 = (*pauVar36)[uVar32];
            pauVar34 = pauVar36 + ~uVar32;
            bVar27 = bVar27 >> 1;
            (*pauVar36)[uVar32] = bVar27;
            pauVar36[1][uVar32 - 0x10 & uVar4] = bVar27;
            if (cVar2 == -1) break;
            uVar20 = *(undefined4 *)(*pauVar34 + 4);
            uVar21 = *(undefined4 *)(*pauVar34 + 8);
            uVar22 = *(undefined4 *)(*pauVar34 + 0xc);
            uVar23 = *(undefined4 *)*pauVar33;
            uVar24 = *(undefined4 *)(*pauVar33 + 4);
            uVar25 = *(undefined4 *)(*pauVar33 + 8);
            uVar26 = *(undefined4 *)(*pauVar33 + 0xc);
            *(undefined4 *)*pauVar33 = *(undefined4 *)*pauVar34;
            *(undefined4 *)(*pauVar33 + 4) = uVar20;
            *(undefined4 *)(*pauVar33 + 8) = uVar21;
            *(undefined4 *)(*pauVar33 + 0xc) = uVar22;
            *(undefined4 *)*pauVar34 = uVar23;
            *(undefined4 *)(*pauVar34 + 4) = uVar24;
            *(undefined4 *)(*pauVar34 + 8) = uVar25;
            *(undefined4 *)(*pauVar34 + 0xc) = uVar26;
          }
          (*pauVar36)[uVar31] = 0xff;
          pauVar36[1][uVar31 - 0x10 & uVar4] = 0xff;
          uVar44 = *(undefined8 *)*pauVar33;
          *(undefined8 *)(*pauVar34 + 8) = *(undefined8 *)(*pauVar33 + 8);
          *(undefined8 *)*pauVar34 = uVar44;
        }
LAB_101332b8:
        bVar42 = uVar31 != uVar4;
        uVar31 = uVar31 + 1;
      } while (bVar42);
      if (uVar4 < 8) {
        uVar37 = uVar4;
      }
    }
    uVar31 = 0xffffffff;
    param_1[2] = uVar37 - uVar3;
  }
  return uVar31;
}
