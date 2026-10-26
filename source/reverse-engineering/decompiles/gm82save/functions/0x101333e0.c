// rea decompile_all
// name: FUN_101333e0
// address: 0x101333e0
// body: available
// range: 0x101333e0-0x10133633 inclusive
// range: 0x10133640-0x10133738 inclusive
// range: 0x10133740-0x10133872 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint __fastcall FUN_101333e0(undefined4 *param_1,uint *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [16];
  char cVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  LPVOID lpMem;
  code *pcVar8;
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
  int iVar27;
  uint uVar28;
  uint uVar29;
  undefined1 (*pauVar30) [16];
  int iVar31;
  int iVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  undefined1 (*pauVar36) [16];
  uint uVar37;
  bool bVar38;
  undefined1 auVar39 [15];
  undefined8 uVar40;
  undefined1 (*local_20) [16];
  uint local_1c;
  int local_18;

  iVar5 = param_1[3];
  uVar25 = iVar5 + 1;
  if (uVar25 == 0) {
    FUN_101369c0("Hash table capacity overflowC:\\Users\\runneradmin\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\hashbrown-0.17.1\\src\\raw.rs"
                 ,0x39,&DAT_1014f65c);
                    /* WARNING: Does not return */
    pcVar8 = (code *)invalidInstructionException();
    (*pcVar8)();
  }
  uVar6 = param_1[1];
  uVar35 = uVar6 + 1;
  uVar33 = (uVar35 & 0xfffffff8) - (uVar35 >> 3);
  uVar34 = uVar33;
  if (uVar6 < 8) {
    uVar34 = uVar6;
  }
  if (uVar34 >> 1 < uVar25) {
    uVar35 = uVar34 + 1;
    if (uVar34 + 1 <= uVar25) {
      uVar35 = uVar25;
    }
    FUN_10003280((undefined8 *)&local_20,0xc,uVar35);
    if (local_20 == (undefined1 (*) [16])0x0) {
      return local_1c;
    }
    pauVar30 = (undefined1 (*) [16])*param_1;
    if (iVar5 != 0) {
      iVar32 = 0;
      uVar25 = param_2[1];
      auVar3 = *pauVar30;
      uVar35 = *param_2;
      uVar33 = param_2[3];
      uVar34 = param_2[2];
      uVar37 = ~(uint)(ushort)((ushort)(SUB161(auVar3 >> 7,0) & 1) |
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
      iVar31 = iVar5;
      pauVar36 = pauVar30;
      do {
        if ((short)uVar37 == 0) {
          do {
            auVar3 = pauVar36[1];
            pauVar36 = pauVar36 + 1;
            iVar32 = iVar32 + 0x10;
            uVar37 = (ushort)((ushort)(SUB161(auVar3 >> 7,0) & 1) |
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
          } while (uVar37 == 0);
        }
        iVar27 = 0;
        for (uVar29 = uVar37; (uVar29 & 1) == 0; uVar29 = uVar29 >> 1 | 0x80000000) {
          iVar27 = iVar27 + 1;
        }
        uVar24 = iVar27 + iVar32;
        uVar40 = FUN_1002dd50(uVar35,uVar25,uVar34,uVar33,
                              *(uint **)((int)pauVar30 + uVar24 * -0xc + -8),
                              *(uint *)((int)pauVar30 + uVar24 * -0xc + -4));
        uVar26 = local_1c & (uint)uVar40;
        auVar3 = *(undefined1 (*) [16])(*local_20 + uVar26);
        uVar29 = (uint)(ushort)((ushort)(SUB161(auVar3 >> 7,0) & 1) |
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
        if (uVar29 == 0) {
          iVar27 = 0x10;
          do {
            uVar26 = uVar26 + iVar27;
            iVar27 = iVar27 + 0x10;
            uVar26 = uVar26 & local_1c;
            auVar3 = *(undefined1 (*) [16])(*local_20 + uVar26);
            uVar29 = (uint)(ushort)((ushort)(SUB161(auVar3 >> 7,0) & 1) |
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
          } while (uVar29 == 0);
        }
        iVar27 = 0;
        for (; (uVar29 & 1) == 0; uVar29 = uVar29 >> 1 | 0x80000000) {
          iVar27 = iVar27 + 1;
        }
        uVar37 = uVar37 - 1 & uVar37;
        uVar29 = iVar27 + uVar26 & local_1c;
        if (-1 < (char)(*local_20)[uVar29]) {
          auVar3 = *local_20;
          uVar29 = 0;
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
            uVar29 = uVar29 + 1;
          }
        }
        bVar23 = (byte)((ulonglong)uVar40 >> 0x18) >> 1;
        (*local_20)[uVar29] = bVar23;
        local_20[1][uVar29 - 0x10 & local_1c] = bVar23;
        *(undefined4 *)(*local_20 + ~uVar29 * 0xc + 8) =
             *(undefined4 *)(*pauVar30 + ~uVar24 * 0xc + 8);
        *(undefined8 *)(*local_20 + ~uVar29 * 0xc) = *(undefined8 *)(*pauVar30 + ~uVar24 * 0xc);
        iVar31 = iVar31 + -1;
      } while (iVar31 != 0);
    }
    *param_1 = local_20;
    param_1[1] = local_1c;
    param_1[2] = local_18 - iVar5;
    if (uVar6 == 0) {
      return 0xffffffff;
    }
    uVar25 = uVar6 * 0xc + 0x1b & 0xfffffff0;
    if (uVar6 + uVar25 != -0x11) {
      lpMem = *(LPVOID *)((int)pauVar30 + (-4 - uVar25));
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
      iVar31 = ((uVar35 >> 4) + 1) - (uint)((uVar35 & 0xf) == 0);
      pauVar30 = pauVar36;
      do {
        iVar31 = iVar31 + -1;
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
        auVar39 = SUB1615((undefined1  [16])0x0,1);
        (*pauVar30)[0] = -((char)(*pauVar30)[0] < '\0') | 0x80;
        (*pauVar30)[1] = -(cVar4 < '\0') | 0x80;
        (*pauVar30)[2] = -(cVar9 < '\0') | 0x80;
        (*pauVar30)[3] = -(cVar10 < '\0') | 0x80;
        (*pauVar30)[4] = -(cVar11 < '\0') | 0x80;
        (*pauVar30)[5] = -(cVar12 < '\0') | 0x80;
        (*pauVar30)[6] = -(cVar13 < '\0') | 0x80;
        (*pauVar30)[7] = -(cVar14 < '\0') | 0x80;
        (*pauVar30)[8] = -(cVar15 < '\0') | 0x80;
        (*pauVar30)[9] = -(cVar16 < auVar39[8]) | 0x80;
        (*pauVar30)[10] = -(cVar17 < auVar39[9]) | 0x80;
        (*pauVar30)[0xb] = -(cVar18 < auVar39[10]) | 0x80;
        (*pauVar30)[0xc] = -(cVar19 < auVar39[0xb]) | 0x80;
        (*pauVar30)[0xd] = -(cVar20 < auVar39[0xc]) | 0x80;
        (*pauVar30)[0xe] = -(cVar21 < auVar39[0xd]) | 0x80;
        (*pauVar30)[0xf] = -(cVar22 < auVar39[0xe]) | 0x80;
        pauVar30 = pauVar30 + 1;
      } while (iVar31 != 0);
      if (uVar35 < 0x10) {
        uVar25 = 0x10;
        _Size = uVar35;
      }
      else {
        _Size = 0x10;
        uVar25 = uVar35;
      }
      memmove(*pauVar36 + uVar25,pauVar36,_Size);
      uVar25 = 0;
      do {
        if (SBORROW1('\0',(*pauVar36)[uVar25])) {
          puVar2 = (undefined8 *)(*pauVar36 + ~uVar25 * 0xc);
          uVar35 = *param_2;
          uVar34 = param_2[1];
          uVar37 = param_2[3];
          uVar29 = param_2[2];
          while( true ) {
            uVar40 = FUN_1002dd50(uVar35,uVar34,uVar29,uVar37,
                                  *(uint **)((int)pauVar36 + uVar25 * -0xc + -8),
                                  *(uint *)((int)pauVar36 + uVar25 * -0xc + -4));
            uVar28 = uVar6 & (uint)uVar40;
            auVar3 = *(undefined1 (*) [16])(*pauVar36 + uVar28);
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
              iVar31 = 0x10;
              do {
                uVar26 = uVar26 + iVar31;
                iVar31 = iVar31 + 0x10;
                uVar26 = uVar26 & uVar6;
                auVar3 = *(undefined1 (*) [16])(*pauVar36 + uVar26);
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
            iVar31 = 0;
            for (; (uVar24 & 1) == 0; uVar24 = uVar24 >> 1 | 0x80000000) {
              iVar31 = iVar31 + 1;
            }
            uVar24 = iVar31 + uVar26 & uVar6;
            if (-1 < (char)(*pauVar36)[uVar24]) {
              auVar3 = *pauVar36;
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
            bVar23 = (byte)((ulonglong)uVar40 >> 0x18);
            if (((uVar24 - uVar28 ^ uVar25 - uVar28) & uVar6) < 0x10) {
              bVar23 = bVar23 >> 1;
              (*pauVar36)[uVar25] = bVar23;
              pauVar36[1][uVar25 - 0x10 & uVar6] = bVar23;
              goto LAB_10133758;
            }
            cVar4 = (*pauVar36)[uVar24];
            puVar1 = (undefined8 *)(*pauVar36 + ~uVar24 * 0xc);
            bVar23 = bVar23 >> 1;
            (*pauVar36)[uVar24] = bVar23;
            pauVar36[1][uVar24 - 0x10 & uVar6] = bVar23;
            if (cVar4 == -1) break;
            uVar7 = *(undefined4 *)puVar2;
            *(undefined4 *)puVar2 = *(undefined4 *)puVar1;
            *(undefined4 *)puVar1 = uVar7;
            uVar7 = *(undefined4 *)((int)puVar2 + 4);
            *(undefined4 *)((int)puVar2 + 4) = *(undefined4 *)((int)puVar1 + 4);
            *(undefined4 *)((int)puVar1 + 4) = uVar7;
            uVar7 = *(undefined4 *)(puVar2 + 1);
            *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar1 + 1);
            *(undefined4 *)(puVar1 + 1) = uVar7;
          }
          (*pauVar36)[uVar25] = 0xff;
          pauVar36[1][uVar25 - 0x10 & uVar6] = 0xff;
          *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(puVar2 + 1);
          *puVar1 = *puVar2;
        }
LAB_10133758:
        bVar38 = uVar25 != uVar6;
        uVar25 = uVar25 + 1;
      } while (bVar38);
      if (uVar6 < 8) {
        uVar33 = uVar6;
      }
    }
    param_1[2] = uVar33 - iVar5;
  }
  return 0xffffffff;
}
