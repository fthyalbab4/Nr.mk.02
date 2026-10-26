// rea decompile_all
// name: FUN_1013ce50
// address: 0x1013ce50
// body: available
// range: 0x1013ce50-0x1013cf3d inclusive
// range: 0x1013cf40-0x1013d1f0 inclusive
// range: 0x1013d200-0x1013d59c inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __fastcall FUN_1013ce50(undefined4 *param_1,uint *param_2)

{
  undefined1 auVar1 [16];
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined1 (*pauVar6) [16];
  uint uVar7;
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
  undefined1 uVar24;
  undefined1 uVar25;
  undefined1 uVar26;
  undefined1 uVar27;
  undefined1 uVar28;
  undefined1 uVar29;
  undefined1 uVar30;
  undefined1 uVar31;
  undefined1 uVar32;
  undefined1 uVar33;
  undefined1 uVar34;
  undefined1 uVar35;
  undefined1 uVar36;
  undefined1 uVar37;
  undefined1 uVar38;
  undefined1 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  undefined4 uVar53;
  byte bVar54;
  size_t _Size;
  undefined4 *_Src;
  LPVOID pvVar55;
  int iVar56;
  HANDLE hHeap;
  undefined4 *_Dst;
  uint uVar57;
  uint uVar58;
  undefined1 (*pauVar59) [16];
  uint uVar60;
  undefined1 (*pauVar61) [16];
  int iVar62;
  int iVar63;
  uint uVar64;
  uint uVar65;
  uint uVar66;
  uint uVar67;
  int iVar68;
  bool bVar69;
  undefined1 auVar70 [15];
  undefined8 uVar71;
  int local_5c;

  iVar3 = param_1[3];
  uVar58 = iVar3 + 1;
  if (uVar58 != 0) {
    uVar4 = param_1[1];
    uVar67 = uVar4 + 1;
    uVar66 = (uVar67 & 0xfffffff8) - (uVar67 >> 3);
    uVar64 = uVar66;
    if (uVar4 < 8) {
      uVar64 = uVar4;
    }
    if (uVar58 <= uVar64 >> 1) {
      if (uVar67 == 0) {
        uVar66 = 0;
      }
      else {
        pauVar6 = (undefined1 (*) [16])*param_1;
        iVar63 = ((uVar67 >> 4) + 1) - (uint)((uVar67 & 0xf) == 0);
        pauVar59 = pauVar6;
        do {
          iVar63 = iVar63 + -1;
          cVar2 = (*pauVar59)[1];
          cVar10 = (*pauVar59)[2];
          cVar11 = (*pauVar59)[3];
          cVar12 = (*pauVar59)[4];
          cVar13 = (*pauVar59)[5];
          cVar14 = (*pauVar59)[6];
          cVar15 = (*pauVar59)[7];
          cVar16 = (*pauVar59)[8];
          cVar17 = (*pauVar59)[9];
          cVar18 = (*pauVar59)[10];
          cVar19 = (*pauVar59)[0xb];
          cVar20 = (*pauVar59)[0xc];
          cVar21 = (*pauVar59)[0xd];
          cVar22 = (*pauVar59)[0xe];
          cVar23 = (*pauVar59)[0xf];
          auVar70 = SUB1615((undefined1  [16])0x0,1);
          (*pauVar59)[0] = -((char)(*pauVar59)[0] < '\0') | 0x80;
          (*pauVar59)[1] = -(cVar2 < '\0') | 0x80;
          (*pauVar59)[2] = -(cVar10 < '\0') | 0x80;
          (*pauVar59)[3] = -(cVar11 < '\0') | 0x80;
          (*pauVar59)[4] = -(cVar12 < '\0') | 0x80;
          (*pauVar59)[5] = -(cVar13 < '\0') | 0x80;
          (*pauVar59)[6] = -(cVar14 < '\0') | 0x80;
          (*pauVar59)[7] = -(cVar15 < '\0') | 0x80;
          (*pauVar59)[8] = -(cVar16 < '\0') | 0x80;
          (*pauVar59)[9] = -(cVar17 < auVar70[8]) | 0x80;
          (*pauVar59)[10] = -(cVar18 < auVar70[9]) | 0x80;
          (*pauVar59)[0xb] = -(cVar19 < auVar70[10]) | 0x80;
          (*pauVar59)[0xc] = -(cVar20 < auVar70[0xb]) | 0x80;
          (*pauVar59)[0xd] = -(cVar21 < auVar70[0xc]) | 0x80;
          (*pauVar59)[0xe] = -(cVar22 < auVar70[0xd]) | 0x80;
          (*pauVar59)[0xf] = -(cVar23 < auVar70[0xe]) | 0x80;
          pauVar59 = pauVar59 + 1;
        } while (iVar63 != 0);
        if (uVar67 < 0x10) {
          uVar58 = 0x10;
          _Size = uVar67;
        }
        else {
          _Size = 0x10;
          uVar58 = uVar67;
        }
        memmove(*pauVar6 + uVar58,pauVar6,_Size);
        uVar58 = 0;
        pauVar59 = pauVar6;
        do {
          if (SBORROW1('\0',(*pauVar6)[uVar58])) {
            _Src = (undefined4 *)(~uVar58 * 0x108 + (int)pauVar6);
            uVar67 = *param_2;
            uVar64 = param_2[1];
            uVar7 = param_2[3];
            uVar8 = param_2[2];
            while( true ) {
              uVar71 = FUN_1002e000(uVar67,uVar64,uVar8,uVar7,
                                    *(uint *)((int)pauVar6 + uVar58 * -0x108 + -0x108));
              uVar57 = uVar4 & (uint)uVar71;
              auVar1 = *(undefined1 (*) [16])(*pauVar6 + uVar57);
              uVar65 = (uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
              uVar60 = uVar57;
              if (uVar65 == 0) {
                iVar63 = 0x10;
                do {
                  uVar60 = uVar60 + iVar63;
                  iVar63 = iVar63 + 0x10;
                  uVar60 = uVar60 & uVar4;
                  auVar1 = *(undefined1 (*) [16])(*pauVar6 + uVar60);
                  uVar65 = (uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
                } while (uVar65 == 0);
              }
              iVar63 = 0;
              for (; (uVar65 & 1) == 0; uVar65 = uVar65 >> 1 | 0x80000000) {
                iVar63 = iVar63 + 1;
              }
              uVar65 = iVar63 + uVar60 & uVar4;
              if (-1 < (char)(*pauVar6)[uVar65]) {
                auVar1 = *pauVar6;
                uVar65 = 0;
                for (uVar60 = (uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
                    (uVar60 & 1) == 0; uVar60 = uVar60 >> 1 | 0x80000000) {
                  uVar65 = uVar65 + 1;
                }
              }
              bVar54 = (byte)((ulonglong)uVar71 >> 0x18);
              if (((uVar65 - uVar57 ^ uVar58 - uVar57) & uVar4) < 0x10) {
                bVar54 = bVar54 >> 1;
                (*pauVar6)[uVar58] = bVar54;
                pauVar6[1][uVar58 - 0x10 & uVar4] = bVar54;
                goto LAB_1013d21c;
              }
              cVar2 = (*pauVar6)[uVar65];
              _Dst = (undefined4 *)(~uVar65 * 0x108 + (int)pauVar6);
              bVar54 = bVar54 >> 1;
              (*pauVar6)[uVar65] = bVar54;
              pauVar6[1][uVar65 - 0x10 & uVar4] = bVar54;
              if (cVar2 == -1) break;
              uVar65 = uVar65 * -0x108 + (int)pauVar6;
              if ((uVar65 <= (int)pauVar6 + uVar58 * -0x108 + -0x108) ||
                 (iVar63 = 0, (undefined4 *)((int)pauVar6 + uVar58 * -0x108) <= _Dst)) {
                uVar5 = _Dst[1];
                uVar40 = _Dst[2];
                uVar41 = _Dst[3];
                uVar42 = _Dst[4];
                uVar43 = _Dst[5];
                uVar44 = _Dst[6];
                uVar45 = _Dst[7];
                uVar46 = *_Src;
                uVar47 = _Src[1];
                uVar48 = _Src[2];
                uVar49 = _Src[3];
                uVar50 = _Src[4];
                uVar51 = _Src[5];
                uVar52 = _Src[6];
                uVar53 = _Src[7];
                *_Src = *_Dst;
                _Src[1] = uVar5;
                _Src[2] = uVar40;
                _Src[3] = uVar41;
                _Src[4] = uVar42;
                _Src[5] = uVar43;
                _Src[6] = uVar44;
                _Src[7] = uVar45;
                *_Dst = uVar46;
                _Dst[1] = uVar47;
                _Dst[2] = uVar48;
                _Dst[3] = uVar49;
                _Dst[4] = uVar50;
                _Dst[5] = uVar51;
                _Dst[6] = uVar52;
                _Dst[7] = uVar53;
                uVar5 = _Src[8];
                uVar40 = _Src[9];
                uVar41 = _Src[10];
                uVar42 = _Src[0xb];
                uVar43 = _Src[0xc];
                uVar44 = _Src[0xd];
                uVar45 = _Src[0xe];
                uVar46 = _Src[0xf];
                uVar47 = _Dst[9];
                uVar48 = _Dst[10];
                uVar49 = _Dst[0xb];
                uVar50 = _Dst[0xc];
                uVar51 = _Dst[0xd];
                uVar52 = _Dst[0xe];
                uVar53 = _Dst[0xf];
                _Src[8] = _Dst[8];
                _Src[9] = uVar47;
                _Src[10] = uVar48;
                _Src[0xb] = uVar49;
                _Src[0xc] = uVar50;
                _Src[0xd] = uVar51;
                _Src[0xe] = uVar52;
                _Src[0xf] = uVar53;
                _Dst[8] = uVar5;
                _Dst[9] = uVar40;
                _Dst[10] = uVar41;
                _Dst[0xb] = uVar42;
                _Dst[0xc] = uVar43;
                _Dst[0xd] = uVar44;
                _Dst[0xe] = uVar45;
                _Dst[0xf] = uVar46;
                uVar5 = _Src[0x10];
                uVar40 = _Src[0x11];
                uVar41 = _Src[0x12];
                uVar42 = _Src[0x13];
                uVar43 = _Src[0x14];
                uVar44 = _Src[0x15];
                uVar45 = _Src[0x16];
                uVar46 = _Src[0x17];
                uVar47 = _Dst[0x11];
                uVar48 = _Dst[0x12];
                uVar49 = _Dst[0x13];
                uVar50 = _Dst[0x14];
                uVar51 = _Dst[0x15];
                uVar52 = _Dst[0x16];
                uVar53 = _Dst[0x17];
                _Src[0x10] = _Dst[0x10];
                _Src[0x11] = uVar47;
                _Src[0x12] = uVar48;
                _Src[0x13] = uVar49;
                _Src[0x14] = uVar50;
                _Src[0x15] = uVar51;
                _Src[0x16] = uVar52;
                _Src[0x17] = uVar53;
                _Dst[0x10] = uVar5;
                _Dst[0x11] = uVar40;
                _Dst[0x12] = uVar41;
                _Dst[0x13] = uVar42;
                _Dst[0x14] = uVar43;
                _Dst[0x15] = uVar44;
                _Dst[0x16] = uVar45;
                _Dst[0x17] = uVar46;
                uVar5 = _Src[0x18];
                uVar40 = _Src[0x19];
                uVar41 = _Src[0x1a];
                uVar42 = _Src[0x1b];
                uVar43 = _Src[0x1c];
                uVar44 = _Src[0x1d];
                uVar45 = _Src[0x1e];
                uVar46 = _Src[0x1f];
                uVar47 = _Dst[0x19];
                uVar48 = _Dst[0x1a];
                uVar49 = _Dst[0x1b];
                uVar50 = _Dst[0x1c];
                uVar51 = _Dst[0x1d];
                uVar52 = _Dst[0x1e];
                uVar53 = _Dst[0x1f];
                _Src[0x18] = _Dst[0x18];
                _Src[0x19] = uVar47;
                _Src[0x1a] = uVar48;
                _Src[0x1b] = uVar49;
                _Src[0x1c] = uVar50;
                _Src[0x1d] = uVar51;
                _Src[0x1e] = uVar52;
                _Src[0x1f] = uVar53;
                _Dst[0x18] = uVar5;
                _Dst[0x19] = uVar40;
                _Dst[0x1a] = uVar41;
                _Dst[0x1b] = uVar42;
                _Dst[0x1c] = uVar43;
                _Dst[0x1d] = uVar44;
                _Dst[0x1e] = uVar45;
                _Dst[0x1f] = uVar46;
                uVar5 = _Src[0x20];
                uVar40 = _Src[0x21];
                uVar41 = _Src[0x22];
                uVar42 = _Src[0x23];
                uVar43 = _Src[0x24];
                uVar44 = _Src[0x25];
                uVar45 = _Src[0x26];
                uVar46 = _Src[0x27];
                uVar47 = _Dst[0x21];
                uVar48 = _Dst[0x22];
                uVar49 = _Dst[0x23];
                uVar50 = _Dst[0x24];
                uVar51 = _Dst[0x25];
                uVar52 = _Dst[0x26];
                uVar53 = _Dst[0x27];
                _Src[0x20] = _Dst[0x20];
                _Src[0x21] = uVar47;
                _Src[0x22] = uVar48;
                _Src[0x23] = uVar49;
                _Src[0x24] = uVar50;
                _Src[0x25] = uVar51;
                _Src[0x26] = uVar52;
                _Src[0x27] = uVar53;
                _Dst[0x20] = uVar5;
                _Dst[0x21] = uVar40;
                _Dst[0x22] = uVar41;
                _Dst[0x23] = uVar42;
                _Dst[0x24] = uVar43;
                _Dst[0x25] = uVar44;
                _Dst[0x26] = uVar45;
                _Dst[0x27] = uVar46;
                uVar5 = _Src[0x28];
                uVar40 = _Src[0x29];
                uVar41 = _Src[0x2a];
                uVar42 = _Src[0x2b];
                uVar43 = _Src[0x2c];
                uVar44 = _Src[0x2d];
                uVar45 = _Src[0x2e];
                uVar46 = _Src[0x2f];
                uVar47 = _Dst[0x29];
                uVar48 = _Dst[0x2a];
                uVar49 = _Dst[0x2b];
                uVar50 = _Dst[0x2c];
                uVar51 = _Dst[0x2d];
                uVar52 = _Dst[0x2e];
                uVar53 = _Dst[0x2f];
                _Src[0x28] = _Dst[0x28];
                _Src[0x29] = uVar47;
                _Src[0x2a] = uVar48;
                _Src[0x2b] = uVar49;
                _Src[0x2c] = uVar50;
                _Src[0x2d] = uVar51;
                _Src[0x2e] = uVar52;
                _Src[0x2f] = uVar53;
                _Dst[0x28] = uVar5;
                _Dst[0x29] = uVar40;
                _Dst[0x2a] = uVar41;
                _Dst[0x2b] = uVar42;
                _Dst[0x2c] = uVar43;
                _Dst[0x2d] = uVar44;
                _Dst[0x2e] = uVar45;
                _Dst[0x2f] = uVar46;
                uVar5 = _Src[0x30];
                uVar40 = _Src[0x31];
                uVar41 = _Src[0x32];
                uVar42 = _Src[0x33];
                uVar43 = _Src[0x34];
                uVar44 = _Src[0x35];
                uVar45 = _Src[0x36];
                uVar46 = _Src[0x37];
                uVar47 = _Dst[0x31];
                uVar48 = _Dst[0x32];
                uVar49 = _Dst[0x33];
                uVar50 = _Dst[0x34];
                uVar51 = _Dst[0x35];
                uVar52 = _Dst[0x36];
                uVar53 = _Dst[0x37];
                _Src[0x30] = _Dst[0x30];
                _Src[0x31] = uVar47;
                _Src[0x32] = uVar48;
                _Src[0x33] = uVar49;
                _Src[0x34] = uVar50;
                _Src[0x35] = uVar51;
                _Src[0x36] = uVar52;
                _Src[0x37] = uVar53;
                _Dst[0x30] = uVar5;
                _Dst[0x31] = uVar40;
                _Dst[0x32] = uVar41;
                _Dst[0x33] = uVar42;
                _Dst[0x34] = uVar43;
                _Dst[0x35] = uVar44;
                _Dst[0x36] = uVar45;
                _Dst[0x37] = uVar46;
                uVar5 = _Dst[0x39];
                uVar40 = _Dst[0x3a];
                uVar41 = _Dst[0x3b];
                uVar42 = _Dst[0x3c];
                uVar43 = _Dst[0x3d];
                uVar44 = _Dst[0x3e];
                uVar45 = _Dst[0x3f];
                uVar46 = _Src[0x38];
                uVar47 = _Src[0x39];
                uVar48 = _Src[0x3a];
                uVar49 = _Src[0x3b];
                uVar24 = *(undefined1 *)(_Src + 0x3c);
                uVar25 = *(undefined1 *)((int)_Src + 0xf1);
                uVar26 = *(undefined1 *)((int)_Src + 0xf2);
                uVar27 = *(undefined1 *)((int)_Src + 0xf3);
                uVar28 = *(undefined1 *)(_Src + 0x3d);
                uVar29 = *(undefined1 *)((int)_Src + 0xf5);
                uVar30 = *(undefined1 *)((int)_Src + 0xf6);
                uVar31 = *(undefined1 *)((int)_Src + 0xf7);
                uVar32 = *(undefined1 *)(_Src + 0x3e);
                uVar33 = *(undefined1 *)((int)_Src + 0xf9);
                uVar34 = *(undefined1 *)((int)_Src + 0xfa);
                uVar35 = *(undefined1 *)((int)_Src + 0xfb);
                uVar36 = *(undefined1 *)(_Src + 0x3f);
                uVar37 = *(undefined1 *)((int)_Src + 0xfd);
                uVar38 = *(undefined1 *)((int)_Src + 0xfe);
                uVar39 = *(undefined1 *)((int)_Src + 0xff);
                _Src[0x38] = _Dst[0x38];
                _Src[0x39] = uVar5;
                _Src[0x3a] = uVar40;
                _Src[0x3b] = uVar41;
                _Src[0x3c] = uVar42;
                _Src[0x3d] = uVar43;
                _Src[0x3e] = uVar44;
                _Src[0x3f] = uVar45;
                iVar63 = 0x40;
                _Dst[0x38] = uVar46;
                _Dst[0x39] = uVar47;
                _Dst[0x3a] = uVar48;
                _Dst[0x3b] = uVar49;
                *(undefined1 *)(_Dst + 0x3c) = uVar24;
                *(undefined1 *)((int)_Dst + 0xf1) = uVar25;
                *(undefined1 *)((int)_Dst + 0xf2) = uVar26;
                *(undefined1 *)((int)_Dst + 0xf3) = uVar27;
                *(undefined1 *)(_Dst + 0x3d) = uVar28;
                *(undefined1 *)((int)_Dst + 0xf5) = uVar29;
                *(undefined1 *)((int)_Dst + 0xf6) = uVar30;
                *(undefined1 *)((int)_Dst + 0xf7) = uVar31;
                *(undefined1 *)(_Dst + 0x3e) = uVar32;
                *(undefined1 *)((int)_Dst + 0xf9) = uVar33;
                *(undefined1 *)((int)_Dst + 0xfa) = uVar34;
                *(undefined1 *)((int)_Dst + 0xfb) = uVar35;
                *(undefined1 *)(_Dst + 0x3f) = uVar36;
                *(undefined1 *)((int)_Dst + 0xfd) = uVar37;
                *(undefined1 *)((int)_Dst + 0xfe) = uVar38;
                *(undefined1 *)((int)_Dst + 0xff) = uVar39;
              }
              local_5c = iVar63 + -0x42;
              do {
                uVar5 = *(undefined4 *)(*pauVar59 + local_5c * 4);
                *(undefined4 *)(*pauVar59 + local_5c * 4) = *(undefined4 *)(uVar65 + local_5c * 4);
                iVar63 = local_5c + 1;
                *(undefined4 *)(uVar65 + local_5c * 4) = uVar5;
                local_5c = iVar63;
              } while (iVar63 != 0);
            }
            (*pauVar6)[uVar58] = 0xff;
            pauVar6[1][uVar58 - 0x10 & uVar4] = 0xff;
            memcpy(_Dst,_Src,0x108);
          }
LAB_1013d21c:
          pauVar59 = (undefined1 (*) [16])(pauVar59[-0x11] + 8);
          bVar69 = uVar58 != uVar4;
          uVar58 = uVar58 + 1;
        } while (bVar69);
        if (uVar4 < 8) {
          uVar66 = uVar4;
        }
      }
      param_1[2] = uVar66 - iVar3;
      return 0xffffffff;
    }
    uVar67 = uVar64 + 1;
    if (uVar64 + 1 <= uVar58) {
      uVar67 = uVar58;
    }
    if (uVar67 < 0xf) {
      uVar58 = 4;
      if (3 < uVar67) {
        uVar58 = (uVar67 & 8) + 8;
      }
    }
    else {
      if (0x1fffffff < uVar67) goto LAB_1013d335;
      uVar58 = (uVar67 * 8) / 7 - 1;
      iVar63 = 0x1f;
      if (uVar58 != 0) {
        for (; uVar58 >> iVar63 == 0; iVar63 = iVar63 + -1) {
        }
      }
      uVar58 = (0xffffffffU >> (~(byte)iVar63 & 0x1f)) + 1;
    }
    if ((int)((ulonglong)uVar58 * 0x108 >> 0x20) == 0) {
      uVar67 = uVar58 + 0x10;
      uVar66 = (int)((ulonglong)uVar58 * 0x108) + 0xfU & 0xfffffff0;
      uVar64 = uVar66 + uVar67;
      if (uVar64 < 0x7ffffff1 && !CARRY4(uVar66,uVar67)) {
        pvVar55 = FUN_10107380(0,uVar64 + 0x10);
        if (pvVar55 == (LPVOID)0x0) {
          FUN_1013679e(0x10,uVar64);
                    /* WARNING: Does not return */
          pcVar9 = (code *)invalidInstructionException();
          (*pcVar9)();
        }
        *(LPVOID *)(((uint)pvVar55 & 0xfffffff0) + 0xc) = pvVar55;
        pauVar59 = (undefined1 (*) [16])(((uint)pvVar55 & 0xfffffff0) + 0x10 + uVar66);
        uVar66 = uVar58 - 1;
        uVar64 = (uVar58 & 0xfffffff8) - (uVar58 >> 3);
        if (uVar58 < 9) {
          uVar64 = uVar66;
        }
        memset(pauVar59,0xff,uVar67);
        pauVar6 = (undefined1 (*) [16])*param_1;
        iVar63 = 0;
        if (iVar3 != 0) {
          iVar62 = 0;
          uVar58 = *param_2;
          auVar1 = *pauVar6;
          uVar67 = param_2[3];
          uVar7 = param_2[1];
          uVar8 = param_2[2];
          uVar65 = ~(uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
          pauVar61 = pauVar6;
          iVar68 = iVar3;
          do {
            if ((short)uVar65 == 0) {
              do {
                auVar1 = pauVar61[1];
                pauVar61 = pauVar61 + 1;
                iVar62 = iVar62 + 0x10;
                uVar65 = (ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
              } while (uVar65 == 0);
            }
            iVar63 = 0;
            for (uVar60 = uVar65; (uVar60 & 1) == 0; uVar60 = uVar60 >> 1 | 0x80000000) {
              iVar63 = iVar63 + 1;
            }
            uVar71 = FUN_1002e000(uVar58,uVar7,uVar8,uVar67,
                                  *(uint *)((int)pauVar6 + (iVar63 + iVar62) * -0x108 + -0x108));
            uVar57 = uVar66 & (uint)uVar71;
            auVar1 = *(undefined1 (*) [16])((int)*pauVar59 + uVar57);
            uVar60 = (uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
            if (uVar60 == 0) {
              iVar56 = 0x10;
              do {
                uVar57 = uVar57 + iVar56;
                iVar56 = iVar56 + 0x10;
                uVar57 = uVar57 & uVar66;
                auVar1 = *(undefined1 (*) [16])((int)*pauVar59 + uVar57);
                uVar60 = (uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
              } while (uVar60 == 0);
            }
            iVar56 = 0;
            for (; (uVar60 & 1) == 0; uVar60 = uVar60 >> 1 | 0x80000000) {
              iVar56 = iVar56 + 1;
            }
            uVar65 = uVar65 - 1 & uVar65;
            uVar60 = iVar56 + uVar57 & uVar66;
            if (-1 < *(char *)((int)*pauVar59 + uVar60)) {
              auVar1 = *pauVar59;
              uVar60 = 0;
              for (uVar57 = (uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
                  (uVar57 & 1) == 0; uVar57 = uVar57 >> 1 | 0x80000000) {
                uVar60 = uVar60 + 1;
              }
            }
            iVar68 = iVar68 + -1;
            bVar54 = (byte)((ulonglong)uVar71 >> 0x18) >> 1;
            *(byte *)((int)*pauVar59 + uVar60) = bVar54;
            pauVar59[1][uVar60 - 0x10 & uVar66] = bVar54;
            memcpy((void *)(~uVar60 * 0x108 + (int)pauVar59),
                   (void *)(~(iVar63 + iVar62) * 0x108 + (int)pauVar6),0x108);
            iVar63 = iVar3;
          } while (iVar68 != 0);
        }
        *param_1 = pauVar59;
        param_1[1] = uVar66;
        param_1[2] = uVar64 - iVar63;
        if (uVar4 == 0) {
          return 0xffffffff;
        }
        uVar58 = uVar4 * 0x108 + 0x117 & 0xfffffff0;
        if (uVar4 + uVar58 == -0x11) {
          return 0xffffffff;
        }
        pvVar55 = *(LPVOID *)((int)pauVar6 + (-4 - uVar58));
        hHeap = GetProcessHeap();
        HeapFree(hHeap,0,pvVar55);
        return 0xffffffff;
      }
    }
  }
LAB_1013d335:
  FUN_101369c0("Hash table capacity overflowC:\\Users\\runneradmin\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\hashbrown-0.17.1\\src\\raw.rs"
               ,0x39,&DAT_1014f65c);
                    /* WARNING: Does not return */
  pcVar9 = (code *)invalidInstructionException();
  (*pcVar9)();
}
