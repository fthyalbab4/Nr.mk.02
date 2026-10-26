// rea decompile_all
// name: FUN_10093d70
// address: 0x10093d70
// body: available
// range: 0x10093d70-0x10093daa inclusive
// range: 0x10093db0-0x10093de0 inclusive
// range: 0x10093df0-0x10093ef3 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __fastcall FUN_10093d70(undefined4 param_1,int param_2,ushort *param_3,uint param_4)

{
  byte bVar1;
  code *pcVar2;
  uint uVar3;
  undefined4 uVar4;
  ushort uVar5;
  ushort *puVar6;
  ushort uVar7;
  uint uVar8;
  undefined4 uStack_20;
  int iStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;

  if ((param_4 & 1) == 0) {
    bVar1 = (byte)*param_3;
    uVar8 = 0;
    if (bVar1 != 0) {
      pcVar2 = *(code **)(param_2 + 0xc);
      do {
        uVar3 = (uint)bVar1;
        puVar6 = (ushort *)((int)param_3 + 1);
        if ((char)bVar1 < '\0') {
          if (bVar1 == 0x80) {
            uVar5 = *(ushort *)((int)param_3 + 1);
            uVar4 = (*pcVar2)(param_1,(byte *)((int)param_3 + 3),(uint)uVar5);
            if ((char)uVar4 != '\0') goto LAB_10093eea;
            puVar6 = (ushort *)((int)param_3 + uVar5 + 3);
          }
          else {
            if (uVar3 == 0xc0) {
              uStack_18 = 0x60000020;
              uStack_14 = 0;
            }
            else {
              uStack_18 = 0x60000020;
              if ((bVar1 & 1) != 0) {
                uStack_18 = *(undefined4 *)((int)param_3 + 1);
                puVar6 = (ushort *)((int)param_3 + 5);
              }
              if ((bVar1 & 2) == 0) {
                uVar5 = 0;
                if ((bVar1 & 4) != 0) goto LAB_10093e55;
LAB_10093e6d:
                uVar7 = 0;
              }
              else {
                uVar5 = *puVar6;
                puVar6 = puVar6 + 1;
                if ((bVar1 & 4) == 0) goto LAB_10093e6d;
LAB_10093e55:
                uVar7 = *puVar6;
                puVar6 = puVar6 + 1;
              }
              if ((bVar1 & 8) != 0) {
                uVar8 = (uint)*puVar6;
                puVar6 = puVar6 + 1;
              }
              if ((bVar1 & 0x10) != 0) {
                uVar5 = *(ushort *)(param_4 + 4 + (uint)uVar5 * 8);
              }
              if ((bVar1 & 0x20) != 0) {
                uVar7 = *(ushort *)(param_4 + 4 + (uint)uVar7 * 8);
              }
              uStack_14 = CONCAT22(uVar7,uVar5);
            }
            uStack_20 = param_1;
            iStack_1c = param_2;
            uVar4 = (**(code **)(param_4 + 4 + uVar8 * 8))
                              (*(undefined4 *)(param_4 + uVar8 * 8),&uStack_20);
            if ((char)uVar4 != '\0') {
LAB_10093eea:
              return CONCAT31((int3)((uint)uVar4 >> 8),1);
            }
            uVar8 = uVar8 + 1;
          }
        }
        else {
          uVar4 = (*pcVar2)(param_1,puVar6,uVar3,uVar8,param_1,param_2);
          if ((char)uVar4 != '\0') goto LAB_10093eea;
          puVar6 = (ushort *)((int)puVar6 + uVar3);
        }
        bVar1 = (byte)*puVar6;
        param_3 = puVar6;
      } while (bVar1 != 0);
    }
    uVar4 = 0;
  }
  else {
    uVar4 = (**(code **)(param_2 + 0xc))(param_1,param_3,param_4 >> 1);
  }
  return uVar4;
}
