// rea decompile_all
// name: FUN_1004d150
// address: 0x1004d150
// body: available
// range: 0x1004d150-0x1004d958 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_1004d150(int param_1,uint param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
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
  char cVar23;
  char cVar24;
  char cVar25;
  char cVar26;
  char cVar27;
  char cVar28;
  char cVar29;
  char cVar30;
  char cVar31;
  char cVar32;
  char cVar33;
  char cVar34;
  char cVar35;
  char cVar36;
  char cVar37;
  char cVar38;
  char cVar39;
  char cVar40;
  char cVar41;
  char cVar42;
  char cVar43;
  char cVar44;
  char cVar45;
  char cVar46;
  char cVar47;
  char cVar48;
  char cVar49;
  char cVar50;
  char cVar51;
  char cVar52;
  char cVar53;
  char cVar54;
  char cVar55;
  char cVar56;
  char cVar57;
  char cVar58;
  char cVar59;
  char cVar60;
  char cVar61;
  char cVar62;
  char cVar63;
  char cVar64;
  char cVar65;
  char cVar66;
  char cVar67;
  char cVar68;
  char cVar69;
  char cVar70;
  char cVar71;
  char cVar72;
  char cVar73;
  char cVar74;
  char cVar75;
  char cVar76;
  char cVar77;
  char cVar78;
  char cVar79;
  char cVar80;
  char cVar81;
  char cVar82;
  char cVar83;
  char cVar84;
  char cVar85;
  char cVar86;
  char cVar87;
  char cVar88;
  char cVar89;
  char cVar90;
  char cVar91;
  char cVar92;
  char cVar93;
  char cVar94;
  char cVar95;
  char cVar96;
  char cVar97;
  char cVar98;
  char cVar99;
  char cVar100;
  char cVar101;
  char cVar102;
  char cVar103;
  char cVar104;
  char cVar105;
  char cVar106;
  char cVar107;
  char cVar108;
  char cVar109;
  char cVar110;
  char cVar111;
  char cVar112;
  char cVar113;
  char cVar114;
  char cVar115;
  char cVar116;
  char cVar117;
  char cVar118;
  char cVar119;
  char cVar120;
  char cVar121;
  char cVar122;
  char cVar123;
  char cVar124;
  char cVar125;
  char cVar126;
  char cVar127;
  char cVar128;
  int iVar129;
  undefined4 uVar130;
  undefined4 uVar131;
  undefined4 uVar132;
  char *pcVar133;
  undefined4 uStack_444;
  undefined4 uStack_440;
  undefined4 uStack_43c;
  byte local_410 [511];
  char local_211 [513];

  uStack_43c = 0x1004d16a;
  FUN_1004d960(param_1,(undefined8 *)local_410,'\0',param_2);
  iVar129 = -0x20;
  pcVar133 = local_211;
  do {
    cVar9 = pcVar133[-0x1c];
    cVar10 = pcVar133[-0x40];
    cVar11 = pcVar133[-0x60];
    cVar12 = pcVar133[-0x3c];
    cVar13 = pcVar133[-0x5c];
    cVar14 = pcVar133[-0x7c];
    cVar15 = pcVar133[-0x9c];
    cVar16 = pcVar133[-0xbc];
    cVar17 = pcVar133[-0xdc];
    cVar18 = pcVar133[-0xfc];
    cVar19 = pcVar133[-0x11c];
    cVar20 = pcVar133[-0x13c];
    cVar21 = pcVar133[-0x15c];
    cVar22 = pcVar133[-0x17c];
    cVar23 = pcVar133[-0x19c];
    cVar24 = pcVar133[-0x1bc];
    cVar25 = pcVar133[-0x1dc];
    pcVar1 = pcVar133 + -0x1fc;
    cVar26 = pcVar133[-0x18];
    cVar27 = pcVar133[-0x38];
    cVar28 = pcVar133[-0x58];
    cVar29 = pcVar133[-0x78];
    cVar30 = pcVar133[-0x98];
    cVar31 = pcVar133[-0xb8];
    cVar32 = pcVar133[-0xd8];
    cVar33 = pcVar133[-0xf8];
    cVar34 = pcVar133[-0x118];
    cVar35 = pcVar133[-0x138];
    cVar36 = pcVar133[-0x158];
    cVar37 = pcVar133[-0x178];
    cVar38 = pcVar133[-0x198];
    cVar39 = pcVar133[-0x1b8];
    cVar40 = pcVar133[-0x1d8];
    pcVar2 = pcVar133 + -0x1f8;
    cVar41 = pcVar133[-0x14];
    cVar42 = pcVar133[-0x34];
    cVar43 = pcVar133[-0x54];
    cVar44 = pcVar133[-0x74];
    cVar45 = pcVar133[-0x94];
    cVar46 = pcVar133[-0xb4];
    cVar47 = pcVar133[-0xd4];
    cVar48 = pcVar133[-0xf4];
    cVar49 = pcVar133[-0x114];
    cVar50 = pcVar133[-0x134];
    cVar51 = pcVar133[-0x154];
    cVar52 = pcVar133[-0x174];
    cVar53 = pcVar133[-0x194];
    cVar54 = pcVar133[-0x1b4];
    cVar55 = pcVar133[-0x1d4];
    pcVar3 = pcVar133 + -500;
    cVar56 = pcVar133[-0x10];
    cVar57 = pcVar133[-0x30];
    cVar58 = pcVar133[-0x50];
    cVar59 = pcVar133[-0x70];
    cVar60 = pcVar133[-0x90];
    cVar61 = pcVar133[-0xb0];
    cVar62 = pcVar133[-0xd0];
    cVar63 = pcVar133[-0xf0];
    cVar64 = pcVar133[-0x110];
    cVar65 = pcVar133[-0x130];
    cVar66 = pcVar133[-0x150];
    cVar67 = pcVar133[-0x170];
    cVar68 = pcVar133[-400];
    cVar69 = pcVar133[-0x1b0];
    cVar70 = pcVar133[-0x1d0];
    pcVar4 = pcVar133 + -0x1f0;
    cVar71 = pcVar133[-0xc];
    cVar72 = pcVar133[-0x2c];
    cVar73 = pcVar133[-0x4c];
    cVar74 = pcVar133[-0x6c];
    cVar75 = pcVar133[-0x8c];
    cVar76 = pcVar133[-0xac];
    cVar77 = pcVar133[-0xcc];
    cVar78 = pcVar133[-0xec];
    cVar79 = pcVar133[-0x10c];
    cVar80 = pcVar133[-300];
    cVar81 = pcVar133[-0x14c];
    cVar82 = pcVar133[-0x16c];
    cVar83 = pcVar133[-0x18c];
    cVar84 = pcVar133[-0x1ac];
    cVar85 = pcVar133[-0x1cc];
    pcVar5 = pcVar133 + -0x1ec;
    cVar86 = pcVar133[-8];
    cVar87 = pcVar133[-0x28];
    cVar88 = pcVar133[-0x48];
    cVar89 = pcVar133[-0x68];
    cVar90 = pcVar133[-0x88];
    cVar91 = pcVar133[-0xa8];
    cVar92 = pcVar133[-200];
    cVar93 = pcVar133[-0xe8];
    cVar94 = pcVar133[-0x108];
    cVar95 = pcVar133[-0x128];
    cVar96 = pcVar133[-0x148];
    cVar97 = pcVar133[-0x168];
    cVar98 = pcVar133[-0x188];
    cVar99 = pcVar133[-0x1a8];
    cVar100 = pcVar133[-0x1c8];
    pcVar6 = pcVar133 + -0x1e8;
    cVar101 = pcVar133[-4];
    cVar102 = pcVar133[-0x24];
    cVar103 = pcVar133[-0x44];
    cVar104 = pcVar133[-100];
    cVar105 = pcVar133[-0x84];
    cVar106 = pcVar133[-0xa4];
    cVar107 = pcVar133[-0xc4];
    cVar108 = pcVar133[-0xe4];
    cVar109 = pcVar133[-0x104];
    cVar110 = pcVar133[-0x124];
    cVar111 = pcVar133[-0x144];
    cVar112 = pcVar133[-0x164];
    cVar113 = pcVar133[-0x184];
    cVar114 = pcVar133[-0x1a4];
    cVar115 = pcVar133[-0x1c4];
    pcVar7 = pcVar133 + -0x1e4;
    cVar116 = *pcVar133;
    cVar117 = pcVar133[-0x20];
    cVar118 = pcVar133[-0xa0];
    cVar119 = pcVar133[-0x80];
    cVar120 = pcVar133[-0xe0];
    cVar121 = pcVar133[-0xc0];
    cVar122 = pcVar133[-0x120];
    cVar123 = pcVar133[-0x100];
    cVar124 = pcVar133[-0x160];
    cVar125 = pcVar133[-0x140];
    cVar126 = pcVar133[-0x1a0];
    cVar127 = pcVar133[-0x180];
    pcVar8 = pcVar133 + -0x1e0;
    cVar128 = pcVar133[-0x1c0];
    pcVar133 = pcVar133 + 0x200;
    local_410[iVar129] =
         -(*pcVar8 == '\0') & 1U |
         -(*pcVar7 == '\0') & 2U | -(*pcVar6 == '\0') & 4U | -(*pcVar5 == '\0') & 8U |
         -(*pcVar4 == '\0') & 0x10U | -(*pcVar3 == '\0') & 0x20U |
         -(*pcVar2 == '\0') & 0x40U | -(*pcVar1 == '\0') & 0x80U;
    local_410[iVar129 + 1] =
         -(cVar128 == '\0') & 1U |
         -(cVar115 == '\0') & 2U | -(cVar100 == '\0') & 4U | -(cVar85 == '\0') & 8U |
         -(cVar70 == '\0') & 0x10U | -(cVar55 == '\0') & 0x20U |
         -(cVar40 == '\0') & 0x40U | -(cVar25 == '\0') & 0x80U;
    local_410[iVar129 + 2] =
         -(cVar126 == '\0') & 1U |
         -(cVar114 == '\0') & 2U | -(cVar99 == '\0') & 4U | -(cVar84 == '\0') & 8U |
         -(cVar69 == '\0') & 0x10U | -(cVar54 == '\0') & 0x20U |
         -(cVar39 == '\0') & 0x40U | -(cVar24 == '\0') & 0x80U;
    local_410[iVar129 + 3] =
         -(cVar127 == '\0') & 1U |
         -(cVar113 == '\0') & 2U | -(cVar98 == '\0') & 4U | -(cVar83 == '\0') & 8U |
         -(cVar68 == '\0') & 0x10U | -(cVar53 == '\0') & 0x20U |
         -(cVar38 == '\0') & 0x40U | -(cVar23 == '\0') & 0x80U;
    local_410[iVar129 + 4] =
         -(cVar124 == '\0') & 1U |
         -(cVar112 == '\0') & 2U | -(cVar97 == '\0') & 4U | -(cVar82 == '\0') & 8U |
         -(cVar67 == '\0') & 0x10U | -(cVar52 == '\0') & 0x20U |
         -(cVar37 == '\0') & 0x40U | -(cVar22 == '\0') & 0x80U;
    local_410[iVar129 + 5] =
         -(cVar125 == '\0') & 1U |
         -(cVar111 == '\0') & 2U | -(cVar96 == '\0') & 4U | -(cVar81 == '\0') & 8U |
         -(cVar66 == '\0') & 0x10U | -(cVar51 == '\0') & 0x20U |
         -(cVar36 == '\0') & 0x40U | -(cVar21 == '\0') & 0x80U;
    local_410[iVar129 + 6] =
         -(cVar122 == '\0') & 1U |
         -(cVar110 == '\0') & 2U | -(cVar95 == '\0') & 4U | -(cVar80 == '\0') & 8U |
         -(cVar65 == '\0') & 0x10U | -(cVar50 == '\0') & 0x20U |
         -(cVar35 == '\0') & 0x40U | -(cVar20 == '\0') & 0x80U;
    local_410[iVar129 + 7] =
         -(cVar123 == '\0') & 1U |
         -(cVar109 == '\0') & 2U | -(cVar94 == '\0') & 4U | -(cVar79 == '\0') & 8U |
         -(cVar64 == '\0') & 0x10U | -(cVar49 == '\0') & 0x20U |
         -(cVar34 == '\0') & 0x40U | -(cVar19 == '\0') & 0x80U;
    local_410[iVar129 + 8] =
         -(cVar120 == '\0') & 1U |
         -(cVar108 == '\0') & 2U | -(cVar93 == '\0') & 4U | -(cVar78 == '\0') & 8U |
         -(cVar63 == '\0') & 0x10U | -(cVar48 == '\0') & 0x20U |
         -(cVar33 == '\0') & 0x40U | -(cVar18 == '\0') & 0x80U;
    local_410[iVar129 + 9] =
         -(cVar121 == '\0') & 1U |
         -(cVar107 == '\0') & 2U | -(cVar92 == '\0') & 4U | -(cVar77 == '\0') & 8U |
         -(cVar62 == '\0') & 0x10U | -(cVar47 == '\0') & 0x20U |
         -(cVar32 == '\0') & 0x40U | -(cVar17 == '\0') & 0x80U;
    local_410[iVar129 + 10] =
         -(cVar118 == '\0') & 1U |
         -(cVar106 == '\0') & 2U | -(cVar91 == '\0') & 4U | -(cVar76 == '\0') & 8U |
         -(cVar61 == '\0') & 0x10U | -(cVar46 == '\0') & 0x20U |
         -(cVar31 == '\0') & 0x40U | -(cVar16 == '\0') & 0x80U;
    local_410[iVar129 + 0xb] =
         -(cVar119 == '\0') & 1U |
         -(cVar105 == '\0') & 2U | -(cVar90 == '\0') & 4U | -(cVar75 == '\0') & 8U |
         -(cVar60 == '\0') & 0x10U | -(cVar45 == '\0') & 0x20U |
         -(cVar30 == '\0') & 0x40U | -(cVar15 == '\0') & 0x80U;
    local_410[iVar129 + 0xc] =
         -(cVar11 == '\0') & 1U |
         -(cVar104 == '\0') & 2U | -(cVar89 == '\0') & 4U | -(cVar74 == '\0') & 8U |
         -(cVar59 == '\0') & 0x10U | -(cVar44 == '\0') & 0x20U |
         -(cVar29 == '\0') & 0x40U | -(cVar14 == '\0') & 0x80U;
    local_410[iVar129 + 0xd] =
         -(cVar10 == '\0') & 1U |
         -(cVar103 == '\0') & 2U | -(cVar88 == '\0') & 4U | -(cVar73 == '\0') & 8U |
         -(cVar58 == '\0') & 0x10U | -(cVar43 == '\0') & 0x20U |
         -(cVar28 == '\0') & 0x40U | -(cVar13 == '\0') & 0x80U;
    local_410[iVar129 + 0xe] =
         -(cVar117 == '\0') & 1U |
         -(cVar102 == '\0') & 2U | -(cVar87 == '\0') & 4U | -(cVar72 == '\0') & 8U |
         -(cVar57 == '\0') & 0x10U | -(cVar42 == '\0') & 0x20U |
         -(cVar27 == '\0') & 0x40U | -(cVar12 == '\0') & 0x80U;
    local_410[iVar129 + 0xf] =
         -(cVar116 == '\0') & 1U |
         -(cVar101 == '\0') & 2U | -(cVar86 == '\0') & 4U | -(cVar71 == '\0') & 8U |
         -(cVar56 == '\0') & 0x10U | -(cVar41 == '\0') & 0x20U |
         -(cVar26 == '\0') & 0x40U | -(cVar9 == '\0') & 0x80U;
    iVar129 = iVar129 + 0x10;
  } while (iVar129 != 0);
  uStack_43c = 1;
  uStack_440 = 0x10;
  uStack_444 = 0x10;
  uVar130 = (*(code *)0x40e008)();
  uVar131 = (*(code *)0x40e008)(0x10,0x10,1,1,&uStack_444);
  uVar132 = (*(code *)0x40f8ec)(*(undefined4 *)(_DAT_00789b38 + 0x40),uVar130,uVar131);
  (*(code *)0x40e098)(uVar130);
  (*(code *)0x40e098)(uVar131);
  return uVar132;
}
