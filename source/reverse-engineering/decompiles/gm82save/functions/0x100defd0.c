// rea decompile_all
// name: FUN_100defd0
// address: 0x100defd0
// body: available
// range: 0x100defd0-0x100df0bc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


byte * __fastcall FUN_100defd0(byte *param_1,byte *param_2,byte *param_3,uint param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;

  if (7 < param_4) {
    uVar7 = param_4 & 0xfffffff8;
    uVar8 = param_4 >> 3;
    iVar4 = uVar8 * 0xe;
    param_1 = FUN_100defd0(param_1,param_1 + uVar7,param_1 + iVar4,uVar8);
    param_2 = FUN_100defd0(param_2,param_2 + uVar7,param_2 + iVar4,uVar8);
    param_3 = FUN_100defd0(param_3,param_3 + uVar7,param_3 + iVar4,uVar8);
  }
  bVar1 = *param_2;
  bVar2 = *param_1;
  bVar3 = *param_3;
  bVar5 = bVar2 < bVar1;
  if (bVar2 == bVar1) {
    bVar5 = param_1[1] < param_2[1];
  }
  bVar6 = bVar2 < bVar3;
  if (bVar2 == bVar3) {
    bVar6 = param_1[1] < param_3[1];
  }
  if (bVar5 == bVar6) {
    bVar6 = bVar1 < bVar3;
    if (bVar1 == bVar3) {
      bVar6 = param_2[1] < param_3[1];
    }
    param_1 = param_2;
    if (bVar5 != bVar6) {
      param_1 = param_3;
    }
  }
  return param_1;
}
