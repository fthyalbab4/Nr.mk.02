// rea decompile_all
// name: FUN_10102f90
// address: 0x10102f90
// body: available
// range: 0x10102f90-0x1010302c inclusive
// range: 0x10103030-0x1010305b inclusive
// range: 0x10103060-0x1010308f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x1010306e) */

undefined4 __fastcall FUN_10102f90(undefined4 *param_1,uint param_2)

{
  undefined1 *puVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  byte bVar6;
  uint uVar7;
  uint auStack_20 [3];
  byte bStack_14;
  byte bStack_13;

  if (param_1 == (undefined4 *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar3 = (**(code **)(param_1[1] + 0x10))(*param_1,0x27);
    uVar4 = CONCAT31((int3)((uint)uVar3 >> 8),1);
    if ((char)uVar3 == '\0') {
      if (param_2 == 0x22) {
        uVar4 = (**(code **)(param_1[1] + 0x10))(*param_1,0x22);
        param_2 = 0xffffffff;
        if ((char)uVar4 != '\0') {
LAB_10103077:
          return CONCAT31((int3)((uint)uVar4 >> 8),1);
        }
      }
      while (param_2 != 0xffffffff) {
        FUN_10103970(auStack_20,param_2);
        bVar2 = bStack_13;
        uVar5 = auStack_20[0];
        uVar7 = (uint)bStack_14;
        if (bStack_13 < 0x81) {
          uVar5 = (uint)bStack_13;
          if (bStack_13 < bStack_14) {
            uVar5 = uVar7;
          }
          while (uVar5 != uVar7) {
            puVar1 = (undefined1 *)((int)auStack_20 + uVar7);
            uVar7 = uVar7 + 1;
            uVar4 = (**(code **)(param_1[1] + 0x10))(*param_1,*puVar1);
            if ((char)uVar4 != '\0') goto LAB_10103077;
          }
        }
        else {
          bVar6 = bStack_14 - 1;
          while (bVar6 = bVar6 + 1, bVar6 < bVar2) {
            uVar4 = (**(code **)(param_1[1] + 0x10))(*param_1,uVar5);
            if ((char)uVar4 != '\0') goto LAB_10103077;
          }
        }
        param_2 = 0xffffffff;
      }
      uVar4 = (**(code **)(param_1[1] + 0x10))(*param_1,0x27);
    }
  }
  return uVar4;
}
