// rea decompile_all
// name: FUN_101350d0
// address: 0x101350d0
// body: available
// range: 0x101350d0-0x1013543e inclusive
// range: 0x10135440-0x10135582 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint __fastcall FUN_101350d0(undefined4 *param_1,uint *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [16];
  char cVar4;
  int iVar5;
  uint uVar6;
  LPVOID lpMem;
  code *pcVar7;
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
  undefined1 uVar23;
  undefined1 uVar24;
  undefined1 uVar25;
  undefined1 uVar26;
  undefined1 uVar27;
  undefined1 uVar28;
  undefined1 uVar29;
  byte bVar30;
  size_t _Size;
  HANDLE hHeap;
  uint uVar31;
  uint uVar32;
  int iVar33;
  uint uVar34;
  uint uVar35;
  undefined1 (*pauVar36) [16];
  uint uVar37;
  int iVar38;
  int iVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  undefined1 (*pauVar44) [16];
  bool bVar45;
  undefined1 auVar46 [15];
  undefined8 uVar47;
  undefined1 (*local_20) [16];
  uint local_1c;
  int local_18;

  iVar5 = param_1[3];
  uVar31 = iVar5 + 1;
  if (uVar31 == 0) {
    FUN_101369c0("Hash table capacity overflowC:\\Users\\runneradmin\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\hashbrown-0.17.1\\src\\raw.rs"
                 ,0x39,&DAT_1014f65c);
                    /* WARNING: Does not return */
    pcVar7 = (code *)invalidInstructionException();
    (*pcVar7)();
  }
  uVar6 = param_1[1];
  uVar42 = uVar6 + 1;
  uVar40 = (uVar42 & 0xfffffff8) - (uVar42 >> 3);
  uVar41 = uVar40;
  if (uVar6 < 8) {
    uVar41 = uVar6;
  }
  if (uVar41 >> 1 < uVar31) {
    uVar42 = uVar41 + 1;
    if (uVar41 + 1 <= uVar31) {
      uVar42 = uVar31;
    }
    FUN_10003280((undefined8 *)&local_20,0x18,uVar42);
    if (local_20 == (undefined1 (*) [16])0x0) {
      return local_1c;
    }
    pauVar36 = (undefined1 (*) [16])*param_1;
    if (iVar5 != 0) {
      iVar39 = 0;
      uVar31 = param_2[1];
      auVar3 = *pauVar36;
      uVar42 = *param_2;
      uVar40 = param_2[3];
      uVar41 = param_2[2];
      uVar43 = ~(uint)(ushort)((ushort)(SUB161(auVar3 >> 7,0) & 1) |
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
      iVar38 = iVar5;
      pauVar44 = pauVar36;
      do {
        if ((short)uVar43 == 0) {
          do {
            auVar3 = pauVar44[1];
            pauVar44 = pauVar44 + 1;
            iVar39 = iVar39 + 0x10;
            uVar43 = (ushort)((ushort)(SUB161(auVar3 >> 7,0) & 1) |
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
          } while (uVar43 == 0);
        }
        iVar8 = 0;
        for (uVar35 = uVar43; (uVar35 & 1) == 0; uVar35 = uVar35 >> 1 | 0x80000000) {
          iVar8 = iVar8 + 1;
        }
        uVar47 = FUN_1002e000(uVar42,uVar31,uVar41,uVar40,
                              *(uint *)((int)pauVar36 + (iVar8 + iVar39) * -0x18 + -0x18));
        uVar32 = local_1c & (uint)uVar47;
        auVar3 = *(undefined1 (*) [16])(*local_20 + uVar32);
        uVar35 = (uint)(ushort)((ushort)(SUB161(auVar3 >> 7,0) & 1) |
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
        if (uVar35 == 0) {
          iVar33 = 0x10;
          do {
            uVar32 = uVar32 + iVar33;
            iVar33 = iVar33 + 0x10;
            uVar32 = uVar32 & local_1c;
            auVar3 = *(undefined1 (*) [16])(*local_20 + uVar32);
            uVar35 = (uint)(ushort)((ushort)(SUB161(auVar3 >> 7,0) & 1) |
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
          } while (uVar35 == 0);
        }
        iVar33 = 0;
        for (; (uVar35 & 1) == 0; uVar35 = uVar35 >> 1 | 0x80000000) {
          iVar33 = iVar33 + 1;
        }
        uVar43 = uVar43 - 1 & uVar43;
        uVar35 = iVar33 + uVar32 & local_1c;
        if (-1 < (char)(*local_20)[uVar35]) {
          auVar3 = *local_20;
          uVar35 = 0;
          for (uVar32 = (uint)(ushort)((ushort)(SUB161(auVar3 >> 7,0) & 1) |
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
                                      (ushort)(byte)(auVar3[0xf] >> 7) << 0xf); (uVar32 & 1) == 0;
              uVar32 = uVar32 >> 1 | 0x80000000) {
            uVar35 = uVar35 + 1;
          }
        }
        iVar38 = iVar38 + -1;
        bVar30 = (byte)((ulonglong)uVar47 >> 0x18) >> 1;
        (*local_20)[uVar35] = bVar30;
        local_20[1][uVar35 - 0x10 & local_1c] = bVar30;
        uVar35 = ~uVar35;
        uVar32 = ~(iVar8 + iVar39);
        *(undefined8 *)((int)local_20 + uVar35 * 0x18 + 0x10) =
             *(undefined8 *)((int)pauVar36 + uVar32 * 0x18 + 0x10);
        uVar47 = *(undefined8 *)((int)pauVar36 + uVar32 * 0x18);
        *(undefined8 *)((int)local_20 + uVar35 * 0x18 + 8) =
             *(undefined8 *)((int)pauVar36 + uVar32 * 0x18 + 8);
        *(undefined8 *)((int)local_20 + uVar35 * 0x18) = uVar47;
      } while (iVar38 != 0);
    }
    *param_1 = local_20;
    param_1[1] = local_1c;
    param_1[2] = local_18 - iVar5;
    if (uVar6 == 0) {
      return 0xffffffff;
    }
    uVar31 = uVar6 * 0x18 + 0x27 & 0xfffffff0;
    if (uVar6 + uVar31 != -0x11) {
      lpMem = *(LPVOID *)((int)pauVar36 + (-4 - uVar31));
      hHeap = GetProcessHeap();
      HeapFree(hHeap,0,lpMem);
      return 0xffffffff;
    }
  }
  else {
    if (uVar42 == 0) {
      uVar40 = 0;
    }
    else {
      pauVar44 = (undefined1 (*) [16])*param_1;
      iVar38 = ((uVar42 >> 4) + 1) - (uint)((uVar42 & 0xf) == 0);
      pauVar36 = pauVar44;
      do {
        iVar38 = iVar38 + -1;
        cVar4 = (*pauVar36)[1];
        cVar9 = (*pauVar36)[2];
        cVar10 = (*pauVar36)[3];
        cVar11 = (*pauVar36)[4];
        cVar12 = (*pauVar36)[5];
        cVar13 = (*pauVar36)[6];
        cVar14 = (*pauVar36)[7];
        cVar15 = (*pauVar36)[8];
        cVar16 = (*pauVar36)[9];
        cVar17 = (*pauVar36)[10];
        cVar18 = (*pauVar36)[0xb];
        cVar19 = (*pauVar36)[0xc];
        cVar20 = (*pauVar36)[0xd];
        cVar21 = (*pauVar36)[0xe];
        cVar22 = (*pauVar36)[0xf];
        auVar46 = SUB1615((undefined1  [16])0x0,1);
        (*pauVar36)[0] = -((char)(*pauVar36)[0] < '\0') | 0x80;
        (*pauVar36)[1] = -(cVar4 < '\0') | 0x80;
        (*pauVar36)[2] = -(cVar9 < '\0') | 0x80;
        (*pauVar36)[3] = -(cVar10 < '\0') | 0x80;
        (*pauVar36)[4] = -(cVar11 < '\0') | 0x80;
        (*pauVar36)[5] = -(cVar12 < '\0') | 0x80;
        (*pauVar36)[6] = -(cVar13 < '\0') | 0x80;
        (*pauVar36)[7] = -(cVar14 < '\0') | 0x80;
        (*pauVar36)[8] = -(cVar15 < '\0') | 0x80;
        (*pauVar36)[9] = -(cVar16 < auVar46[8]) | 0x80;
        (*pauVar36)[10] = -(cVar17 < auVar46[9]) | 0x80;
        (*pauVar36)[0xb] = -(cVar18 < auVar46[10]) | 0x80;
        (*pauVar36)[0xc] = -(cVar19 < auVar46[0xb]) | 0x80;
        (*pauVar36)[0xd] = -(cVar20 < auVar46[0xc]) | 0x80;
        (*pauVar36)[0xe] = -(cVar21 < auVar46[0xd]) | 0x80;
        (*pauVar36)[0xf] = -(cVar22 < auVar46[0xe]) | 0x80;
        pauVar36 = pauVar36 + 1;
      } while (iVar38 != 0);
      if (uVar42 < 0x10) {
        uVar31 = 0x10;
        _Size = uVar42;
      }
      else {
        _Size = 0x10;
        uVar31 = uVar42;
      }
      memmove(*pauVar44 + uVar31,pauVar44,_Size);
      uVar31 = 0;
      do {
        if (SBORROW1('\0',(*pauVar44)[uVar31])) {
          puVar2 = (undefined8 *)((int)pauVar44 + ~uVar31 * 0x18);
          uVar42 = *param_2;
          uVar41 = param_2[1];
          uVar43 = param_2[3];
          uVar35 = param_2[2];
          while( true ) {
            uVar47 = FUN_1002e000(uVar42,uVar41,uVar35,uVar43,
                                  *(uint *)((int)pauVar44 + uVar31 * -0x18 + -0x18));
            uVar34 = uVar6 & (uint)uVar47;
            auVar3 = *(undefined1 (*) [16])(*pauVar44 + uVar34);
            uVar32 = (uint)(ushort)((ushort)(SUB161(auVar3 >> 7,0) & 1) |
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
            uVar37 = uVar34;
            if (uVar32 == 0) {
              iVar38 = 0x10;
              do {
                uVar37 = uVar37 + iVar38;
                iVar38 = iVar38 + 0x10;
                uVar37 = uVar37 & uVar6;
                auVar3 = *(undefined1 (*) [16])(*pauVar44 + uVar37);
                uVar32 = (uint)(ushort)((ushort)(SUB161(auVar3 >> 7,0) & 1) |
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
              } while (uVar32 == 0);
            }
            iVar38 = 0;
            for (; (uVar32 & 1) == 0; uVar32 = uVar32 >> 1 | 0x80000000) {
              iVar38 = iVar38 + 1;
            }
            uVar32 = iVar38 + uVar37 & uVar6;
            if (-1 < (char)(*pauVar44)[uVar32]) {
              auVar3 = *pauVar44;
              uVar32 = 0;
              for (uVar37 = (uint)(ushort)((ushort)(SUB161(auVar3 >> 7,0) & 1) |
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
                  (uVar37 & 1) == 0; uVar37 = uVar37 >> 1 | 0x80000000) {
                uVar32 = uVar32 + 1;
              }
            }
            bVar30 = (byte)((ulonglong)uVar47 >> 0x18);
            if (((uVar32 - uVar34 ^ uVar31 - uVar34) & uVar6) < 0x10) {
              bVar30 = bVar30 >> 1;
              (*pauVar44)[uVar31] = bVar30;
              pauVar44[1][uVar31 - 0x10 & uVar6] = bVar30;
              goto LAB_10135459;
            }
            cVar4 = (*pauVar44)[uVar32];
            puVar1 = (undefined8 *)((int)pauVar44 + ~uVar32 * 0x18);
            bVar30 = bVar30 >> 1;
            (*pauVar44)[uVar32] = bVar30;
            pauVar44[1][uVar32 - 0x10 & uVar6] = bVar30;
            if (cVar4 == -1) break;
            uVar47 = *puVar2;
            *puVar2 = *puVar1;
            *puVar1 = uVar47;
            uVar47 = puVar2[1];
            puVar2[1] = puVar1[1];
            puVar1[1] = uVar47;
            uVar47 = puVar2[2];
            uVar23 = *(undefined1 *)((int)puVar1 + 0x11);
            uVar24 = *(undefined1 *)((int)puVar1 + 0x12);
            uVar25 = *(undefined1 *)((int)puVar1 + 0x13);
            uVar26 = *(undefined1 *)((int)puVar1 + 0x14);
            uVar27 = *(undefined1 *)((int)puVar1 + 0x15);
            uVar28 = *(undefined1 *)((int)puVar1 + 0x16);
            uVar29 = *(undefined1 *)((int)puVar1 + 0x17);
            *(undefined1 *)(puVar2 + 2) = *(undefined1 *)(puVar1 + 2);
            *(undefined1 *)((int)puVar2 + 0x11) = uVar23;
            *(undefined1 *)((int)puVar2 + 0x12) = uVar24;
            *(undefined1 *)((int)puVar2 + 0x13) = uVar25;
            *(undefined1 *)((int)puVar2 + 0x14) = uVar26;
            *(undefined1 *)((int)puVar2 + 0x15) = uVar27;
            *(undefined1 *)((int)puVar2 + 0x16) = uVar28;
            *(undefined1 *)((int)puVar2 + 0x17) = uVar29;
            puVar1[2] = uVar47;
          }
          (*pauVar44)[uVar31] = 0xff;
          pauVar44[1][uVar31 - 0x10 & uVar6] = 0xff;
          puVar1[2] = puVar2[2];
          uVar47 = *puVar2;
          uVar23 = *(undefined1 *)((int)puVar2 + 9);
          uVar24 = *(undefined1 *)((int)puVar2 + 10);
          uVar25 = *(undefined1 *)((int)puVar2 + 0xb);
          uVar26 = *(undefined1 *)((int)puVar2 + 0xc);
          uVar27 = *(undefined1 *)((int)puVar2 + 0xd);
          uVar28 = *(undefined1 *)((int)puVar2 + 0xe);
          uVar29 = *(undefined1 *)((int)puVar2 + 0xf);
          *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
          *(undefined1 *)((int)puVar1 + 9) = uVar23;
          *(undefined1 *)((int)puVar1 + 10) = uVar24;
          *(undefined1 *)((int)puVar1 + 0xb) = uVar25;
          *(undefined1 *)((int)puVar1 + 0xc) = uVar26;
          *(undefined1 *)((int)puVar1 + 0xd) = uVar27;
          *(undefined1 *)((int)puVar1 + 0xe) = uVar28;
          *(undefined1 *)((int)puVar1 + 0xf) = uVar29;
          *puVar1 = uVar47;
        }
LAB_10135459:
        bVar45 = uVar31 != uVar6;
        uVar31 = uVar31 + 1;
      } while (bVar45);
      if (uVar6 < 8) {
        uVar40 = uVar6;
      }
    }
    param_1[2] = uVar40 - iVar5;
  }
  return 0xffffffff;
}
