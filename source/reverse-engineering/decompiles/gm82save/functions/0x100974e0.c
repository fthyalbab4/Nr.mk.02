// rea decompile_all
// name: FUN_100974e0
// address: 0x100974e0
// body: available
// range: 0x100974e0-0x1009759e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 __fastcall FUN_100974e0(byte param_1,int param_2,uint param_3)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;

  uVar4 = (param_2 + 3U & 0xfffffffc) - param_2;
  if (uVar4 == 0) {
    uVar4 = 0;
  }
  else {
    uVar2 = 0;
    do {
      if (*(byte *)(param_2 + uVar2) == param_1) goto LAB_10097590;
      uVar2 = uVar2 + 1;
    } while (uVar4 != uVar2);
    if (param_3 - 8 < uVar4) goto LAB_10097564;
  }
  do {
    uVar2 = *(uint *)(param_2 + uVar4) ^ (uint)param_1 * 0x1010101;
    uVar3 = *(uint *)(param_2 + 4 + uVar4) ^ (uint)param_1 * 0x1010101;
    uVar2 = ~((0x1010100 - uVar3 | uVar3) & (0x1010100 - uVar2 | uVar2));
    if ((uVar2 & 0x80808080) != 0) break;
    uVar4 = uVar4 + 8;
  } while (uVar4 <= param_3 - 8);
LAB_10097564:
  if (param_3 != uVar4) {
    uVar2 = 0;
    do {
      if (*(byte *)(param_2 + uVar4 + uVar2) == param_1) {
        uVar2 = uVar2 + uVar4;
LAB_10097590:
        uVar1 = 1;
        goto LAB_10097595;
      }
      uVar2 = uVar2 + 1;
    } while (param_3 - uVar4 != uVar2);
  }
  uVar1 = 0;
LAB_10097595:
  return CONCAT44(uVar2,uVar1);
}
