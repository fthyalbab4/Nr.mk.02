// rea decompile_all
// name: FUN_005176f4
// address: 0x5176f4
// body: available
// range: 0x5176f4-0x51795e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005176f4(int param_1,int *param_2,int param_3,char param_4,int param_5,int param_6,
                 undefined4 param_7,undefined4 param_8,int param_9,int param_10,int param_11)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_10;

  if (param_2 != (int *)0x0) {
    cVar1 = FUN_00463224(param_2);
    if ((((cVar1 == '\a') && (0 < param_6)) && (0 < param_5)) && ((0 < param_10 && (0 < param_9))))
    {
      if ((param_6 == param_10) && (param_9 == param_5)) {
        FUN_00517470(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(short)param_11
                    );
      }
      else {
        iVar7 = param_9 + param_11 + -1;
        if (param_11 <= iVar7) {
          local_40 = (iVar7 - param_11) + 1;
          local_10 = param_11;
          do {
            if (-1 < local_10) {
              iVar7 = (**(code **)(*param_2 + 0x24))();
              if (local_10 < iVar7) {
                iVar7 = FUN_004102e4();
                if ((-1 < iVar7) && (iVar7 < *(int *)(param_1 + 8))) {
                  iVar2 = FUN_004632a8(param_2,local_10);
                  iVar3 = param_3 + param_10 + -1;
                  if (param_3 <= iVar3) {
                    local_44 = (iVar3 - param_3) + 1;
                    iVar3 = param_3;
                    do {
                      if (-1 < iVar3) {
                        iVar4 = (**(code **)(*param_2 + 0x30))();
                        if (iVar3 < iVar4) {
                          iVar4 = FUN_004102e4();
                          if ((-1 < iVar4) && (iVar4 < *(int *)(param_1 + 4))) {
                            iVar4 = iVar4 + iVar7 * *(int *)(param_1 + 4);
                            if (param_4 == '\0') {
                              *(undefined4 *)(iVar2 + iVar3 * 4) =
                                   *(undefined4 *)(*(int *)(param_1 + 0xc) + iVar4 * 4);
                            }
                            else {
                              cVar1 = *(char *)(*(int *)(param_1 + 0xc) + 3 + iVar4 * 4);
                              if (cVar1 != '\0') {
                                if (cVar1 == -1) {
                                  *(undefined4 *)(iVar2 + iVar3 * 4) =
                                       *(undefined4 *)(*(int *)(param_1 + 0xc) + iVar4 * 4);
                                }
                                else {
                                  uVar5 = (uint)*(byte *)(*(int *)(param_1 + 0xc) + 3 + iVar4 * 4);
                                  iVar6 = 0x100 - uVar5;
                                  *(char *)(iVar2 + 2 + iVar3 * 4) =
                                       (char)(*(byte *)(*(int *)(param_1 + 0xc) + 2 + iVar4 * 4) *
                                              uVar5 + (uint)*(byte *)(iVar2 + 2 + iVar3 * 4) * iVar6
                                             >> 8);
                                  *(char *)(iVar2 + 1 + iVar3 * 4) =
                                       (char)(*(byte *)(*(int *)(param_1 + 0xc) + 1 + iVar4 * 4) *
                                              uVar5 + (uint)*(byte *)(iVar2 + 1 + iVar3 * 4) * iVar6
                                             >> 8);
                                  *(char *)(iVar2 + iVar3 * 4) =
                                       (char)(*(byte *)(*(int *)(param_1 + 0xc) + iVar4 * 4) * uVar5
                                              + (uint)*(byte *)(iVar2 + iVar3 * 4) * iVar6 >> 8);
                                  *(undefined1 *)(iVar2 + 3 + iVar3 * 4) = 0xff;
                                }
                              }
                            }
                          }
                        }
                      }
                      iVar3 = iVar3 + 1;
                      local_44 = local_44 + -1;
                    } while (local_44 != 0);
                  }
                }
              }
            }
            local_10 = local_10 + 1;
            local_40 = local_40 + -1;
          } while (local_40 != 0);
        }
      }
    }
  }
  return;
}
