// rea decompile_all
// name: FUN_100d4970
// address: 0x100d4970
// body: available
// range: 0x100d4970-0x100d4caf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_100d4970(uint *param_1,int *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  code *pcVar7;
  uint uVar8;
  int iVar9;
  uint in_stack_ffffff58;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 local_60;
  uint uStack_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  uint uStack_18;

  puVar1 = (undefined4 *)*param_2;
  if (puVar1 == (undefined4 *)param_2[1]) {
    *param_1 = 0xfffffffd;
  }
  else {
    *param_2 = (int)(puVar1 + 1);
    uVar2 = param_2[2];
    if (*(int *)(uVar2 + 0x20) != 0) {
      FUN_10136bb0(&PTR_s_C__Users_runneradmin__cargo_regi_10152424);
                    /* WARNING: Does not return */
      pcVar7 = (code *)invalidInstructionException();
      (*pcVar7)();
    }
    piVar3 = (int *)*puVar1;
    *(undefined4 *)(uVar2 + 0x20) = 0xffffffff;
    if (*(int *)(uVar2 + 0x24) != 0) {
      FUN_101369c0(&DAT_10152988,0x41,&PTR_s_C__Users_runneradmin__cargo_regi_101529a8);
                    /* WARNING: Does not return */
      pcVar7 = (code *)invalidInstructionException();
      (*pcVar7)();
    }
    iVar9 = *(int *)(uVar2 + 0x48);
    *(undefined4 *)(uVar2 + 0x24) = 1;
    *(int *)(uVar2 + 0x28) = iVar9;
    if (iVar9 == *(int *)(uVar2 + 0x40)) {
      FUN_10135e40((uint *)(uVar2 + 0x40));
    }
    *(undefined4 *)(*(int *)(uVar2 + 0x44) + iVar9 * 4) = 0;
    *(int *)(uVar2 + 0x48) = iVar9 + 1;
    *(int *)(uVar2 + 0x20) = *(int *)(uVar2 + 0x20) + 1;
    FUN_100d52a0((int *)&local_58,uVar2,0,(void *)0x0,in_stack_ffffff58,piVar3);
    uVar8 = local_50;
    if (local_58 == 0xfffffffe) {
      if (*(int *)(uVar2 + 0x20) != 0) {
        FUN_10136bb0(&PTR_s_C__Users_runneradmin__cargo_regi_10152554);
                    /* WARNING: Does not return */
        pcVar7 = (code *)invalidInstructionException();
        (*pcVar7)();
      }
      *(undefined4 *)(uVar2 + 0x20) = 0xffffffff;
      if (*(char *)(uVar2 + 0x24) == '\0') {
LAB_100d4c66:
        FUN_10136c10("must call \'start_pattern\' first",0x1f,
                     &PTR_s_C__Users_runneradmin__cargo_regi_101529f8);
                    /* WARNING: Does not return */
        pcVar7 = (code *)invalidInstructionException();
        (*pcVar7)();
      }
      uVar4 = *(uint *)(uVar2 + 0x3c);
      uVar5 = *(undefined4 *)(uVar2 + 0x28);
      if (uVar4 == *(uint *)(uVar2 + 0x34)) {
        FUN_10135f30((uint *)(uVar2 + 0x34));
      }
      iVar9 = *(int *)(uVar2 + 0x38);
      *(undefined4 *)(iVar9 + uVar4 * 0x10) = 9;
      *(undefined4 *)(iVar9 + 4 + uVar4 * 0x10) = uVar5;
      *(uint *)(uVar2 + 0x3c) = uVar4 + 1;
      if ((*(int *)(uVar2 + 0x2c) == 1) &&
         (*(uint *)(uVar2 + 0x30) < (uVar4 + 1) * 0x10 + *(int *)(uVar2 + 0x58))) {
        *(int *)(uVar2 + 0x20) = *(int *)(uVar2 + 0x20) + 1;
        local_58 = 0x26;
        local_54 = *(uint *)(uVar2 + 0x30);
        local_4c = uVar4;
      }
      else {
        piVar3 = (int *)(uVar2 + 0x20);
        *piVar3 = *piVar3 + 1;
        if (*piVar3 != 0) {
          FUN_10136bb0(&PTR_s_C__Users_runneradmin__cargo_regi_10152514);
                    /* WARNING: Does not return */
          pcVar7 = (code *)invalidInstructionException();
          (*pcVar7)();
        }
        *(undefined4 *)(uVar2 + 0x20) = 0xffffffff;
        FUN_100d4cf0(&local_58,uVar2 + 0x24,uVar8);
        iVar9 = *(int *)(uVar2 + 0x20) + 1;
        *(int *)(uVar2 + 0x20) = iVar9;
        if (local_54 == 0xfffffffe) {
          if (iVar9 != 0) {
            FUN_10136bb0(&PTR_s_C__Users_runneradmin__cargo_regi_10152434);
                    /* WARNING: Does not return */
            pcVar7 = (code *)invalidInstructionException();
            (*pcVar7)();
          }
          *(undefined4 *)(uVar2 + 0x20) = 0xffffffff;
          if (*(char *)(uVar2 + 0x24) == '\0') goto LAB_100d4c66;
          uVar6 = *(uint *)(uVar2 + 0x28);
          if (*(uint *)(uVar2 + 0x48) <= uVar6) {
            FUN_10136b52(uVar6,*(uint *)(uVar2 + 0x48),
                         &PTR_s_C__Users_runneradmin__cargo_regi_101529b8);
                    /* WARNING: Does not return */
            pcVar7 = (code *)invalidInstructionException();
            (*pcVar7)();
          }
          *(uint *)(*(int *)(uVar2 + 0x44) + uVar6 * 4) = uVar8;
          *(undefined4 *)(uVar2 + 0x24) = 0;
          *(int *)(uVar2 + 0x20) = *(int *)(uVar2 + 0x20) + 1;
          local_58 = 0xfffffffe;
          local_54 = uVar8;
          local_4c = uVar4;
        }
        else {
          uStack_84 = uStack_40;
          local_80 = local_3c;
          uStack_7c = uStack_38;
          local_78 = local_34;
          uStack_8c = uStack_48;
          local_88 = local_44;
          uStack_5c = uStack_18;
          uStack_74 = uStack_30;
          local_70 = local_2c;
          uStack_6c = uStack_28;
          local_68 = local_24;
          uStack_64 = uStack_20;
          local_60 = local_1c;
          local_58 = local_54;
          local_54 = local_50;
        }
      }
    }
    else {
      local_70 = local_2c;
      uStack_6c = uStack_28;
      local_78 = local_34;
      uStack_74 = uStack_30;
      local_60 = local_1c;
      local_68 = local_24;
      uStack_64 = uStack_20;
      local_80 = local_3c;
      uStack_7c = uStack_38;
      uStack_8c = uStack_48;
      local_88 = local_44;
      uStack_84 = uStack_40;
      local_4c = local_50;
    }
    *param_1 = local_58;
    param_1[1] = local_54;
    param_1[2] = local_4c;
    *(ulonglong *)(param_1 + 5) = CONCAT44(local_80,uStack_84);
    *(ulonglong *)(param_1 + 7) = CONCAT44(local_78,uStack_7c);
    *(ulonglong *)(param_1 + 3) = CONCAT44(local_88,uStack_8c);
    param_1[0xf] = uStack_5c;
    *(ulonglong *)(param_1 + 9) = CONCAT44(local_70,uStack_74);
    *(ulonglong *)(param_1 + 0xb) = CONCAT44(local_68,uStack_6c);
    *(ulonglong *)(param_1 + 0xd) = CONCAT44(local_60,uStack_64);
  }
  return;
}
