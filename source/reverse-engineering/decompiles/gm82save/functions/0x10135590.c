// rea decompile_all
// name: FUN_10135590
// address: 0x10135590
// body: available
// range: 0x10135590-0x101357c2 inclusive
// range: 0x101357d0-0x101358ac inclusive
// range: 0x101358b0-0x101359d0 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint __fastcall FUN_10135590(undefined4 *param_1,uint param_2,uint *param_3)

{
  undefined1 auVar1 [16];
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  LPVOID lpMem;
  code *pcVar5;
  int iVar6;
  int iVar7;
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
  char cVar21;
  byte bVar22;
  uint uVar23;
  size_t _Size;
  uint uVar24;
  HANDLE hHeap;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  undefined1 (*pauVar28) [16];
  uint uVar29;
  uint uVar30;
  uint uVar31;
  int iVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  undefined1 (*pauVar36) [16];
  bool bVar37;
  undefined1 auVar38 [15];
  undefined8 uVar39;
  int local_4c;
  undefined1 (*local_20) [16];
  uint local_1c;
  int local_18;

  uVar24 = param_1[3];
  uVar26 = param_2 + uVar24;
  if (CARRY4(param_2,uVar24)) {
    FUN_101369c0("Hash table capacity overflowC:\\Users\\runneradmin\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\hashbrown-0.17.1\\src\\raw.rs"
                 ,0x39,&DAT_1014f65c);
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  uVar3 = param_1[1];
  uVar35 = uVar3 + 1;
  uVar33 = (uVar35 & 0xfffffff8) - (uVar35 >> 3);
  uVar34 = uVar33;
  if (uVar3 < 8) {
    uVar34 = uVar3;
  }
  if (uVar34 >> 1 < uVar26) {
    uVar35 = uVar34 + 1;
    if (uVar34 + 1 <= uVar26) {
      uVar35 = uVar26;
    }
    FUN_10003280((undefined8 *)&local_20,4,uVar35);
    if (local_20 == (undefined1 (*) [16])0x0) {
      return local_1c;
    }
    pauVar28 = (undefined1 (*) [16])*param_1;
    if (uVar24 != 0) {
      iVar32 = 0;
      uVar26 = *param_3;
      uVar35 = param_3[1];
      uVar33 = param_3[3];
      uVar34 = param_3[2];
      auVar1 = *pauVar28;
      uVar30 = ~(uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
      uVar23 = uVar24;
      pauVar36 = pauVar28;
      do {
        if ((short)uVar30 == 0) {
          do {
            auVar1 = pauVar36[1];
            pauVar36 = pauVar36 + 1;
            iVar32 = iVar32 + 0x10;
            uVar30 = (ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
          } while (uVar30 == 0);
        }
        iVar6 = 0;
        for (uVar27 = uVar30; (uVar27 & 1) == 0; uVar27 = uVar27 >> 1 | 0x80000000) {
          iVar6 = iVar6 + 1;
        }
        uVar39 = FUN_1002e000(uVar26,uVar35,uVar34,uVar33,
                              *(uint *)((int)pauVar28 + (iVar6 + iVar32) * -4 + -4));
        uVar25 = local_1c & (uint)uVar39;
        auVar1 = *(undefined1 (*) [16])(*local_20 + uVar25);
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
          local_4c = 0x10;
          do {
            uVar25 = uVar25 + local_4c;
            local_4c = local_4c + 0x10;
            uVar25 = uVar25 & local_1c;
            auVar1 = *(undefined1 (*) [16])(*local_20 + uVar25);
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
        uVar30 = uVar30 - 1 & uVar30;
        iVar7 = 0;
        for (; (uVar27 & 1) == 0; uVar27 = uVar27 >> 1 | 0x80000000) {
          iVar7 = iVar7 + 1;
        }
        uVar27 = iVar7 + uVar25 & local_1c;
        if (-1 < (char)(*local_20)[uVar27]) {
          auVar1 = *local_20;
          uVar27 = 0;
          for (uVar25 = (uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
                                      (ushort)(byte)(auVar1[0xf] >> 7) << 0xf); (uVar25 & 1) == 0;
              uVar25 = uVar25 >> 1 | 0x80000000) {
            uVar27 = uVar27 + 1;
          }
        }
        bVar22 = (byte)((ulonglong)uVar39 >> 0x18) >> 1;
        (*local_20)[uVar27] = bVar22;
        local_20[1][uVar27 - 0x10 & local_1c] = bVar22;
        *(undefined4 *)(*local_20 + ~uVar27 * 4) =
             *(undefined4 *)(*pauVar28 + ~(iVar6 + iVar32) * 4);
        uVar23 = uVar23 - 1;
      } while (uVar23 != 0);
    }
    *param_1 = local_20;
    param_1[1] = local_1c;
    param_1[2] = local_18 - uVar24;
    if (uVar3 == 0) {
      return 0xffffffff;
    }
    uVar24 = uVar3 * 4 + 0x13 & 0xfffffff0;
    if (uVar3 + uVar24 != -0x11) {
      lpMem = *(LPVOID *)((int)pauVar28 + (-4 - uVar24));
      hHeap = GetProcessHeap();
      HeapFree(hHeap,0,lpMem);
    }
  }
  else {
    if (uVar35 == 0) {
      uVar33 = 0;
    }
    else {
      pauVar36 = (undefined1 (*) [16])*param_1;
      iVar32 = ((uVar35 >> 4) + 1) - (uint)((uVar35 & 0xf) == 0);
      pauVar28 = pauVar36;
      do {
        iVar32 = iVar32 + -1;
        cVar2 = (*pauVar28)[1];
        cVar8 = (*pauVar28)[2];
        cVar9 = (*pauVar28)[3];
        cVar10 = (*pauVar28)[4];
        cVar11 = (*pauVar28)[5];
        cVar12 = (*pauVar28)[6];
        cVar13 = (*pauVar28)[7];
        cVar14 = (*pauVar28)[8];
        cVar15 = (*pauVar28)[9];
        cVar16 = (*pauVar28)[10];
        cVar17 = (*pauVar28)[0xb];
        cVar18 = (*pauVar28)[0xc];
        cVar19 = (*pauVar28)[0xd];
        cVar20 = (*pauVar28)[0xe];
        cVar21 = (*pauVar28)[0xf];
        auVar38 = SUB1615((undefined1  [16])0x0,1);
        (*pauVar28)[0] = -((char)(*pauVar28)[0] < '\0') | 0x80;
        (*pauVar28)[1] = -(cVar2 < '\0') | 0x80;
        (*pauVar28)[2] = -(cVar8 < '\0') | 0x80;
        (*pauVar28)[3] = -(cVar9 < '\0') | 0x80;
        (*pauVar28)[4] = -(cVar10 < '\0') | 0x80;
        (*pauVar28)[5] = -(cVar11 < '\0') | 0x80;
        (*pauVar28)[6] = -(cVar12 < '\0') | 0x80;
        (*pauVar28)[7] = -(cVar13 < '\0') | 0x80;
        (*pauVar28)[8] = -(cVar14 < '\0') | 0x80;
        (*pauVar28)[9] = -(cVar15 < auVar38[8]) | 0x80;
        (*pauVar28)[10] = -(cVar16 < auVar38[9]) | 0x80;
        (*pauVar28)[0xb] = -(cVar17 < auVar38[10]) | 0x80;
        (*pauVar28)[0xc] = -(cVar18 < auVar38[0xb]) | 0x80;
        (*pauVar28)[0xd] = -(cVar19 < auVar38[0xc]) | 0x80;
        (*pauVar28)[0xe] = -(cVar20 < auVar38[0xd]) | 0x80;
        (*pauVar28)[0xf] = -(cVar21 < auVar38[0xe]) | 0x80;
        pauVar28 = pauVar28 + 1;
      } while (iVar32 != 0);
      if (uVar35 < 0x10) {
        uVar26 = 0x10;
        _Size = uVar35;
      }
      else {
        _Size = 0x10;
        uVar26 = uVar35;
      }
      memmove(*pauVar36 + uVar26,pauVar36,_Size);
      uVar26 = 0;
      do {
        if (SBORROW1('\0',(*pauVar36)[uVar26])) {
          uVar27 = ~uVar26;
          uVar35 = *param_3;
          uVar34 = param_3[1];
          uVar23 = param_3[3];
          uVar30 = param_3[2];
          while( true ) {
            uVar39 = FUN_1002e000(uVar35,uVar34,uVar30,uVar23,
                                  *(uint *)((int)pauVar36 + uVar26 * -4 + -4));
            uVar31 = uVar3 & (uint)uVar39;
            auVar1 = *(undefined1 (*) [16])(*pauVar36 + uVar31);
            uVar25 = (uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
            uVar29 = uVar31;
            if (uVar25 == 0) {
              iVar32 = 0x10;
              do {
                uVar29 = uVar29 + iVar32;
                iVar32 = iVar32 + 0x10;
                uVar29 = uVar29 & uVar3;
                auVar1 = *(undefined1 (*) [16])(*pauVar36 + uVar29);
                uVar25 = (uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
              } while (uVar25 == 0);
            }
            iVar32 = 0;
            for (; (uVar25 & 1) == 0; uVar25 = uVar25 >> 1 | 0x80000000) {
              iVar32 = iVar32 + 1;
            }
            uVar25 = iVar32 + uVar29 & uVar3;
            if (-1 < (char)(*pauVar36)[uVar25]) {
              auVar1 = *pauVar36;
              uVar25 = 0;
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
                                          (ushort)(byte)(auVar1[0xf] >> 7) << 0xf);
                  (uVar29 & 1) == 0; uVar29 = uVar29 >> 1 | 0x80000000) {
                uVar25 = uVar25 + 1;
              }
            }
            bVar22 = (byte)((ulonglong)uVar39 >> 0x18);
            if (((uVar25 - uVar31 ^ uVar26 - uVar31) & uVar3) < 0x10) {
              bVar22 = bVar22 >> 1;
              (*pauVar36)[uVar26] = bVar22;
              pauVar36[1][uVar26 - 0x10 & uVar3] = bVar22;
              goto LAB_101358c8;
            }
            uVar29 = ~uVar25;
            cVar2 = (*pauVar36)[uVar25];
            bVar22 = bVar22 >> 1;
            (*pauVar36)[uVar25] = bVar22;
            pauVar36[1][uVar25 - 0x10 & uVar3] = bVar22;
            if (cVar2 == -1) break;
            uVar4 = *(undefined4 *)(*pauVar36 + uVar27 * 4);
            *(undefined4 *)(*pauVar36 + uVar27 * 4) = *(undefined4 *)(*pauVar36 + uVar29 * 4);
            *(undefined4 *)(*pauVar36 + uVar29 * 4) = uVar4;
          }
          (*pauVar36)[uVar26] = 0xff;
          pauVar36[1][uVar26 - 0x10 & uVar3] = 0xff;
          *(undefined4 *)(*pauVar36 + uVar29 * 4) = *(undefined4 *)(*pauVar36 + uVar27 * 4);
        }
LAB_101358c8:
        bVar37 = uVar26 != uVar3;
        uVar26 = uVar26 + 1;
      } while (bVar37);
      if (uVar3 < 8) {
        uVar33 = uVar3;
      }
    }
    param_1[2] = uVar33 - uVar24;
  }
  return 0xffffffff;
}
