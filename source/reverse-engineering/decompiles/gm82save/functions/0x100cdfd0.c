// rea decompile_all
// name: FUN_100cdfd0
// address: 0x100cdfd0
// body: available
// range: 0x100cdfd0-0x100ce0ce inclusive
// range: 0x100ce0e0-0x100ce12a inclusive
// range: 0x100ce130-0x100ce150 inclusive
// range: 0x100ce179-0x100ce1f8 inclusive
// range: 0x100ce993-0x100ce9f5 inclusive
// range: 0x100cea7a-0x100cea9f inclusive
// range: 0x100ceab9-0x100ceacb inclusive
// range: 0x100ceafe-0x100ceb15 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall
FUN_100cdfd0(int param_1,uint *param_2,int param_3,uint param_4,int param_5,undefined4 param_6,
            int param_7,int param_8,undefined4 param_9)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  code *pcVar7;
  uint uVar8;
  uint local_13c;
  int local_138;
  int local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  int local_124;
  uint local_11c;
  uint local_118;
  uint local_114;
  uint *local_110;
  undefined1 *local_10c;
  uint *local_108;
  undefined1 *local_104;
  uint *local_100;
  undefined1 *local_fc;

  uVar1 = param_2[2];
  if (uVar1 == *param_2) {
    FUN_10135e90(param_2);
  }
  uVar2 = param_2[1];
  uVar8 = uVar1 + 1;
  *(undefined4 *)(uVar2 + uVar1 * 0xc) = 0;
  *(undefined4 *)(uVar2 + 4 + uVar1 * 0xc) = param_9;
  param_2[2] = uVar8;
  if (uVar8 != 0) {
    local_138 = param_7 - param_8;
    uVar1 = *(uint *)(param_5 + 0x14);
    iVar3 = *(int *)(param_5 + 0x10);
    iVar4 = *(int *)(param_5 + 4);
    local_114 = *(uint *)(param_5 + 8);
    local_124 = param_8 + 1;
    local_12c = *(undefined4 *)(param_5 + 0x28);
    local_128 = *(undefined4 *)(param_5 + 0x2c);
    local_130 = *(undefined4 *)(param_5 + 0x20);
    local_134 = param_4 * 4;
    local_118 = *(uint *)(param_5 + 0x18);
    do {
      uVar8 = uVar8 - 1;
      param_2[2] = uVar8;
      uVar5 = *(uint *)(uVar2 + 4 + uVar8 * 0xc);
      if (*(int *)(uVar2 + uVar8 * 0xc) == 1) {
        if (param_4 <= uVar5) {
          FUN_10136b52(uVar5,param_4,&PTR_s_C__Users_runneradmin__cargo_regi_101525d4);
                    /* WARNING: Does not return */
          pcVar7 = (code *)invalidInstructionException();
          (*pcVar7)();
        }
        *(undefined4 *)(param_3 + uVar5 * 4) = *(undefined4 *)(uVar2 + 8 + uVar8 * 0xc);
      }
      else {
        local_13c = uVar5;
        if (uVar1 <= uVar5) {
          FUN_10136b52(uVar5,uVar1,&PTR_s_C__Users_runneradmin__cargo_regi_10152958);
                    /* WARNING: Does not return */
          pcVar7 = (code *)invalidInstructionException();
          (*pcVar7)();
        }
        local_11c = local_114;
        if (local_114 < local_118) {
          local_11c = local_118;
        }
        uVar6 = *(uint *)(iVar3 + uVar5 * 4);
        if (local_118 <= uVar6) {
LAB_100ce199:
          if (local_118 == local_11c) {
            local_110 = &local_118;
            local_108 = &local_114;
            local_100 = &local_13c;
            local_10c = &LAB_100908e0;
            local_104 = &LAB_100908e0;
            local_fc = &LAB_100ceed0;
            FUN_101369c0(&DAT_101528e4,&local_110,&PTR_s_C__Users_runneradmin__cargo_regi_10152910);
                    /* WARNING: Does not return */
            pcVar7 = (code *)invalidInstructionException();
            (*pcVar7)();
          }
          *(uint *)(iVar4 + local_118 * 4) = uVar5;
          *(uint *)(iVar3 + uVar5 * 4) = local_118;
          *(uint *)(param_5 + 0x18) = local_118 + 1;
          if (uVar5 < *(uint *)(param_1 + 0x150)) {
                    /* WARNING: Could not recover jumptable at 0x100ce1f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)(*(int *)(&DAT_100cec00 +
                               *(int *)(*(int *)(param_1 + 0x14c) + uVar5 * 0x14) * 4) + 0x100cdfeb)
            )(iVar3);
            return;
          }
          FUN_10136b52(uVar5,*(uint *)(param_1 + 0x150),
                       &PTR_s_C__Users_runneradmin__cargo_regi_101525f4);
                    /* WARNING: Does not return */
          pcVar7 = (code *)invalidInstructionException();
          (*pcVar7)();
        }
        if (local_114 <= uVar6) {
          FUN_10136b52(uVar6,local_114,&PTR_s_C__Users_runneradmin__cargo_regi_10152968);
                    /* WARNING: Does not return */
          pcVar7 = (code *)invalidInstructionException();
          (*pcVar7)();
        }
        if (*(uint *)(iVar4 + uVar6 * 4) != uVar5) goto LAB_100ce199;
      }
    } while (uVar8 != 0);
  }
  return;
}
