// rea decompile_all
// name: FUN_1013b920
// address: 0x1013b920
// body: available
// range: 0x1013b920-0x1013b9f3 inclusive
// range: 0x1013ba00-0x1013bb02 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall
FUN_1013b920(undefined4 *param_1,int *param_2,undefined *param_3,uint *param_4,uint *param_5,
            undefined4 *param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  uint local_60;
  uint *local_5c;
  uint *local_58;
  code *local_54;
  uint **local_50;
  undefined1 *local_4c;
  uint local_48;
  void *local_44;
  uint *local_40;
  undefined4 *local_3c;
  uint local_38;
  uint *local_34;
  uint *local_30;
  undefined8 local_2c;
  undefined8 local_24;
  undefined8 local_1c;
  int local_14;

  if (*param_2 == 0) {
    local_2c = *(undefined8 *)param_2;
    uVar1 = *(undefined8 *)(param_2 + 2);
    uVar2 = *(undefined8 *)(param_2 + 4);
    local_14 = param_2[6];
    local_24._0_4_ = (int)uVar1;
    iVar4 = (int)local_24;
    local_24._4_4_ = (uint *)((ulonglong)uVar1 >> 0x20);
    local_30 = local_24._4_4_;
    local_1c._4_4_ = (uint *)((ulonglong)uVar2 >> 0x20);
    local_1c._0_4_ = (uint)uVar2;
    local_24 = uVar1;
    local_1c = uVar2;
    if (local_1c._4_4_ <= local_24._4_4_) {
      local_34 = local_1c._4_4_;
      local_38 = (int)local_1c._4_4_ + 1U;
      if ((int)local_1c._4_4_ + 1U < (uint)local_1c) {
        local_38 = (uint)local_1c;
      }
      local_3c = (undefined4 *)*param_6;
      local_40 = (uint *)param_6[1];
      local_44 = (void *)param_6[2];
      local_48 = param_6[3];
      uVar5 = (uint)local_1c;
      uVar6 = (uint)local_1c;
      do {
        uVar6 = uVar6 + 1;
        if (param_5 < local_30) {
          if (-0x41 < *(char *)(iVar4 + (int)param_5)) goto LAB_1013baeb;
        }
        else if (param_5 == local_30) goto LAB_1013baeb;
        uVar2 = local_1c;
        if (uVar6 == 0) goto LAB_1013badd;
        bVar7 = uVar5 == local_38;
        uVar5 = uVar5 + 1;
        local_5c = local_34;
        local_60 = uVar5;
        if (bVar7) goto LAB_1013ba9e;
        local_1c = CONCAT44(local_1c._4_4_,uVar5);
        FUN_100cf820(&local_58,local_3c,local_40,(int *)&local_2c,local_44,local_48);
        param_5 = (uint *)local_50;
        param_4 = (uint *)local_50;
        param_3 = local_54;
        if ((char)local_58 == '\0') {
          *param_1 = 0;
          return;
        }
      } while( true );
    }
    if (param_5 < local_24._4_4_) {
      if (*(char *)((int)local_24 + (int)param_5) < -0x40) {
LAB_1013ba90:
        if ((uint)local_1c != 0xffffffff) {
          local_60 = (uint)local_1c + 1;
          local_5c = local_1c._4_4_;
LAB_1013ba9e:
          local_58 = &local_60;
          local_50 = &local_30;
          local_54 = FUN_100c1070;
          local_4c = &LAB_10096fc0;
          FUN_101369c0(&DAT_10151723,&local_58,&PTR_s_C__Users_runneradmin__cargo_regi_10151750);
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
LAB_1013badd:
        local_1c = uVar2;
        FUN_10136b20(&PTR_s_C__Users_runneradmin__cargo_regi_10151a68);
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
    }
    else if (param_5 != local_24._4_4_) goto LAB_1013ba90;
LAB_1013baeb:
    *param_1 = 1;
    param_1[1] = param_3;
    param_1[2] = param_4;
    return;
  }
  if (param_5 < (uint *)param_2[3]) {
    if (-0x41 < *(char *)(param_2[2] + (int)param_5)) {
LAB_1013ba71:
      *param_1 = 1;
      goto LAB_1013ba77;
    }
  }
  else if (param_5 == (uint *)param_2[3]) goto LAB_1013ba71;
  *param_1 = 0;
LAB_1013ba77:
  param_1[1] = param_3;
  param_1[2] = param_4;
  return;
}
