// rea decompile_all
// name: FUN_100cf1b0
// address: 0x100cf1b0
// body: available
// range: 0x100cf1b0-0x100cf2ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_100cf1b0(uint *param_1,uint param_2)

{
  int iVar1;
  code *pcVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined *local_18;
  undefined1 *local_14;

  if (-1 < (int)param_2) {
    param_1[6] = 0;
    uVar6 = param_1[2];
    uVar4 = param_2 - uVar6;
    uVar5 = param_2;
    if (uVar6 <= param_2 && uVar4 != 0) {
      if (*param_1 - uVar6 < uVar4) {
        FUN_101359e0(param_1,uVar6,uVar4,&DAT_00000004,4);
        uVar6 = param_1[2];
        uVar5 = param_1[1];
        puVar3 = (undefined4 *)(uVar5 + uVar6 * 4);
      }
      else {
        uVar5 = param_1[1];
        puVar3 = (undefined4 *)(uVar5 + uVar6 * 4);
      }
      if (1 < uVar4) {
        memset(puVar3,0,uVar4 * 4 - 4);
        iVar1 = uVar6 + uVar4;
        uVar6 = (uVar6 - 1) + uVar4;
        puVar3 = (undefined4 *)((uVar5 - 4) + iVar1 * 4);
      }
      uVar5 = uVar6 + 1;
      *puVar3 = 0;
    }
    param_1[2] = uVar5;
    uVar6 = param_1[5];
    uVar5 = param_2 - uVar6;
    if (uVar6 <= param_2 && uVar5 != 0) {
      if (param_1[3] - uVar6 < uVar5) {
        FUN_101359e0(param_1 + 3,uVar6,uVar5,&DAT_00000004,4);
        uVar6 = param_1[5];
        uVar4 = param_1[4];
        puVar3 = (undefined4 *)(uVar4 + uVar6 * 4);
      }
      else {
        uVar4 = param_1[4];
        puVar3 = (undefined4 *)(uVar4 + uVar6 * 4);
      }
      if (1 < uVar5) {
        memset(puVar3,0,uVar5 * 4 - 4);
        iVar1 = uVar6 + uVar5;
        uVar6 = (uVar6 - 1) + uVar5;
        puVar3 = (undefined4 *)((uVar4 - 4) + iVar1 * 4);
      }
      param_2 = uVar6 + 1;
      *puVar3 = 0;
    }
    param_1[5] = param_2;
    return;
  }
  local_18 = &DAT_10151e64;
  local_14 = &LAB_100908e0;
  FUN_101369c0(&DAT_10152920,&local_18,&PTR_s_C__Users_runneradmin__cargo_regi_10152948);
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}
