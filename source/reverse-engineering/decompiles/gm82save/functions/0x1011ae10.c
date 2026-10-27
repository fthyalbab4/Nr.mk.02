// rea decompile_all
// name: FUN_1011ae10
// address: 0x1011ae10
// body: available
// range: 0x1011ae10-0x1011af9a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_1011ae10(uint *param_1,undefined4 param_2)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  uint *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  int iVar7;
  undefined8 uVar8;
  uint local_2c;
  undefined8 *puStack_28;
  uint uStack_24;
  int *local_20;
  undefined4 local_1c;
  int iStack_18;
  uint *puStack_14;

  local_1c = param_2;
  puVar4 = FUN_1010d990((char *)0x0);
  if (puVar4 == (uint *)0x0) {
    local_20 = (int *)0x0;
  }
  else {
    piVar1 = (int *)*puVar4;
    *puVar4 = 0;
    local_20 = piVar1;
    if (piVar1 != (int *)0x0) {
      LOCK();
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      if (*piVar1 == 0 || SCARRY4(iVar7,1) != *piVar1 < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      local_2c = *puVar4;
      *puVar4 = (uint)piVar1;
      FUN_1010d190(&local_2c);
      iVar7 = piVar1[4];
      uVar8 = (**(code **)(piVar1[3] + 0x14))(piVar1[2],local_1c);
      if ((int)uVar8 == 0) {
        puStack_28 = (undefined8 *)&DAT_00000004;
        local_2c = 0;
        uVar6 = 0;
      }
      else {
        puVar5 = FUN_10107380(0,0x20);
        if (puVar5 == (undefined8 *)0x0) {
          FUN_101366bc(4);
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        *puVar5 = uVar8;
        local_2c = 4;
        uStack_24 = 1;
        puStack_28 = puVar5;
        puStack_14 = param_1;
        if (iVar7 == 0) {
          local_2c = 4;
          uVar6 = 1;
        }
        else {
          do {
            uVar3 = uStack_24;
            iStack_18 = *(int *)(iVar7 + 0x10);
            uVar8 = (**(code **)(*(int *)(iVar7 + 0xc) + 0x14))(*(undefined4 *)(iVar7 + 8),local_1c)
            ;
            uVar6 = uVar3;
            param_1 = puStack_14;
            if ((int)uVar8 == 0) break;
            if (uVar3 == local_2c) {
              FUN_101359e0(&local_2c,uVar3,2 - (iStack_18 == 0),&DAT_00000004,8);
              puVar5 = puStack_28;
            }
            uVar6 = uVar3 + 1;
            *(int *)(puVar5 + uVar3) = (int)uVar8;
            *(int *)((int)puVar5 + (uVar3 * 2 + 1) * 4) = (int)((ulonglong)uVar8 >> 0x20);
            iVar7 = iStack_18;
            param_1 = puStack_14;
            uStack_24 = uVar6;
          } while (iStack_18 != 0);
        }
      }
      goto LAB_1011af74;
    }
    local_2c = 0;
    FUN_1010d190(&local_2c);
  }
  local_2c = 0;
  puStack_28 = (undefined8 *)&DAT_00000004;
  uVar6 = 0;
LAB_1011af74:
  param_1[3] = (uint)local_20;
  *param_1 = local_2c;
  param_1[1] = (uint)puStack_28;
  param_1[2] = uVar6;
  return;
}
