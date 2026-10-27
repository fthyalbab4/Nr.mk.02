// rea decompile_all
// name: FUN_10096160
// address: 0x10096160
// body: available
// range: 0x10096160-0x1009618b inclusive
// range: 0x10096190-0x100961fa inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 __fastcall FUN_10096160(uint *param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  bool bVar9;

  uVar2 = *param_1;
  if ((uVar2 == 0) || (uVar3 = param_1[1], (int)uVar3 < 0)) {
    uVar5 = 0;
    iVar8 = 0;
  }
  else {
    uVar5 = 0xffffffff;
    iVar8 = -1;
    if (uVar3 < 0x13) {
      uVar5 = 0;
      iVar8 = 0;
      if (uVar3 != 0) {
        uVar7 = 0;
        do {
          uVar4 = (ulonglong)uVar5;
          uVar5 = (uint)(uVar4 * 10);
          iVar8 = (int)(uVar4 * 10 >> 0x20) + iVar8 * 10;
          if (uVar7 < uVar2) {
            uVar6 = (uint)*(byte *)((int)param_1 + uVar7 + 8);
            bVar9 = CARRY4(uVar5,uVar6);
            uVar5 = uVar5 + uVar6;
            iVar8 = iVar8 + (uint)bVar9;
          }
          uVar7 = uVar7 + 1;
        } while (uVar3 != uVar7);
      }
      if (uVar3 < uVar2) {
        bVar1 = *(byte *)((int)param_1 + uVar3 + 8);
        if (uVar3 + 1 == uVar2 && bVar1 == 5) {
          if (((char)param_1[0xc2] == '\0') &&
             ((uVar3 == 0 || ((*(byte *)((int)param_1 + uVar3 + 7) & 1) == 0)))) goto LAB_100961b6;
        }
        else if (bVar1 < 5) goto LAB_100961b6;
        bVar9 = 0xfffffffe < uVar5;
        uVar5 = uVar5 + 1;
        iVar8 = iVar8 + (uint)bVar9;
      }
    }
  }
LAB_100961b6:
  return CONCAT44(iVar8,uVar5);
}
