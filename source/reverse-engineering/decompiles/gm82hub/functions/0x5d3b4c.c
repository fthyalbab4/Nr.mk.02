// rea decompile_all
// name: FUN_005d3b4c
// address: 0x5d3b4c
// body: available
// range: 0x5d3b4c-0x5d3fbf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005d3b4c(int param_1,int param_2,int param_3,byte param_4,int param_5,undefined2 *param_6)

{
  byte bVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
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
  byte *unaff_EBX;
  int iVar9;
  byte *unaff_ESI;
  byte *unaff_EDI;
  undefined1 *puVar10;
  int local_44;
  byte *local_3c;
  byte *local_38;
  byte *local_34;
  byte *local_30;
  byte *local_2c;
  byte *local_28;
  byte local_5;

  for (iVar9 = param_3; -1 < iVar9; iVar9 = iVar9 + -1) {
    unaff_EDI = *(byte **)(param_2 + iVar9 * 4);
  }
  local_5 = 0x80;
  uVar5 = (uint)((*(byte *)(param_1 + 0x141) & 1) != 0);
  if (*(char *)(param_1 + 5) == '\b') {
    if (param_3 == 0) {
      local_2c = unaff_EDI + 1;
      local_30 = unaff_EDI + 2;
      local_44 = 3;
    }
    else {
      local_44 = 1;
      local_30 = unaff_EBX;
      local_2c = unaff_ESI;
    }
    local_28 = unaff_EDI;
    if (*(char *)(param_1 + 6) == '\b') {
      for (; param_5 != 0; param_5 = param_5 + -1) {
        if ((param_4 & local_5) == 0) {
          param_6 = (undefined2 *)((int)param_6 + uVar5 + 3);
        }
        else {
          uVar6 = (uint)*local_28;
          local_28 = local_28 + local_44;
          bVar1 = *local_2c;
          local_2c = local_2c + local_44;
          bVar2 = *local_30;
          local_30 = local_30 + local_44;
          uVar3 = FUN_005cee38(*(int *)(*(int *)(param_1 + 0x124) + (uint)bVar2 * 4) + uVar6);
          *(undefined1 *)param_6 = uVar3;
          puVar10 = (undefined1 *)((int)param_6 + uVar5 + 1);
          uVar3 = FUN_005cee38(*(int *)(*(int *)(param_1 + 0x130) + (uint)bVar1 * 4) + uVar6 +
                               *(int *)(*(int *)(param_1 + 300) + (uint)bVar2 * 4));
          *puVar10 = uVar3;
          uVar3 = FUN_005cee38(*(int *)(*(int *)(param_1 + 0x128) + (uint)bVar1 * 4) + uVar6);
          puVar10[1] = uVar3;
          param_6 = (undefined2 *)(puVar10 + 2);
        }
        local_5 = local_5 >> 1 | local_5 << 7;
      }
    }
    else if (*(char *)(param_1 + 6) == '\x10') {
      for (; param_5 != 0; param_5 = param_5 + -1) {
        if ((param_4 & local_5) == 0) {
          param_6 = param_6 + uVar5 + 3;
        }
        else {
          uVar6 = (uint)*local_28;
          local_28 = local_28 + local_44;
          bVar1 = *local_2c;
          local_2c = local_2c + local_44;
          bVar2 = *local_30;
          local_30 = local_30 + local_44;
          uVar3 = FUN_005cee38(*(int *)(*(int *)(param_1 + 0x124) + (uint)bVar2 * 4) + uVar6);
          uVar4 = FUN_005cee4c(uVar3,CONCAT22(extraout_var_04,0xffff),CONCAT22(extraout_var,0xff));
          *param_6 = uVar4;
          param_6 = param_6 + uVar5 + 1;
          uVar3 = FUN_005cee38(*(int *)(*(int *)(param_1 + 0x130) + (uint)bVar1 * 4) + uVar6 +
                               *(int *)(*(int *)(param_1 + 300) + (uint)bVar2 * 4));
          uVar4 = FUN_005cee4c(uVar3,CONCAT22(extraout_var_05,0xffff),CONCAT22(extraout_var_00,0xff)
                              );
          *param_6 = uVar4;
          uVar3 = FUN_005cee38(*(int *)(*(int *)(param_1 + 0x128) + (uint)bVar1 * 4) + uVar6);
          uVar4 = FUN_005cee4c(uVar3,CONCAT22(extraout_var_06,0xffff),CONCAT22(extraout_var_01,0xff)
                              );
          param_6[1] = uVar4;
          param_6 = param_6 + 2;
        }
        local_5 = local_5 >> 1 | local_5 << 7;
      }
    }
  }
  else if (*(char *)(param_1 + 5) == '\x10') {
    if (param_3 == 0) {
      local_38 = unaff_EDI + 2;
      local_3c = unaff_EDI + 4;
      local_44 = 3;
    }
    else {
      local_44 = 1;
      local_3c = unaff_EBX;
      local_38 = unaff_ESI;
    }
    local_34 = unaff_EDI;
    if (*(char *)(param_1 + 6) == '\b') {
      for (; param_5 != 0; param_5 = param_5 + -1) {
        if ((param_4 & local_5) == 0) {
          param_6 = (undefined2 *)((int)param_6 + uVar5 + 3);
        }
        else {
          uVar6 = FUN_005cee4c(*(undefined2 *)local_34,0xff,0xffff);
          uVar6 = uVar6 & 0xffff;
          local_34 = local_34 + local_44 * 2;
          uVar7 = FUN_005cee4c(*(undefined2 *)local_38,CONCAT22(extraout_var_07,0xff),
                               CONCAT22(extraout_var_02,0xffff));
          local_38 = local_38 + local_44 * 2;
          uVar8 = FUN_005cee4c(*(undefined2 *)local_3c,CONCAT22(extraout_var_08,0xff),
                               CONCAT22(extraout_var_03,0xffff));
          local_3c = local_3c + local_44 * 2;
          uVar3 = FUN_005cee38(*(int *)(*(int *)(param_1 + 0x124) + (uVar8 & 0xffff) * 4) + uVar6);
          *(undefined1 *)param_6 = uVar3;
          puVar10 = (undefined1 *)((int)param_6 + uVar5 + 1);
          uVar3 = FUN_005cee38(*(int *)(*(int *)(param_1 + 0x130) + (uVar7 & 0xffff) * 4) + uVar6 +
                               *(int *)(*(int *)(param_1 + 300) + (uVar8 & 0xffff) * 4));
          *puVar10 = uVar3;
          uVar3 = FUN_005cee38(*(int *)(*(int *)(param_1 + 0x128) + (uVar7 & 0xffff) * 4) + uVar6);
          puVar10[1] = uVar3;
          param_6 = (undefined2 *)(puVar10 + 2);
        }
        local_5 = local_5 >> 1 | local_5 << 7;
      }
    }
    else if (*(char *)(param_1 + 6) == '\x10') {
      for (; param_5 != 0; param_5 = param_5 + -1) {
                    /* WARNING: Read-only address (ram,0x005d3fc0) is written */
        if ((param_4 & local_5) == 0) {
          param_6 = param_6 + uVar5 + 3;
        }
        else {
          uVar4 = FUN_004048b8();
          *param_6 = uVar4;
          param_6 = param_6 + uVar5 + 1;
          uVar4 = FUN_004048b8();
          *param_6 = uVar4;
          uVar4 = FUN_004048b8();
          param_6[1] = uVar4;
          param_6 = param_6 + 2;
        }
        local_5 = local_5 >> 1 | local_5 << 7;
      }
    }
  }
  return;
}
