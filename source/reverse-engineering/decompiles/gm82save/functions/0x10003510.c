// rea decompile_all
// name: FUN_10003510
// address: 0x10003510
// body: available
// range: 0x10003510-0x10003632 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __fastcall FUN_10003510(byte *param_1,int param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  ushort uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;

  iVar9 = 0;
  if (param_2 == 0) {
    iVar9 = 0;
  }
  else {
    (*(code *)0x408244)();
    iVar5 = 0;
    uVar7 = 0;
    pbVar2 = param_1 + param_2;
    iVar4 = param_2 * 2;
    do {
      if ((short)uVar7 == 0) {
        if (param_1 == pbVar2) break;
        bVar3 = *param_1;
        uVar7 = (uint)bVar3;
        if (-1 < (char)bVar3) {
          param_1 = param_1 + 1;
          goto LAB_100035d0;
        }
        pbVar1 = param_1 + 1;
        if (bVar3 < 0xe0) {
          param_1 = param_1 + 2;
          uVar7 = (uVar7 & 0x1f) << 6 | *pbVar1 & 0x3f;
          goto LAB_100035d0;
        }
        uVar8 = param_1[2] & 0x3f | (*pbVar1 & 0x3f) << 6;
        if (bVar3 < 0xf0) {
          param_1 = param_1 + 3;
          uVar7 = uVar8 | (uVar7 & 0x1f) << 0xc;
        }
        else {
          pbVar1 = param_1 + 3;
          param_1 = param_1 + 4;
          uVar7 = *pbVar1 & 0x3f | uVar8 << 6 | (uVar7 & 7) << 0x12;
        }
        if (uVar7 < 0x10000) goto LAB_100035d0;
        uVar8 = uVar7 + 0xff0000;
        uVar7 = uVar7 & 0x3ff | 0xdc00;
        uVar6 = (ushort)(uVar8 >> 10) | 0xd800;
      }
      else {
LAB_100035d0:
        uVar6 = (ushort)uVar7;
        uVar7 = 0;
      }
      *(ushort *)(iVar9 + iVar5 * 2) = uVar6;
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + -2;
    } while (iVar4 != 0);
    (*(code *)0x408244)(iVar9,(param_2 * 2 - 2U >> 1) + 1);
  }
  return iVar9;
}
