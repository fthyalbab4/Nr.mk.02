// rea decompile_all
// name: FUN_100033c0
// address: 0x100033c0
// body: available
// range: 0x100033c0-0x10003508 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __fastcall FUN_100033c0(int *param_1)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  byte *lpMem;
  ushort uVar4;
  uint uVar5;
  HANDLE hHeap;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  uint uVar9;
  int iVar10;

  iVar3 = param_1[2];
  lpMem = (byte *)param_1[1];
  iVar10 = 0;
  if (iVar3 == 0) {
    iVar10 = 0;
    iVar3 = *param_1;
  }
  else {
    (*(code *)0x408244)();
    iVar6 = iVar3 * 2;
    iVar7 = 0;
    uVar5 = 0;
    pbVar8 = lpMem;
    do {
      uVar4 = (ushort)uVar5;
      if (uVar4 == 0) {
        if (pbVar8 == lpMem + iVar3) break;
        bVar2 = *pbVar8;
        uVar4 = (ushort)bVar2;
        if (-1 < (char)bVar2) {
          pbVar8 = pbVar8 + 1;
          goto LAB_10003480;
        }
        pbVar1 = pbVar8 + 1;
        uVar5 = bVar2 & 0x1f;
        if (bVar2 < 0xe0) {
          pbVar8 = pbVar8 + 2;
          uVar9 = uVar5 << 6 | *pbVar1 & 0x3f;
LAB_10003475:
          uVar4 = (ushort)uVar9;
          goto LAB_10003480;
        }
        uVar9 = pbVar8[2] & 0x3f | (*pbVar1 & 0x3f) << 6;
        if (bVar2 < 0xf0) {
          pbVar8 = pbVar8 + 3;
          uVar9 = uVar9 | uVar5 << 0xc;
        }
        else {
          pbVar1 = pbVar8 + 3;
          pbVar8 = pbVar8 + 4;
          uVar9 = *pbVar1 & 0x3f | uVar9 << 6 | (bVar2 & 7) << 0x12;
        }
        if (uVar9 < 0x10000) goto LAB_10003475;
        uVar5 = uVar9 & 0x3ff | 0xdc00;
        uVar4 = (ushort)(uVar9 + 0xff0000 >> 10) | 0xd800;
      }
      else {
LAB_10003480:
        uVar5 = 0;
      }
      *(ushort *)(iVar10 + iVar7 * 2) = uVar4;
      iVar7 = iVar7 + 1;
      iVar6 = iVar6 + -2;
    } while (iVar6 != 0);
    (*(code *)0x408244)(iVar10,lpMem + iVar3,(iVar3 * 2 - 2U >> 1) + 1);
    iVar3 = *param_1;
  }
  if (iVar3 != 0) {
    hHeap = GetProcessHeap();
    HeapFree(hHeap,0,lpMem);
  }
  return iVar10;
}
