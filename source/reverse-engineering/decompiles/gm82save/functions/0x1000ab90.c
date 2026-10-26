// rea decompile_all
// name: FUN_1000ab90
// address: 0x1000ab90
// body: available
// range: 0x1000ab90-0x1000ac46 inclusive
// range: 0x1000ac50-0x1000b4f2 inclusive
// range: 0x1000b500-0x1000b599 inclusive
// range: 0x1000b8d6-0x1000b91b inclusive
// range: 0x1000c2ea-0x1000c6bb inclusive
// range: 0x1000c6d7-0x1000c830 inclusive
// range: 0x1000c84a-0x1000c8bc inclusive
// range: 0x1000c8e7-0x1000c978 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall
FUN_1000ab90(char *param_1,int *param_2,int param_3,undefined4 param_4,undefined4 param_5,
            int *param_6)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  code *pcVar4;
  char *pcVar5;
  SIZE_T SVar6;
  HANDLE pvVar7;
  uint uVar8;
  undefined4 uVar9;
  LPVOID pvVar10;
  int iVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  ushort *puVar15;
  byte *pbVar16;
  byte *pbVar17;
  int iVar18;
  byte *pbVar19;
  int *piVar20;
  int *piVar21;
  char local_d0;
  undefined2 uStack_cf;
  byte *pbStack_cd;
  byte *pbStack_c9;
  byte *pbStack_c5;
  byte *local_c0;
  int local_bc;
  undefined8 local_b8;
  byte *local_b0;
  undefined4 local_a8;
  byte *pbStack_a4;
  byte *pbStack_a0;
  byte *pbStack_9c;
  byte *local_98;
  undefined4 uStack_94;
  byte *local_90;
  byte *pbStack_8c;
  undefined4 local_88;
  byte *local_84;
  int local_78;
  byte *local_74;
  byte *local_70;
  byte *local_6c;
  byte *local_64;
  byte *local_60;
  int *local_5c;
  byte *local_58;
  undefined4 local_54;
  undefined4 local_50;
  byte *local_4c;
  byte *local_48;
  int local_44;
  byte *local_40;
  byte *local_3c;
  byte *local_38;
  byte *local_34;
  byte *local_30;
  byte *local_2c;
  int *local_28;
  int local_24;
  byte *local_20;
  undefined4 local_1c;
  undefined4 local_18;

  local_24 = 0x1000aba4;
  local_1c = param_4;
  local_18 = param_5;
  local_a8._0_1_ = (char)&local_1c;
  local_a8._1_2_ = (undefined2)((uint)&local_1c >> 8);
  local_a8._3_1_ = (char)((uint)&local_1c >> 0x18);
  pbStack_a4 = &LAB_10093d10;
  FUN_10092aa0((undefined8 *)&local_d0,param_6,(ushort *)&DAT_1013f3e4,(uint)&local_a8);
  if (local_d0 == -1) {
    if (param_2 == (int *)0x0) {
      param_2 = (int *)&DAT_00000004;
    }
    if (param_3 != 0) {
      local_28 = param_2 + param_3;
      local_5c = param_2;
      do {
        local_a8._0_1_ = '\b';
        local_a8._1_2_ = 0x13f4;
        local_a8._3_1_ = 0x10;
        pbStack_a4 = &LAB_10093d10;
        FUN_10092aa0((undefined8 *)&local_d0,param_6,(ushort *)&DAT_10155922,(uint)&local_a8);
        if (local_d0 != -1) goto LAB_1000abf9;
        iVar18 = *local_5c;
        iVar11 = iVar18 + 4;
        local_a8._0_1_ = (char)iVar11;
        local_a8._1_2_ = (undefined2)((uint)iVar11 >> 8);
        local_a8._3_1_ = (char)((uint)iVar11 >> 0x18);
        pbStack_a4 = &LAB_10096fc0;
        FUN_10092aa0((undefined8 *)&local_d0,param_6,(ushort *)&DAT_1013f410,(uint)&local_a8);
        if (local_d0 != -1) {
LAB_1000c6e3:
          uVar9 = CONCAT13(pbStack_cd._0_1_,CONCAT21(uStack_cf,local_d0));
          pbStack_a4 = (byte *)CONCAT13(pbStack_c9._0_1_,pbStack_cd._1_3_);
LAB_1000c6eb:
          *param_1 = '\0';
          *(byte **)(param_1 + 8) = pbStack_a4;
          *(undefined4 *)(param_1 + 4) = uVar9;
          return;
        }
        iVar11 = iVar18 + 8;
        local_a8._0_1_ = (char)iVar11;
        local_a8._1_2_ = (undefined2)((uint)iVar11 >> 8);
        local_a8._3_1_ = (char)((uint)iVar11 >> 0x18);
        pbStack_a4 = &LAB_10096fc0;
        FUN_10092aa0((undefined8 *)&local_d0,param_6,(ushort *)&DAT_1013f41c,(uint)&local_a8);
        piVar20 = local_5c;
        if (local_d0 != -1) goto LAB_1000c6e3;
        if (*(char *)(iVar18 + 0x10) != '\0') {
          local_b8 = CONCAT71(local_b8._1_7_,*(undefined1 *)(iVar18 + 0x48));
          local_a8._0_1_ = (char)&local_b8;
          local_a8._1_2_ = (undefined2)((uint)&local_b8 >> 8);
          local_a8._3_1_ = (char)((uint)&local_b8 >> 0x18);
          pbStack_a4 = &LAB_10097da0;
          FUN_10092aa0((undefined8 *)&local_d0,param_6,(ushort *)&DAT_1013f42b,(uint)&local_a8);
          if (local_d0 != -1) goto LAB_1000c6e3;
        }
        local_bc = iVar18;
        if (*(char *)(iVar18 + 0x12) == '\0') goto LAB_1000b1d8;
        uVar8 = *(uint *)(iVar18 + 0x44);
        piVar20 = local_5c;
        if (uVar8 != 0xfffffffe) {
          if (uVar8 == 0xffffffff) {
            iVar11 = param_6[2];
            if ((uint)(*param_6 - iVar11) < 0x11) {
              piVar21 = (int *)&DAT_00000010;
              piVar20 = (int *)&DAT_1013f44a;
              goto LAB_1000c68c;
            }
            iVar18 = param_6[1];
            *(undefined4 *)(iVar18 + 0xc + iVar11) = 0xa666c65;
            *(undefined4 *)(iVar18 + 8 + iVar11) = 0x733d6f74;
            *(undefined4 *)(iVar18 + 4 + iVar11) = 0x5f736569;
            *(undefined4 *)(iVar18 + iVar11) = 0x6c707061;
            param_6[2] = iVar11 + 0x10;
            goto LAB_1000b1d8;
          }
          if ((int)uVar8 < 0) {
LAB_1000b171:
            pbVar17 = (byte *)0x1;
            pbVar12 = (byte *)0x0;
            pbVar16 = (byte *)0x0;
          }
          else {
            if (uVar8 < _DAT_0077f0e0) {
              iVar11 = _DAT_0077f0d0;
              if (_DAT_0077f0d0 == 0) {
                iVar11 = 4;
              }
              if (*(int *)(iVar11 + uVar8 * 4) == 0) goto LAB_1000ae23;
            }
            else {
LAB_1000ae23:
              if (DAT_1016328d == '\0') {
                local_a8._0_1_ = '\0';
                local_a8._1_2_ = 0;
                local_a8._3_1_ = '\0';
                (*(code *)0x408244)();
                pcVar5 = (char *)CONCAT13(local_a8._3_1_,CONCAT21(local_a8._1_2_,(char)local_a8));
                pcVar5[0] = 'W';
                pcVar5[1] = '\0';
                pcVar5[2] = 'A';
                pcVar5[3] = '\0';
                pcVar5[4] = 'R';
                pcVar5[5] = '\0';
                pcVar5[6] = 'N';
                pcVar5[7] = '\0';
                pcVar5[8] = 'I';
                pcVar5[9] = '\0';
                pcVar5[10] = 'N';
                pcVar5[0xb] = '\0';
                pcVar5[0xc] = 'G';
                pcVar5[0xd] = '\0';
                pcVar5[0xe] = ':';
                pcVar5[0xf] = '\0';
                pcVar5[0x10] = ' ';
                pcVar5[0x11] = '\0';
                pcVar5[0x12] = 'P';
                pcVar5[0x13] = '\0';
                pcVar5[0x14] = 'r';
                pcVar5[0x15] = '\0';
                pcVar5[0x16] = 'o';
                pcVar5[0x17] = '\0';
                pcVar5[0x18] = 'j';
                pcVar5[0x19] = '\0';
                pcVar5[0x1a] = 'e';
                pcVar5[0x1b] = '\0';
                pcVar5[0x1c] = 'c';
                pcVar5[0x1d] = '\0';
                pcVar5[0x1e] = 't';
                pcVar5[0x1f] = '\0';
                pcVar5[0x20] = ' ';
                pcVar5[0x21] = '\0';
                pcVar5[0x22] = 'c';
                pcVar5[0x23] = '\0';
                pcVar5[0x24] = 'o';
                pcVar5[0x25] = '\0';
                pcVar5[0x26] = 'n';
                pcVar5[0x27] = '\0';
                pcVar5[0x28] = 't';
                pcVar5[0x29] = '\0';
                pcVar5[0x2a] = 'a';
                pcVar5[0x2b] = '\0';
                pcVar5[0x2c] = 'i';
                pcVar5[0x2d] = '\0';
                pcVar5[0x2e] = 'n';
                pcVar5[0x2f] = '\0';
                pcVar5[0x30] = 's';
                pcVar5[0x31] = '\0';
                pcVar5[0x32] = ' ';
                pcVar5[0x33] = '\0';
                pcVar5[0x34] = 'a';
                pcVar5[0x35] = '\0';
                pcVar5[0x36] = 'c';
                pcVar5[0x37] = '\0';
                pcVar5[0x38] = 't';
                pcVar5[0x39] = '\0';
                pcVar5[0x3a] = 'i';
                pcVar5[0x3b] = '\0';
                pcVar5[0x3c] = 'o';
                pcVar5[0x3d] = '\0';
                pcVar5[0x3e] = 'n';
                pcVar5[0x3f] = '\0';
                pcVar5[0x40] = 's';
                pcVar5[0x41] = '\0';
                pcVar5[0x42] = ' ';
                pcVar5[0x43] = '\0';
                pcVar5[0x44] = 't';
                pcVar5[0x45] = '\0';
                pcVar5[0x46] = 'h';
                pcVar5[0x47] = '\0';
                pcVar5[0x48] = 'a';
                pcVar5[0x49] = '\0';
                pcVar5[0x4a] = 't';
                pcVar5[0x4b] = '\0';
                pcVar5[0x4c] = ' ';
                pcVar5[0x4d] = '\0';
                pcVar5[0x4e] = 'a';
                pcVar5[0x4f] = '\0';
                pcVar5[0x50] = 'p';
                pcVar5[0x51] = '\0';
                pcVar5[0x52] = 'p';
                pcVar5[0x53] = '\0';
                pcVar5[0x54] = 'l';
                pcVar5[0x55] = '\0';
                pcVar5[0x56] = 'y';
                pcVar5[0x57] = '\0';
                pcVar5[0x58] = ' ';
                pcVar5[0x59] = '\0';
                pcVar5[0x5a] = 't';
                pcVar5[0x5b] = '\0';
                pcVar5[0x5c] = 'o';
                pcVar5[0x5d] = '\0';
                pcVar5[0x5e] = ' ';
                pcVar5[0x5f] = '\0';
                pcVar5[0x60] = 'a';
                pcVar5[0x61] = '\0';
                pcVar5[0x62] = 'n';
                pcVar5[99] = '\0';
                pcVar5[100] = ' ';
                pcVar5[0x65] = '\0';
                pcVar5[0x66] = 'o';
                pcVar5[0x67] = '\0';
                pcVar5[0x68] = 'b';
                pcVar5[0x69] = '\0';
                pcVar5[0x6a] = 'j';
                pcVar5[0x6b] = '\0';
                pcVar5[0x6c] = 'e';
                pcVar5[0x6d] = '\0';
                pcVar5[0x6e] = 'c';
                pcVar5[0x6f] = '\0';
                pcVar5[0x70] = 't';
                pcVar5[0x71] = '\0';
                pcVar5[0x72] = ' ';
                pcVar5[0x73] = '\0';
                pcVar5[0x74] = 't';
                pcVar5[0x75] = '\0';
                pcVar5[0x76] = 'h';
                pcVar5[0x77] = '\0';
                pcVar5[0x78] = 'a';
                pcVar5[0x79] = '\0';
                pcVar5[0x7a] = 't';
                pcVar5[0x7b] = '\0';
                pcVar5[0x7c] = ' ';
                pcVar5[0x7d] = '\0';
                pcVar5[0x7e] = 'h';
                pcVar5[0x7f] = '\0';
                pcVar5[0x80] = 'a';
                pcVar5[0x81] = '\0';
                pcVar5[0x82] = 's';
                pcVar5[0x83] = '\0';
                pcVar5[0x84] = ' ';
                pcVar5[0x85] = '\0';
                pcVar5[0x86] = 'b';
                pcVar5[0x87] = '\0';
                pcVar5[0x88] = 'e';
                pcVar5[0x89] = '\0';
                pcVar5[0x8a] = 'e';
                pcVar5[0x8b] = '\0';
                pcVar5[0x8c] = 'n';
                pcVar5[0x8d] = '\0';
                pcVar5[0x8e] = ' ';
                pcVar5[0x8f] = '\0';
                pcVar5[0x90] = 'd';
                pcVar5[0x91] = '\0';
                pcVar5[0x92] = 'e';
                pcVar5[0x93] = '\0';
                pcVar5[0x94] = 'l';
                pcVar5[0x95] = '\0';
                pcVar5[0x96] = 'e';
                pcVar5[0x97] = '\0';
                pcVar5[0x98] = 't';
                pcVar5[0x99] = '\0';
                pcVar5[0x9a] = 'e';
                pcVar5[0x9b] = '\0';
                pcVar5[0x9c] = 'd';
                pcVar5[0x9d] = '\0';
                pcVar5[0x9e] = '.';
                pcVar5[0x9f] = '\0';
                pcVar5[0xa0] = ' ';
                pcVar5[0xa1] = '\0';
                pcVar5[0xa2] = 'T';
                pcVar5[0xa3] = '\0';
                pcVar5[0xa4] = 'h';
                pcVar5[0xa5] = '\0';
                pcVar5[0xa6] = 'e';
                pcVar5[0xa7] = '\0';
                pcVar5[0xa8] = 's';
                pcVar5[0xa9] = '\0';
                pcVar5[0xaa] = 'e';
                pcVar5[0xab] = '\0';
                pcVar5[0xac] = ' ';
                pcVar5[0xad] = '\0';
                pcVar5[0xae] = 'w';
                pcVar5[0xaf] = '\0';
                pcVar5[0xb0] = 'i';
                pcVar5[0xb1] = '\0';
                pcVar5[0xb2] = 'l';
                pcVar5[0xb3] = '\0';
                pcVar5[0xb4] = 'l';
                pcVar5[0xb5] = '\0';
                pcVar5[0xb6] = ' ';
                pcVar5[0xb7] = '\0';
                pcVar5[0xb8] = 'd';
                pcVar5[0xb9] = '\0';
                pcVar5[0xba] = 'o';
                pcVar5[0xbb] = '\0';
                pcVar5[0xbc] = ' ';
                pcVar5[0xbd] = '\0';
                pcVar5[0xbe] = 'a';
                pcVar5[0xbf] = '\0';
                pcVar5[0xc0] = 'b';
                pcVar5[0xc1] = '\0';
                pcVar5[0xc2] = 's';
                pcVar5[0xc3] = '\0';
                pcVar5[0xc4] = 'o';
                pcVar5[0xc5] = '\0';
                pcVar5[0xc6] = 'l';
                pcVar5[199] = '\0';
                pcVar5[200] = 'u';
                pcVar5[0xc9] = '\0';
                pcVar5[0xca] = 't';
                pcVar5[0xcb] = '\0';
                pcVar5[0xcc] = 'e';
                pcVar5[0xcd] = '\0';
                pcVar5[0xce] = 'l';
                pcVar5[0xcf] = '\0';
                pcVar5[0xd0] = 'y';
                pcVar5[0xd1] = '\0';
                pcVar5[0xd2] = ' ';
                pcVar5[0xd3] = '\0';
                pcVar5[0xd4] = 'n';
                pcVar5[0xd5] = '\0';
                pcVar5[0xd6] = 'o';
                pcVar5[0xd7] = '\0';
                pcVar5[0xd8] = 't';
                pcVar5[0xd9] = '\0';
                pcVar5[0xda] = 'h';
                pcVar5[0xdb] = '\0';
                pcVar5[0xdc] = 'i';
                pcVar5[0xdd] = '\0';
                pcVar5[0xde] = 'n';
                pcVar5[0xdf] = '\0';
                pcVar5[0xe0] = 'g';
                pcVar5[0xe1] = '\0';
                pcVar5[0xe2] = ' ';
                pcVar5[0xe3] = '\0';
                pcVar5[0xe4] = 'w';
                pcVar5[0xe5] = '\0';
                pcVar5[0xe6] = 'h';
                pcVar5[0xe7] = '\0';
                pcVar5[0xe8] = 'e';
                pcVar5[0xe9] = '\0';
                pcVar5[0xea] = 'n';
                pcVar5[0xeb] = '\0';
                pcVar5[0xec] = ' ';
                pcVar5[0xed] = '\0';
                pcVar5[0xee] = 'e';
                pcVar5[0xef] = '\0';
                pcVar5[0xf0] = 'x';
                pcVar5[0xf1] = '\0';
                pcVar5[0xf2] = 'e';
                pcVar5[0xf3] = '\0';
                pcVar5[0xf4] = 'c';
                pcVar5[0xf5] = '\0';
                pcVar5[0xf6] = 'u';
                pcVar5[0xf7] = '\0';
                pcVar5[0xf8] = 't';
                pcVar5[0xf9] = '\0';
                pcVar5[0xfa] = 'e';
                pcVar5[0xfb] = '\0';
                pcVar5[0xfc] = 'd';
                pcVar5[0xfd] = '\0';
                pcVar5[0xfe] = '.';
                pcVar5[0xff] = '\0';
                pcVar5[0x100] = ' ';
                pcVar5[0x101] = '\0';
                pcVar5[0x102] = 'Y';
                pcVar5[0x103] = '\0';
                pcVar5[0x104] = 'o';
                pcVar5[0x105] = '\0';
                pcVar5[0x106] = 'u';
                pcVar5[0x107] = '\0';
                pcVar5[0x108] = ' ';
                pcVar5[0x109] = '\0';
                pcVar5[0x10a] = 'm';
                pcVar5[0x10b] = '\0';
                pcVar5[0x10c] = 'a';
                pcVar5[0x10d] = '\0';
                pcVar5[0x10e] = 'y';
                pcVar5[0x10f] = '\0';
                pcVar5[0x110] = ' ';
                pcVar5[0x111] = '\0';
                pcVar5[0x112] = 'w';
                pcVar5[0x113] = '\0';
                pcVar5[0x114] = 'a';
                pcVar5[0x115] = '\0';
                pcVar5[0x116] = 'n';
                pcVar5[0x117] = '\0';
                pcVar5[0x118] = 't';
                pcVar5[0x119] = '\0';
                pcVar5[0x11a] = ' ';
                pcVar5[0x11b] = '\0';
                pcVar5[0x11c] = 't';
                pcVar5[0x11d] = '\0';
                pcVar5[0x11e] = 'o';
                pcVar5[0x11f] = '\0';
                pcVar5[0x120] = ' ';
                pcVar5[0x121] = '\0';
                pcVar5[0x122] = 'f';
                pcVar5[0x123] = '\0';
                pcVar5[0x124] = 'i';
                pcVar5[0x125] = '\0';
                pcVar5[0x126] = 'n';
                pcVar5[0x127] = '\0';
                pcVar5[0x128] = 'd';
                pcVar5[0x129] = '\0';
                pcVar5[0x12a] = ' ';
                pcVar5[299] = '\0';
                pcVar5[300] = 't';
                pcVar5[0x12d] = '\0';
                pcVar5[0x12e] = 'h';
                pcVar5[0x12f] = '\0';
                pcVar5[0x130] = 'e';
                pcVar5[0x131] = '\0';
                pcVar5[0x132] = 'm';
                pcVar5[0x133] = '\0';
                pcVar5[0x134] = ' ';
                pcVar5[0x135] = '\0';
                pcVar5[0x136] = 'a';
                pcVar5[0x137] = '\0';
                pcVar5[0x138] = 'n';
                pcVar5[0x139] = '\0';
                pcVar5[0x13a] = 'd';
                pcVar5[0x13b] = '\0';
                pcVar5[0x13c] = ' ';
                pcVar5[0x13d] = '\0';
                pcVar5[0x13e] = 'm';
                pcVar5[0x13f] = '\0';
                pcVar5[0x140] = 'a';
                pcVar5[0x141] = '\0';
                pcVar5[0x142] = 'k';
                pcVar5[0x143] = '\0';
                pcVar5[0x144] = 'e';
                pcVar5[0x145] = '\0';
                pcVar5[0x146] = ' ';
                pcVar5[0x147] = '\0';
                pcVar5[0x148] = 's';
                pcVar5[0x149] = '\0';
                pcVar5[0x14a] = 'u';
                pcVar5[0x14b] = '\0';
                pcVar5[0x14c] = 'r';
                pcVar5[0x14d] = '\0';
                pcVar5[0x14e] = 'e';
                pcVar5[0x14f] = '\0';
                pcVar5[0x150] = ' ';
                pcVar5[0x151] = '\0';
                pcVar5[0x152] = 'n';
                pcVar5[0x153] = '\0';
                pcVar5[0x154] = 'o';
                pcVar5[0x155] = '\0';
                pcVar5[0x156] = 't';
                pcVar5[0x157] = '\0';
                pcVar5[0x158] = 'h';
                pcVar5[0x159] = '\0';
                pcVar5[0x15a] = 'i';
                pcVar5[0x15b] = '\0';
                pcVar5[0x15c] = 'n';
                pcVar5[0x15d] = '\0';
                pcVar5[0x15e] = 'g';
                pcVar5[0x15f] = '\0';
                pcVar5[0x160] = ' ';
                pcVar5[0x161] = '\0';
                pcVar5[0x162] = 'i';
                pcVar5[0x163] = '\0';
                pcVar5[0x164] = 's';
                pcVar5[0x165] = '\0';
                pcVar5[0x166] = ' ';
                pcVar5[0x167] = '\0';
                pcVar5[0x168] = 'b';
                pcVar5[0x169] = '\0';
                pcVar5[0x16a] = 'r';
                pcVar5[0x16b] = '\0';
                pcVar5[0x16c] = 'o';
                pcVar5[0x16d] = '\0';
                pcVar5[0x16e] = 'k';
                pcVar5[0x16f] = '\0';
                pcVar5[0x170] = 'e';
                pcVar5[0x171] = '\0';
                pcVar5[0x172] = 'n';
                pcVar5[0x173] = '\0';
                pcVar5[0x174] = '.';
                pcVar5[0x175] = '\0';
                pcVar5[0x176] = ' ';
                pcVar5[0x177] = '\0';
                pcVar5[0x178] = 'Y';
                pcVar5[0x179] = '\0';
                pcVar5[0x17a] = 'o';
                pcVar5[0x17b] = '\0';
                pcVar5[0x17c] = 'u';
                pcVar5[0x17d] = '\0';
                pcVar5[0x17e] = ' ';
                pcVar5[0x17f] = '\0';
                pcVar5[0x180] = 'c';
                pcVar5[0x181] = '\0';
                pcVar5[0x182] = 'a';
                pcVar5[0x183] = '\0';
                pcVar5[0x184] = 'n';
                pcVar5[0x185] = '\0';
                pcVar5[0x186] = ' ';
                pcVar5[0x187] = '\0';
                pcVar5[0x188] = 'f';
                pcVar5[0x189] = '\0';
                pcVar5[0x18a] = 'i';
                pcVar5[0x18b] = '\0';
                pcVar5[0x18c] = 'n';
                pcVar5[0x18d] = '\0';
                pcVar5[0x18e] = 'd';
                pcVar5[399] = '\0';
                pcVar5[400] = ' ';
                pcVar5[0x191] = '\0';
                pcVar5[0x192] = 't';
                pcVar5[0x193] = '\0';
                pcVar5[0x194] = 'h';
                pcVar5[0x195] = '\0';
                pcVar5[0x196] = 'e';
                pcVar5[0x197] = '\0';
                pcVar5[0x198] = 'm';
                pcVar5[0x199] = '\0';
                pcVar5[0x19a] = ' ';
                pcVar5[0x19b] = '\0';
                pcVar5[0x19c] = 'b';
                pcVar5[0x19d] = '\0';
                pcVar5[0x19e] = 'y';
                pcVar5[0x19f] = '\0';
                pcVar5[0x1a0] = ' ';
                pcVar5[0x1a1] = '\0';
                pcVar5[0x1a2] = 's';
                pcVar5[0x1a3] = '\0';
                pcVar5[0x1a4] = 'e';
                pcVar5[0x1a5] = '\0';
                pcVar5[0x1a6] = 'a';
                pcVar5[0x1a7] = '\0';
                pcVar5[0x1a8] = 'r';
                pcVar5[0x1a9] = '\0';
                pcVar5[0x1aa] = 'c';
                pcVar5[0x1ab] = '\0';
                pcVar5[0x1ac] = 'h';
                pcVar5[0x1ad] = '\0';
                pcVar5[0x1ae] = 'i';
                pcVar5[0x1af] = '\0';
                pcVar5[0x1b0] = 'n';
                pcVar5[0x1b1] = '\0';
                pcVar5[0x1b2] = 'g';
                pcVar5[0x1b3] = '\0';
                pcVar5[0x1b4] = ' ';
                pcVar5[0x1b5] = '\0';
                pcVar5[0x1b6] = 't';
                pcVar5[0x1b7] = '\0';
                pcVar5[0x1b8] = 'h';
                pcVar5[0x1b9] = '\0';
                pcVar5[0x1ba] = 'e';
                pcVar5[0x1bb] = '\0';
                pcVar5[0x1bc] = ' ';
                pcVar5[0x1bd] = '\0';
                pcVar5[0x1be] = 'p';
                pcVar5[0x1bf] = '\0';
                pcVar5[0x1c0] = 'r';
                pcVar5[0x1c1] = '\0';
                pcVar5[0x1c2] = 'o';
                pcVar5[0x1c3] = '\0';
                pcVar5[0x1c4] = 'j';
                pcVar5[0x1c5] = '\0';
                pcVar5[0x1c6] = 'e';
                pcVar5[0x1c7] = '\0';
                pcVar5[0x1c8] = 'c';
                pcVar5[0x1c9] = '\0';
                pcVar5[0x1ca] = 't';
                pcVar5[0x1cb] = '\0';
                pcVar5[0x1cc] = ' ';
                pcVar5[0x1cd] = '\0';
                pcVar5[0x1ce] = 'f';
                pcVar5[0x1cf] = '\0';
                pcVar5[0x1d0] = 'o';
                pcVar5[0x1d1] = '\0';
                pcVar5[0x1d2] = 'r';
                pcVar5[0x1d3] = '\0';
                pcVar5[0x1d4] = ' ';
                pcVar5[0x1d5] = '\0';
                pcVar5[0x1d6] = '\"';
                pcVar5[0x1d7] = '\0';
                pcVar5[0x1d8] = 'a';
                pcVar5[0x1d9] = '\0';
                pcVar5[0x1da] = 'p';
                pcVar5[0x1db] = '\0';
                pcVar5[0x1dc] = 'p';
                pcVar5[0x1dd] = '\0';
                pcVar5[0x1de] = 'l';
                pcVar5[0x1df] = '\0';
                pcVar5[0x1e0] = 'y';
                pcVar5[0x1e1] = '\0';
                pcVar5[0x1e2] = '_';
                pcVar5[0x1e3] = '\0';
                pcVar5[0x1e4] = 't';
                pcVar5[0x1e5] = '\0';
                pcVar5[0x1e6] = 'o';
                pcVar5[0x1e7] = '\0';
                pcVar5[0x1e8] = '\\';
                pcVar5[0x1e9] = '\0';
                pcVar5[0x1ea] = 'n';
                pcVar5[0x1eb] = '\0';
                pcVar5[0x1ec] = '\"';
                pcVar5[0x1ed] = '\0';
                pcVar5[0x1ee] = ' ';
                pcVar5[0x1ef] = '\0';
                pcVar5[0x1f0] = 'w';
                pcVar5[0x1f1] = '\0';
                pcVar5[0x1f2] = 'i';
                pcVar5[499] = '\0';
                pcVar5[500] = 't';
                pcVar5[0x1f5] = '\0';
                pcVar5[0x1f6] = 'h';
                pcVar5[0x1f7] = '\0';
                pcVar5[0x1f8] = ' ';
                pcVar5[0x1f9] = '\0';
                pcVar5[0x1fa] = 'N';
                pcVar5[0x1fb] = '\0';
                pcVar5[0x1fc] = 'o';
                pcVar5[0x1fd] = '\0';
                pcVar5[0x1fe] = 't';
                pcVar5[0x1ff] = '\0';
                pcVar5[0x200] = 'e';
                pcVar5[0x201] = '\0';
                pcVar5[0x202] = 'p';
                pcVar5[0x203] = '\0';
                pcVar5[0x204] = 'a';
                pcVar5[0x205] = '\0';
                pcVar5[0x206] = 'd';
                pcVar5[0x207] = '\0';
                pcVar5[0x208] = '+';
                pcVar5[0x209] = '\0';
                pcVar5[0x20a] = '+';
                pcVar5[0x20b] = '\0';
                pcVar5[0x20c] = '.';
                pcVar5[0x20d] = '\0';
                (*(code *)0x408244)();
                (*(code *)0x4d43f8)();
                (*(code *)0x407ea8)();
                DAT_1016328d = '\x01';
              }
            }
            if (_DAT_0077f0e0 <= uVar8) goto LAB_1000b171;
            iVar11 = _DAT_0077f0d8;
            if (_DAT_0077f0d8 == 0) {
              iVar11 = 4;
            }
            puVar15 = *(ushort **)(iVar11 + uVar8 * 4);
            if (puVar15 == (ushort *)0x0) {
              puVar15 = (ushort *)0x2;
              SVar6 = 0;
            }
            else {
              SVar6 = *(SIZE_T *)(puVar15 + -2);
            }
            FUN_10093310((undefined8 *)&local_a8,puVar15,SVar6);
            pbVar16 = pbStack_a0;
            if ((char)pbStack_9c != '\x01') {
              if (pbStack_a0 == (byte *)0x0) {
                pbVar16 = (byte *)0x0;
              }
              else {
                pbVar12 = pbStack_a4 + (int)pbStack_a0;
                local_64 = pbStack_a4;
                pbVar17 = pbStack_a4;
LAB_1000b0cc:
                do {
                  bVar2 = *pbVar17;
                  pbVar14 = pbVar17 + 1;
                  if ((char)bVar2 < '\0') {
                    if (bVar2 < 0xe0) {
                      if (pbVar14 != pbVar12) {
                        pbVar14 = pbVar17 + 2;
                      }
                    }
                    else {
                      if (bVar2 == 0xed) {
                        if ((pbVar14 == pbVar12) || (pbVar17 + 2 == pbVar12)) break;
                        if (0x9f < pbVar17[1]) {
                          iVar11 = CONCAT13(local_a8._3_1_,CONCAT21(local_a8._1_2_,(char)local_a8));
                          pbVar12 = pbStack_a4;
                          pbVar17 = pbStack_a0;
                          pbVar16 = pbStack_9c;
                          if (iVar11 == -1) goto joined_r0x1000b16d;
                          if (iVar11 != 0) {
                            pvVar7 = GetProcessHeap();
                            HeapFree(pvVar7,0,local_64);
                          }
                          goto LAB_1000b171;
                        }
                        pbVar17 = pbVar17 + 3;
                        if (pbVar17 == pbVar12) break;
                        goto LAB_1000b0cc;
                      }
                      pbVar17 = pbVar17 + 2;
                      if (pbVar14 == pbVar12) {
                        pbVar17 = pbVar14;
                      }
                      pbVar14 = pbVar17 + (pbVar17 != pbVar12);
                      if (0xef < bVar2) {
                        pbVar14 = pbVar14 + (pbVar14 != pbVar12);
                      }
                    }
                  }
                  pbVar17 = pbVar14;
                } while (pbVar14 != pbVar12);
              }
            }
            pbVar12 = (byte *)CONCAT13(local_a8._3_1_,CONCAT21(local_a8._1_2_,(char)local_a8));
            pbVar17 = pbStack_a4;
joined_r0x1000b16d:
            if (pbVar12 == (byte *)0xffffffff) goto LAB_1000b171;
          }
          local_d0 = (char)pbVar12;
          uStack_cf = (undefined2)((uint)pbVar12 >> 8);
          pbStack_cd._1_3_ = SUB43(pbVar17,0);
          pbStack_cd = (byte *)CONCAT31(pbStack_cd._1_3_,(char)((uint)pbVar12 >> 0x18));
          pbStack_c9._1_3_ = SUB43(pbVar16,0);
          pbStack_c9 = (byte *)CONCAT31(pbStack_c9._1_3_,(char)((uint)pbVar17 >> 0x18));
          pbStack_c5._0_1_ = (undefined1)((uint)pbVar16 >> 0x18);
          local_a8._0_1_ = (char)&local_d0;
          local_a8._1_2_ = (undefined2)((uint)&local_d0 >> 8);
          local_a8._3_1_ = (char)((uint)&local_d0 >> 0x18);
          pbStack_a4 = &LAB_100922c0;
          FUN_10092aa0(&local_b8,param_6,(ushort *)&DAT_1013f45a,(uint)&local_a8);
          if ((byte)local_b8 == 0xff) {
            piVar20 = local_5c;
            if (CONCAT13(pbStack_cd._0_1_,CONCAT21(uStack_cf,local_d0)) != 0) {
              pvVar10 = (LPVOID)CONCAT13(pbStack_c9._0_1_,pbStack_cd._1_3_);
              pvVar7 = GetProcessHeap();
              HeapFree(pvVar7,0,pvVar10);
              piVar20 = local_5c;
            }
            goto LAB_1000b1d8;
          }
          *param_1 = '\0';
          *(byte **)(param_1 + 8) = local_b8._4_4_;
          *(int *)(param_1 + 4) = (int)local_b8;
          if (CONCAT13(pbStack_cd._0_1_,CONCAT21(uStack_cf,local_d0)) == 0) {
            return;
          }
          pbVar16 = (byte *)CONCAT13(pbStack_c9._0_1_,pbStack_cd._1_3_);
LAB_1000c6d7:
          pvVar7 = GetProcessHeap();
          goto LAB_1000c8af;
        }
        iVar11 = param_6[2];
        if ((uint)(*param_6 - iVar11) < 0x12) {
          piVar21 = (int *)&DAT_00000011;
          piVar20 = (int *)&DAT_1013f439;
LAB_1000c68c:
          FUN_101364f0((undefined8 *)&local_a8,param_6,piVar20,piVar21);
          piVar20 = local_5c;
          if ((char)local_a8 == -1) goto LAB_1000b1d8;
LAB_1000c6aa:
          uVar9 = CONCAT13(local_a8._3_1_,CONCAT21(local_a8._1_2_,(char)local_a8));
          goto LAB_1000c6eb;
        }
        iVar18 = param_6[1];
        *(undefined1 *)(iVar18 + 0x10 + iVar11) = 10;
        *(undefined4 *)(iVar18 + 0xc + iVar11) = 0x72656874;
        *(undefined4 *)(iVar18 + 8 + iVar11) = 0x6f3d6f74;
        *(undefined4 *)(iVar18 + 4 + iVar11) = 0x5f736569;
        *(undefined4 *)(iVar18 + iVar11) = 0x6c707061;
        param_6[2] = iVar11 + 0x11;
LAB_1000b1d8:
        iVar18 = local_bc;
        iVar11 = *(int *)(local_bc + 0xc);
        local_5c = piVar20;
        if (iVar11 == 0) {
          local_b8 = CONCAT71(local_b8._1_7_,*(undefined1 *)(local_bc + 0x6c));
          local_a8._0_1_ = (char)&local_b8;
          local_a8._1_2_ = (undefined2)((uint)&local_b8 >> 8);
          local_a8._3_1_ = (char)((uint)&local_b8 >> 0x18);
          pbStack_a4 = &LAB_10097da0;
          FUN_10092aa0((undefined8 *)&local_d0,param_6,(ushort *)&DAT_1013f46a,(uint)&local_a8);
          if (local_d0 != -1) goto LAB_1000c6e3;
          local_64 = *(byte **)(iVar18 + 0x20);
          if (local_64 != (byte *)0x0) {
            pbVar16 = (byte *)0x0;
            do {
              local_20 = pbVar16;
              if (pbVar16 == &DAT_00000008) {
                FUN_10136b52(8,8,&PTR_s_src_save_rs_1013f484);
                    /* WARNING: Does not return */
                pcVar4 = (code *)invalidInstructionException();
                (*pcVar4)();
              }
              uVar8 = *(int *)(iVar18 + 0x24 + (int)pbVar16 * 4) - 5;
              if (uVar8 < 10) {
                    /* WARNING: Could not recover jumptable at 0x1000b598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*(code *)(*(int *)(&DAT_1000c97c + uVar8 * 4) + local_24))();
                return;
              }
              FUN_100495c0((char *)&local_a8,*(ushort **)(iVar18 + 0x4c + (int)pbVar16 * 4));
              if ((char)local_a8 != -1) goto LAB_1000c729;
              pbStack_c5 = pbStack_9c;
              pbStack_cd = pbStack_a4;
              pbStack_c9 = pbStack_a0;
              local_b8 = CONCAT44(pbStack_a0,pbStack_a4);
              local_b0 = pbStack_9c;
              local_a8._0_1_ = (char)&local_20;
              local_a8._1_2_ = (undefined2)((uint)&local_20 >> 8);
              local_a8._3_1_ = (char)((uint)&local_20 >> 0x18);
              pbStack_a0 = (byte *)&local_b8;
              pbStack_a4 = &LAB_10096fc0;
              pbStack_9c = &LAB_100922c0;
              FUN_10092aa0((undefined8 *)&local_54,param_6,(ushort *)&DAT_1013f494,(uint)&local_a8);
              if ((char)local_54 != -1) goto LAB_1000c6fd;
              if ((int)local_b8 != 0) {
                pvVar10 = local_b8._4_4_;
                pvVar7 = GetProcessHeap();
                iVar18 = local_bc;
                HeapFree(pvVar7,0,pvVar10);
              }
              pbVar16 = pbVar16 + 1;
            } while (pbVar16 != local_64);
          }
        }
        else if (iVar11 == 5) {
          FUN_10049460((undefined1 *)&local_a8,*(ushort **)(local_bc + 0x4c));
          pbStack_cd = pbStack_a4;
          if ((char)local_a8 != -1) goto LAB_1000c729;
          local_a8._0_1_ = (char)&local_b8;
          local_a8._1_2_ = (undefined2)((uint)&local_b8 >> 8);
          local_a8._3_1_ = (char)((uint)&local_b8 >> 0x18);
          pbStack_a4 = &LAB_100922c0;
          pbStack_c5 = pbStack_9c;
          pbStack_c9 = pbStack_a0;
          local_b8 = CONCAT44(pbStack_a0,pbStack_cd);
          local_b0 = pbStack_9c;
          FUN_10092aa0((undefined8 *)&local_54,param_6,(ushort *)&DAT_1013f49f,(uint)&local_a8);
          if ((char)local_54 != -1) goto LAB_1000c6fd;
LAB_1000b385:
          if ((int)local_b8 != 0) {
            pvVar10 = local_b8._4_4_;
            pvVar7 = GetProcessHeap();
            iVar18 = local_bc;
            HeapFree(pvVar7,0,pvVar10);
          }
        }
        else if (iVar11 == 6) {
          FUN_10049460((undefined1 *)&local_a8,*(ushort **)(local_bc + 0x4c));
          pbStack_cd = pbStack_a4;
          if ((char)local_a8 != -1) {
LAB_1000c729:
            *(undefined4 *)(param_1 + 0x20) = local_88;
            *(ulonglong *)(param_1 + 0x18) = CONCAT44(pbStack_8c,local_90);
            *(ulonglong *)(param_1 + 0x10) = CONCAT44(uStack_94,local_98);
            *(ulonglong *)(param_1 + 8) = CONCAT44(pbStack_9c,pbStack_a0);
            *(ulonglong *)(param_1 + 1) =
                 CONCAT17(pbStack_a0._0_1_,
                          CONCAT43(pbStack_a4,CONCAT12(local_a8._3_1_,local_a8._1_2_)));
            *param_1 = (char)local_a8;
            return;
          }
          local_a8._0_1_ = (char)&local_b8;
          local_a8._1_2_ = (undefined2)((uint)&local_b8 >> 8);
          local_a8._3_1_ = (char)((uint)&local_b8 >> 0x18);
          pbStack_a4 = &LAB_100922c0;
          pbStack_c5 = pbStack_9c;
          pbStack_c9 = pbStack_a0;
          local_b8 = CONCAT44(pbStack_a0,pbStack_cd);
          local_b0 = pbStack_9c;
          FUN_10092aa0((undefined8 *)&local_54,param_6,(ushort *)&DAT_1013f4ac,(uint)&local_a8);
          if ((char)local_54 == -1) {
            if ((int)local_b8 != 0) {
              pvVar10 = local_b8._4_4_;
              pvVar7 = GetProcessHeap();
              iVar18 = local_bc;
              HeapFree(pvVar7,0,pvVar10);
            }
            FUN_10049460((undefined1 *)&local_a8,*(ushort **)(iVar18 + 0x50));
            pbStack_cd = pbStack_a4;
            if ((char)local_a8 != -1) goto LAB_1000c729;
            local_a8._0_1_ = (char)&local_b8;
            local_a8._1_2_ = (undefined2)((uint)&local_b8 >> 8);
            local_a8._3_1_ = (char)((uint)&local_b8 >> 0x18);
            pbStack_a4 = &LAB_100922c0;
            pbStack_c5 = pbStack_9c;
            pbStack_c9 = pbStack_a0;
            local_b8 = CONCAT44(pbStack_a0,pbStack_cd);
            local_b0 = pbStack_9c;
            FUN_10092aa0((undefined8 *)&local_54,param_6,(ushort *)&DAT_1013f4ba,(uint)&local_a8);
            if ((char)local_54 == -1) goto LAB_1000b385;
          }
LAB_1000c6fd:
          *param_1 = '\0';
          *(undefined4 *)(param_1 + 8) = local_50;
          *(undefined4 *)(param_1 + 4) = local_54;
          if ((int)local_b8 == 0) {
            return;
          }
          pbVar16 = local_b8._4_4_;
          goto LAB_1000c6d7;
        }
        iVar11 = param_6[2];
        if ((uint)(*param_6 - iVar11) < 4) {
          FUN_101364f0((undefined8 *)&local_a8,param_6,(int *)&DAT_1013f4c9,(int *)0x3);
          if ((char)local_a8 != -1) goto LAB_1000c6aa;
        }
        else {
          iVar3 = param_6[1];
          *(undefined1 *)(iVar3 + 2 + iVar11) = 10;
          *(undefined2 *)(iVar3 + iVar11) = 0x2f2a;
          param_6[2] = iVar11 + 3;
        }
        if (*(int *)(iVar18 + 0xc) == 7) {
          FUN_10049460((undefined1 *)&local_a8,*(ushort **)(iVar18 + 0x4c));
          pbVar16 = pbStack_a0;
          if ((char)local_a8 != -1) {
            param_1[3] = local_a8._3_1_;
            *(undefined2 *)(param_1 + 1) = local_a8._1_2_;
            *(undefined4 *)(param_1 + 0x20) = local_88;
            *(ulonglong *)(param_1 + 0x18) = CONCAT44(pbStack_8c,local_90);
            *(ulonglong *)(param_1 + 0x10) = CONCAT44(uStack_94,local_98);
            *param_1 = (char)local_a8;
            *(byte **)(param_1 + 4) = pbStack_a4;
            *(byte **)(param_1 + 8) = pbStack_a0;
            *(byte **)(param_1 + 0xc) = pbStack_9c;
            return;
          }
          local_38 = pbStack_a4;
          if (pbStack_9c < (byte *)0x7) {
LAB_1000c60e:
            FUN_100148c0((char *)&local_a8,param_6,*(ushort **)(iVar18 + 0x4c));
            if ((char)local_a8 == -1) {
              if (local_38 != (byte *)0x0) {
                pvVar7 = GetProcessHeap();
                HeapFree(pvVar7,0,pbVar16);
              }
              goto LAB_1000ac50;
            }
            *(ulonglong *)(param_1 + 0x10) = CONCAT44(uStack_94,local_98);
            *(undefined4 *)(param_1 + 0x20) = local_88;
            *(ulonglong *)(param_1 + 0x18) = CONCAT44(pbStack_8c,local_90);
            *(ulonglong *)param_1 =
                 CONCAT44(pbStack_a4,
                          CONCAT13(local_a8._3_1_,CONCAT21(local_a8._1_2_,(char)local_a8)));
            *(ulonglong *)(param_1 + 8) = CONCAT44(pbStack_9c,pbStack_a0);
          }
          else {
            if (*(int *)(pbStack_a0 + 3) != 0x656e6966 || *(int *)pbStack_a0 != 0x66656423) {
              if (pbStack_9c < (byte *)0x9) {
                iVar18 = local_bc;
                if ((pbStack_9c == &DAT_00000008) &&
                   (*(int *)(pbStack_a0 + 4) == 0x656e6966 && *(int *)pbStack_a0 == 0x6564230a))
                goto LAB_1000c858;
              }
              else {
                FUN_100969a0(&local_a8,pbStack_a0,pbStack_9c,&DAT_1013f4cc,8);
                if ((char)local_a8 == '\0') {
                  do {
                    FUN_10092330((undefined4 *)&local_d0,&local_a8);
                    iVar11 = CONCAT13(pbStack_cd._0_1_,CONCAT21(uStack_cf,local_d0));
                  } while (iVar11 == 1);
                  iVar18 = local_bc;
                  if (iVar11 == 0) goto LAB_1000c858;
                }
                else {
                  local_44 = local_78;
                  local_60 = local_84;
                  local_58 = local_6c;
                  local_34 = local_6c + -1;
                  local_64 = local_70;
                  iVar18 = local_bc;
                  if (local_84 == (byte *)0xffffffff) {
                    pbVar12 = pbStack_8c + (int)local_34;
                    if (pbVar12 < local_74) {
                      local_4c = pbStack_a0;
                      local_60 = local_98;
                      local_40 = local_90;
                      local_3c = pbStack_9c;
                      pbVar17 = local_6c;
                      if (local_6c < local_98) {
                        pbVar17 = local_98;
                      }
                      pbVar13 = local_98 + -1;
                      pbVar14 = pbStack_8c;
LAB_1000c534:
                      pbVar19 = pbStack_a0;
                      if ((pbVar12[local_78] & 0x20) != 0) {
                        pbVar19 = pbStack_9c;
                      }
                      local_48 = pbVar13;
                      if (((uint)pbVar19 >> (pbVar12[local_78] & 0x1f) & 1) == 0) {
                        pbVar14 = pbVar14 + (int)local_6c;
                      }
                      else {
                        pbVar12 = local_98;
                        do {
                          pbVar19 = pbVar12;
                          if (pbVar17 == pbVar19) {
                            if (pbVar13 < local_6c) {
                              local_c0 = pbVar14 + local_78 + -1;
                              pbVar12 = local_98;
                              goto LAB_1000c5cc;
                            }
                            if (local_98 == (byte *)0x0) goto LAB_1000c858;
                            goto LAB_1000c963;
                          }
                          if (local_74 <= pbVar14 + (int)pbVar19) {
                            pbVar16 = pbVar14 + (int)local_98;
                            if (pbVar14 + (int)local_98 < local_74) {
                              pbVar16 = local_74;
                            }
                            FUN_10136b52(pbVar16,local_74,
                                         &PTR_s_C__Users_runneradmin__rustup_too_101567c8);
                    /* WARNING: Does not return */
                            pcVar4 = (code *)invalidInstructionException();
                            (*pcVar4)();
                          }
                          pbVar12 = pbVar19 + 1;
                        } while (local_70[(int)pbVar19] == (pbVar14 + local_78)[(int)pbVar19]);
                        pbVar14 = pbVar19 + (int)(pbVar14 + (1 - (int)local_98));
                      }
                      goto LAB_1000c522;
                    }
                  }
                  else {
                    pbVar12 = pbStack_8c + (int)local_34;
                    if (pbVar12 < local_74) {
                      local_48 = pbStack_9c;
                      local_4c = local_98;
                      local_3c = pbStack_a0;
                      local_30 = local_6c + -(int)local_90;
                      local_2c = local_90;
                      pbVar17 = pbStack_8c;
LAB_1000c3b4:
                      do {
                        pbVar14 = pbStack_a0;
                        if ((pbVar12[local_78] & 0x20) != 0) {
                          pbVar14 = pbStack_9c;
                        }
                        if (((uint)pbVar14 >> (pbVar12[local_78] & 0x1f) & 1) == 0) {
                          pbVar17 = pbVar17 + (int)local_6c;
                        }
                        else {
                          local_40 = local_98;
                          if (local_98 < local_60) {
                            local_40 = local_60;
                          }
                          local_c0 = pbVar17 + local_78;
                          pbVar12 = local_40;
                          pbVar14 = local_6c;
                          if (local_6c < local_40) {
                            pbVar14 = local_40;
                          }
                          do {
                            pbVar19 = pbVar12;
                            pbVar13 = local_98;
                            if (pbVar14 == pbVar19) goto LAB_1000c460;
                            if (local_74 <= pbVar19 + (int)pbVar17) {
                              pbVar16 = pbVar17 + (int)local_40;
                              if (pbVar17 + (int)local_40 < local_74) {
                                pbVar16 = local_74;
                              }
                              FUN_10136b52(pbVar16,local_74,
                                           &PTR_s_C__Users_runneradmin__rustup_too_101567c8);
                    /* WARNING: Does not return */
                              pcVar4 = (code *)invalidInstructionException();
                              (*pcVar4)();
                            }
                            pbVar12 = pbVar19 + 1;
                          } while (local_70[(int)pbVar19] == local_c0[(int)pbVar19]);
                          pbVar17 = pbVar19 + (int)(pbVar17 + (1 - (int)local_98));
                        }
                        local_60 = (byte *)0x0;
                        pbVar12 = pbVar17 + (int)local_34;
                      } while (pbVar12 < local_74);
                    }
                  }
                }
              }
              goto LAB_1000c60e;
            }
