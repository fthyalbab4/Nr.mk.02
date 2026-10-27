// rea decompile_all
// name: FUN_0051882c
// address: 0x51882c
// body: available
// range: 0x51882c-0x518c0f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0051882c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5,
                 undefined4 *param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
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
  int local_14;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;

  local_60 = *param_6;
  uStack_5c = param_6[1];
  uStack_58 = param_6[2];
  uStack_54 = param_6[3];
  local_c = param_3;
  local_8 = param_2;
  local_10 = FUN_00518350(&DAT_00517b1c,1,param_2,param_4,param_5,&local_60,param_3);
  iVar8 = *(int *)(param_1 + 0x10);
  if (*(int *)(local_10 + 0x10) <= *(int *)(param_1 + 0x10)) {
    iVar8 = *(int *)(local_10 + 0x10);
  }
  *(int *)(param_1 + 0x10) = iVar8;
  if (*(int *)(local_10 + 0x18) < *(int *)(param_1 + 0x18)) {
    uVar6 = *(undefined4 *)(param_1 + 0x18);
  }
  else {
    uVar6 = *(undefined4 *)(local_10 + 0x18);
  }
  *(undefined4 *)(param_1 + 0x18) = uVar6;
  if (*(int *)(param_1 + 0x14) < *(int *)(local_10 + 0x14)) {
    uVar6 = *(undefined4 *)(param_1 + 0x14);
  }
  else {
    uVar6 = *(undefined4 *)(local_10 + 0x14);
  }
  *(undefined4 *)(param_1 + 0x14) = uVar6;
  if (*(int *)(local_10 + 0x1c) < *(int *)(param_1 + 0x1c)) {
    iVar8 = *(int *)(param_1 + 0x1c);
  }
  else {
    iVar8 = *(int *)(local_10 + 0x1c);
  }
  *(int *)(param_1 + 0x1c) = iVar8;
  if (param_5 == 0) {
    if (*(int *)(param_1 + 8) < *(int *)(local_10 + 8)) {
      iVar8 = *(int *)(param_1 + 8);
    }
    else {
      iVar8 = *(int *)(local_10 + 8);
    }
    if (-1 < iVar8 + -1) {
      local_14 = 0;
      local_38 = iVar8;
      do {
        iVar8 = *(int *)(param_1 + 4);
        if (*(int *)(local_10 + 4) <= *(int *)(param_1 + 4)) {
          iVar8 = *(int *)(local_10 + 4);
        }
        if (-1 < iVar8 + -1) {
          iVar7 = 0;
          do {
            if ((*(char *)(*(int *)(*(int *)(param_1 + 0xc) + iVar7 * 4) + local_14) == '\0') &&
               (*(char *)(*(int *)(*(int *)(local_10 + 0xc) + iVar7 * 4) + local_14) == '\0')) {
              uVar5 = 0;
            }
            else {
              uVar5 = 1;
            }
            *(undefined1 *)(*(int *)(*(int *)(param_1 + 0xc) + iVar7 * 4) + local_14) = uVar5;
            iVar7 = iVar7 + 1;
            iVar8 = iVar8 + -1;
          } while (iVar8 != 0);
        }
        local_14 = local_14 + 1;
        local_38 = local_38 + -1;
      } while (local_38 != 0);
      local_38 = 0;
    }
  }
  else if (param_5 == 2) {
    fVar1 = (float)(*(int *)(param_1 + 0x10) + *(int *)(param_1 + 0x18)) / 2.0;
    local_1c = (double)fVar1;
    local_2c = (local_1c - (double)*(int *)(param_1 + 0x10)) + 0.5;
    fVar2 = (float)(*(int *)(param_1 + 0x14) + iVar8) / 2.0;
    local_24 = (double)fVar2;
    local_34 = (local_24 - (double)*(int *)(param_1 + 0x14)) + 0.5;
    if (*(int *)(param_1 + 0x14) < 0) {
      local_3c = 0;
    }
    else {
      local_3c = *(int *)(param_1 + 0x14);
    }
    local_40 = iVar8;
    if (*(int *)(param_1 + 8) < iVar8) {
      local_40 = *(int *)(param_1 + 8);
    }
    if (local_3c <= local_40) {
      local_38 = (local_40 - local_3c) + 1;
      local_14 = local_3c;
      do {
        iVar8 = *(int *)(param_1 + 0x10);
        if (iVar8 < 0) {
          iVar8 = 0;
        }
        iVar7 = *(int *)(param_1 + 4);
        if (*(int *)(param_1 + 0x18) <= *(int *)(param_1 + 4)) {
          iVar7 = *(int *)(param_1 + 0x18);
        }
        if (iVar8 <= iVar7) {
          iVar7 = (iVar7 - iVar8) + 1;
          do {
            if ((0.0 < local_2c) && (0.0 < local_34)) {
              fVar3 = ((float)iVar8 - fVar1) / (float)local_2c;
              fVar4 = ((float)local_14 - fVar2) / (float)local_34;
              *(bool *)(*(int *)(*(int *)(param_1 + 0xc) + iVar8 * 4) + local_14) =
                   fVar3 * fVar3 + fVar4 * fVar4 < 1.0;
            }
            iVar8 = iVar8 + 1;
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
        }
        local_14 = local_14 + 1;
        local_38 = local_38 + -1;
      } while (local_38 != 0);
      local_38 = 0;
    }
  }
  else if (param_5 == 3) {
    fVar1 = (float)(*(int *)(param_1 + 0x10) + *(int *)(param_1 + 0x18)) / 2.0;
    local_1c = (double)fVar1;
    local_2c = (local_1c - (double)*(int *)(param_1 + 0x10)) + 0.5;
    fVar2 = (float)(*(int *)(param_1 + 0x14) + iVar8) / 2.0;
    local_24 = (double)fVar2;
    local_34 = (local_24 - (double)*(int *)(param_1 + 0x14)) + 0.5;
    if (*(int *)(param_1 + 0x14) < 0) {
      local_44 = 0;
    }
    else {
      local_44 = *(int *)(param_1 + 0x14);
    }
    local_48 = iVar8;
    if (*(int *)(param_1 + 8) < iVar8) {
      local_48 = *(int *)(param_1 + 8);
    }
    if (local_44 <= local_48) {
      local_38 = (local_48 - local_44) + 1;
      local_14 = local_44;
      do {
        if (*(int *)(param_1 + 0x10) < 0) {
          iVar8 = 0;
        }
        else {
          iVar8 = *(int *)(param_1 + 0x10);
        }
        if (*(int *)(param_1 + 4) < *(int *)(param_1 + 0x18)) {
          iVar7 = *(int *)(param_1 + 4);
        }
        else {
          iVar7 = *(int *)(param_1 + 0x18);
        }
        if (iVar8 <= iVar7) {
          iVar7 = (iVar7 - iVar8) + 1;
          do {
            if ((0.0 < local_2c) && (0.0 < local_34)) {
              *(bool *)(*(int *)(*(int *)(param_1 + 0xc) + iVar8 * 4) + local_14) =
                   ABS(((float)iVar8 - fVar1) / (float)local_2c) +
                   ABS(((float)local_14 - fVar2) / (float)local_34) < 1.0;
            }
            iVar8 = iVar8 + 1;
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
        }
        local_14 = local_14 + 1;
        local_38 = local_38 + -1;
      } while (local_38 != 0);
      local_38 = 0;
    }
  }
  else {
    if (*(int *)(param_1 + 0x14) < 0) {
      local_4c = 0;
    }
    else {
      local_4c = *(int *)(param_1 + 0x14);
    }
    local_50 = iVar8;
    if (*(int *)(param_1 + 8) < iVar8) {
      local_50 = *(int *)(param_1 + 8);
    }
    if (local_4c <= local_50) {
      local_38 = (local_50 - local_4c) + 1;
      local_14 = local_4c;
      do {
        if (*(int *)(param_1 + 0x10) < 0) {
          iVar8 = 0;
        }
        else {
          iVar8 = *(int *)(param_1 + 0x10);
        }
        if (*(int *)(param_1 + 4) < *(int *)(param_1 + 0x18)) {
          iVar7 = *(int *)(param_1 + 4);
        }
        else {
          iVar7 = *(int *)(param_1 + 0x18);
        }
        if (iVar8 <= iVar7) {
          iVar7 = (iVar7 - iVar8) + 1;
          do {
            *(undefined1 *)(*(int *)(*(int *)(param_1 + 0xc) + iVar8 * 4) + local_14) = 1;
            iVar8 = iVar8 + 1;
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
        }
        local_14 = local_14 + 1;
        local_38 = local_38 + -1;
      } while (local_38 != 0);
    }
  }
  FUN_00405fdc(local_10);
  return;
}
