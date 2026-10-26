// rea decompile_all
// name: FUN_10002ad0
// address: 0x10002ad0
// body: available
// range: 0x10002ad0-0x10002c47 inclusive
// range: 0x10002c50-0x10002c72 inclusive
// range: 0x10002c80-0x10002ce7 inclusive
// range: 0x10002cf0-0x10002d7e inclusive
// range: 0x10002d80-0x10002df5 inclusive
// range: 0x10002e00-0x10003032 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall
FUN_10002ad0(undefined8 *param_1,int param_2,SIZE_T param_3,void *param_4,uint param_5,void *param_6
            ,uint param_7)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  SIZE_T SVar6;
  SIZE_T SVar7;
  SIZE_T local_b4;
  LPVOID local_b0;
  uint local_a8;
  SIZE_T local_a0;
  SIZE_T local_9c;
  LPVOID pvStack_98;
  uint local_94;
  uint local_90;
  uint local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  uint local_78;
  int local_74;
  uint local_70;
  undefined8 *local_6c;
  uint local_68;
  int local_64;
  SIZE_T local_60;
  SIZE_T local_5c;
  int local_58 [2];
  uint local_50;
  uint local_4c;
  uint local_48;
  int local_40;
  SIZE_T local_3c;
  uint local_34;
  int local_28;
  uint local_24;
  int local_20;
  uint local_1c;

  local_b0 = (LPVOID)0x1;
  local_74 = param_2;
  local_6c = param_1;
  if (param_7 < param_5) {
    local_9c = 0;
  }
  else {
    if ((int)param_3 < 0) {
      FUN_101367b0();
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    local_9c = 0;
    if ((param_3 != 0) &&
       (local_b0 = FUN_10107380(0,param_3), local_9c = param_3, local_b0 == (LPVOID)0x0)) {
      FUN_101366bc(1);
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
  }
  pvStack_98 = local_b0;
  local_94 = 0;
  FUN_100969a0(local_58,local_74,param_3,param_4,param_5);
  local_a0 = 0;
  local_8c = 0;
  if ((char)local_58[0] == '\0') goto LAB_10002cf0;
LAB_10002b46:
  local_a8 = local_34;
  local_88 = local_1c - 1;
  local_80 = local_20;
  local_84 = local_28;
  SVar7 = local_3c;
  if (local_34 == 0xffffffff) {
    uVar2 = local_88 + local_3c;
    if (uVar2 < local_24) {
      local_70 = local_50;
      local_78 = local_4c;
      uVar3 = local_1c;
      if (local_1c < local_48) {
        uVar3 = local_48;
      }
      local_90 = local_48 - 1;
      local_7c = local_40;
LAB_10002d94:
      uVar5 = local_50;
      if ((*(byte *)(local_28 + uVar2) & 0x20) != 0) {
        uVar5 = local_4c;
      }
      if ((uVar5 >> (*(byte *)(local_28 + uVar2) & 0x1f) & 1) == 0) {
        SVar7 = SVar7 + local_1c;
      }
      else {
        uVar2 = local_48;
        do {
          uVar5 = uVar2;
          uVar2 = local_48;
          if (uVar3 == uVar5) goto LAB_10002e10;
          uVar4 = local_48;
          if (local_24 <= uVar5 + SVar7) goto LAB_10002fbb;
          uVar2 = uVar5 + 1;
        } while (*(char *)(local_20 + uVar5) == *(char *)(local_28 + SVar7 + uVar5));
        SVar7 = (SVar7 - local_48) + 1 + uVar5;
      }
      goto LAB_10002d86;
    }
  }
  else {
    uVar2 = local_88 + local_3c;
    if (uVar2 < local_24) {
      local_70 = local_4c;
      local_90 = local_48;
      local_68 = local_1c - local_40;
      local_7c = local_40;
LAB_10002bd0:
      do {
        uVar3 = local_50;
        if ((*(byte *)(local_28 + uVar2) & 0x20) != 0) {
          uVar3 = local_4c;
        }
        if ((uVar3 >> (*(byte *)(local_28 + uVar2) & 0x1f) & 1) == 0) {
          SVar7 = SVar7 + local_1c;
        }
        else {
          uVar4 = local_48;
          if (local_48 < local_a8) {
            uVar4 = local_a8;
          }
          uVar2 = uVar4;
          uVar3 = local_1c;
          if (local_1c < uVar4) {
            uVar3 = uVar4;
          }
          do {
            uVar5 = uVar2;
            uVar2 = local_48;
            local_78 = uVar4;
            if (uVar3 == uVar5) goto LAB_10002c90;
            if (local_24 <= uVar5 + SVar7) {
LAB_10002fbb:
              uVar2 = uVar4 + SVar7;
              if (uVar4 + SVar7 < local_24) {
                uVar2 = local_24;
              }
              FUN_10136b52(uVar2,local_24,&PTR_s_C__Users_runneradmin__rustup_too_101567c8);
                    /* WARNING: Does not return */
              pcVar1 = (code *)invalidInstructionException();
              (*pcVar1)();
            }
            uVar2 = uVar5 + 1;
          } while (*(char *)(local_20 + uVar5) == *(char *)(local_28 + SVar7 + uVar5));
          SVar7 = (SVar7 - local_48) + 1 + uVar5;
        }
        local_a8 = 0;
        uVar2 = local_88 + SVar7;
      } while (uVar2 < local_24);
    }
  }
LAB_10002f3d:
  uVar2 = param_3 - local_a0;
  if (local_9c - local_8c < uVar2) {
    FUN_101359e0(&local_9c,local_8c,uVar2,(LPVOID)0x1,1);
    local_b0 = pvStack_98;
    uVar3 = local_94;
  }
  else {
    uVar3 = local_8c;
    if (param_3 == local_a0) goto LAB_10002f71;
  }
  memcpy((void *)((int)local_b0 + uVar3),(void *)(local_74 + local_a0),uVar2);
LAB_10002f71:
  *(uint *)(local_6c + 1) = uVar3 + uVar2;
  *local_6c = CONCAT44(pvStack_98,local_9c);
  return;
  while( true ) {
    uVar2 = uVar2 - 1;
    if (local_1c <= local_90) goto LAB_10002fe8;
    uVar5 = uVar2 + SVar7;
    if (local_24 <= uVar5) goto LAB_10002fd7;
    if (*(char *)(local_20 + uVar2) != *(char *)(local_28 + uVar5)) break;
LAB_10002e10:
    if (uVar2 == 0) {
      local_b4 = local_1c + SVar7;
      local_3c = local_b4;
      goto LAB_10002e5c;
    }
  }
  SVar7 = SVar7 + local_40;
LAB_10002d86:
  uVar2 = local_88 + SVar7;
  if (local_24 <= uVar2) goto LAB_10002f3d;
  goto LAB_10002d94;
LAB_10002c90:
  do {
    if (uVar2 <= local_a8) {
      local_b4 = local_1c + SVar7;
      local_34 = 0;
      local_3c = local_b4;
      goto LAB_10002e5c;
    }
    uVar2 = uVar2 - 1;
    if (local_1c <= uVar2) {
LAB_10002fe8:
      FUN_10136b52(uVar2,local_1c,&PTR_s_C__Users_runneradmin__rustup_too_101567a8);
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    uVar5 = uVar2 + SVar7;
    if (local_24 <= uVar5) {
LAB_10002fd7:
      FUN_10136b52(uVar5,local_24,&PTR_s_C__Users_runneradmin__rustup_too_101567b8);
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
  } while (*(char *)(local_20 + uVar2) == *(char *)(local_28 + uVar5));
  SVar7 = SVar7 + local_40;
  uVar2 = local_88 + SVar7;
  local_a8 = local_68;
  if (local_24 <= uVar2) goto LAB_10002f3d;
  goto LAB_10002bd0;
LAB_10002e5c:
  uVar2 = SVar7 - local_a0;
  if (local_9c - local_8c < uVar2) {
    FUN_101359e0(&local_9c,local_8c,uVar2,(LPVOID)0x1,1);
    local_b0 = pvStack_98;
    uVar3 = local_94;
LAB_10002e7a:
    SVar6 = local_9c;
    memcpy((void *)((int)local_b0 + uVar3),(void *)(local_a0 + local_74),uVar2);
  }
  else {
    SVar6 = local_9c;
    uVar3 = local_8c;
    if (SVar7 != local_a0) goto LAB_10002e7a;
  }
  local_94 = uVar3 + uVar2;
  if (SVar6 - local_94 < param_7) {
    FUN_101359e0(&local_9c,local_94,param_7,(LPVOID)0x1,1);
    local_b0 = pvStack_98;
  }
  uVar2 = local_94;
  memcpy((void *)((int)local_b0 + local_94),param_6,param_7);
  local_a0 = local_b4;
  local_94 = uVar2 + param_7;
  local_8c = local_94;
  if ((char)local_58[0] != '\0') goto LAB_10002b46;
LAB_10002cf0:
  do {
    FUN_10092330(&local_64,local_58);
  } while (local_64 == 1);
  if (local_64 != 0) goto LAB_10002f3d;
  local_b4 = local_5c;
  SVar7 = local_60;
  goto LAB_10002e5c;
}
