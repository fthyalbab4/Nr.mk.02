// rea decompile_all
// name: FUN_10091d50
// address: 0x10091d50
// body: available
// range: 0x10091d50-0x10091f78 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_10091d50(undefined8 *param_1,int param_2)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined1 *_Dst;
  int *piVar3;
  int iVar4;
  uint *local_5c;
  code *local_58;
  uint *local_54;
  undefined1 *local_50;
  undefined4 local_4c;
  uint local_48;
  uint local_44;
  SIZE_T local_40;
  void *local_3c;
  int *local_38;
  int local_34;
  uint local_30;
  int *local_2c;
  int local_28;
  int local_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;

  local_2c = *(int **)(param_2 + 0x4c);
  iVar4 = *(int *)(*(int *)(*local_2c + 0x10) + 0x58);
  if (*(int *)(iVar4 + 0x10) == 1) {
    local_4c = 1;
    iVar4 = *(int *)(iVar4 + 0x14) + 1;
    local_34 = -1;
    if (iVar4 != 0) {
      local_34 = iVar4;
    }
  }
  else {
    local_4c = 0;
  }
  local_24 = param_2 + 0x10;
  local_28 = param_2;
  FUN_100390c0((int *)&local_5c,&local_2c,(int *)(param_2 + 0x30));
  if (local_5c == (uint *)0xffffffff) {
LAB_10091f50:
    local_5c = &local_48;
    local_58 = (code *)&LAB_100dbf30;
    FUN_101369c0(&DAT_1013f2bc,&local_5c,&PTR_s_C__Users_runneradmin__cargo_regi_1013f314);
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if (local_5c == (uint *)0x1) {
    if ((local_58 < local_54) ||
       (*(char *)(param_2 + 0x28) == '\0' || (uint *)*(uint *)(param_2 + 0x2c) != local_54)) {
      local_44 = *(uint *)(param_2 + 0x44);
      local_30 = *(uint *)(param_2 + 0x3c);
      local_48 = (uint)local_54;
      if ((local_44 + 1 < local_54) || (local_30 < local_44)) {
        local_5c = &local_48;
        local_54 = &local_30;
        local_58 = FUN_100c1070;
        local_50 = &LAB_10096fc0;
        FUN_101369c0(&DAT_10151723,&local_5c,&PTR_s_C__Users_runneradmin__cargo_regi_10151750);
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      *(uint **)(param_2 + 0x40) = local_54;
      *(undefined4 *)(param_2 + 0x28) = 1;
      *(uint **)(param_2 + 0x2c) = local_54;
    }
    else {
      FUN_1012d1a0((int *)&local_5c,param_2 + 0x28,(uint)local_58,(uint)local_54,&local_2c);
      if (local_5c == (uint *)0xffffffff) goto LAB_10091f50;
      if (local_5c == (uint *)0x1) {
        FUN_10002530(param_2 + 0x30,(uint)local_54,*(uint *)(param_2 + 0x44));
        *(undefined4 *)(param_2 + 0x28) = 1;
        *(uint **)(param_2 + 0x2c) = local_54;
      }
    }
  }
  if (*(int *)(param_2 + 0x10) == 0) {
    *(undefined4 *)param_1 = 0xffffffff;
  }
  else {
    piVar3 = *(int **)(param_2 + 0x24);
    LOCK();
    iVar4 = *piVar3;
    *piVar3 = *piVar3 + 1;
    UNLOCK();
    if (*piVar3 == 0 || SCARRY4(iVar4,1) != *piVar3 < 0) {
LAB_10091f4a:
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    iVar4 = *(int *)(param_2 + 0x20);
    local_20 = *(undefined4 *)(param_2 + 0x10);
    uStack_1c = *(undefined4 *)(param_2 + 0x14);
    if (iVar4 == 0) {
      _Dst = &DAT_00000004;
    }
    else {
      local_3c = *(void **)(param_2 + 0x1c);
      local_40 = iVar4 * 4;
      uStack_18 = 0;
      uStack_14 = 0;
      local_38 = piVar3;
      _Dst = FUN_10107380(0,local_40);
      if (_Dst == (undefined1 *)0x0) {
        FUN_101366bc(4);
        goto LAB_10091f4a;
      }
      memcpy(_Dst,local_3c,iVar4 * 4);
      piVar3 = local_38;
    }
    *param_1 = CONCAT44(uStack_1c,local_20);
    *(int *)(param_1 + 1) = iVar4;
    *(undefined1 **)((int)param_1 + 0xc) = _Dst;
    *(int *)(param_1 + 2) = iVar4;
    *(int **)((int)param_1 + 0x14) = piVar3;
    *(undefined4 *)(param_1 + 3) = local_4c;
    *(int *)((int)param_1 + 0x1c) = local_34;
    uVar1 = *(undefined4 *)(param_2 + 0x54);
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x50);
    *(undefined4 *)((int)param_1 + 0x24) = uVar1;
  }
  return;
}
