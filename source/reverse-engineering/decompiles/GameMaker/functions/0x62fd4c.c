// rea decompile_all
// name: FUN_0062fd4c
// address: 0x62fd4c
// body: available
// range: 0x62fd4c-0x630031 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0062ff78) */
/* WARNING: Removing unreachable block (ram,0x0062ff89) */

void FUN_0062fd4c(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;

  uVar1 = DAT_0078a0e8;
  iVar6 = param_5;
  if (param_2 < param_5) {
    iVar6 = param_2;
  }
  iVar6 = (iVar6 - DAT_0078a0ec) + -2;
  if (iVar6 < 0) {
    iVar6 = 0;
  }
  iVar2 = param_4;
  if (param_3 < param_4) {
    iVar2 = param_3;
  }
  local_14 = (iVar2 - DAT_0078a0ec) + -2;
  if (local_14 < 0) {
    local_14 = 0;
  }
  local_3c = param_2;
  if (param_2 <= param_5) {
    local_3c = param_5;
  }
  local_40 = local_3c + DAT_0078a0ec + 2;
  if (*(int *)(param_1 + 4) < local_40) {
    local_40 = *(int *)(param_1 + 4);
  }
  local_44 = param_3;
  if (param_3 <= param_4) {
    local_44 = param_4;
  }
  local_48 = local_44 + DAT_0078a0ec + 2;
  if (*(int *)(param_1 + 8) < local_48) {
    local_48 = *(int *)(param_1 + 8);
  }
  local_1c = DAT_0078a0e4;
  if (DAT_0078a0ec == 1) {
    local_1c = CONCAT13((byte)(DAT_0078a0e4 >> 0x19),(int3)DAT_0078a0e4);
  }
  if (local_14 <= local_48 + -1) {
    local_34 = ((local_48 + -1) - local_14) + 1;
    do {
      iVar2 = FUN_00462be8(DAT_0077f0e4,local_14 * 2);
      iVar3 = FUN_00462be8(DAT_0077f0e4,local_14 * 2 + 1);
      if (iVar6 <= local_40 + -1) {
        local_38 = ((local_40 + -1) - iVar6) + 1;
        iVar8 = iVar6;
        do {
          iVar5 = 0;
          iVar7 = 0;
          if (*(int *)(iVar2 + iVar8 * 8) == 0xff0000) {
            iVar5 = 1;
          }
          else if (*(int *)(iVar2 + iVar8 * 8) == 0xff00) {
            iVar7 = 1;
          }
          if (*(int *)(iVar2 + 4 + iVar8 * 8) == 0xff0000) {
            iVar5 = iVar5 + 1;
          }
          else if (*(int *)(iVar2 + 4 + iVar8 * 8) == 0xff00) {
            iVar7 = iVar7 + 1;
          }
          if (*(int *)(iVar3 + iVar8 * 8) == 0xff0000) {
            iVar5 = iVar5 + 1;
          }
          else if (*(int *)(iVar3 + iVar8 * 8) == 0xff00) {
            iVar7 = iVar7 + 1;
          }
          if (*(int *)(iVar3 + 4 + iVar8 * 8) == 0xff0000) {
            iVar5 = iVar5 + 1;
          }
          else if (*(int *)(iVar3 + 4 + iVar8 * 8) == 0xff00) {
            iVar7 = iVar7 + 1;
          }
          if ((iVar5 != 0) || (iVar7 != 0)) {
            local_18 = CONCAT13((char)((int)((local_1c >> 0x18) * iVar5) >> 2) +
                                (char)((int)((uVar1 >> 0x18) * iVar7) >> 2),
                                CONCAT21(CONCAT11((char)(((local_1c >> 0x10 & 0xff) * iVar5) /
                                                        (uint)(iVar7 + iVar5)) +
                                                  (char)(((uVar1 >> 0x10 & 0xff) * iVar7) /
                                                        (uint)(iVar7 + iVar5)),
                                                  (char)(((local_1c >> 8 & 0xff) * iVar5) /
                                                        (uint)(iVar7 + iVar5)) +
                                                  (char)(((uVar1 >> 8 & 0xff) * iVar7) /
                                                        (uint)(iVar7 + iVar5))),
                                         (char)(((local_1c & 0xff) * iVar5) / (uint)(iVar7 + iVar5))
                                         + (char)(((uVar1 & 0xff) * iVar7) / (uint)(iVar7 + iVar5)))
                               );
            if (((uint)(iVar7 + iVar5) < 4) && (DAT_0078a0f0 == 0)) {
              uVar4 = FUN_005a58cc(*(undefined4 *)
                                    (*(int *)(param_1 + 0xc) +
                                    (*(int *)(param_1 + 4) * local_14 + iVar8) * 4),local_18,1);
              *(undefined4 *)
               (*(int *)(param_1 + 0xc) + (*(int *)(param_1 + 4) * local_14 + iVar8) * 4) = uVar4;
            }
            else {
              uVar4 = FUN_005a58cc(*(undefined4 *)
                                    (*(int *)(param_1 + 0xc) +
                                    (*(int *)(param_1 + 4) * local_14 + iVar8) * 4),local_18,
                                   DAT_0078a0f0);
              *(undefined4 *)
               (*(int *)(param_1 + 0xc) + (*(int *)(param_1 + 4) * local_14 + iVar8) * 4) = uVar4;
            }
          }
          iVar8 = iVar8 + 1;
          local_38 = local_38 + -1;
        } while (local_38 != 0);
      }
      local_14 = local_14 + 1;
      local_34 = local_34 + -1;
    } while (local_34 != 0);
  }
  return;
}
