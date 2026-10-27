// rea decompile_all
// name: FUN_1002b1a0
// address: 0x1002b1a0
// body: available
// range: 0x1002b1a0-0x1002b365 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 * __fastcall
FUN_1002b1a0(uint param_1,char param_2,uint param_3,uint param_4,int *param_5,undefined4 param_6)

{
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  undefined1 *puVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  undefined1 *local_44;
  uint *local_40;
  uint *local_3c;
  int local_38;
  int local_34;
  int local_30;
  undefined4 local_2c;
  uint *local_28;
  uint *local_24;
  int local_20;
  uint local_1c;
  int local_18;
  undefined4 local_14;

  uVar7 = param_1 >> 1;
  local_48 = param_4;
  local_54 = param_1;
  if (uVar7 < param_4) {
LAB_1002b1bc:
    uVar7 = param_5[2];
    if (uVar7 == 0) {
      FUN_101369c0("chunk size must be non-zero",0x37,
                   &PTR_s_C__Users_runneradmin__cargo_regi_10143c24);
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    uVar2 = param_5[1];
    uVar8 = uVar2 - uVar2 % uVar7;
    if (uVar8 < uVar7) {
      return (undefined1 *)(uVar2 / uVar7);
    }
    if (2 < uVar7) {
      puVar5 = (undefined1 *)(*param_5 + 2);
      do {
        uVar1 = puVar5[-2];
        uVar8 = uVar8 - uVar7;
        puVar5[-2] = *puVar5;
        *puVar5 = uVar1;
        puVar5 = puVar5 + uVar7;
      } while (uVar7 <= uVar8);
      return puVar5;
    }
    FUN_10136b52(2,uVar7,&PTR_s_src_save_rs_1014027c);
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  if (param_2 == '\0') {
    if (param_3 == 0) goto LAB_1002b1bc;
    local_4c = param_3 >> 1;
  }
  else {
    piVar6 = FUN_100be180();
    if (piVar6 == (int *)0x0) goto LAB_1002b344;
    if (*piVar6 == 0) {
      piVar6 = FUN_100c0800();
    }
    else {
      piVar6 = (int *)(*piVar6 + 0x8c);
    }
    local_4c = param_3 >> 1;
    if (param_3 >> 1 <= *(uint *)(*piVar6 + 0x104)) {
      local_4c = *(uint *)(*piVar6 + 0x104);
    }
  }
  local_30 = param_5[2];
  local_1c = uVar7 * local_30;
  local_34 = param_5[1] - local_1c;
  local_50 = uVar7;
  if ((uint)param_5[1] < local_1c) {
    FUN_101369c0("mid > lenC:\\Users\\runneradmin\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\zlib-rs-0.6.3\\src\\deflate\\window.rs"
                 ,0x13,&PTR_s_C__Users_runneradmin__cargo_regi_10143c14);
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  local_20 = *param_5;
  local_3c = &local_4c;
  local_40 = &local_50;
  local_38 = local_20 + local_1c;
  local_2c = param_6;
  local_14 = param_6;
  local_44 = (undefined1 *)&local_54;
  local_28 = local_40;
  local_24 = local_3c;
  local_18 = local_30;
  piVar6 = FUN_100be180();
  if (piVar6 != (int *)0x0) {
    iVar9 = *piVar6;
    if (iVar9 == 0) {
      piVar6 = FUN_100c0800();
      iVar3 = *piVar6;
      piVar6 = FUN_100be180();
      if (piVar6 == (int *)0x0) goto LAB_1002b344;
      iVar9 = *piVar6;
      if (iVar9 == 0) {
        puVar5 = (undefined1 *)FUN_1012fb30((uint *)(iVar3 + 0x40),(undefined8 *)&local_44);
        return puVar5;
      }
      if (*(int *)(iVar9 + 0x8c) != iVar3) {
        puVar5 = (undefined1 *)FUN_101320c0((uint *)(iVar3 + 0x40),iVar9,(undefined8 *)&local_44);
        return puVar5;
      }
    }
    puVar5 = (undefined1 *)FUN_100374e0((undefined8 *)&local_44,iVar9);
    return puVar5;
  }
LAB_1002b344:
  FUN_1013bdf0(&PTR_s_C__Users_runneradmin__rustup_too_10159648);
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}
