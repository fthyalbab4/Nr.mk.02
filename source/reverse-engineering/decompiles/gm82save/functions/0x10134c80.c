// rea decompile_all
// name: FUN_10134c80
// address: 0x10134c80
// body: available
// range: 0x10134c80-0x10134ec3 inclusive
// range: 0x10134ed0-0x10134fab inclusive
// range: 0x10134fb0-0x101350c8 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint __fastcall FUN_10134c80(undefined4 *param_1,uint *param_2)

{
  undefined1 auVar1 [16];
  char cVar2;
  int iVar3;
  uint uVar4;
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
  int iVar24;
  size_t _Size;
  HANDLE hHeap;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  undefined1 (*pauVar28) [16];
  uint uVar29;
  uint uVar30;
  undefined1 (*pauVar31) [16];
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  int iVar37;
  bool bVar38;
  undefined1 auVar39 [15];
  undefined8 uVar40;
  int local_50;
  undefined1 (*local_20) [16];
  uint local_1c;
  int local_18;

  iVar3 = param_1[3];
  uVar25 = iVar3 + 1;
  if (uVar25 == 0) {
    FUN_101369c0("Hash table capacity overflowC:\\Users\\runneradmin\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\hashbrown-0.17.1\\src\\raw.rs"
                 ,0x39,&DAT_1014f65c);
                    /* WARNING: Does not return */
    pcVar6 = (code *)invalidInstructionException();
    (*pcVar6)();
  }
  uVar4 = param_1[1];
  uVar35 = uVar4 + 1;
  uVar33 = (uVar35 & 0xfffffff8) - (uVar35 >> 3);
  uVar34 = uVar33;
  if (uVar4 < 8) {
    uVar34 = uVar4;
  }
  if (uVar34 >> 1 < uVar25) {
    uVar35 = uVar34 + 1;
    if (uVar34 + 1 <= uVar25) {
      uVar35 = uVar25;
    }
    FUN_10003280((undefined8 *)&local_20,4,uVar35);
    if (local_20 == (undefined1 (*) [16])0x0) {
      return local_1c;
    }
    pauVar28 = (undefined1 (*) [16])*param_1;
    if (iVar3 != 0) {
      iVar37 = 0;
      uVar25 = *param_2;
      uVar35 = param_2[1];
      uVar33 = param_2[3];
      uVar34 = param_2[2];
      auVar1 = *pauVar28;
      uVar36 = ~(uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
      iVar24 = iVar3;
      pauVar31 = pauVar28;
      do {
        if ((short)uVar36 == 0) {
          do {
            auVar1 = pauVar31[1];
            pauVar31 = pauVar31 + 1;
            iVar37 = iVar37 + 0x10;
            uVar36 = (ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
          } while (uVar36 == 0);
        }
        iVar7 = 0;
        for (uVar27 = uVar36; (uVar27 & 1) == 0; uVar27 = uVar27 >> 1 | 0x80000000) {
          iVar7 = iVar7 + 1;
        }
        uVar40 = FUN_1002e000(uVar25,uVar35,uVar34,uVar33,
                              *(uint *)((int)pauVar28 + (iVar7 + iVar37) * -4 + -4));
        uVar26 = local_1c & (uint)uVar40;
        auVar1 = *(undefined1 (*) [16])(*local_20 + uVar26);
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
        if (uVar27 == 0) {
          local_50 = 0x10;
          do {
            uVar26 = uVar26 + local_50;
            local_50 = local_50 + 0x10;
            uVar26 = uVar26 & local_1c;
            auVar1 = *(undefined1 (*) [16])(*local_20 + uVar26);
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
        uVar36 = uVar36 - 1 & uVar36;
        iVar8 = 0;
        for (; (uVar27 & 1) == 0; uVar27 = uVar27 >> 1 | 0x80000000) {
          iVar8 = iVar8 + 1;
        }
        uVar27 = iVar8 + uVar26 & local_1c;
        if (-1 < (char)(*local_20)[uVar27]) {
          auVar1 = *local_20;
          uVar27 = 0;
          for (uVar26 = (uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
                                      (ushort)(byte)(auVar1[0xf] >> 7) << 0xf); (uVar26 & 1) == 0;
              uVar26 = uVar26 >> 1 | 0x80000000) {
            uVar27 = uVar27 + 1;
          }
        }
        bVar23 = (byte)((ulonglong)uVar40 >> 0x18) >> 1;
        (*local_20)[uVar27] = bVar23;
        local_20[1][uVar27 - 0x10 & local_1c] = bVar23;
        *(undefined4 *)(*local_20 + ~uVar27 * 4) =
             *(undefined4 *)(*pauVar28 + ~(iVar7 + iVar37) * 4);
        iVar24 = iVar24 + -1;
      } while (iVar24 != 0);
    }
    *param_1 = local_20;
    param_1[1] = local_1c;
    param_1[2] = local_18 - iVar3;
    if (uVar4 == 0) {
      return 0xffffffff;
    }
    uVar25 = uVar4 * 4 + 0x13 & 0xfffffff0;
    if (uVar4 + uVar25 != -0x11) {
      lpMem = *(LPVOID *)((int)pauVar28 + (-4 - uVar25));
      hHeap = GetProcessHeap();
      HeapFree(hHeap,0,lpMem);
      return 0xffffffff;
    }
  }
  else {
    if (uVar35 == 0) {
      uVar33 = 0;
    }
    else {
      pauVar31 = (undefined1 (*) [16])*param_1;
      iVar24 = ((uVar35 >> 4) + 1) - (uint)((uVar35 & 0xf) == 0);
      pauVar28 = pauVar31;
      do {
        iVar24 = iVar24 + -1;
        cVar2 = (*pauVar28)[1];
        cVar9 = (*pauVar28)[2];
        cVar10 = (*pauVar28)[3];
        cVar11 = (*pauVar28)[4];
        cVar12 = (*pauVar28)[5];
        cVar13 = (*pauVar28)[6];
        cVar14 = (*pauVar28)[7];
        cVar15 = (*pauVar28)[8];
        cVar16 = (*pauVar28)[9];
        cVar17 = (*pauVar28)[10];
        cVar18 = (*pauVar28)[0xb];
        cVar19 = (*pauVar28)[0xc];
        cVar20 = (*pauVar28)[0xd];
        cVar21 = (*pauVar28)[0xe];
        cVar22 = (*pauVar28)[0xf];
        auVar39 = SUB1615((undefined1  [16])0x0,1);
        (*pauVar28)[0] = -((char)(*pauVar28)[0] < '\0') | 0x80;
        (*pauVar28)[1] = -(cVar2 < '\0') | 0x80;
        (*pauVar28)[2] = -(cVar9 < '\0') | 0x80;
        (*pauVar28)[3] = -(cVar10 < '\0') | 0x80;
        (*pauVar28)[4] = -(cVar11 < '\0') | 0x80;
        (*pauVar28)[5] = -(cVar12 < '\0') | 0x80;
        (*pauVar28)[6] = -(cVar13 < '\0') | 0x80;
        (*pauVar28)[7] = -(cVar14 < '\0') | 0x80;
        (*pauVar28)[8] = -(cVar15 < '\0') | 0x80;
        (*pauVar28)[9] = -(cVar16 < auVar39[8]) | 0x80;
        (*pauVar28)[10] = -(cVar17 < auVar39[9]) | 0x80;
        (*pauVar28)[0xb] = -(cVar18 < auVar39[10]) | 0x80;
        (*pauVar28)[0xc] = -(cVar19 < auVar39[0xb]) | 0x80;
        (*pauVar28)[0xd] = -(cVar20 < auVar39[0xc]) | 0x80;
        (*pauVar28)[0xe] = -(cVar21 < auVar39[0xd]) | 0x80;
        (*pauVar28)[0xf] = -(cVar22 < auVar39[0xe]) | 0x80;
        pauVar28 = pauVar28 + 1;
      } while (iVar24 != 0);
      if (uVar35 < 0x10) {
        uVar25 = 0x10;
        _Size = uVar35;
      }
      else {
        _Size = 0x10;
        uVar25 = uVar35;
      }
      memmove(*pauVar31 + uVar25,pauVar31,_Size);
      uVar25 = 0;
      do {
        if (SBORROW1('\0',(*pauVar31)[uVar25])) {
          uVar26 = ~uVar25;
          uVar35 = *param_2;
          uVar34 = param_2[1];
          uVar36 = param_2[3];
          uVar27 = param_2[2];
          while( true ) {
            uVar40 = FUN_1002e000(uVar35,uVar34,uVar27,uVar36,
                                  *(uint *)((int)pauVar31 + uVar25 * -4 + -4));
            uVar32 = uVar4 & (uint)uVar40;
            auVar1 = *(undefined1 (*) [16])(*pauVar31 + uVar32);
            uVar29 = (uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
            uVar30 = uVar32;
            if (uVar29 == 0) {
              iVar24 = 0x10;
              do {
                uVar30 = uVar30 + iVar24;
                iVar24 = iVar24 + 0x10;
                uVar30 = uVar30 & uVar4;
                auVar1 = *(undefined1 (*) [16])(*pauVar31 + uVar30);
                uVar29 = (uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
              } while (uVar29 == 0);
            }
            iVar24 = 0;
            for (; (uVar29 & 1) == 0; uVar29 = uVar29 >> 1 | 0x80000000) {
              iVar24 = iVar24 + 1;
            }
            uVar29 = iVar24 + uVar30 & uVar4;
            if (-1 < (char)(*pauVar31)[uVar29]) {
              auVar1 = *pauVar31;
              uVar29 = 0;
              for (uVar30 = (uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
                  (uVar30 & 1) == 0; uVar30 = uVar30 >> 1 | 0x80000000) {
                uVar29 = uVar29 + 1;
              }
            }
            bVar23 = (byte)((ulonglong)uVar40 >> 0x18);
            if (((uVar29 - uVar32 ^ uVar25 - uVar32) & uVar4) < 0x10) {
              bVar23 = bVar23 >> 1;
              (*pauVar31)[uVar25] = bVar23;
              pauVar31[1][uVar25 - 0x10 & uVar4] = bVar23;
              goto LAB_10134fc7;
            }
            cVar2 = (*pauVar31)[uVar29];
            uVar30 = ~uVar29;
            bVar23 = bVar23 >> 1;
            (*pauVar31)[uVar29] = bVar23;
            pauVar31[1][uVar29 - 0x10 & uVar4] = bVar23;
            if (cVar2 == -1) break;
            uVar5 = *(undefined4 *)(*pauVar31 + uVar26 * 4);
            *(undefined4 *)(*pauVar31 + uVar26 * 4) = *(undefined4 *)(*pauVar31 + uVar30 * 4);
            *(undefined4 *)(*pauVar31 + uVar30 * 4) = uVar5;
          }
          (*pauVar31)[uVar25] = 0xff;
          pauVar31[1][uVar25 - 0x10 & uVar4] = 0xff;
          *(undefined4 *)(*pauVar31 + uVar30 * 4) = *(undefined4 *)(*pauVar31 + uVar26 * 4);
        }
LAB_10134fc7:
        bVar38 = uVar25 != uVar4;
        uVar25 = uVar25 + 1;
      } while (bVar38);
      if (uVar4 < 8) {
        uVar33 = uVar4;
      }
    }
    param_1[2] = uVar33 - iVar3;
  }
  return 0xffffffff;
}
