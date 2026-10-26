// rea decompile_all
// name: FUN_1013b390
// address: 0x1013b390
// body: available
// range: 0x1013b390-0x1013b476 inclusive
// range: 0x1013b480-0x1013b58e inclusive
// range: 0x1013b590-0x1013b8fa inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __fastcall FUN_1013b390(undefined4 *param_1,uint *param_2)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  char cVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined1 (*pauVar7) [16];
  uint uVar8;
  code *pcVar9;
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
  char cVar23;
  byte bVar24;
  uint uVar25;
  uint uVar26;
  LPVOID pvVar27;
  int iVar28;
  HANDLE hHeap;
  undefined1 (*pauVar29) [16];
  undefined8 *puVar30;
  uint uVar31;
  int iVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  undefined1 (*pauVar36) [16];
  uint uVar37;
  int iVar38;
  uint uVar39;
  uint uVar40;
  int iVar41;
  bool bVar42;
  undefined1 auVar43 [15];
  undefined8 uVar44;

  iVar4 = param_1[3];
  uVar25 = iVar4 + 1;
  if (uVar25 != 0) {
    uVar5 = param_1[1];
    uVar40 = uVar5 + 1;
    uVar26 = (uVar40 & 0xfffffff8) - (uVar40 >> 3);
    if (uVar5 < 8) {
      uVar26 = uVar5;
    }
    if (uVar25 <= uVar26 >> 1) {
      if (uVar40 != 0) {
        pauVar7 = (undefined1 (*) [16])*param_1;
        iVar38 = ((uVar40 >> 4) + 1) - (uint)((uVar40 & 0xf) == 0);
        pauVar29 = pauVar7;
        do {
          iVar38 = iVar38 + -1;
          cVar3 = (*pauVar29)[1];
          cVar10 = (*pauVar29)[2];
          cVar11 = (*pauVar29)[3];
          cVar12 = (*pauVar29)[4];
          cVar13 = (*pauVar29)[5];
          cVar14 = (*pauVar29)[6];
          cVar15 = (*pauVar29)[7];
          cVar16 = (*pauVar29)[8];
          cVar17 = (*pauVar29)[9];
          cVar18 = (*pauVar29)[10];
          cVar19 = (*pauVar29)[0xb];
          cVar20 = (*pauVar29)[0xc];
          cVar21 = (*pauVar29)[0xd];
          cVar22 = (*pauVar29)[0xe];
          cVar23 = (*pauVar29)[0xf];
          auVar43 = SUB1615((undefined1  [16])0x0,1);
          (*pauVar29)[0] = -((char)(*pauVar29)[0] < '\0') | 0x80;
          (*pauVar29)[1] = -(cVar3 < '\0') | 0x80;
          (*pauVar29)[2] = -(cVar10 < '\0') | 0x80;
          (*pauVar29)[3] = -(cVar11 < '\0') | 0x80;
          (*pauVar29)[4] = -(cVar12 < '\0') | 0x80;
          (*pauVar29)[5] = -(cVar13 < '\0') | 0x80;
          (*pauVar29)[6] = -(cVar14 < '\0') | 0x80;
          (*pauVar29)[7] = -(cVar15 < '\0') | 0x80;
          (*pauVar29)[8] = -(cVar16 < '\0') | 0x80;
          (*pauVar29)[9] = -(cVar17 < auVar43[8]) | 0x80;
          (*pauVar29)[10] = -(cVar18 < auVar43[9]) | 0x80;
          (*pauVar29)[0xb] = -(cVar19 < auVar43[10]) | 0x80;
          (*pauVar29)[0xc] = -(cVar20 < auVar43[0xb]) | 0x80;
          (*pauVar29)[0xd] = -(cVar21 < auVar43[0xc]) | 0x80;
          (*pauVar29)[0xe] = -(cVar22 < auVar43[0xd]) | 0x80;
          (*pauVar29)[0xf] = -(cVar23 < auVar43[0xe]) | 0x80;
          pauVar29 = pauVar29 + 1;
        } while (iVar38 != 0);
        if (uVar40 < 0x10) {
          uVar25 = 0x10;
        }
        else {
          uVar25 = uVar40;
          uVar40 = 0x10;
        }
        memmove(*pauVar7 + uVar25,pauVar7,uVar40);
        uVar25 = 0;
        do {
          if (SBORROW1('\0',(*pauVar7)[uVar25])) {
            puVar30 = (undefined8 *)((int)pauVar7 + (uVar25 + 1) * -0xc);
            uVar40 = *param_2;
            uVar35 = param_2[1];
            uVar37 = param_2[3];
            uVar8 = param_2[2];
            while( true ) {
              uVar44 = FUN_100c10b0(uVar40,uVar35,uVar8,uVar37,
                                    *(int *)((int)pauVar7 + uVar25 * -0xc + -0xc),
                                    *(uint *)((int)pauVar7 + uVar25 * -0xc + -8));
              uVar34 = uVar5 & (uint)uVar44;
              auVar2 = *(undefined1 (*) [16])(*pauVar7 + uVar34);
              uVar33 = (uint)(ushort)((ushort)(SUB161(auVar2 >> 7,0) & 1) |
                                      (ushort)(SUB161(auVar2 >> 0xf,0) & 1) << 1 |
                                      (ushort)(SUB161(auVar2 >> 0x17,0) & 1) << 2 |
                                      (ushort)(SUB161(auVar2 >> 0x1f,0) & 1) << 3 |
                                      (ushort)(SUB161(auVar2 >> 0x27,0) & 1) << 4 |
                                      (ushort)(SUB161(auVar2 >> 0x2f,0) & 1) << 5 |
                                      (ushort)(SUB161(auVar2 >> 0x37,0) & 1) << 6 |
                                      (ushort)(SUB161(auVar2 >> 0x3f,0) & 1) << 7 |
                                      (ushort)(SUB161(auVar2 >> 0x47,0) & 1) << 8 |
                                      (ushort)(SUB161(auVar2 >> 0x4f,0) & 1) << 9 |
                                      (ushort)(SUB161(auVar2 >> 0x57,0) & 1) << 10 |
                                      (ushort)(SUB161(auVar2 >> 0x5f,0) & 1) << 0xb |
                                      (ushort)(SUB161(auVar2 >> 0x67,0) & 1) << 0xc |
                                      (ushort)(SUB161(auVar2 >> 0x6f,0) & 1) << 0xd |
                                      (ushort)(SUB161(auVar2 >> 0x77,0) & 1) << 0xe |
                                     (ushort)(byte)(auVar2[0xf] >> 7) << 0xf);
              uVar39 = uVar34;
              if (uVar33 == 0) {
                iVar38 = 0x10;
                do {
                  uVar39 = uVar39 + iVar38;
                  iVar38 = iVar38 + 0x10;
                  uVar39 = uVar39 & uVar5;
                  auVar2 = *(undefined1 (*) [16])(*pauVar7 + uVar39);
                  uVar33 = (uint)(ushort)((ushort)(SUB161(auVar2 >> 7,0) & 1) |
                                          (ushort)(SUB161(auVar2 >> 0xf,0) & 1) << 1 |
                                          (ushort)(SUB161(auVar2 >> 0x17,0) & 1) << 2 |
                                          (ushort)(SUB161(auVar2 >> 0x1f,0) & 1) << 3 |
                                          (ushort)(SUB161(auVar2 >> 0x27,0) & 1) << 4 |
                                          (ushort)(SUB161(auVar2 >> 0x2f,0) & 1) << 5 |
                                          (ushort)(SUB161(auVar2 >> 0x37,0) & 1) << 6 |
                                          (ushort)(SUB161(auVar2 >> 0x3f,0) & 1) << 7 |
                                          (ushort)(SUB161(auVar2 >> 0x47,0) & 1) << 8 |
                                          (ushort)(SUB161(auVar2 >> 0x4f,0) & 1) << 9 |
                                          (ushort)(SUB161(auVar2 >> 0x57,0) & 1) << 10 |
                                          (ushort)(SUB161(auVar2 >> 0x5f,0) & 1) << 0xb |
                                          (ushort)(SUB161(auVar2 >> 0x67,0) & 1) << 0xc |
                                          (ushort)(SUB161(auVar2 >> 0x6f,0) & 1) << 0xd |
                                          (ushort)(SUB161(auVar2 >> 0x77,0) & 1) << 0xe |
                                         (ushort)(byte)(auVar2[0xf] >> 7) << 0xf);
                } while (uVar33 == 0);
              }
              iVar38 = 0;
              for (; (uVar33 & 1) == 0; uVar33 = uVar33 >> 1 | 0x80000000) {
                iVar38 = iVar38 + 1;
              }
              uVar33 = iVar38 + uVar39 & uVar5;
              if (-1 < (char)(*pauVar7)[uVar33]) {
                auVar2 = *pauVar7;
                uVar33 = 0;
                for (uVar39 = (uint)(ushort)((ushort)(SUB161(auVar2 >> 7,0) & 1) |
                                             (ushort)(SUB161(auVar2 >> 0xf,0) & 1) << 1 |
                                             (ushort)(SUB161(auVar2 >> 0x17,0) & 1) << 2 |
                                             (ushort)(SUB161(auVar2 >> 0x1f,0) & 1) << 3 |
                                             (ushort)(SUB161(auVar2 >> 0x27,0) & 1) << 4 |
                                             (ushort)(SUB161(auVar2 >> 0x2f,0) & 1) << 5 |
                                             (ushort)(SUB161(auVar2 >> 0x37,0) & 1) << 6 |
                                             (ushort)(SUB161(auVar2 >> 0x3f,0) & 1) << 7 |
                                             (ushort)(SUB161(auVar2 >> 0x47,0) & 1) << 8 |
                                             (ushort)(SUB161(auVar2 >> 0x4f,0) & 1) << 9 |
                                             (ushort)(SUB161(auVar2 >> 0x57,0) & 1) << 10 |
                                             (ushort)(SUB161(auVar2 >> 0x5f,0) & 1) << 0xb |
                                             (ushort)(SUB161(auVar2 >> 0x67,0) & 1) << 0xc |
                                             (ushort)(SUB161(auVar2 >> 0x6f,0) & 1) << 0xd |
                                             (ushort)(SUB161(auVar2 >> 0x77,0) & 1) << 0xe |
                                            (ushort)(byte)(auVar2[0xf] >> 7) << 0xf);
                    (uVar39 & 1) == 0; uVar39 = uVar39 >> 1 | 0x80000000) {
                  uVar33 = uVar33 + 1;
                }
              }
              bVar24 = (byte)((ulonglong)uVar44 >> 0x18);
              if (((uVar33 - uVar34 ^ uVar25 - uVar34) & uVar5) < 0x10) {
                bVar24 = bVar24 >> 1;
                (*pauVar7)[uVar25] = bVar24;
                pauVar7[1][uVar25 - 0x10 & uVar5] = bVar24;
                goto LAB_1013b5b0;
              }
              cVar3 = (*pauVar7)[uVar33];
              bVar24 = bVar24 >> 1;
              (*pauVar7)[uVar33] = bVar24;
              pauVar7[1][uVar33 - 0x10 & uVar5] = bVar24;
              if (cVar3 == -1) break;
              uVar6 = *(undefined4 *)puVar30;
              *(undefined4 *)puVar30 = *(undefined4 *)((int)pauVar7 + uVar33 * -0xc + -0xc);
              *(undefined4 *)((int)pauVar7 + uVar33 * -0xc + -0xc) = uVar6;
              uVar6 = *(undefined4 *)((int)puVar30 + 4);
              *(undefined4 *)((int)puVar30 + 4) = *(undefined4 *)((int)pauVar7 + uVar33 * -0xc + -8)
              ;
              *(undefined4 *)((int)pauVar7 + uVar33 * -0xc + -8) = uVar6;
              uVar6 = *(undefined4 *)(puVar30 + 1);
              *(undefined4 *)(puVar30 + 1) = *(undefined4 *)((int)pauVar7 + uVar33 * -0xc + -4);
              *(undefined4 *)((int)pauVar7 + uVar33 * -0xc + -4) = uVar6;
            }
            (*pauVar7)[uVar25] = 0xff;
            puVar1 = (undefined8 *)((int)pauVar7 + uVar33 * -0xc + -0xc);
            pauVar7[1][uVar25 - 0x10 & uVar5] = 0xff;
            *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(puVar30 + 1);
            *puVar1 = *puVar30;
          }
LAB_1013b5b0:
          bVar42 = uVar25 != uVar5;
          uVar25 = uVar25 + 1;
        } while (bVar42);
      }
      param_1[2] = uVar26 - iVar4;
      return 0xffffffff;
    }
    uVar35 = uVar26 + 1;
    if (uVar26 + 1 <= uVar25) {
      uVar35 = uVar25;
    }
    if (uVar35 < 0xf) {
      uVar25 = 4;
      if (3 < uVar35) {
        uVar25 = (uVar35 & 8) + 8;
      }
    }
    else {
      if (0x1fffffff < uVar35) goto LAB_1013b6a4;
      uVar25 = (uVar35 * 8) / 7 - 1;
      iVar38 = 0x1f;
      if (uVar25 != 0) {
        for (; uVar25 >> iVar38 == 0; iVar38 = iVar38 + -1) {
        }
      }
      uVar25 = (0xffffffffU >> (~(byte)iVar38 & 0x1f)) + 1;
    }
    uVar26 = (uint)((ulonglong)uVar25 * 0xc);
    if (((int)((ulonglong)uVar25 * 0xc >> 0x20) == 0) && (uVar26 < 0xfffffff1)) {
      uVar35 = uVar25 + 0x10;
      uVar26 = uVar26 + 0xf & 0xfffffff0;
      uVar37 = uVar26 + uVar35;
      if (uVar37 < 0x7ffffff1 && !CARRY4(uVar26,uVar35)) {
        pvVar27 = FUN_10107380(0,uVar37 + 0x10);
        if (pvVar27 == (LPVOID)0x0) {
          FUN_1013679e(0x10,uVar37);
                    /* WARNING: Does not return */
          pcVar9 = (code *)invalidInstructionException();
          (*pcVar9)();
        }
        uVar37 = uVar25 - 1;
        *(LPVOID *)(((uint)pvVar27 & 0xfffffff0) + 0xc) = pvVar27;
        pauVar29 = (undefined1 (*) [16])(((uint)pvVar27 & 0xfffffff0) + 0x10 + uVar26);
        uVar26 = (uVar25 & 0xfffffff8) - (uVar25 >> 3);
        if (uVar25 < 9) {
          uVar26 = uVar37;
        }
        memset(pauVar29,0xff,uVar35);
        pauVar7 = (undefined1 (*) [16])*param_1;
        if (iVar4 != 0) {
          iVar41 = 0;
          uVar25 = param_2[1];
          auVar2 = *pauVar7;
          uVar35 = *param_2;
          uVar8 = param_2[3];
          uVar33 = param_2[2];
          uVar39 = ~(uint)(ushort)((ushort)(SUB161(auVar2 >> 7,0) & 1) |
                                   (ushort)(SUB161(auVar2 >> 0xf,0) & 1) << 1 |
                                   (ushort)(SUB161(auVar2 >> 0x17,0) & 1) << 2 |
                                   (ushort)(SUB161(auVar2 >> 0x1f,0) & 1) << 3 |
                                   (ushort)(SUB161(auVar2 >> 0x27,0) & 1) << 4 |
                                   (ushort)(SUB161(auVar2 >> 0x2f,0) & 1) << 5 |
                                   (ushort)(SUB161(auVar2 >> 0x37,0) & 1) << 6 |
                                   (ushort)(SUB161(auVar2 >> 0x3f,0) & 1) << 7 |
                                   (ushort)(SUB161(auVar2 >> 0x47,0) & 1) << 8 |
                                   (ushort)(SUB161(auVar2 >> 0x4f,0) & 1) << 9 |
                                   (ushort)(SUB161(auVar2 >> 0x57,0) & 1) << 10 |
                                   (ushort)(SUB161(auVar2 >> 0x5f,0) & 1) << 0xb |
                                   (ushort)(SUB161(auVar2 >> 0x67,0) & 1) << 0xc |
                                   (ushort)(SUB161(auVar2 >> 0x6f,0) & 1) << 0xd |
                                   (ushort)(SUB161(auVar2 >> 0x77,0) & 1) << 0xe |
                                  (ushort)(byte)(auVar2[0xf] >> 7) << 0xf);
          pauVar36 = pauVar7;
          iVar38 = iVar4;
          do {
            if ((short)uVar39 == 0) {
              do {
                auVar2 = pauVar36[1];
                pauVar36 = pauVar36 + 1;
                iVar41 = iVar41 + 0x10;
                uVar39 = (ushort)((ushort)(SUB161(auVar2 >> 7,0) & 1) |
                                  (ushort)(SUB161(auVar2 >> 0xf,0) & 1) << 1 |
                                  (ushort)(SUB161(auVar2 >> 0x17,0) & 1) << 2 |
                                  (ushort)(SUB161(auVar2 >> 0x1f,0) & 1) << 3 |
                                  (ushort)(SUB161(auVar2 >> 0x27,0) & 1) << 4 |
                                  (ushort)(SUB161(auVar2 >> 0x2f,0) & 1) << 5 |
                                  (ushort)(SUB161(auVar2 >> 0x37,0) & 1) << 6 |
                                  (ushort)(SUB161(auVar2 >> 0x3f,0) & 1) << 7 |
                                  (ushort)(SUB161(auVar2 >> 0x47,0) & 1) << 8 |
                                  (ushort)(SUB161(auVar2 >> 0x4f,0) & 1) << 9 |
                                  (ushort)(SUB161(auVar2 >> 0x57,0) & 1) << 10 |
                                  (ushort)(SUB161(auVar2 >> 0x5f,0) & 1) << 0xb |
                                  (ushort)(SUB161(auVar2 >> 0x67,0) & 1) << 0xc |
                                  (ushort)(SUB161(auVar2 >> 0x6f,0) & 1) << 0xd |
                                  (ushort)(SUB161(auVar2 >> 0x77,0) & 1) << 0xe |
                                 (ushort)(byte)(auVar2[0xf] >> 7) << 0xf) ^ 0xffff;
              } while (uVar39 == 0);
            }
            iVar28 = 0;
            for (uVar34 = uVar39; (uVar34 & 1) == 0; uVar34 = uVar34 >> 1 | 0x80000000) {
              iVar28 = iVar28 + 1;
            }
            iVar28 = iVar28 + iVar41;
            uVar44 = FUN_100c10b0(uVar35,uVar25,uVar33,uVar8,
                                  *(int *)((int)pauVar7 + iVar28 * -0xc + -0xc),
                                  *(uint *)((int)pauVar7 + iVar28 * -0xc + -8));
            uVar31 = uVar37 & (uint)uVar44;
            auVar2 = *(undefined1 (*) [16])((int)*pauVar29 + uVar31);
            uVar34 = (uint)(ushort)((ushort)(SUB161(auVar2 >> 7,0) & 1) |
                                    (ushort)(SUB161(auVar2 >> 0xf,0) & 1) << 1 |
                                    (ushort)(SUB161(auVar2 >> 0x17,0) & 1) << 2 |
                                    (ushort)(SUB161(auVar2 >> 0x1f,0) & 1) << 3 |
                                    (ushort)(SUB161(auVar2 >> 0x27,0) & 1) << 4 |
                                    (ushort)(SUB161(auVar2 >> 0x2f,0) & 1) << 5 |
                                    (ushort)(SUB161(auVar2 >> 0x37,0) & 1) << 6 |
                                    (ushort)(SUB161(auVar2 >> 0x3f,0) & 1) << 7 |
                                    (ushort)(SUB161(auVar2 >> 0x47,0) & 1) << 8 |
                                    (ushort)(SUB161(auVar2 >> 0x4f,0) & 1) << 9 |
                                    (ushort)(SUB161(auVar2 >> 0x57,0) & 1) << 10 |
                                    (ushort)(SUB161(auVar2 >> 0x5f,0) & 1) << 0xb |
                                    (ushort)(SUB161(auVar2 >> 0x67,0) & 1) << 0xc |
                                    (ushort)(SUB161(auVar2 >> 0x6f,0) & 1) << 0xd |
                                    (ushort)(SUB161(auVar2 >> 0x77,0) & 1) << 0xe |
                                   (ushort)(byte)(auVar2[0xf] >> 7) << 0xf);
            if (uVar34 == 0) {
              iVar32 = 0x10;
              do {
                uVar31 = uVar31 + iVar32;
                iVar32 = iVar32 + 0x10;
                uVar31 = uVar31 & uVar37;
                auVar2 = *(undefined1 (*) [16])((int)*pauVar29 + uVar31);
                uVar34 = (uint)(ushort)((ushort)(SUB161(auVar2 >> 7,0) & 1) |
                                        (ushort)(SUB161(auVar2 >> 0xf,0) & 1) << 1 |
                                        (ushort)(SUB161(auVar2 >> 0x17,0) & 1) << 2 |
                                        (ushort)(SUB161(auVar2 >> 0x1f,0) & 1) << 3 |
                                        (ushort)(SUB161(auVar2 >> 0x27,0) & 1) << 4 |
                                        (ushort)(SUB161(auVar2 >> 0x2f,0) & 1) << 5 |
                                        (ushort)(SUB161(auVar2 >> 0x37,0) & 1) << 6 |
                                        (ushort)(SUB161(auVar2 >> 0x3f,0) & 1) << 7 |
                                        (ushort)(SUB161(auVar2 >> 0x47,0) & 1) << 8 |
                                        (ushort)(SUB161(auVar2 >> 0x4f,0) & 1) << 9 |
                                        (ushort)(SUB161(auVar2 >> 0x57,0) & 1) << 10 |
                                        (ushort)(SUB161(auVar2 >> 0x5f,0) & 1) << 0xb |
                                        (ushort)(SUB161(auVar2 >> 0x67,0) & 1) << 0xc |
                                        (ushort)(SUB161(auVar2 >> 0x6f,0) & 1) << 0xd |
                                        (ushort)(SUB161(auVar2 >> 0x77,0) & 1) << 0xe |
                                       (ushort)(byte)(auVar2[0xf] >> 7) << 0xf);
              } while (uVar34 == 0);
            }
            iVar32 = 0;
            for (; (uVar34 & 1) == 0; uVar34 = uVar34 >> 1 | 0x80000000) {
              iVar32 = iVar32 + 1;
            }
            uVar39 = uVar39 - 1 & uVar39;
            uVar34 = iVar32 + uVar31 & uVar37;
            if (-1 < *(char *)((int)*pauVar29 + uVar34)) {
              auVar2 = *pauVar29;
              uVar34 = 0;
              for (uVar31 = (uint)(ushort)((ushort)(SUB161(auVar2 >> 7,0) & 1) |
                                           (ushort)(SUB161(auVar2 >> 0xf,0) & 1) << 1 |
                                           (ushort)(SUB161(auVar2 >> 0x17,0) & 1) << 2 |
                                           (ushort)(SUB161(auVar2 >> 0x1f,0) & 1) << 3 |
                                           (ushort)(SUB161(auVar2 >> 0x27,0) & 1) << 4 |
                                           (ushort)(SUB161(auVar2 >> 0x2f,0) & 1) << 5 |
                                           (ushort)(SUB161(auVar2 >> 0x37,0) & 1) << 6 |
                                           (ushort)(SUB161(auVar2 >> 0x3f,0) & 1) << 7 |
                                           (ushort)(SUB161(auVar2 >> 0x47,0) & 1) << 8 |
                                           (ushort)(SUB161(auVar2 >> 0x4f,0) & 1) << 9 |
                                           (ushort)(SUB161(auVar2 >> 0x57,0) & 1) << 10 |
                                           (ushort)(SUB161(auVar2 >> 0x5f,0) & 1) << 0xb |
                                           (ushort)(SUB161(auVar2 >> 0x67,0) & 1) << 0xc |
                                           (ushort)(SUB161(auVar2 >> 0x6f,0) & 1) << 0xd |
                                           (ushort)(SUB161(auVar2 >> 0x77,0) & 1) << 0xe |
                                          (ushort)(byte)(auVar2[0xf] >> 7) << 0xf);
                  (uVar31 & 1) == 0; uVar31 = uVar31 >> 1 | 0x80000000) {
                uVar34 = uVar34 + 1;
              }
            }
            iVar38 = iVar38 + -1;
            bVar24 = (byte)((ulonglong)uVar44 >> 0x18) >> 1;
            *(byte *)((int)*pauVar29 + uVar34) = bVar24;
            pauVar29[1][uVar34 - 0x10 & uVar37] = bVar24;
            *(undefined8 *)((int)pauVar29 + uVar34 * -0xc + -0xc) =
                 *(undefined8 *)((int)pauVar7 + iVar28 * -0xc + -0xc);
            *(undefined4 *)((int)pauVar29 + uVar34 * -0xc + -4) =
                 *(undefined4 *)((int)pauVar7 + iVar28 * -0xc + -4);
          } while (iVar38 != 0);
        }
        *param_1 = pauVar29;
        param_1[1] = uVar37;
        param_1[2] = uVar26 - iVar4;
        if (uVar5 == 0) {
          return 0xffffffff;
        }
        uVar25 = uVar40 * 0xc + 0xf & 0xfffffff0;
        if (uVar5 + uVar25 == -0x11) {
          return 0xffffffff;
        }
        pvVar27 = *(LPVOID *)((int)pauVar7 + (-4 - uVar25));
        hHeap = GetProcessHeap();
        HeapFree(hHeap,0,pvVar27);
        return 0xffffffff;
      }
    }
  }
LAB_1013b6a4:
  FUN_101369c0("Hash table capacity overflowC:\\Users\\runneradmin\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\hashbrown-0.17.1\\src\\raw.rs"
               ,0x39,&DAT_1014f65c);
                    /* WARNING: Does not return */
  pcVar9 = (code *)invalidInstructionException();
  (*pcVar9)();
}
