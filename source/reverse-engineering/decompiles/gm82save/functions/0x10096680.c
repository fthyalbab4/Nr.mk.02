// rea decompile_all
// name: FUN_10096680
// address: 0x10096680
// body: available
// range: 0x10096680-0x10096845 inclusive
// range: 0x10096850-0x10096992 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __fastcall
FUN_10096680(undefined8 *param_1,undefined4 param_2,undefined4 param_3,int *param_4,
            undefined8 *param_5,undefined4 *param_6,undefined8 *param_7)

{
  uint uVar1;
  code *pcVar2;
  undefined8 *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 in_stack_ffffffc0;
  char *pcVar8;
  undefined4 uVar9;
  undefined1 uStack_35;
  int iStack_34;
  undefined8 *local_30;
  undefined8 *local_2c;
  undefined *puStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined8 local_1c;
  undefined1 *puStack_14;

  local_1c = CONCAT44(local_1c._4_4_,param_5);
  local_2c = param_7;
  if (param_5 != param_7) {
    FUN_101369ea(0,&local_1c,&local_2c,0,in_stack_ffffffc0,
                 &PTR_s_C__Users_runneradmin__rustup_too_101455c4);
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  local_30 = param_1;
  uVar4 = (**(code **)(*(int *)((int)param_1 + 4) + 0xc))(*(undefined4 *)param_1,param_2,param_3);
  puVar3 = local_30;
  uVar5 = 1;
  if ((char)uVar4 != '\0') goto LAB_100967dc;
  iVar7 = *param_4;
  uVar1 = param_4[1];
  if ((*(byte *)((int)local_30 + 10) & 0x80) == 0) {
    uVar4 = (**(code **)(*(int *)((int)local_30 + 4) + 0xc))(*(undefined4 *)local_30," { ",3);
    uVar5 = 1;
    if ((char)uVar4 != '\0') goto LAB_100967dc;
    uVar4 = (**(code **)(*(int *)((int)puVar3 + 4) + 0xc))(*(undefined4 *)puVar3,iVar7,uVar1);
    if ((char)uVar4 == '\0') {
      uVar4 = (**(code **)(*(int *)((int)puVar3 + 4) + 0xc))(*(undefined4 *)puVar3,": ",2);
      uVar5 = 1;
      if ((char)uVar4 == '\0') {
        uVar4 = (**(code **)(param_6[1] + 0xc))(*param_6,local_30);
        uVar5 = uVar4;
      }
      goto LAB_100967dc;
    }
  }
  else {
    uVar4 = (**(code **)(*(int *)((int)local_30 + 4) + 0xc))(*(undefined4 *)local_30," {\n",3);
    uVar5 = 1;
    if ((char)uVar4 != '\0') goto LAB_100967dc;
    local_1c = *puVar3;
    puStack_14 = &uStack_35;
    uStack_20 = *(undefined4 *)((int)puVar3 + 0xc);
    uStack_35 = 1;
    uStack_24 = *(undefined4 *)(puVar3 + 1);
    puStack_28 = &DAT_101454b4;
    local_2c = &local_1c;
    uVar4 = FUN_10094960((undefined4 *)&local_1c,iVar7,uVar1);
    if ((((char)uVar4 == '\0') &&
        (uVar4 = FUN_10094960((undefined4 *)&local_1c,0x10155dea,2), (char)uVar4 == '\0')) &&
       (uVar4 = (**(code **)(param_6[1] + 0xc))(*param_6,&local_2c), (char)uVar4 == '\0')) {
      uVar4 = (**(code **)(puStack_28 + 0xc))(local_2c,",\n",2);
      uVar5 = uVar4;
      goto LAB_100967dc;
    }
  }
  uVar5 = 1;
LAB_100967dc:
  iVar7 = (int)param_5 + -1;
  iVar6 = 0;
  iStack_34 = iVar7;
  do {
    puVar3 = local_30;
    uVar1 = uVar5 & 1;
    uVar5 = 1;
    if (uVar1 == 0) {
      iVar7 = param_4[iVar6 * 2 + 2];
      uVar5 = param_4[iVar6 * 2 + 3];
      if ((*(byte *)((int)local_30 + 10) & 0x80) == 0) {
        uVar4 = (**(code **)(*(int *)((int)local_30 + 4) + 0xc))
                          (*(undefined4 *)local_30,&DAT_10155ce2,2);
        if ((char)uVar4 == '\0') {
          uVar4 = (**(code **)(*(int *)((int)puVar3 + 4) + 0xc))(*(undefined4 *)puVar3,iVar7,uVar5);
          if ((char)uVar4 == '\0') {
            uVar4 = (**(code **)(*(int *)((int)puVar3 + 4) + 0xc))(*(undefined4 *)puVar3,": ",2);
            iVar7 = iStack_34;
            uVar5 = 1;
            if ((char)uVar4 == '\0') {
              uVar4 = (**(code **)(param_6[iVar6 * 2 + 3] + 0xc))(param_6[iVar6 * 2 + 2],local_30);
              uVar5 = uVar4;
            }
          }
          else {
            uVar5 = 1;
            iVar7 = iStack_34;
          }
        }
        else {
LAB_100967e7:
          uVar5 = 1;
          iVar7 = iStack_34;
        }
      }
      else {
        local_1c = *local_30;
        puStack_14 = &uStack_35;
        uStack_20 = *(undefined4 *)((int)local_30 + 0xc);
        uStack_35 = 1;
        uStack_24 = *(undefined4 *)(local_30 + 1);
        local_2c = &local_1c;
        puStack_28 = &DAT_101454b4;
        uVar4 = FUN_10094960((undefined4 *)local_2c,iVar7,uVar5);
        if (((char)uVar4 != '\0') ||
           (uVar4 = FUN_10094960((undefined4 *)&local_1c,0x10155dea,2), (char)uVar4 != '\0'))
        goto LAB_100967e7;
        uVar4 = (**(code **)(param_6[iVar6 * 2 + 3] + 0xc))(param_6[iVar6 * 2 + 2],&local_2c);
        iVar7 = iStack_34;
        if ((char)uVar4 == '\0') {
          uVar4 = (**(code **)(puStack_28 + 0xc))(local_2c,",\n",2);
          uVar5 = uVar4;
        }
        else {
          uVar5 = 1;
        }
      }
    }
    iVar6 = iVar6 + 1;
    if (iVar7 == iVar6) {
      uVar9 = CONCAT31((int3)(uVar4 >> 8),1);
      if ((char)uVar5 == '\0') {
        if ((*(byte *)((int)local_30 + 10) & 0x80) == 0) {
          iVar7 = *(int *)((int)local_30 + 4);
          uVar9 = 2;
          pcVar8 = " }";
        }
        else {
          iVar7 = *(int *)((int)local_30 + 4);
          uVar9 = 1;
          pcVar8 = "}";
        }
        uVar9 = (**(code **)(iVar7 + 0xc))(*(undefined4 *)local_30,pcVar8,uVar9);
      }
      return uVar9;
    }
  } while( true );
}