LAB_1000c858:
            pvVar10 = FUN_10107380(0,0x21);
            if (pvVar10 == (LPVOID)0x0) {
              FUN_101366bc(1);
                    /* WARNING: Does not return */
              pcVar4 = (code *)invalidInstructionException();
              (*pcVar4)();
            }
            memcpy(pvVar10,&DAT_1013f4d4,0x21);
            *param_1 = '\x13';
            param_1[4] = '!';
            param_1[5] = '\0';
            param_1[6] = '\0';
            param_1[7] = '\0';
            *(LPVOID *)(param_1 + 8) = pvVar10;
            param_1[0xc] = '!';
            param_1[0xd] = '\0';
            param_1[0xe] = '\0';
            param_1[0xf] = '\0';
          }
          if (local_38 == (byte *)0x0) {
            return;
          }
          pvVar7 = GetProcessHeap();
LAB_1000c8af:
          HeapFree(pvVar7,0,pbVar16);
          return;
        }
LAB_1000ac50:
        local_5c = local_5c + 1;
      } while (local_5c != local_28);
    }
    *param_1 = -1;
  }
  else {
LAB_1000abf9:
    *param_1 = '\0';
    *(uint *)(param_1 + 8) = CONCAT13(pbStack_c9._0_1_,pbStack_cd._1_3_);
    *(uint *)(param_1 + 4) = CONCAT13(pbStack_cd._0_1_,CONCAT21(uStack_cf,local_d0));
  }
  return;
  while( true ) {
    pbVar19 = pbVar14 + -1 + (int)pbVar12;
    if (local_74 <= pbVar19) goto LAB_1000c906;
    pbVar1 = local_70 + -1 + (int)pbVar12;
    pbVar19 = local_c0 + (int)pbVar12;
    pbVar12 = pbVar12 + -1;
    if (*pbVar1 != *pbVar19) break;
LAB_1000c5cc:
    if (pbVar12 == (byte *)0x0) goto LAB_1000c858;
  }
  pbVar14 = pbVar14 + (int)local_90;
LAB_1000c522:
  pbVar12 = pbVar14 + (int)local_34;
  if (local_74 <= pbVar12) goto LAB_1000c60e;
  goto LAB_1000c534;
LAB_1000c460:
  do {
    if (pbVar13 <= local_60) goto LAB_1000c858;
    pbVar13 = pbVar13 + -1;
    if (local_6c <= pbVar13) {
LAB_1000c963:
      FUN_10136b52(pbVar13,local_6c,&PTR_s_C__Users_runneradmin__rustup_too_101567a8);
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    pbVar19 = pbVar13 + (int)pbVar17;
    if (local_74 <= pbVar19) {
LAB_1000c906:
      FUN_10136b52(pbVar19,local_74,&PTR_s_C__Users_runneradmin__rustup_too_101567b8);
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
  } while (local_70[(int)pbVar13] == pbVar19[local_78]);
  pbVar17 = pbVar17 + (int)local_90;
  pbVar12 = pbVar17 + (int)local_34;
  local_60 = local_30;
  if (local_74 <= pbVar12) goto LAB_1000c60e;
  goto LAB_1000c3b4;
}
