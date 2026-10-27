// rea decompile_all
// name: FUN_100970b0
// address: 0x100970b0
// body: available
// range: 0x100970b0-0x100973df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_100970b0(int param_1,uint param_2,uint param_3,uint param_4,undefined4 param_5)

{
  byte bVar1;
  code *pcVar2;
  uint uVar3;
  uint *local_38;
  undefined1 *local_34;
  uint *local_30;
  undefined1 *local_2c;
  uint *local_28;
  undefined1 *local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;

  local_20 = param_2;
  if (param_2 < param_3) {
    local_38 = &param_3;
    local_30 = &local_20;
    local_34 = &LAB_10096fc0;
    local_2c = &LAB_10096fc0;
    FUN_101369c0(&DAT_10145728,&local_38,param_5);
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if (param_2 < param_4) {
LAB_10097101:
    local_38 = &param_4;
    local_30 = &local_20;
    local_34 = &LAB_10096fc0;
    local_2c = &LAB_10096fc0;
    FUN_101369c0(&DAT_101456c6,&local_38,param_5);
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if (param_4 < param_3) {
    local_38 = &param_3;
    local_30 = &param_4;
    local_34 = &LAB_10096fc0;
    local_2c = &LAB_10096fc0;
    FUN_101369c0(&DAT_10145701,&local_38,param_5);
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if ((param_3 == 0 || param_2 <= param_3) ||
     (local_18 = param_3, -0x41 < *(char *)(param_1 + param_3))) {
    if ((param_4 == 0 || param_2 <= param_4) ||
       (local_18 = param_4, -0x41 < *(char *)(param_1 + param_4))) goto LAB_10097101;
    do {
      uVar3 = param_4;
      if (-0x41 < *(char *)(param_1 + local_18)) goto LAB_10097150;
      local_18 = local_18 - 1;
    } while (local_18 != 0);
    local_18 = 0;
LAB_10097150:
    do {
      local_14 = uVar3;
      if (-0x41 < *(char *)(param_1 + uVar3)) break;
      uVar3 = uVar3 + 1;
      local_14 = param_2;
    } while (param_2 != uVar3);
    if (local_14 < local_18) goto LAB_10097169;
    if (local_18 != 0) {
      if (local_18 < param_2) {
        if (*(char *)(param_1 + local_18) < -0x40) goto LAB_10097169;
      }
      else if (local_18 != param_2) goto LAB_10097169;
    }
    if (local_14 < param_2) {
      if (*(char *)(param_1 + local_14) < -0x40) {
LAB_10097169:
        FUN_10136b90(param_1,param_2,local_18,local_14,param_5);
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
    }
    else if (local_14 != param_2) goto LAB_10097169;
    if (local_18 != local_14) {
      bVar1 = *(byte *)(param_1 + local_18);
      local_1c = (uint)bVar1;
      if ((char)bVar1 < '\0') {
        uVar3 = *(byte *)(param_1 + 1 + local_18) & 0x3f;
        if (bVar1 < 0xe0) {
          local_1c = (local_1c & 0x1f) << 6 | uVar3;
        }
        else {
          uVar3 = *(byte *)(param_1 + 2 + local_18) & 0x3f | uVar3 << 6;
          if (bVar1 < 0xf0) {
            local_1c = uVar3 | (local_1c & 0x1f) << 0xc;
          }
          else {
            local_1c = *(byte *)(param_1 + 3 + local_18) & 0x3f | uVar3 << 6 |
                       (local_1c & 7) << 0x12;
          }
        }
      }
      local_38 = &param_4;
      local_30 = &local_1c;
      local_34 = &LAB_10096fc0;
      local_28 = &local_18;
      local_2c = &LAB_100973e0;
      local_24 = &LAB_10097460;
      FUN_101369c0(&DAT_10145676,&local_38,param_5);
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
  }
  else {
    do {
      uVar3 = param_3;
      if (-0x41 < *(char *)(param_1 + local_18)) goto LAB_10097190;
      local_18 = local_18 - 1;
    } while (local_18 != 0);
    local_18 = 0;
LAB_10097190:
    do {
      local_14 = uVar3;
      if (-0x41 < *(char *)(param_1 + uVar3)) break;
      uVar3 = uVar3 + 1;
      local_14 = param_2;
    } while (param_2 != uVar3);
    if (local_14 < local_18) goto LAB_100971a9;
    if (local_18 != 0) {
      if (local_18 < param_2) {
        if (*(char *)(param_1 + local_18) < -0x40) goto LAB_100971a9;
      }
      else if (local_18 != param_2) goto LAB_100971a9;
    }
    if (local_14 < param_2) {
      if (*(char *)(param_1 + local_14) < -0x40) {
LAB_100971a9:
        FUN_10136b90(param_1,param_2,local_18,local_14,param_5);
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
    }
    else if (local_14 != param_2) goto LAB_100971a9;
    if (local_18 != local_14) {
      bVar1 = *(byte *)(param_1 + local_18);
      local_1c = (uint)bVar1;
      if ((char)bVar1 < '\0') {
        uVar3 = *(byte *)(param_1 + 1 + local_18) & 0x3f;
        if (bVar1 < 0xe0) {
          local_1c = (local_1c & 0x1f) << 6 | uVar3;
        }
        else {
          uVar3 = *(byte *)(param_1 + 2 + local_18) & 0x3f | uVar3 << 6;
          if (bVar1 < 0xf0) {
            local_1c = uVar3 | (local_1c & 0x1f) << 0xc;
          }
          else {
            local_1c = *(byte *)(param_1 + 3 + local_18) & 0x3f | uVar3 << 6 |
                       (local_1c & 7) << 0x12;
          }
        }
      }
      local_38 = &param_3;
      local_30 = &local_1c;
      local_34 = &LAB_10096fc0;
      local_28 = &local_18;
      local_2c = &LAB_100973e0;
      local_24 = &LAB_10097460;
      FUN_101369c0(&DAT_10145624,&local_38,param_5);
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
  }
  FUN_10136b20(param_5);
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}
