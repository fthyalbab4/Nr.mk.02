// rea decompile_all
// name: FUN_005aecac
// address: 0x5aecac
// body: available
// range: 0x5aecac-0x5af174 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

int FUN_005aecac(int param_1,char param_2,int param_3,int param_4,int param_5,int *param_6,
                int param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int extraout_ECX;
  char extraout_DL;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *in_FS_OFFSET;
  byte bVar10;
  int aiStackY_183c [1514];
  undefined4 uStack_8c;
  undefined4 local_60;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  double local_34;
  double local_2c;
  double local_24;
  double local_1c;
  int local_10;
  int local_c;
  char local_5;

  bVar10 = 0;
  local_5 = '\0';
  if (param_2 != '\0') {
    param_1 = FUN_00405fb0();
    param_3 = extraout_ECX;
    local_5 = extraout_DL;
  }
  piVar5 = param_6 + (uint)bVar10 * -2 + 1;
  local_50 = *param_6;
  *(int *)((int)&stack0xffffffb4 + (uint)bVar10 * -8) = *piVar5;
  *(int *)((int)&stack0xffffffb8 + (uint)bVar10 * -8 + (uint)bVar10 * -8) =
       piVar5[(uint)bVar10 * -2 + 1];
  ((int *)((int)&stack0xffffffb8 + (uint)bVar10 * -8 + (uint)bVar10 * -8))[(uint)bVar10 * -2 + 1] =
       (piVar5 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1];
  local_c = param_3;
  if (param_3 == 0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    FUN_00438c38(0,0,0,&stack0xffffffa0,0);
    puVar8 = (undefined4 *)(param_1 + 0x14 + (uint)bVar10 * -8);
    *(undefined4 *)(param_1 + 0x10) = local_60;
    puVar9 = puVar8 + (uint)bVar10 * -2 + 1;
    *puVar8 = *(undefined4 *)((int)&stack0xffffffa4 + (uint)bVar10 * 0xfffffffe * 4);
    *puVar9 = *(undefined4 *)(&stack0xffffffa8 + (uint)bVar10 * -8 + (uint)bVar10 * -8);
    puVar9[(uint)bVar10 * -2 + 1] =
         *(undefined4 *)
          ((int)(&stack0xffffffa8 + (uint)bVar10 * -8 + (uint)bVar10 * -8) +
          ((uint)bVar10 * -2 + 1) * 4);
  }
  else {
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_3 + 4);
    iVar6 = *(int *)(param_3 + 8);
    *(int *)(param_1 + 8) = iVar6;
    if (param_7 == 0) {
      FUN_007039e0(param_3,param_4,&stack0xffffffa0);
      puVar8 = (undefined4 *)(param_1 + 0x14 + (uint)bVar10 * -8);
      *(undefined4 *)(param_1 + 0x10) = local_60;
      puVar9 = puVar8 + (uint)bVar10 * -2 + 1;
      *puVar8 = *(undefined4 *)((int)&stack0xffffffa4 + (uint)bVar10 * 0xfffffffe * 4);
      *puVar9 = *(undefined4 *)(&stack0xffffffa8 + (uint)bVar10 * -8 + (uint)bVar10 * -8);
      puVar9[(uint)bVar10 * -2 + 1] =
           *(undefined4 *)
            ((int)(&stack0xffffffa8 + (uint)bVar10 * -8 + (uint)bVar10 * -8) +
            ((uint)bVar10 * -2 + 1) * 4);
    }
    else if (param_7 == 1) {
      FUN_00438c38(0,0,*(int *)(param_1 + 4) + -1,&stack0xffffffa0,iVar6 + -1);
      puVar8 = (undefined4 *)(param_1 + 0x14 + (uint)bVar10 * -8);
      *(undefined4 *)(param_1 + 0x10) = local_60;
      puVar9 = puVar8 + (uint)bVar10 * -2 + 1;
      *puVar8 = *(undefined4 *)((int)&stack0xffffffa4 + (uint)bVar10 * 0xfffffffe * 4);
      *puVar9 = *(undefined4 *)(&stack0xffffffa8 + (uint)bVar10 * -8 + (uint)bVar10 * -8);
      puVar9[(uint)bVar10 * -2 + 1] =
           *(undefined4 *)
            ((int)(&stack0xffffffa8 + (uint)bVar10 * -8 + (uint)bVar10 * -8) +
            ((uint)bVar10 * -2 + 1) * 4);
    }
    else {
      iVar7 = local_50;
      if (local_50 < 0) {
        iVar7 = 0;
      }
      if (local_4c < 0) {
        local_3c = 0;
      }
      else {
        local_3c = local_4c;
      }
      local_40 = *(int *)(param_1 + 4) + -1;
      if (local_48 <= local_40) {
        local_40 = local_48;
      }
      if (iVar6 + -1 < local_44) {
        local_44 = iVar6 + -1;
      }
      FUN_00438c38(iVar7,local_3c,local_40,&stack0xffffffa0,local_44);
      puVar8 = (undefined4 *)(param_1 + 0x14 + (uint)bVar10 * -8);
      *(undefined4 *)(param_1 + 0x10) = local_60;
      puVar9 = puVar8 + (uint)bVar10 * -2 + 1;
      *puVar8 = *(undefined4 *)((int)&stack0xffffffa4 + (uint)bVar10 * 0xfffffffe * 4);
      *puVar9 = *(undefined4 *)(&stack0xffffffa8 + (uint)bVar10 * -8 + (uint)bVar10 * -8);
      puVar9[(uint)bVar10 * -2 + 1] =
           *(undefined4 *)
            ((int)(&stack0xffffffa8 + (uint)bVar10 * -8 + (uint)bVar10 * -8) +
            ((uint)bVar10 * -2 + 1) * 4);
    }
    FUN_00409be0(param_1 + 0xc,&DAT_005ae7c0,1,*(undefined4 *)(param_1 + 4));
    if (-1 < *(int *)(param_1 + 4) + -1) {
      iVar6 = 0;
      local_38 = *(int *)(param_1 + 4);
      do {
        FUN_00409be0(*(int *)(param_1 + 0xc) + iVar6 * 4,&DAT_005ae78c,1,
                     *(undefined4 *)(param_1 + 8));
        iVar6 = iVar6 + 1;
        local_38 = local_38 + -1;
      } while (local_38 != 0);
    }
    if (param_5 == 0) {
      if (-1 < *(int *)(param_1 + 8) + -1) {
        local_10 = 0;
        local_38 = *(int *)(param_1 + 8);
        do {
          iVar6 = *(int *)(param_1 + 4);
          if (-1 < iVar6 + -1) {
            iVar7 = 0;
            do {
              *(undefined1 *)(*(int *)(*(int *)(param_1 + 0xc) + iVar7 * 4) + local_10) = 0;
              iVar7 = iVar7 + 1;
              iVar6 = iVar6 + -1;
            } while (iVar6 != 0);
          }
          local_10 = local_10 + 1;
          local_38 = local_38 + -1;
        } while (local_38 != 0);
      }
      iVar6 = *(int *)(param_1 + 0x14);
      if (iVar6 <= *(int *)(param_1 + 0x1c)) {
        local_38 = (*(int *)(param_1 + 0x1c) - iVar6) + 1;
        local_10 = iVar6;
        do {
          iVar6 = *(int *)(param_1 + 0x10);
          if (iVar6 <= *(int *)(param_1 + 0x18)) {
            iVar7 = (*(int *)(param_1 + 0x18) - iVar6) + 1;
            do {
              *(bool *)(*(int *)(*(int *)(param_1 + 0xc) + iVar6 * 4) + local_10) =
                   param_4 < (int)(uint)*(byte *)(*(int *)(local_c + 0xc) + 3 +
                                                 (*(int *)(param_1 + 4) * local_10 + iVar6) * 4);
              iVar6 = iVar6 + 1;
              iVar7 = iVar7 + -1;
            } while (iVar7 != 0);
          }
          local_10 = local_10 + 1;
          local_38 = local_38 + -1;
        } while (local_38 != 0);
      }
    }
    else if (param_5 == 1) {
      if (-1 < *(int *)(param_1 + 8) + -1) {
        local_10 = 0;
        local_38 = *(int *)(param_1 + 8);
        do {
          iVar6 = *(int *)(param_1 + 4);
          if (-1 < iVar6 + -1) {
            iVar7 = 0;
            do {
              *(undefined1 *)(*(int *)(*(int *)(param_1 + 0xc) + iVar7 * 4) + local_10) = 0;
              iVar7 = iVar7 + 1;
              iVar6 = iVar6 + -1;
            } while (iVar6 != 0);
          }
          local_10 = local_10 + 1;
          local_38 = local_38 + -1;
        } while (local_38 != 0);
      }
      iVar6 = *(int *)(param_1 + 0x14);
      if (iVar6 <= *(int *)(param_1 + 0x1c)) {
        local_38 = (*(int *)(param_1 + 0x1c) - iVar6) + 1;
        local_10 = iVar6;
        do {
          iVar6 = *(int *)(param_1 + 0x10);
          if (iVar6 <= *(int *)(param_1 + 0x18)) {
            iVar7 = (*(int *)(param_1 + 0x18) - iVar6) + 1;
            do {
              *(undefined1 *)(*(int *)(*(int *)(param_1 + 0xc) + iVar6 * 4) + local_10) = 1;
              iVar6 = iVar6 + 1;
              iVar7 = iVar7 + -1;
            } while (iVar7 != 0);
          }
          local_10 = local_10 + 1;
          local_38 = local_38 + -1;
        } while (local_38 != 0);
        local_38 = 0;
      }
    }
    else if (param_5 == 2) {
      fVar1 = (float)(*(int *)(param_1 + 0x10) + *(int *)(param_1 + 0x18)) / 2.0;
      local_1c = (double)fVar1;
      local_2c = (local_1c - (double)*(int *)(param_1 + 0x10)) + 0.5;
      fVar2 = (float)(*(int *)(param_1 + 0x14) + *(int *)(param_1 + 0x1c)) / 2.0;
      local_24 = (double)fVar2;
      local_34 = (local_24 - (double)*(int *)(param_1 + 0x14)) + 0.5;
      if (-1 < *(int *)(param_1 + 8) + -1) {
        local_10 = 0;
        local_38 = *(int *)(param_1 + 8);
        do {
          iVar6 = *(int *)(param_1 + 4);
          if (-1 < iVar6 + -1) {
            iVar7 = 0;
            do {
              *(undefined1 *)(*(int *)(*(int *)(param_1 + 0xc) + iVar7 * 4) + local_10) = 0;
              iVar7 = iVar7 + 1;
              iVar6 = iVar6 + -1;
            } while (iVar6 != 0);
          }
          local_10 = local_10 + 1;
          local_38 = local_38 + -1;
        } while (local_38 != 0);
      }
      iVar6 = *(int *)(param_1 + 0x14);
      if (iVar6 <= *(int *)(param_1 + 0x1c)) {
        local_38 = (*(int *)(param_1 + 0x1c) - iVar6) + 1;
        local_10 = iVar6;
        do {
          iVar6 = *(int *)(param_1 + 0x10);
          if (iVar6 <= *(int *)(param_1 + 0x18)) {
            iVar7 = (*(int *)(param_1 + 0x18) - iVar6) + 1;
            do {
              if ((0.0 < local_2c) && (0.0 < local_34)) {
                fVar3 = ((float)iVar6 - fVar1) / (float)local_2c;
                fVar4 = ((float)local_10 - fVar2) / (float)local_34;
                *(bool *)(*(int *)(*(int *)(param_1 + 0xc) + iVar6 * 4) + local_10) =
                     fVar3 * fVar3 + fVar4 * fVar4 <= 1.0;
              }
              iVar6 = iVar6 + 1;
              iVar7 = iVar7 + -1;
            } while (iVar7 != 0);
          }
          local_10 = local_10 + 1;
          local_38 = local_38 + -1;
        } while (local_38 != 0);
        local_38 = 0;
      }
    }
    else if (param_5 == 3) {
      fVar1 = (float)(*(int *)(param_1 + 0x10) + *(int *)(param_1 + 0x18)) / 2.0;
      local_1c = (double)fVar1;
      local_2c = (local_1c - (double)*(int *)(param_1 + 0x10)) + 0.5;
      fVar2 = (float)(*(int *)(param_1 + 0x14) + *(int *)(param_1 + 0x1c)) / 2.0;
      local_24 = (double)fVar2;
      local_34 = (local_24 - (double)*(int *)(param_1 + 0x14)) + 0.5;
      if (-1 < *(int *)(param_1 + 8) + -1) {
        local_10 = 0;
        local_38 = *(int *)(param_1 + 8);
        do {
          iVar6 = *(int *)(param_1 + 4);
          if (-1 < iVar6 + -1) {
            iVar7 = 0;
            do {
              *(undefined1 *)(*(int *)(*(int *)(param_1 + 0xc) + iVar7 * 4) + local_10) = 0;
              iVar7 = iVar7 + 1;
              iVar6 = iVar6 + -1;
            } while (iVar6 != 0);
          }
          local_10 = local_10 + 1;
          local_38 = local_38 + -1;
        } while (local_38 != 0);
      }
      iVar6 = *(int *)(param_1 + 0x14);
      if (iVar6 <= *(int *)(param_1 + 0x1c)) {
        local_38 = (*(int *)(param_1 + 0x1c) - iVar6) + 1;
        local_10 = iVar6;
        do {
          iVar6 = *(int *)(param_1 + 0x10);
          if (iVar6 <= *(int *)(param_1 + 0x18)) {
            iVar7 = (*(int *)(param_1 + 0x18) - iVar6) + 1;
            do {
              if ((0.0 < local_2c) && (0.0 < local_34)) {
                *(bool *)(*(int *)(*(int *)(param_1 + 0xc) + iVar6 * 4) + local_10) =
                     ABS(((float)iVar6 - fVar1) / (float)local_2c) +
                     ABS(((float)local_10 - fVar2) / (float)local_34) <= 1.0;
              }
              iVar6 = iVar6 + 1;
              iVar7 = iVar7 + -1;
            } while (iVar7 != 0);
          }
          local_10 = local_10 + 1;
          local_38 = local_38 + -1;
        } while (local_38 != 0);
        local_38 = 0;
      }
    }
  }
  if (local_5 != '\0') {
    FUN_00406008(param_1);
    *in_FS_OFFSET = uStack_8c;
  }
  return param_1;
}
