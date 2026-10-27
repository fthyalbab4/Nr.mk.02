// rea decompile_all
// name: FUN_005cf6dc
// address: 0x5cf6dc
// body: available
// range: 0x5cf6dc-0x5cfe4b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_005cf6dc(int param_1,int param_2,int param_3,byte param_4,int param_5,undefined2 *param_6)

{
  uint3 uVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  undefined2 extraout_var_03;
  undefined2 extraout_var_04;
  undefined2 extraout_var_05;
  undefined2 extraout_var_06;
  undefined2 extraout_var_07;
  undefined2 extraout_var_08;
  undefined2 extraout_var_09;
  undefined2 extraout_var_10;
  undefined2 extraout_var_11;
  undefined2 extraout_var_12;
  undefined2 *unaff_EBX;
  int iVar5;
  undefined2 *unaff_ESI;
  undefined2 *unaff_EDI;
  undefined4 uStack_54;
  int local_50;
  code *local_4c;
  code *local_44;
  code *local_3c;
  code *local_34;
  undefined2 *local_2c;
  undefined2 *local_28;
  undefined2 *local_24;
  undefined2 *local_20;
  undefined2 *local_1c;
  undefined2 *local_18;
  undefined2 *local_14;
  undefined2 *local_10;
  byte local_5;

  uVar1 = (uint3)uStack_54;
  for (iVar5 = param_3; -1 < iVar5; iVar5 = iVar5 + -1) {
    unaff_EDI = *(undefined2 **)(param_2 + iVar5 * 4);
  }
  local_5 = 0x80;
  uStack_54 = (undefined2 *)(uint)(uint3)uStack_54;
  if ((*(byte *)(param_1 + 0x140) & 1) == 0) {
    iVar5 = 3;
    if ((*(byte *)(param_1 + 0x141) & 1) == 0) {
      local_50 = 3;
    }
    else {
      local_50 = 4;
    }
  }
  else {
    iVar5 = 4;
    local_50 = 3;
    if ((*(byte *)(param_1 + 0x141) & 1) != 0) {
      uStack_54 = (undefined2 *)CONCAT13(1,uVar1);
    }
  }
  if (1 < param_3 + 1) {
    iVar5 = 1;
  }
  if (*(char *)(param_1 + 5) == '\b') {
    local_24 = unaff_ESI;
    local_20 = unaff_EBX;
    if (param_3 == 0) {
      local_24 = (undefined2 *)((int)unaff_EDI + 1);
      local_20 = unaff_EDI + 1;
      local_2c = (undefined2 *)((int)unaff_EDI + 3);
    }
    else if ((*(byte *)(param_1 + 0x140) & 1) == 0) {
      local_2c = (undefined2 *)0x0;
    }
    else {
      local_2c = uStack_54;
    }
    local_28 = unaff_EDI;
    if (*(char *)(param_1 + 6) == '\b') {
      if ((*(byte *)(param_1 + 0x141) & 2) == 0) {
        local_34 = FUN_005ceee0;
      }
      else {
        local_34 = FUN_005ceee8;
      }
      if (uStack_54._3_1_ == '\0') {
        for (; param_5 != 0; param_5 = param_5 + -1) {
          if ((param_4 & local_5) != 0) {
            uVar2 = (*local_34)(param_1,*(undefined1 *)local_20);
            *(undefined1 *)param_6 = uVar2;
            uVar2 = (*local_34)(param_1,*(undefined1 *)local_24);
            *(undefined1 *)((int)param_6 + 1) = uVar2;
            uVar2 = (*local_34)(param_1,*(undefined1 *)local_28);
            *(undefined1 *)(param_6 + 1) = uVar2;
            local_28 = (undefined2 *)((int)local_28 + iVar5);
            local_24 = (undefined2 *)((int)local_24 + iVar5);
            local_20 = (undefined2 *)((int)local_20 + iVar5);
          }
          local_5 = local_5 >> 1 | local_5 << 7;
          param_6 = (undefined2 *)((int)param_6 + local_50);
        }
      }
      else {
        for (; param_5 != 0; param_5 = param_5 + -1) {
          if ((param_4 & local_5) != 0) {
            uVar2 = (*local_34)(param_1,*(undefined1 *)local_20);
            *(undefined1 *)param_6 = uVar2;
            uVar2 = (*local_34)(param_1,*(undefined1 *)local_24);
            *(undefined1 *)((int)param_6 + 1) = uVar2;
            uVar2 = (*local_34)(param_1,*(undefined1 *)local_28);
            *(undefined1 *)(param_6 + 1) = uVar2;
            *(undefined1 *)((int)param_6 + 3) = *(undefined1 *)local_2c;
            local_28 = (undefined2 *)((int)local_28 + iVar5);
            local_24 = (undefined2 *)((int)local_24 + iVar5);
            local_20 = (undefined2 *)((int)local_20 + iVar5);
            local_2c = (undefined2 *)((int)local_2c + iVar5);
          }
          local_5 = local_5 >> 1 | local_5 << 7;
          param_6 = param_6 + 2;
        }
      }
    }
    else if (*(char *)(param_1 + 6) == '\x10') {
      if ((*(byte *)(param_1 + 0x141) & 2) == 0) {
        local_34 = FUN_005ceee0;
      }
      else {
        local_34 = FUN_005ceee8;
      }
      if ((*(byte *)(param_1 + 0x140) & 4) == 0) {
        local_4c = (code *)&LAB_005ceee4;
      }
      else {
        local_4c = FUN_005cef64;
      }
      if (param_3 == 0) {
        local_24 = (undefined2 *)((int)unaff_EDI + 1);
        local_20 = unaff_EDI + 1;
        local_2c = (undefined2 *)((int)unaff_EDI + 3);
      }
      else if ((*(byte *)(param_1 + 0x140) & 1) == 0) {
        local_2c = (undefined2 *)0x0;
        local_24 = unaff_ESI;
        local_20 = unaff_EBX;
      }
      else {
        local_2c = uStack_54;
        local_24 = unaff_ESI;
        local_20 = unaff_EBX;
      }
      if (uStack_54._3_1_ == '\0') {
        for (; param_5 != 0; param_5 = param_5 + -1) {
          if ((param_4 & local_5) != 0) {
            uVar2 = (*local_34)(param_1,*(undefined1 *)local_20);
            uVar4 = FUN_005cee4c(uVar2,CONCAT22(extraout_var_10,0xffff),
                                 CONCAT22(extraout_var_03,0xff));
            uVar3 = (*local_4c)(param_1,uVar4);
            *param_6 = uVar3;
            uVar2 = (*local_34)(param_1,*(undefined1 *)local_24);
            uVar4 = FUN_005cee4c(uVar2,CONCAT22(extraout_var_11,0xffff),
                                 CONCAT22(extraout_var_04,0xff));
            uVar3 = (*local_4c)(param_1,uVar4);
            param_6[1] = uVar3;
            uVar2 = (*local_34)(param_1,*(undefined1 *)local_28);
            uVar4 = FUN_005cee4c(uVar2,CONCAT22(extraout_var_12,0xffff),
                                 CONCAT22(extraout_var_05,0xff));
            uVar3 = (*local_4c)(param_1,uVar4);
            param_6[2] = uVar3;
            local_28 = (undefined2 *)((int)local_28 + iVar5);
            local_24 = (undefined2 *)((int)local_24 + iVar5);
            local_20 = (undefined2 *)((int)local_20 + iVar5);
          }
          local_5 = local_5 >> 1 | local_5 << 7;
          param_6 = param_6 + local_50;
        }
      }
      else {
        for (; param_5 != 0; param_5 = param_5 + -1) {
          if ((param_4 & local_5) != 0) {
            uVar2 = (*local_34)(param_1,*(undefined1 *)local_20);
            uVar4 = FUN_005cee4c(uVar2,CONCAT22(extraout_var_06,0xffff),CONCAT22(extraout_var,0xff))
            ;
            uVar3 = (*local_4c)(param_1,uVar4);
            *param_6 = uVar3;
            uVar2 = (*local_34)(param_1,*(undefined1 *)local_24);
            uVar4 = FUN_005cee4c(uVar2,CONCAT22(extraout_var_07,0xffff),
                                 CONCAT22(extraout_var_00,0xff));
            uVar3 = (*local_4c)(param_1,uVar4);
            param_6[1] = uVar3;
            uVar2 = (*local_34)(param_1,*(undefined1 *)local_28);
            uVar4 = FUN_005cee4c(uVar2,CONCAT22(extraout_var_08,0xffff),
                                 CONCAT22(extraout_var_01,0xff));
            uVar3 = (*local_4c)(param_1,uVar4);
            param_6[2] = uVar3;
            uVar4 = FUN_005cee4c(*(undefined1 *)local_2c,CONCAT22(extraout_var_09,0xffff),
                                 CONCAT22(extraout_var_02,0xff));
            uVar3 = (*local_4c)(param_1,uVar4);
            param_6[3] = uVar3;
            local_28 = (undefined2 *)((int)local_28 + iVar5);
            local_24 = (undefined2 *)((int)local_24 + iVar5);
            local_20 = (undefined2 *)((int)local_20 + iVar5);
            local_2c = (undefined2 *)((int)local_2c + iVar5);
          }
          local_5 = local_5 >> 1 | local_5 << 7;
          param_6 = param_6 + 4;
        }
      }
    }
  }
  else if (*(char *)(param_1 + 5) == '\x10') {
    local_14 = unaff_ESI;
    local_10 = unaff_EBX;
    if (param_3 == 0) {
      local_14 = unaff_EDI + 1;
      local_10 = unaff_EDI + 2;
      local_1c = unaff_EDI + 3;
    }
    else if ((*(byte *)(param_1 + 0x140) & 1) == 0) {
      local_1c = (undefined2 *)0x0;
    }
    else {
      local_1c = uStack_54;
    }
    local_18 = unaff_EDI;
    if (*(char *)(param_1 + 6) == '\b') {
      if ((*(byte *)(param_1 + 0x141) & 2) == 0) {
        if ((*(byte *)(param_1 + 0x140) & 4) == 0) {
          local_3c = FUN_005ceef4;
        }
        else {
          local_3c = FUN_005cef4c;
        }
      }
      else if ((*(byte *)(param_1 + 0x140) & 4) == 0) {
        local_3c = FUN_005cef08;
      }
      else {
        local_3c = FUN_005cef28;
      }
      if ((*(byte *)(param_1 + 0x140) & 4) == 0) {
        local_44 = FUN_005ceef4;
      }
      else {
        local_44 = FUN_005cef4c;
      }
      if (uStack_54._3_1_ == '\0') {
        for (; param_5 != 0; param_5 = param_5 + -1) {
          if ((param_4 & local_5) != 0) {
            uVar2 = (*local_3c)(param_1,*local_10);
            *(undefined1 *)param_6 = uVar2;
            uVar2 = (*local_3c)(param_1,*local_14);
            *(undefined1 *)((int)param_6 + 1) = uVar2;
            uVar2 = (*local_3c)(param_1,*local_18);
            *(undefined1 *)(param_6 + 1) = uVar2;
            local_18 = local_18 + iVar5;
            local_14 = local_14 + iVar5;
            local_10 = local_10 + iVar5;
          }
          local_5 = local_5 >> 1 | local_5 << 7;
          param_6 = (undefined2 *)((int)param_6 + local_50);
        }
      }
      else {
        for (; param_5 != 0; param_5 = param_5 + -1) {
          if ((param_4 & local_5) != 0) {
            uVar2 = (*local_3c)(param_1,*local_10);
            *(undefined1 *)param_6 = uVar2;
            uVar2 = (*local_3c)(param_1,*local_14);
            *(undefined1 *)((int)param_6 + 1) = uVar2;
            uVar2 = (*local_3c)(param_1,*local_18);
            *(undefined1 *)(param_6 + 1) = uVar2;
            uVar2 = (*local_44)(param_1,*local_1c);
            *(undefined1 *)((int)param_6 + 3) = uVar2;
            local_18 = local_18 + iVar5;
            local_14 = local_14 + iVar5;
            local_10 = local_10 + iVar5;
            local_1c = local_1c + iVar5;
          }
          local_5 = local_5 >> 1 | local_5 << 7;
          param_6 = param_6 + 2;
        }
      }
    }
    else if (*(char *)(param_1 + 6) == '\x10') {
      if ((*(byte *)(param_1 + 0x140) & 4) == 0) {
        local_4c = (code *)&LAB_005ceee4;
      }
      else {
        local_4c = FUN_005cef64;
      }
      if (param_3 == 0) {
        local_14 = unaff_EDI + 1;
        local_10 = unaff_EDI + 2;
        local_1c = unaff_EDI + 3;
      }
      else if ((*(byte *)(param_1 + 0x140) & 1) == 0) {
        local_1c = (undefined2 *)0x0;
        local_14 = unaff_ESI;
        local_10 = unaff_EBX;
      }
      else {
        local_1c = uStack_54;
        local_14 = unaff_ESI;
        local_10 = unaff_EBX;
      }
      if (uStack_54._3_1_ == '\0') {
        for (; param_5 != 0; param_5 = param_5 + -1) {
          if ((param_4 & local_5) != 0) {
            uVar3 = (*local_4c)(param_1,*local_10);
            *param_6 = uVar3;
            uVar3 = (*local_4c)(param_1,*local_14);
            param_6[1] = uVar3;
            uVar3 = (*local_4c)(param_1,*local_18);
            param_6[2] = uVar3;
            local_18 = local_18 + iVar5;
            local_14 = local_14 + iVar5;
            local_10 = local_10 + iVar5;
          }
          local_5 = local_5 >> 1 | local_5 << 7;
          param_6 = param_6 + local_50;
        }
      }
      else {
        for (; param_5 != 0; param_5 = param_5 + -1) {
          if ((param_4 & local_5) != 0) {
            uVar3 = (*local_4c)(param_1,*local_10);
            *param_6 = uVar3;
            uVar3 = (*local_4c)(param_1,*local_14);
            param_6[1] = uVar3;
            uVar3 = (*local_4c)(param_1,*local_18);
            param_6[2] = uVar3;
            uVar3 = (*local_4c)(param_1,*local_1c);
            param_6[3] = uVar3;
            local_18 = local_18 + iVar5;
            local_14 = local_14 + iVar5;
            local_10 = local_10 + iVar5;
            local_1c = local_1c + iVar5;
          }
          local_5 = local_5 >> 1 | local_5 << 7;
          param_6 = param_6 + 4;
        }
      }
    }
  }
  return;
}
