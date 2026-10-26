// rea decompile_all
// name: FUN_1009d850
// address: 0x1009d850
// body: available
// range: 0x1009d850-0x1009dbdf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint __fastcall FUN_1009d850(uint param_1,byte *param_2,uint param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte bVar17;
  uint uVar18;

  uVar18 = ~param_1;
  for (; 0x3f < param_3; param_3 = param_3 - 0x40) {
    uVar18 = *(uint *)(&DAT_1014a24c + (uint)param_2[0xe] * 4) ^
             *(uint *)("" + (uint)param_2[0xf] * 4) ^
             *(uint *)(&DAT_1014a64c + (uint)param_2[0xd] * 4) ^
             *(uint *)(&DAT_1014aa4c + (uint)param_2[0xc] * 4) ^
             *(uint *)(&DAT_1014ae4c + (uint)param_2[0xb] * 4) ^
             *(uint *)(&DAT_1014b24c + (uint)param_2[10] * 4) ^
             *(uint *)(&DAT_1014b64c + (uint)param_2[9] * 4) ^
             *(uint *)(&DAT_1014ba4c + (uint)param_2[8] * 4) ^
             *(uint *)(&DAT_1014be4c + (uint)param_2[7] * 4) ^
             *(uint *)(&DAT_1014c24c + (uint)param_2[6] * 4) ^
             *(uint *)(&DAT_1014c64c + (uint)param_2[5] * 4) ^
             *(uint *)(&DAT_1014ca4c + (uint)param_2[4] * 4) ^
             *(uint *)(&DAT_1014ce4c + ((uint)param_2[3] ^ uVar18 >> 0x18) * 4) ^
             *(uint *)(&DAT_1014d24c + ((uint)param_2[2] ^ uVar18 >> 0x10 & 0xff) * 4) ^
             *(uint *)(&DAT_1014d64c + ((uint)param_2[1] ^ uVar18 >> 8 & 0xff) * 4) ^
             *(uint *)(&DAT_1014da4c + ((uint)*param_2 ^ uVar18 & 0xff) * 4);
    uVar18 = *(uint *)(&DAT_1014a24c + (uint)param_2[0x1e] * 4) ^
             *(uint *)("" + (uint)param_2[0x1f] * 4) ^
             *(uint *)(&DAT_1014a64c + (uint)param_2[0x1d] * 4) ^
             *(uint *)(&DAT_1014aa4c + (uint)param_2[0x1c] * 4) ^
             *(uint *)(&DAT_1014ae4c + (uint)param_2[0x1b] * 4) ^
             *(uint *)(&DAT_1014b24c + (uint)param_2[0x1a] * 4) ^
             *(uint *)(&DAT_1014b64c + (uint)param_2[0x19] * 4) ^
             *(uint *)(&DAT_1014ba4c + (uint)param_2[0x18] * 4) ^
             *(uint *)(&DAT_1014be4c + (uint)param_2[0x17] * 4) ^
             *(uint *)(&DAT_1014c24c + (uint)param_2[0x16] * 4) ^
             *(uint *)(&DAT_1014c64c + (uint)param_2[0x15] * 4) ^
             *(uint *)(&DAT_1014ca4c + (uint)param_2[0x14] * 4) ^
             *(uint *)(&DAT_1014ce4c + ((uint)param_2[0x13] ^ uVar18 >> 0x18) * 4) ^
             *(uint *)(&DAT_1014d24c + ((uint)param_2[0x12] ^ uVar18 >> 0x10 & 0xff) * 4) ^
             *(uint *)(&DAT_1014d64c + ((uint)param_2[0x11] ^ uVar18 >> 8 & 0xff) * 4) ^
             *(uint *)(&DAT_1014da4c + ((uint)param_2[0x10] ^ uVar18 & 0xff) * 4);
    pbVar1 = param_2 + 0x3f;
    uVar18 = *(uint *)(&DAT_1014a24c + (uint)param_2[0x2e] * 4) ^
             *(uint *)("" + (uint)param_2[0x2f] * 4) ^
             *(uint *)(&DAT_1014a64c + (uint)param_2[0x2d] * 4) ^
             *(uint *)(&DAT_1014aa4c + (uint)param_2[0x2c] * 4) ^
             *(uint *)(&DAT_1014ae4c + (uint)param_2[0x2b] * 4) ^
             *(uint *)(&DAT_1014b24c + (uint)param_2[0x2a] * 4) ^
             *(uint *)(&DAT_1014b64c + (uint)param_2[0x29] * 4) ^
             *(uint *)(&DAT_1014ba4c + (uint)param_2[0x28] * 4) ^
             *(uint *)(&DAT_1014be4c + (uint)param_2[0x27] * 4) ^
             *(uint *)(&DAT_1014c24c + (uint)param_2[0x26] * 4) ^
             *(uint *)(&DAT_1014c64c + (uint)param_2[0x25] * 4) ^
             *(uint *)(&DAT_1014ca4c + (uint)param_2[0x24] * 4) ^
             *(uint *)(&DAT_1014ce4c + ((uint)param_2[0x23] ^ uVar18 >> 0x18) * 4) ^
             *(uint *)(&DAT_1014d24c + ((uint)param_2[0x22] ^ uVar18 >> 0x10 & 0xff) * 4) ^
             *(uint *)(&DAT_1014d64c + ((uint)param_2[0x21] ^ uVar18 >> 8 & 0xff) * 4) ^
             *(uint *)(&DAT_1014da4c + ((uint)param_2[0x20] ^ uVar18 & 0xff) * 4);
    pbVar2 = param_2 + 0x3e;
    pbVar3 = param_2 + 0x3d;
    pbVar4 = param_2 + 0x3c;
    pbVar5 = param_2 + 0x3b;
    pbVar6 = param_2 + 0x3a;
    pbVar7 = param_2 + 0x39;
    pbVar8 = param_2 + 0x38;
    pbVar9 = param_2 + 0x37;
    pbVar10 = param_2 + 0x36;
    pbVar11 = param_2 + 0x35;
    pbVar12 = param_2 + 0x34;
    pbVar13 = param_2 + 0x33;
    pbVar14 = param_2 + 0x32;
    pbVar15 = param_2 + 0x31;
    pbVar16 = param_2 + 0x30;
    param_2 = param_2 + 0x40;
    uVar18 = *(uint *)(&DAT_1014a24c + (uint)*pbVar2 * 4) ^ *(uint *)("" + (uint)*pbVar1 * 4) ^
             *(uint *)(&DAT_1014a64c + (uint)*pbVar3 * 4) ^
             *(uint *)(&DAT_1014aa4c + (uint)*pbVar4 * 4) ^
             *(uint *)(&DAT_1014ae4c + (uint)*pbVar5 * 4) ^
             *(uint *)(&DAT_1014b24c + (uint)*pbVar6 * 4) ^
             *(uint *)(&DAT_1014b64c + (uint)*pbVar7 * 4) ^
             *(uint *)(&DAT_1014ba4c + (uint)*pbVar8 * 4) ^
             *(uint *)(&DAT_1014be4c + (uint)*pbVar9 * 4) ^
             *(uint *)(&DAT_1014c24c + (uint)*pbVar10 * 4) ^
             *(uint *)(&DAT_1014c64c + (uint)*pbVar11 * 4) ^
             *(uint *)(&DAT_1014ca4c + (uint)*pbVar12 * 4) ^
             *(uint *)(&DAT_1014ce4c + (uVar18 >> 0x18 ^ (uint)*pbVar13) * 4) ^
             *(uint *)(&DAT_1014d24c + (uVar18 >> 0x10 & 0xff ^ (uint)*pbVar14) * 4) ^
             *(uint *)(&DAT_1014d64c + (uVar18 >> 8 & 0xff ^ (uint)*pbVar15) * 4) ^
             *(uint *)(&DAT_1014da4c + ((uint)*pbVar16 ^ uVar18 & 0xff) * 4);
  }
  for (; param_3 != 0; param_3 = param_3 - 1) {
    bVar17 = *param_2;
    param_2 = param_2 + 1;
    uVar18 = uVar18 >> 8 ^ *(uint *)("" + (uint)(byte)(bVar17 ^ (byte)uVar18) * 4);
  }
  return ~uVar18;
}
