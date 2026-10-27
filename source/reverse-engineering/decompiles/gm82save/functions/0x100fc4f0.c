// rea decompile_all
// name: FUN_100fc4f0
// address: 0x100fc4f0
// body: available
// range: 0x100fc4f0-0x100fc64a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_100fc4f0(undefined8 *param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  undefined1 uVar8;
  uint uVar9;
  int iVar10;
  uint local_28;
  uint *local_24;
  code *local_20;
  undefined8 local_1c;
  undefined4 local_14;

  uVar6 = FUN_100f0c40(param_2);
  iVar10 = *param_2;
  uVar1 = *(uint *)(iVar10 + 0x50);
  uVar7 = FUN_100f0c40(param_2);
  uVar9 = 1;
  if ((0x7f < uVar7) && (uVar9 = 2, 0x7ff < uVar7)) {
    uVar9 = 4 - (uVar7 < 0x10000);
  }
  if (!CARRY4(uVar9,uVar1)) {
    iVar2 = *(int *)(iVar10 + 0x58);
    if (iVar2 != -1) {
      iVar3 = *(int *)(iVar10 + 0x54);
      uVar7 = FUN_100f0c40(param_2);
      local_1c = *(undefined8 *)(iVar10 + 0x50);
      local_14 = *(undefined4 *)(iVar10 + 0x58);
      FUN_100f1250(param_2);
      uVar5 = 0;
      uVar8 = 0;
      switch(uVar6) {
      case 0x44:
        uVar5 = 1;
        uVar8 = 0;
        break;
      default:
        local_24 = &local_28;
        local_20 = FUN_1009d530;
        local_28 = uVar6;
        FUN_101369c0(&DAT_10154344,&local_24,&PTR_s_C__Users_runneradmin__cargo_regi_1015436c);
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      case 0x53:
        uVar5 = 1;
        uVar8 = 1;
        break;
      case 0x57:
        uVar8 = 2;
        uVar5 = 1;
        break;
      case 100:
        break;
      case 0x73:
        uVar8 = 1;
        uVar5 = 0;
        break;
      case 0x77:
        uVar8 = 2;
        uVar5 = 0;
      }
      iVar10 = 1;
      if (uVar7 != 10) {
        iVar10 = iVar2 + 1;
      }
      *param_1 = local_1c;
      *(undefined4 *)(param_1 + 1) = local_14;
      *(uint *)((int)param_1 + 0xc) = uVar9 + uVar1;
      *(uint *)(param_1 + 2) = iVar3 + (uint)(uVar7 == 10);
      *(int *)((int)param_1 + 0x14) = iVar10;
      *(undefined1 *)(param_1 + 3) = uVar8;
      *(undefined1 *)((int)param_1 + 0x19) = uVar5;
      return;
    }
    FUN_10136b20(&PTR_s_C__Users_runneradmin__cargo_regi_10153fa0);
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  FUN_10136b20(&PTR_s_C__Users_runneradmin__cargo_regi_10153fb0);
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}
