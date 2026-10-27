// rea decompile_all
// name: FUN_100528c0
// address: 0x100528c0
// body: available
// range: 0x100528c0-0x10052968 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_100528c0(undefined1 *param_1,char *param_2,int param_3)

{
  byte bVar1;
  undefined1 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  uint uVar8;
  bool bVar9;

  if (param_3 == 1) {
    cVar3 = *param_2;
    if ((cVar3 != '-') && (cVar3 != '+')) goto LAB_100528f0;
LAB_100528e5:
    param_1[1] = 1;
  }
  else if (param_3 == 0) {
    param_1[1] = 0;
  }
  else {
    cVar3 = *param_2;
LAB_100528f0:
    uVar4 = 0;
    uVar8 = param_3 - (uint)(cVar3 == '+');
    pbVar7 = (byte *)(param_2 + (cVar3 == '+'));
    if (uVar8 < 9) {
      for (; uVar8 != 0; uVar8 = uVar8 - 1) {
        bVar1 = *pbVar7;
        if (9 < bVar1 - 0x30) goto LAB_100528e5;
        pbVar7 = pbVar7 + 1;
        uVar4 = (bVar1 - 0x30) + uVar4 * 10;
      }
LAB_10052925:
      *(uint *)(param_1 + 4) = uVar4;
      uVar2 = 0;
      goto LAB_1005292a;
    }
    do {
      bVar9 = uVar8 == 0;
      uVar8 = uVar8 - 1;
      if (bVar9) goto LAB_10052925;
      uVar5 = (uint)((ulonglong)uVar4 * 10);
      if ((int)((ulonglong)uVar4 * 10 >> 0x20) != 0) {
        if (9 < (byte)(*pbVar7 - 0x30)) goto LAB_100528e5;
        break;
      }
      uVar6 = *pbVar7 - 0x30;
      if (9 < uVar6) goto LAB_100528e5;
      pbVar7 = pbVar7 + 1;
      uVar4 = uVar6 + uVar5;
    } while (!CARRY4(uVar6,uVar5));
    param_1[1] = 2;
  }
  uVar2 = 1;
LAB_1005292a:
  *param_1 = uVar2;
  return;
}
