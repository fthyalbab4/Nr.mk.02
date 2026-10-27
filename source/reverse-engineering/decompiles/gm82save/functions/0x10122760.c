// rea decompile_all
// name: FUN_10122760
// address: 0x10122760
// body: available
// range: 0x10122760-0x10122a1c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint __fastcall FUN_10122760(uint param_1,byte *param_2,uint param_3)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  byte *pbVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;

  if (param_3 != 0) {
    uVar17 = param_1 & 0xffff;
    uVar4 = param_1 >> 0x10;
    if (param_3 == 1) {
      uVar17 = uVar17 + *param_2;
      uVar14 = uVar17 - 0xfff1;
      if (uVar17 < 0xfff1) {
        uVar14 = uVar17;
      }
      param_1 = ((uVar4 + uVar14) % 0xfff1) * 0x10000 + uVar14;
    }
    else {
      if (param_3 < 0x10) {
        do {
          bVar2 = *param_2;
          param_2 = param_2 + 1;
          uVar17 = uVar17 + bVar2;
          uVar4 = uVar4 + uVar17;
          param_3 = param_3 - 1;
        } while (param_3 != 0);
      }
      else {
        uVar16 = param_3 % 0x15b0;
        uVar13 = (param_3 / 0x15b0) * 0x15b0;
        pbVar15 = param_2;
        for (uVar14 = uVar13; 0x15af < uVar14; uVar14 = uVar14 - 0x15b0) {
          iVar3 = -0x15b0;
          do {
            iVar5 = pbVar15[iVar3 + 0x15b0] + uVar17;
            iVar18 = (uint)pbVar15[iVar3 + 0x15b1] + iVar5;
            iVar6 = (uint)pbVar15[iVar3 + 0x15b2] + iVar18;
            iVar19 = (uint)pbVar15[iVar3 + 0x15b3] + iVar6;
            iVar7 = (uint)pbVar15[iVar3 + 0x15b4] + iVar19;
            iVar20 = (uint)pbVar15[iVar3 + 0x15b5] + iVar7;
            iVar8 = (uint)pbVar15[iVar3 + 0x15b6] + iVar20;
            iVar21 = (uint)pbVar15[iVar3 + 0x15b7] + iVar8;
            iVar9 = (uint)pbVar15[iVar3 + 0x15b8] + iVar21;
            iVar22 = (uint)pbVar15[iVar3 + 0x15b9] + iVar9;
            iVar10 = (uint)pbVar15[iVar3 + 0x15ba] + iVar22;
            iVar23 = (uint)pbVar15[iVar3 + 0x15bb] + iVar10;
            iVar11 = (uint)pbVar15[iVar3 + 0x15bc] + iVar23;
            iVar24 = (uint)pbVar15[iVar3 + 0x15bd] + iVar11;
            iVar12 = (uint)pbVar15[iVar3 + 0x15be] + iVar24;
            uVar17 = (uint)pbVar15[iVar3 + 0x15bf] + iVar12;
            uVar4 = uVar4 + iVar5 + iVar18 + iVar6 + iVar19 + iVar7 + iVar20 + iVar8 + iVar21 +
                    iVar9 + iVar22 + iVar10 + iVar23 + iVar11 + iVar24 + iVar12 + uVar17;
            iVar3 = iVar3 + 0x10;
          } while (iVar3 != 0);
          pbVar15 = pbVar15 + 0x15b0;
          uVar17 = uVar17 % 0xfff1;
          uVar4 = uVar4 % 0xfff1;
        }
        uVar14 = uVar16 & 0xf;
        if ((uVar16 & 0x1ff0) != 0) {
          iVar3 = -(uVar16 & 0xfffffff0);
          pbVar15 = param_2 + uVar13;
          do {
            iVar5 = *pbVar15 + uVar17;
            iVar18 = (uint)pbVar15[1] + iVar5;
            iVar6 = (uint)pbVar15[2] + iVar18;
            iVar19 = (uint)pbVar15[3] + iVar6;
            iVar7 = (uint)pbVar15[4] + iVar19;
            iVar20 = (uint)pbVar15[5] + iVar7;
            iVar8 = (uint)pbVar15[6] + iVar20;
            iVar21 = (uint)pbVar15[7] + iVar8;
            iVar9 = (uint)pbVar15[8] + iVar21;
            iVar22 = (uint)pbVar15[9] + iVar9;
            iVar10 = (uint)pbVar15[10] + iVar22;
            iVar23 = (uint)pbVar15[0xb] + iVar10;
            iVar11 = (uint)pbVar15[0xc] + iVar23;
            iVar24 = (uint)pbVar15[0xd] + iVar11;
            iVar12 = (uint)pbVar15[0xe] + iVar24;
            pbVar1 = pbVar15 + 0xf;
            pbVar15 = pbVar15 + 0x10;
            uVar17 = (uint)*pbVar1 + iVar12;
            uVar4 = uVar4 + iVar5 + iVar18 + iVar6 + iVar19 + iVar7 + iVar20 + iVar8 + iVar21 +
                    iVar9 + iVar22 + iVar10 + iVar23 + iVar11 + iVar24 + iVar12 + uVar17;
            iVar3 = iVar3 + 0x10;
          } while (iVar3 != 0);
        }
        if (uVar14 != 0) {
          pbVar15 = param_2 + uVar13 + (uVar16 & 0x1ff0);
          do {
            bVar2 = *pbVar15;
            pbVar15 = pbVar15 + 1;
            uVar17 = uVar17 + bVar2;
            uVar4 = uVar4 + uVar17;
            uVar14 = uVar14 - 1;
          } while (uVar14 != 0);
        }
      }
      param_1 = (uVar4 % 0xfff1) * 0x10000 | uVar17 % 0xfff1;
    }
  }
  return param_1;
}
