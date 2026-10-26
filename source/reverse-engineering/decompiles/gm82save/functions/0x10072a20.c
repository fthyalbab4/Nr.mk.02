// rea decompile_all
// name: FUN_10072a20
// address: 0x10072a20
// body: available
// range: 0x10072a20-0x10072de5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10072a20(undefined8 *param_1,uint *param_2,undefined1 param_3)

{
  code *pcVar1;
  uint uVar2;
  LPVOID _Dst;
  int *piVar3;
  uint uVar4;
  int iVar5;
  uint extraout_EDX;
  byte *_Src;
  undefined1 local_b7;
  undefined1 local_b6;
  undefined1 local_b5;
  undefined8 *local_b4;
  uint local_b0;
  int local_ac;
  uint local_a8;
  int local_a4;
  uint local_a0;
  undefined1 *local_9c;
  undefined1 *local_98;
  undefined1 *local_94;
  uint **local_90;
  int *local_8c;
  uint local_88;
  int local_84;
  uint local_80;
  int local_7c;
  uint local_78;
  int local_74;
  uint local_70;
  int local_6c;
  uint local_68;
  int local_64;
  uint local_60;
  int local_5c;
  uint local_58;
  int local_54;
  uint local_50;
  int local_4c;
  uint local_48;
  int local_44;
  uint local_40;
  uint *local_3c;
  undefined1 *local_38;
  char local_34;
  undefined7 uStack_33;
  undefined8 local_2c;
  undefined8 local_24;
  undefined8 local_1c;
  undefined4 local_14;

  local_b6 = param_3;
  local_b4 = param_1;
  FUN_10111020(param_2,&DAT_1014263f,5);
  FUN_10111020(param_2,&DAT_101402ba,7);
  _Src = (byte *)param_2[1];
  piVar3 = (int *)param_2[2];
  FUN_101126e0((char *)&local_ac,_Src,piVar3);
  uVar2 = _DAT_0077f4d8;
  if ((char)local_ac == -1) {
    local_9c = &local_b5;
    local_b7 = 0;
    local_94 = &local_b7;
    local_8c = &local_6c;
    local_ac = _DAT_0077f4c4;
    if (_DAT_0077f4c4 == 0) {
      local_ac = 4;
    }
    local_a4 = _DAT_0077f4cc;
    if (_DAT_0077f4cc == 0) {
      local_a4 = 4;
    }
    local_50 = _DAT_0077f4d8;
    local_80 = _DAT_0077f4d8;
    local_68 = _DAT_0077f4d8;
    local_74 = 8;
    if (_DAT_0077f4d0 != 0) {
      local_74 = _DAT_0077f4d0;
    }
    local_90 = &local_3c;
    local_48 = _DAT_0077f4d8;
    local_78 = _DAT_0077f4d8;
    local_60 = _DAT_0077f4d8;
    local_88 = _DAT_0077f4d8;
    local_a8 = _DAT_0077f4d8;
    local_38 = &local_b6;
    local_40 = _DAT_0077f4d8;
    local_70 = _DAT_0077f4d8;
    local_a0 = _DAT_0077f4d8;
    local_58 = _DAT_0077f4d8;
    local_98 = local_9c;
    local_84 = local_ac;
    local_7c = local_a4;
    local_6c = local_ac;
    local_64 = local_a4;
    local_5c = local_74;
    local_54 = local_ac;
    local_4c = local_a4;
    local_44 = local_74;
    local_3c = param_2;
    piVar3 = FUN_100be180();
    if (piVar3 == (int *)0x0) {
LAB_10072dda:
      FUN_1013bdf0(&PTR_s_C__Users_runneradmin__rustup_too_10159648);
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    if (*piVar3 == 0) {
      piVar3 = FUN_100c0800();
    }
    else {
      piVar3 = (int *)(*piVar3 + 0x8c);
    }
    uVar4 = (uint)(uVar2 == 0xffffffff);
    if (uVar4 < *(uint *)(*piVar3 + 0x104)) {
      uVar4 = *(uint *)(*piVar3 + 0x104);
    }
    FUN_1001e180(&local_34,uVar2,'\0',uVar4,1,&local_6c,(undefined8 *)&local_9c);
    if (local_34 == -1) {
      iVar5 = FUN_10110f10((byte *)param_2[1],param_2[2]);
      if (iVar5 != 0) {
        FUN_10110e70((int)param_2,extraout_EDX);
      }
      FUN_10111020(param_2,&DAT_1014028c,0xb);
      _Src = (byte *)param_2[1];
      piVar3 = (int *)param_2[2];
      FUN_101126e0((char *)&local_ac,_Src,piVar3);
      uVar2 = _DAT_0077f1c0;
      if ((char)local_ac != -1) goto LAB_10072a7a;
      local_b7 = 0;
      local_ac = _DAT_0077f1ac;
      if (_DAT_0077f1ac == 0) {
        local_ac = 4;
      }
      local_a4 = _DAT_0077f1b4;
      if (_DAT_0077f1b4 == 0) {
        local_a4 = 4;
      }
      local_50 = _DAT_0077f1c0;
      local_80 = _DAT_0077f1c0;
      local_68 = _DAT_0077f1c0;
      local_74 = 8;
      if (_DAT_0077f1b8 != 0) {
        local_74 = _DAT_0077f1b8;
      }
      local_38 = &local_b6;
      local_48 = _DAT_0077f1c0;
      local_78 = _DAT_0077f1c0;
      local_60 = _DAT_0077f1c0;
      local_40 = _DAT_0077f1c0;
      local_9c = &local_b5;
      local_70 = _DAT_0077f1c0;
      local_58 = _DAT_0077f1c0;
      local_94 = &local_b7;
      local_90 = &local_3c;
      local_8c = &local_6c;
      local_88 = _DAT_0077f1c0;
      local_a8 = _DAT_0077f1c0;
      local_a0 = _DAT_0077f1c0;
      local_98 = local_9c;
      local_84 = local_ac;
      local_7c = local_a4;
      local_6c = local_ac;
      local_64 = local_a4;
      local_5c = local_74;
      local_54 = local_ac;
      local_4c = local_a4;
      local_44 = local_74;
      local_3c = param_2;
      piVar3 = FUN_100be180();
      if (piVar3 == (int *)0x0) goto LAB_10072dda;
      if (*piVar3 == 0) {
        piVar3 = FUN_100c0800();
      }
      else {
        piVar3 = (int *)(*piVar3 + 0x8c);
      }
      uVar4 = (uint)(uVar2 == 0xffffffff);
      if (uVar4 < *(uint *)(*piVar3 + 0x104)) {
        uVar4 = *(uint *)(*piVar3 + 0x104);
      }
      FUN_1001da70(&local_34,uVar2,'\0',uVar4,1,&local_6c,(undefined8 *)&local_9c);
      if (local_34 == -1) {
        FUN_1011b820((int)param_2);
        FUN_1011b820((int)param_2);
        *(undefined1 *)local_b4 = 0xff;
        return;
      }
    }
    local_b4[2] = local_24;
    *(undefined4 *)(local_b4 + 4) = local_14;
    local_b4[3] = local_1c;
    *local_b4 = CONCAT71(uStack_33,local_34);
    local_b4[1] = local_2c;
  }
  else {
LAB_10072a7a:
    iVar5 = local_ac;
    if (piVar3 == (int *)0x0) {
      _Dst = (LPVOID)0x1;
      local_b0 = local_a8;
    }
    else {
      local_b0 = local_a8;
      _Dst = FUN_10107380(0,(SIZE_T)piVar3);
      if (_Dst == (LPVOID)0x0) {
        FUN_101366bc(1);
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      memcpy(_Dst,_Src,(size_t)piVar3);
    }
    *(undefined1 *)local_b4 = 2;
    *(int *)((int)local_b4 + 4) = iVar5;
    *(uint *)(local_b4 + 1) = local_b0;
    *(int **)((int)local_b4 + 0xc) = piVar3;
    *(LPVOID *)(local_b4 + 2) = _Dst;
    *(int **)((int)local_b4 + 0x14) = piVar3;
    *(undefined1 *)(local_b4 + 3) = 0;
  }
  return;
}
