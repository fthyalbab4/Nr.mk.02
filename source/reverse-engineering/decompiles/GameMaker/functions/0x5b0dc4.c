// rea decompile_all
// name: FUN_005b0dc4
// address: 0x5b0dc4
// body: available
// range: 0x5b0dc4-0x5b0fa0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005b0dc4(int param_1,undefined4 param_2,int param_3,int param_4,char param_5,char param_6,
                 char param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_1c;
  int local_18;
  int local_14;

  if (param_1 != 0) {
    iVar1 = FUN_00701cf4(&DAT_00700d94,1,param_1);
    if (param_6 != '\0') {
      FUN_00702dfc(param_1,*(undefined4 *)PTR_DAT_007819d0,0);
    }
    local_24 = *(int *)(param_1 + 8);
    if (-1 < local_24 + -1) {
      local_14 = 0;
      do {
        local_28 = *(int *)(param_1 + 4);
        if (-1 < local_28 + -1) {
          iVar4 = 0;
          do {
            local_1c = 0;
            local_18 = 0;
            iVar2 = local_14 - param_4;
            if (iVar2 < 0) {
              iVar2 = 0;
            }
            iVar3 = *(int *)(iVar1 + 8) + -1;
            if (local_14 + param_4 <= iVar3) {
              iVar3 = local_14 + param_4;
            }
            if (iVar2 <= iVar3) {
              local_2c = (iVar3 - iVar2) + 1;
              do {
                iVar3 = iVar4 - param_4;
                if (iVar3 < 0) {
                  iVar3 = 0;
                }
                iVar5 = *(int *)(iVar1 + 4) + -1;
                if (param_4 + iVar4 <= iVar5) {
                  iVar5 = param_4 + iVar4;
                }
                if (iVar3 <= iVar5) {
                  local_30 = (iVar5 - iVar3) + 1;
                  do {
                    if ((iVar2 - local_14) * (iVar2 - local_14) + (iVar3 - iVar4) * (iVar3 - iVar4)
                        <= param_4 * param_4) {
                      if (param_3 < (int)(uint)*(byte *)(*(int *)(iVar1 + 0xc) + 3 +
                                                        (*(int *)(iVar1 + 4) * iVar2 + iVar3) * 4))
                      {
                        local_18 = local_18 + 1;
                      }
                      else {
                        local_1c = local_1c + 1;
                      }
                    }
                    iVar3 = iVar3 + 1;
                    local_30 = local_30 + -1;
                  } while (local_30 != 0);
                }
                iVar2 = iVar2 + 1;
                local_2c = local_2c + -1;
              } while (local_2c != 0);
            }
            if (((param_7 != '\0') &&
                (param_3 < (int)(uint)*(byte *)(*(int *)(iVar1 + 0xc) + 3 +
                                               (*(int *)(iVar1 + 4) * local_14 + iVar4) * 4))) &&
               (0 < local_1c)) {
              *(undefined4 *)
               (*(int *)(param_1 + 0xc) + (*(int *)(param_1 + 4) * local_14 + iVar4) * 4) = param_2;
            }
            if (((param_7 == '\0') &&
                ((int)(uint)*(byte *)(*(int *)(iVar1 + 0xc) + 3 +
                                     (*(int *)(iVar1 + 4) * local_14 + iVar4) * 4) <= param_3)) &&
               (0 < local_18)) {
              *(undefined4 *)
               (*(int *)(param_1 + 0xc) + (*(int *)(param_1 + 4) * local_14 + iVar4) * 4) = param_2;
            }
            iVar4 = iVar4 + 1;
            local_28 = local_28 + -1;
          } while (local_28 != 0);
        }
        local_14 = local_14 + 1;
        local_24 = local_24 + -1;
      } while (local_24 != 0);
    }
    if (param_5 != '\0') {
      FUN_005b0b94(param_1);
    }
    FUN_00405a7c(iVar1);
  }
  return;
}
