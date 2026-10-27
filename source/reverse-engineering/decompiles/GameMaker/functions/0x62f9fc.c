// rea decompile_all
// name: FUN_0062f9fc
// address: 0x62f9fc
// body: available
// range: 0x62f9fc-0x62fd4b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0062f9fc(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  undefined4 local_20;
  undefined1 local_1c;
  int local_10;

  local_34 = param_2;
  if (param_5 <= param_2) {
    local_34 = param_5;
  }
  local_38 = (local_34 - DAT_0078a0ec) + -2;
  if (local_38 < 0) {
    local_38 = 0;
  }
  local_3c = param_3;
  if (param_4 <= param_3) {
    local_3c = param_4;
  }
  local_40 = (local_3c - DAT_0078a0ec) + -2;
  if (local_40 < 0) {
    local_40 = 0;
  }
  local_44 = param_2;
  if (param_2 <= param_5) {
    local_44 = param_5;
  }
  local_48 = local_44 + DAT_0078a0ec + 2;
  if (*(int *)(param_1 + 4) < local_48) {
    local_48 = *(int *)(param_1 + 4);
  }
  local_4c = param_3;
  if (param_3 <= param_4) {
    local_4c = param_4;
  }
  local_50 = local_4c + DAT_0078a0ec + 2;
  if (*(int *)(param_1 + 8) < local_50) {
    local_50 = *(int *)(param_1 + 8);
  }
  if (DAT_0078a0f0 == 1) {
    if (local_40 <= local_50 + -1) {
      local_2c = ((local_50 + -1) - local_40) + 1;
      local_10 = local_40;
      do {
        iVar7 = local_10 * *(int *)(param_1 + 4);
        iVar2 = FUN_00462be8(DAT_0077f0e4,local_10);
        if (local_38 <= local_48 + -1) {
          local_30 = ((local_48 + -1) - local_38) + 1;
          iVar8 = local_38;
          do {
            iVar1 = *(int *)(iVar2 + iVar8 * 4);
            if (iVar1 != 0) {
              if (iVar1 == 0xff0000) {
                local_20 = DAT_0078a0e4;
              }
              else {
                local_20 = DAT_0078a0e8;
              }
              if (local_20._3_1_ != 0) {
                if (local_20._3_1_ == 0xff) {
                  *(uint *)(*(int *)(param_1 + 0xc) + (iVar8 + iVar7) * 4) = local_20;
                }
                else {
                  iVar1 = iVar8 + iVar7;
                  if (*(char *)(*(int *)(param_1 + 0xc) + 3 + iVar1 * 4) == -1) {
                    uVar4 = (uint)local_20._3_1_;
                    iVar5 = 0x100 - uVar4;
                    *(char *)(*(int *)(param_1 + 0xc) + 2 + iVar1 * 4) =
                         (char)((uint)*(byte *)(*(int *)(param_1 + 0xc) + 2 + iVar1 * 4) * iVar5 +
                                local_20._2_1_ * uVar4 >> 8);
                    *(char *)(*(int *)(param_1 + 0xc) + 1 + iVar1 * 4) =
                         (char)((uint)*(byte *)(*(int *)(param_1 + 0xc) + 1 + iVar1 * 4) * iVar5 +
                                local_20._1_1_ * uVar4 >> 8);
                    *(char *)(*(int *)(param_1 + 0xc) + iVar1 * 4) =
                         (char)((uint)*(byte *)(*(int *)(param_1 + 0xc) + iVar1 * 4) * iVar5 +
                                (local_20 & 0xff) * uVar4 >> 8);
                  }
                  else {
                    uVar4 = (uint)local_20._3_1_;
                    iVar5 = (int)((uint)*(byte *)(*(int *)(param_1 + 0xc) + 3 + iVar1 * 4) *
                                 (0xff - uVar4)) / 0xff;
                    iVar6 = uVar4 + iVar5;
                    *(char *)(*(int *)(param_1 + 0xc) + 2 + iVar1 * 4) =
                         (char)((int)((uint)*(byte *)(*(int *)(param_1 + 0xc) + 2 + iVar1 * 4) *
                                      iVar5 + local_20._2_1_ * uVar4) / iVar6);
                    *(char *)(*(int *)(param_1 + 0xc) + 1 + iVar1 * 4) =
                         (char)((int)((uint)*(byte *)(*(int *)(param_1 + 0xc) + 1 + iVar1 * 4) *
                                      iVar5 + local_20._1_1_ * uVar4) / iVar6);
                    *(char *)(*(int *)(param_1 + 0xc) + iVar1 * 4) =
                         (char)((int)((uint)*(byte *)(*(int *)(param_1 + 0xc) + iVar1 * 4) * iVar5 +
                                     (local_20 & 0xff) * uVar4) / iVar6);
                    local_1c = (undefined1)iVar6;
                    *(undefined1 *)(*(int *)(param_1 + 0xc) + 3 + iVar1 * 4) = local_1c;
                  }
                }
              }
            }
            iVar8 = iVar8 + 1;
            local_30 = local_30 + -1;
          } while (local_30 != 0);
        }
        local_10 = local_10 + 1;
        local_2c = local_2c + -1;
      } while (local_2c != 0);
    }
  }
  else if (local_40 <= local_50 + -1) {
    local_2c = ((local_50 + -1) - local_40) + 1;
    local_10 = local_40;
    do {
      iVar2 = FUN_00462be8(DAT_0077f0e4,local_10);
      if (local_38 <= local_48 + -1) {
        local_30 = ((local_48 + -1) - local_38) + 1;
        iVar7 = local_38;
        do {
          iVar8 = *(int *)(iVar2 + iVar7 * 4);
          if (iVar8 != 0) {
            if (iVar8 == 0xff0000) {
              uVar3 = FUN_005a58cc(*(undefined4 *)
                                    (*(int *)(param_1 + 0xc) +
                                    (local_10 * *(int *)(param_1 + 4) + iVar7) * 4),DAT_0078a0e4,
                                   DAT_0078a0f0);
              *(undefined4 *)
               (*(int *)(param_1 + 0xc) + (local_10 * *(int *)(param_1 + 4) + iVar7) * 4) = uVar3;
            }
            else {
              uVar3 = FUN_005a58cc(*(undefined4 *)
                                    (*(int *)(param_1 + 0xc) +
                                    (local_10 * *(int *)(param_1 + 4) + iVar7) * 4),DAT_0078a0e8,
                                   DAT_0078a0f0);
              *(undefined4 *)
               (*(int *)(param_1 + 0xc) + (local_10 * *(int *)(param_1 + 4) + iVar7) * 4) = uVar3;
            }
          }
          iVar7 = iVar7 + 1;
          local_30 = local_30 + -1;
        } while (local_30 != 0);
      }
      local_10 = local_10 + 1;
      local_2c = local_2c + -1;
    } while (local_2c != 0);
  }
  return;
}
