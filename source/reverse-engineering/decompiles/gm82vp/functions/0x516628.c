// rea decompile_all
// name: FUN_00516628
// address: 0x516628
// body: available
// range: 0x516628-0x5166c9 inclusive
// range: 0x5166ea-0x516b51 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00516628(int param_1,int param_2,int param_3,undefined4 param_4,uint param_5,int param_6,
                 int param_7)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int local_34;
  char local_30;
  char local_2c;
  char local_28;
  char local_24;
  int local_20;
  int local_1c;
  undefined1 local_18;
  undefined1 local_17;
  undefined1 local_16;
  undefined1 local_15;
  undefined1 local_14;
  undefined1 local_13;
  byte local_12;
  undefined1 local_11;
  int local_10;
  int local_c;
  int local_8;

  local_8 = param_2;
  if (param_2 < 0) {
    param_7 = param_7 + param_2;
    local_8 = 0;
  }
  if (param_3 < 0) {
    param_6 = param_6 + param_3;
    param_3 = 0;
  }
  if ((local_8 < *(int *)(param_1 + 4)) && (param_3 < *(int *)(param_1 + 8))) {
    if (*(int *)(param_1 + 4) <= local_8 + param_7) {
      param_7 = *(int *)(param_1 + 4) - local_8;
    }
    if (*(int *)(param_1 + 8) <= param_6 + param_3) {
      param_6 = *(int *)(param_1 + 8) - param_3;
    }
    if (((0 < param_7) && (0 < param_6)) && (iVar1 = param_6 + param_3 + -1, param_3 <= iVar1)) {
      local_1c = (iVar1 - param_3) + 1;
      local_c = param_3;
      do {
        iVar1 = local_c * *(int *)(param_1 + 4) + local_8 + -1;
        switch(param_4) {
        case 0:
          iVar4 = local_8 + param_7 + -1;
          if (local_8 <= iVar4) {
            local_20 = (iVar4 - local_8) + 1;
            do {
              iVar1 = iVar1 + 1;
              *(uint *)(*(int *)(param_1 + 0xc) + iVar1 * 4) = param_5;
              local_20 = local_20 + -1;
            } while (local_20 != 0);
          }
          break;
        case 1:
          iVar4 = local_8 + param_7 + -1;
          if (local_8 <= iVar4) {
            local_20 = (iVar4 - local_8) + 1;
            do {
              iVar1 = iVar1 + 1;
              if (param_5._3_1_ != 0) {
                if (param_5._3_1_ == 0xff) {
                  *(uint *)(*(int *)(param_1 + 0xc) + iVar1 * 4) = param_5;
                }
                else if (*(char *)(*(int *)(param_1 + 0xc) + 3 + iVar1 * 4) == -1) {
                  uVar5 = (uint)param_5._3_1_;
                  iVar4 = 0x100 - uVar5;
                  *(char *)(*(int *)(param_1 + 0xc) + 2 + iVar1 * 4) =
                       (char)(param_5._2_1_ * uVar5 +
                              (uint)*(byte *)(*(int *)(param_1 + 0xc) + 2 + iVar1 * 4) * iVar4 >> 8)
                  ;
                  *(char *)(*(int *)(param_1 + 0xc) + 1 + iVar1 * 4) =
                       (char)(param_5._1_1_ * uVar5 +
                              (uint)*(byte *)(*(int *)(param_1 + 0xc) + 1 + iVar1 * 4) * iVar4 >> 8)
                  ;
                  *(char *)(*(int *)(param_1 + 0xc) + iVar1 * 4) =
                       (char)((param_5 & 0xff) * uVar5 +
                              (uint)*(byte *)(*(int *)(param_1 + 0xc) + iVar1 * 4) * iVar4 >> 8);
                }
                else {
                  uVar5 = (uint)param_5._3_1_;
                  iVar4 = (int)((0xff - uVar5) *
                               (uint)*(byte *)(*(int *)(param_1 + 0xc) + 3 + iVar1 * 4)) / 0xff;
                  local_10 = iVar4 + uVar5;
                  *(char *)(*(int *)(param_1 + 0xc) + 2 + iVar1 * 4) =
                       (char)((int)(param_5._2_1_ * uVar5 +
                                   (uint)*(byte *)(*(int *)(param_1 + 0xc) + 2 + iVar1 * 4) * iVar4)
                             / local_10);
                  *(char *)(*(int *)(param_1 + 0xc) + 1 + iVar1 * 4) =
                       (char)((int)(param_5._1_1_ * uVar5 +
                                   (uint)*(byte *)(*(int *)(param_1 + 0xc) + 1 + iVar1 * 4) * iVar4)
                             / local_10);
                  *(char *)(*(int *)(param_1 + 0xc) + iVar1 * 4) =
                       (char)((int)((param_5 & 0xff) * uVar5 +
                                   (uint)*(byte *)(*(int *)(param_1 + 0xc) + iVar1 * 4) * iVar4) /
                             local_10);
                  *(undefined1 *)(*(int *)(param_1 + 0xc) + 3 + iVar1 * 4) = (undefined1)local_10;
                }
              }
              local_20 = local_20 + -1;
            } while (local_20 != 0);
          }
          break;
        case 2:
          iVar4 = local_8 + param_7 + -1;
          if (local_8 <= iVar4) {
            local_20 = (iVar4 - local_8) + 1;
            do {
              iVar1 = iVar1 + 1;
              if (param_5._3_1_ != 0) {
                if ((int)((uint)*(byte *)(*(int *)(param_1 + 0xc) + 3 + iVar1 * 4) -
                         (uint)param_5._3_1_) < 0) {
                  cVar3 = '\0';
                }
                else {
                  cVar3 = *(char *)(*(int *)(param_1 + 0xc) + 3 + iVar1 * 4) - param_5._3_1_;
                }
                *(char *)(*(int *)(param_1 + 0xc) + 3 + iVar1 * 4) = cVar3;
              }
              local_20 = local_20 + -1;
            } while (local_20 != 0);
          }
          break;
        case 3:
          iVar4 = local_8 + param_7 + -1;
          if (local_8 <= iVar4) {
            local_20 = (iVar4 - local_8) + 1;
            do {
              iVar1 = iVar1 + 1;
              if (param_5._3_1_ != 0) {
                if ((uint)*(byte *)(*(int *)(param_1 + 0xc) + 3 + iVar1 * 4) + (uint)param_5._3_1_ <
                    0x100) {
                  cVar3 = *(char *)(*(int *)(param_1 + 0xc) + 3 + iVar1 * 4) + param_5._3_1_;
                }
                else {
                  cVar3 = -1;
                }
                *(char *)(*(int *)(param_1 + 0xc) + 3 + iVar1 * 4) = cVar3;
              }
              local_20 = local_20 + -1;
            } while (local_20 != 0);
          }
          break;
        case 4:
          iVar4 = local_8 + param_7 + -1;
          if (local_8 <= iVar4) {
            local_20 = (iVar4 - local_8) + 1;
            do {
              iVar1 = iVar1 + 1;
              if (param_5._3_1_ != 0) {
                FUN_005142fc(*(undefined4 *)(*(int *)(param_1 + 0xc) + iVar1 * 4),&local_11,
                             &local_12,&local_17,&local_13);
                FUN_005142fc(param_5,&local_14,&local_15,&local_18,&local_16);
                uVar2 = FUN_00514518(local_14,local_12,local_13,local_17);
                *(undefined4 *)(*(int *)(param_1 + 0xc) + iVar1 * 4) = uVar2;
              }
              local_20 = local_20 + -1;
            } while (local_20 != 0);
          }
          break;
        case 5:
          iVar4 = local_8 + param_7 + -1;
          if (local_8 <= iVar4) {
            local_20 = (iVar4 - local_8) + 1;
            do {
              iVar1 = iVar1 + 1;
              if (param_5._3_1_ != 0) {
                iVar6 = (param_5._3_1_ >> 4) + 1;
                iVar4 = *(int *)(param_1 + 0xc);
                cVar3 = (char)iVar6;
                if ((int)((uint)*(byte *)(iVar4 + 2 + iVar1 * 4) - iVar6) < 0) {
                  local_24 = '\0';
                }
                else {
                  local_24 = *(char *)(*(int *)(param_1 + 0xc) + 2 + iVar1 * 4) - cVar3;
                }
                *(char *)(iVar4 + 2 + iVar1 * 4) = local_24;
                if ((int)((uint)*(byte *)(*(int *)(param_1 + 0xc) + 1 + iVar1 * 4) - iVar6) < 0) {
                  local_28 = '\0';
                }
                else {
                  local_28 = *(char *)(*(int *)(param_1 + 0xc) + 1 + iVar1 * 4) - cVar3;
                }
                *(char *)(iVar4 + 1 + iVar1 * 4) = local_28;
                if ((int)((uint)*(byte *)(*(int *)(param_1 + 0xc) + iVar1 * 4) - iVar6) < 0) {
                  cVar3 = '\0';
                }
                else {
                  cVar3 = *(char *)(*(int *)(param_1 + 0xc) + iVar1 * 4) - cVar3;
                }
                *(char *)(iVar4 + iVar1 * 4) = cVar3;
              }
              local_20 = local_20 + -1;
            } while (local_20 != 0);
          }
          break;
        case 6:
          iVar4 = local_8 + param_7 + -1;
          if (local_8 <= iVar4) {
            local_20 = (iVar4 - local_8) + 1;
            do {
              iVar1 = iVar1 + 1;
              if (param_5._3_1_ != 0) {
                iVar6 = (param_5._3_1_ >> 4) + 1;
                iVar4 = *(int *)(param_1 + 0xc);
                cVar3 = (char)iVar6;
                if ((uint)*(byte *)(iVar4 + 2 + iVar1 * 4) + iVar6 < 0x100) {
                  local_2c = *(char *)(*(int *)(param_1 + 0xc) + 2 + iVar1 * 4) + cVar3;
                }
                else {
                  local_2c = -1;
                }
                *(char *)(iVar4 + 2 + iVar1 * 4) = local_2c;
                if ((uint)*(byte *)(*(int *)(param_1 + 0xc) + 1 + iVar1 * 4) + iVar6 < 0x100) {
                  local_30 = *(char *)(*(int *)(param_1 + 0xc) + 1 + iVar1 * 4) + cVar3;
                }
                else {
                  local_30 = -1;
                }
                *(char *)(iVar4 + 1 + iVar1 * 4) = local_30;
                if ((uint)*(byte *)(*(int *)(param_1 + 0xc) + iVar1 * 4) + iVar6 < 0x100) {
                  cVar3 = *(char *)(*(int *)(param_1 + 0xc) + iVar1 * 4) + cVar3;
                }
                else {
                  cVar3 = -1;
                }
                *(char *)(iVar4 + iVar1 * 4) = cVar3;
              }
              local_20 = local_20 + -1;
            } while (local_20 != 0);
          }
          break;
        case 7:
          iVar4 = local_8 + param_7 + -1;
          if (local_8 <= iVar4) {
            local_20 = (iVar4 - local_8) + 1;
            do {
              iVar1 = iVar1 + 1;
              if (param_5._3_1_ != 0) {
                local_34 = (param_5._3_1_ >> 4) + 1;
                FUN_005142fc(*(undefined4 *)(*(int *)(param_1 + 0xc) + iVar1 * 4),&local_11,
                             &local_12,&local_17,&local_13);
                if (local_12 != 0) {
                  if ((uint)local_12 + local_34 < 0x100) {
                    local_34 = local_34 + (uint)local_12;
                  }
                  else {
                    local_34 = 0xff;
                  }
                  uVar2 = FUN_00514518(local_11,local_34,local_13,local_17);
                  *(undefined4 *)(*(int *)(param_1 + 0xc) + iVar1 * 4) = uVar2;
                }
              }
              local_20 = local_20 + -1;
            } while (local_20 != 0);
          }
        }
        local_c = local_c + 1;
        local_1c = local_1c + -1;
      } while (local_1c != 0);
    }
  }
  return;
}
