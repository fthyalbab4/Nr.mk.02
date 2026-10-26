// rea decompile_all
// name: FUN_101321a0
// address: 0x101321a0
// body: available
// range: 0x101321a0-0x101323fe inclusive
// range: 0x10132400-0x101324e4 inclusive
// range: 0x101324f0-0x10132628 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint __fastcall FUN_101321a0(undefined4 *param_1,undefined4 *param_2)

{
  undefined1 auVar1 [16];
  char cVar2;
  uint uVar3;
  int *piVar4;
  LPVOID lpMem;
  code *pcVar5;
  int iVar6;
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
  char cVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  byte bVar28;
  size_t _Size;
  int iVar29;
  HANDLE hHeap;
  uint uVar30;
  uint uVar31;
  int iVar32;
  uint uVar33;
  undefined1 (*pauVar34) [16];
  undefined1 (*pauVar35) [16];
  uint uVar36;
  int iVar37;
  int iVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  undefined1 (*pauVar42) [16];
  uint uVar43;
  bool bVar44;
  undefined1 auVar45 [15];
  undefined8 uVar46;
  undefined1 (*local_20) [16];
  uint local_1c;
  int local_18;

  iVar29 = param_1[3];
  uVar30 = iVar29 + 1;
  if (uVar30 == 0) {
    FUN_101369c0("Hash table capacity overflowC:\\Users\\runneradmin\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\hashbrown-0.17.1\\src\\raw.rs"
                 ,0x39,&DAT_1014f65c);
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  uVar3 = param_1[1];
  uVar40 = uVar3 + 1;
  uVar39 = (uVar40 & 0xfffffff8) - (uVar40 >> 3);
  uVar41 = uVar39;
  if (uVar3 < 8) {
    uVar41 = uVar3;
  }
  if (uVar41 >> 1 < uVar30) {
    uVar40 = uVar41 + 1;
    if (uVar41 + 1 <= uVar30) {
      uVar40 = uVar30;
    }
    FUN_10003280((undefined8 *)&local_20,0x10,uVar40);
    uVar30 = local_1c;
    if (local_20 != (undefined1 (*) [16])0x0) {
      pauVar34 = (undefined1 (*) [16])*param_1;
      if (iVar29 != 0) {
        auVar1 = *pauVar34;
        iVar38 = 0;
        uVar30 = param_2[1];
        uVar40 = param_2[3];
        piVar4 = (int *)*param_2;
        uVar39 = param_2[2];
        uVar41 = ~(uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
        iVar37 = iVar29;
        pauVar42 = pauVar34;
        do {
          if ((short)uVar41 == 0) {
            do {
              auVar1 = pauVar42[1];
              pauVar42 = pauVar42 + 1;
              iVar38 = iVar38 + 0x10;
              uVar41 = (ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
            } while (uVar41 == 0);
          }
          iVar6 = 0;
          for (uVar33 = uVar41; (uVar33 & 1) == 0; uVar33 = uVar33 >> 1 | 0x80000000) {
            iVar6 = iVar6 + 1;
          }
          uVar46 = FUN_1002d2b0(piVar4,uVar30,uVar39,uVar40,
                                (int *)(pauVar34 + (-1 - (iVar6 + iVar38))));
          uVar31 = local_1c & (uint)uVar46;
          auVar1 = *(undefined1 (*) [16])(*local_20 + uVar31);
          uVar33 = (uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
          if (uVar33 == 0) {
            iVar32 = 0x10;
            do {
              uVar31 = uVar31 + iVar32;
              iVar32 = iVar32 + 0x10;
              uVar31 = uVar31 & local_1c;
              auVar1 = *(undefined1 (*) [16])(*local_20 + uVar31);
              uVar33 = (uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
            } while (uVar33 == 0);
          }
          iVar32 = 0;
          for (; (uVar33 & 1) == 0; uVar33 = uVar33 >> 1 | 0x80000000) {
            iVar32 = iVar32 + 1;
          }
          uVar41 = uVar41 - 1 & uVar41;
          uVar33 = iVar32 + uVar31 & local_1c;
          if (-1 < (char)(*local_20)[uVar33]) {
            auVar1 = *local_20;
            uVar33 = 0;
            for (uVar31 = (uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
                                        (ushort)(byte)(auVar1[0xf] >> 7) << 0xf); (uVar31 & 1) == 0;
                uVar31 = uVar31 >> 1 | 0x80000000) {
              uVar33 = uVar33 + 1;
            }
          }
          iVar37 = iVar37 + -1;
          bVar28 = (byte)((ulonglong)uVar46 >> 0x18) >> 1;
          (*local_20)[uVar33] = bVar28;
          local_20[1][uVar33 - 0x10 & local_1c] = bVar28;
          uVar31 = ~(iVar6 + iVar38);
          uVar46 = *(undefined8 *)pauVar34[uVar31];
          *(undefined8 *)(local_20[~uVar33] + 8) = *(undefined8 *)(pauVar34[uVar31] + 8);
          *(undefined8 *)local_20[~uVar33] = uVar46;
        } while (iVar37 != 0);
      }
      uVar30 = 0xffffffff;
      *param_1 = local_20;
      param_1[1] = local_1c;
      param_1[2] = local_18 - iVar29;
      if ((uVar3 != 0) && (iVar29 = uVar3 * 0x10 + 0x10, uVar3 + iVar29 != -0x11)) {
        lpMem = *(LPVOID *)((int)pauVar34 + (-4 - iVar29));
        hHeap = GetProcessHeap();
        HeapFree(hHeap,0,lpMem);
      }
    }
  }
  else {
    if (uVar40 == 0) {
      uVar39 = 0;
    }
    else {
      pauVar42 = (undefined1 (*) [16])*param_1;
      iVar37 = ((uVar40 >> 4) + 1) - (uint)((uVar40 & 0xf) == 0);
      pauVar34 = pauVar42;
      do {
        iVar37 = iVar37 + -1;
        cVar2 = (*pauVar34)[1];
        cVar7 = (*pauVar34)[2];
        cVar8 = (*pauVar34)[3];
        cVar9 = (*pauVar34)[4];
        cVar10 = (*pauVar34)[5];
        cVar11 = (*pauVar34)[6];
        cVar12 = (*pauVar34)[7];
        cVar13 = (*pauVar34)[8];
        cVar14 = (*pauVar34)[9];
        cVar15 = (*pauVar34)[10];
        cVar16 = (*pauVar34)[0xb];
        cVar17 = (*pauVar34)[0xc];
        cVar18 = (*pauVar34)[0xd];
        cVar19 = (*pauVar34)[0xe];
        cVar20 = (*pauVar34)[0xf];
        auVar45 = SUB1615((undefined1  [16])0x0,1);
        (*pauVar34)[0] = -((char)(*pauVar34)[0] < '\0') | 0x80;
        (*pauVar34)[1] = -(cVar2 < '\0') | 0x80;
        (*pauVar34)[2] = -(cVar7 < '\0') | 0x80;
        (*pauVar34)[3] = -(cVar8 < '\0') | 0x80;
        (*pauVar34)[4] = -(cVar9 < '\0') | 0x80;
        (*pauVar34)[5] = -(cVar10 < '\0') | 0x80;
        (*pauVar34)[6] = -(cVar11 < '\0') | 0x80;
        (*pauVar34)[7] = -(cVar12 < '\0') | 0x80;
        (*pauVar34)[8] = -(cVar13 < '\0') | 0x80;
        (*pauVar34)[9] = -(cVar14 < auVar45[8]) | 0x80;
        (*pauVar34)[10] = -(cVar15 < auVar45[9]) | 0x80;
        (*pauVar34)[0xb] = -(cVar16 < auVar45[10]) | 0x80;
        (*pauVar34)[0xc] = -(cVar17 < auVar45[0xb]) | 0x80;
        (*pauVar34)[0xd] = -(cVar18 < auVar45[0xc]) | 0x80;
        (*pauVar34)[0xe] = -(cVar19 < auVar45[0xd]) | 0x80;
        (*pauVar34)[0xf] = -(cVar20 < auVar45[0xe]) | 0x80;
        pauVar34 = pauVar34 + 1;
      } while (iVar37 != 0);
      if (uVar40 < 0x10) {
        uVar30 = 0x10;
        _Size = uVar40;
      }
      else {
        _Size = 0x10;
        uVar30 = uVar40;
      }
      memmove(*pauVar42 + uVar30,pauVar42,_Size);
      uVar30 = 0;
      do {
        if (SBORROW1('\0',(*pauVar42)[uVar30])) {
          pauVar34 = pauVar42 + ~uVar30;
          piVar4 = (int *)*param_2;
          uVar40 = param_2[1];
          uVar41 = param_2[3];
          uVar33 = param_2[2];
          while( true ) {
            uVar46 = FUN_1002d2b0(piVar4,uVar40,uVar33,uVar41,(int *)(pauVar42 + (-1 - uVar30)));
            uVar43 = uVar3 & (uint)uVar46;
            auVar1 = *(undefined1 (*) [16])(*pauVar42 + uVar43);
            uVar31 = (uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
            uVar36 = uVar43;
            if (uVar31 == 0) {
              iVar37 = 0x10;
              do {
                uVar36 = uVar36 + iVar37;
                iVar37 = iVar37 + 0x10;
                uVar36 = uVar36 & uVar3;
                auVar1 = *(undefined1 (*) [16])(*pauVar42 + uVar36);
                uVar31 = (uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
              } while (uVar31 == 0);
            }
            iVar37 = 0;
            for (; (uVar31 & 1) == 0; uVar31 = uVar31 >> 1 | 0x80000000) {
              iVar37 = iVar37 + 1;
            }
            uVar31 = iVar37 + uVar36 & uVar3;
            if (-1 < (char)(*pauVar42)[uVar31]) {
              auVar1 = *pauVar42;
              uVar31 = 0;
              for (uVar36 = (uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
                  (uVar36 & 1) == 0; uVar36 = uVar36 >> 1 | 0x80000000) {
                uVar31 = uVar31 + 1;
              }
            }
            bVar28 = (byte)((ulonglong)uVar46 >> 0x18);
            if (((uVar31 - uVar43 ^ uVar30 - uVar43) & uVar3) < 0x10) {
              bVar28 = bVar28 >> 1;
              (*pauVar42)[uVar30] = bVar28;
              pauVar42[1][uVar30 - 0x10 & uVar3] = bVar28;
              goto LAB_1013250c;
            }
            cVar2 = (*pauVar42)[uVar31];
            pauVar35 = pauVar42 + ~uVar31;
            bVar28 = bVar28 >> 1;
            (*pauVar42)[uVar31] = bVar28;
            pauVar42[1][uVar31 - 0x10 & uVar3] = bVar28;
            if (cVar2 == -1) break;
            uVar21 = *(undefined4 *)(*pauVar35 + 4);
            uVar22 = *(undefined4 *)(*pauVar35 + 8);
            uVar23 = *(undefined4 *)(*pauVar35 + 0xc);
            uVar24 = *(undefined4 *)*pauVar34;
            uVar25 = *(undefined4 *)(*pauVar34 + 4);
            uVar26 = *(undefined4 *)(*pauVar34 + 8);
            uVar27 = *(undefined4 *)(*pauVar34 + 0xc);
            *(undefined4 *)*pauVar34 = *(undefined4 *)*pauVar35;
            *(undefined4 *)(*pauVar34 + 4) = uVar21;
            *(undefined4 *)(*pauVar34 + 8) = uVar22;
            *(undefined4 *)(*pauVar34 + 0xc) = uVar23;
            *(undefined4 *)*pauVar35 = uVar24;
            *(undefined4 *)(*pauVar35 + 4) = uVar25;
            *(undefined4 *)(*pauVar35 + 8) = uVar26;
            *(undefined4 *)(*pauVar35 + 0xc) = uVar27;
          }
          (*pauVar42)[uVar30] = 0xff;
          pauVar42[1][uVar30 - 0x10 & uVar3] = 0xff;
          uVar46 = *(undefined8 *)*pauVar34;
          *(undefined8 *)(*pauVar35 + 8) = *(undefined8 *)(*pauVar34 + 8);
          *(undefined8 *)*pauVar35 = uVar46;
        }
LAB_1013250c:
        bVar44 = uVar30 != uVar3;
        uVar30 = uVar30 + 1;
      } while (bVar44);
      if (uVar3 < 8) {
        uVar39 = uVar3;
      }
    }
    uVar30 = 0xffffffff;
    param_1[2] = uVar39 - iVar29;
  }
  return uVar30;
}
