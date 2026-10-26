// rea decompile_all
// name: FUN_005f7e58
// address: 0x5f7e58
// body: available
// range: 0x5f7e58-0x5f84a2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005f7e58(void)

{
  undefined4 uVar1;
  undefined *puVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int local_28;
  int local_24;
  int local_1c;

  puVar2 = PTR_DAT_0068939c;
  local_1c = **(int **)(PTR_DAT_00688df4 + 0x1c);
  if (-1 < local_1c + -1) {
    local_24 = 0;
    do {
      uVar1 = *(undefined4 *)(**(int **)(PTR_DAT_00688e68 + 0x1c) + local_24 * 4);
      iVar4 = FUN_0060aa04(*(undefined4 *)puVar2,uVar1);
      if (-1 < iVar4 + -1) {
        local_28 = 0;
        do {
          iVar5 = FUN_0060aa2c(*(undefined4 *)puVar2,uVar1,local_28);
          if (*(char *)(iVar5 + 0x108) == '\0') {
            cVar3 = FUN_005798a4(*(undefined4 *)(iVar5 + 8));
            if (cVar3 == '\0') {
              cVar3 = FUN_005798a4(*(undefined4 *)(iVar5 + 0x44));
              if (cVar3 == '\0') {
                if ((((*(double *)(iVar5 + 0x50) < 0.0) ||
                     ((double)*(int *)(*(int *)puVar2 + 0xc) < *(double *)(iVar5 + 0x50))) ||
                    (*(double *)(iVar5 + 0x58) < 0.0)) ||
                   ((double)*(int *)(*(int *)puVar2 + 0x10) < *(double *)(iVar5 + 0x58))) {
                  FUN_0058a738(iVar5,iVar5,7,0);
                }
                goto LAB_005f7f75;
              }
            }
            if (((*(int *)(iVar5 + 0xc0) < 0) ||
                (*(int *)(*(int *)puVar2 + 0xc) < *(int *)(iVar5 + 0xb8))) ||
               ((*(int *)(iVar5 + 0xc4) < 0 ||
                (*(int *)(*(int *)puVar2 + 0x10) < *(int *)(iVar5 + 0xbc))))) {
              FUN_0058a738(iVar5,iVar5,7,0);
            }
          }
LAB_005f7f75:
          local_28 = local_28 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      local_24 = local_24 + 1;
      local_1c = local_1c + -1;
    } while (local_1c != 0);
  }
  local_1c = *(int *)(*(int *)(PTR_DAT_00688df4 + 0x1c) + 4);
  if (-1 < local_1c + -1) {
    local_24 = 0;
    do {
      uVar1 = *(undefined4 *)(*(int *)(*(int *)(PTR_DAT_00688e68 + 0x1c) + 4) + local_24 * 4);
      iVar4 = FUN_0060aa04(*(undefined4 *)puVar2,uVar1);
      if (-1 < iVar4 + -1) {
        local_28 = 0;
        do {
          iVar5 = FUN_0060aa2c(*(undefined4 *)puVar2,uVar1,local_28);
          if (*(char *)(iVar5 + 0x108) == '\0') {
            cVar3 = FUN_005798a4(*(undefined4 *)(iVar5 + 8));
            if (cVar3 == '\0') {
              cVar3 = FUN_005798a4(*(undefined4 *)(iVar5 + 0x44));
              if (cVar3 == '\0') {
                if (((*(double *)(iVar5 + 0x50) < 0.0) ||
                    ((double)*(int *)(*(int *)puVar2 + 0xc) < *(double *)(iVar5 + 0x50))) ||
                   ((*(double *)(iVar5 + 0x58) < 0.0 ||
                    ((double)*(int *)(*(int *)puVar2 + 0x10) < *(double *)(iVar5 + 0x58))))) {
                  FUN_0058a738(iVar5,iVar5,7,1);
                }
                goto LAB_005f809f;
              }
            }
            if ((((*(int *)(iVar5 + 0xb8) < 0) ||
                 (*(int *)(*(int *)puVar2 + 0xc) < *(int *)(iVar5 + 0xc0))) ||
                (*(int *)(iVar5 + 0xbc) < 0)) ||
               (*(int *)(*(int *)puVar2 + 0x10) < *(int *)(iVar5 + 0xc4))) {
              FUN_0058a738(iVar5,iVar5,7,1);
            }
          }
LAB_005f809f:
          local_28 = local_28 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      local_24 = local_24 + 1;
      local_1c = local_1c + -1;
    } while (local_1c != 0);
  }
  iVar4 = 0;
  do {
    if (*(char *)(*(int *)puVar2 + 0x40) != '\0') {
      iVar5 = FUN_00608fd8(*(undefined4 *)puVar2,iVar4);
      if ((*(char *)(iVar5 + 4) != '\0') &&
         (local_1c = *(int *)(*(int *)(PTR_DAT_00688df4 + 0x1c) + (iVar4 + 0x28) * 4),
         -1 < local_1c + -1)) {
        local_24 = 0;
        do {
          uVar1 = *(undefined4 *)
                   (*(int *)(*(int *)(PTR_DAT_00688e68 + 0x1c) + (iVar4 + 0x28) * 4) + local_24 * 4)
          ;
          iVar5 = FUN_0060aa04(*(undefined4 *)puVar2,uVar1);
          if (-1 < iVar5 + -1) {
            local_28 = 0;
            do {
              iVar6 = FUN_0060aa2c(*(undefined4 *)puVar2,uVar1,local_28);
              if (*(char *)(iVar6 + 0x108) == '\0') {
                cVar3 = FUN_005798a4(*(undefined4 *)(iVar6 + 8));
                if (cVar3 == '\0') {
                  cVar3 = FUN_005798a4(*(undefined4 *)(iVar6 + 0x44));
                  if (cVar3 == '\0') {
                    iVar7 = FUN_00608fd8(*(undefined4 *)puVar2,iVar4);
                    if ((double)*(int *)(iVar7 + 8) <= *(double *)(iVar6 + 0x50)) {
                      iVar7 = FUN_00608fd8(*(undefined4 *)puVar2,iVar4);
                      iVar7 = *(int *)(iVar7 + 8);
                      iVar8 = FUN_00608fd8(*(undefined4 *)puVar2,iVar4);
                      if (*(double *)(iVar6 + 0x50) <= (double)(iVar7 + *(int *)(iVar8 + 0x10))) {
                        iVar7 = FUN_00608fd8(*(undefined4 *)puVar2,iVar4);
                        if ((double)*(int *)(iVar7 + 0xc) <= *(double *)(iVar6 + 0x58)) {
                          iVar7 = FUN_00608fd8(*(undefined4 *)puVar2,iVar4);
                          iVar7 = *(int *)(iVar7 + 0xc);
                          iVar8 = FUN_00608fd8(*(undefined4 *)puVar2,iVar4);
                          if (*(double *)(iVar6 + 0x58) <= (double)(iVar7 + *(int *)(iVar8 + 0x14)))
                          goto LAB_005f8287;
                        }
                      }
                    }
                    FUN_0058a738(iVar6,iVar6,7,iVar4 + 0x28);
                    goto LAB_005f8287;
                  }
                }
                iVar7 = FUN_00608fd8(*(undefined4 *)puVar2,iVar4);
                if (*(int *)(iVar7 + 8) <= *(int *)(iVar6 + 0xc0)) {
                  iVar7 = FUN_00608fd8(*(undefined4 *)puVar2,iVar4);
                  iVar7 = *(int *)(iVar7 + 8);
                  iVar8 = FUN_00608fd8(*(undefined4 *)puVar2,iVar4);
                  if (*(int *)(iVar6 + 0xb8) <= iVar7 + *(int *)(iVar8 + 0x10)) {
                    iVar7 = FUN_00608fd8(*(undefined4 *)puVar2,iVar4);
                    if (*(int *)(iVar7 + 0xc) <= *(int *)(iVar6 + 0xc4)) {
                      iVar7 = FUN_00608fd8(*(undefined4 *)puVar2,iVar4);
                      iVar7 = *(int *)(iVar7 + 0xc);
                      iVar8 = FUN_00608fd8(*(undefined4 *)puVar2,iVar4);
                      if (*(int *)(iVar6 + 0xbc) <= iVar7 + *(int *)(iVar8 + 0x14))
                      goto LAB_005f8287;
                    }
                  }
                }
                FUN_0058a738(iVar6,iVar6,7,iVar4 + 0x28);
              }
LAB_005f8287:
              local_28 = local_28 + 1;
              iVar5 = iVar5 + -1;
            } while (iVar5 != 0);
          }
          local_24 = local_24 + 1;
          local_1c = local_1c + -1;
        } while (local_1c != 0);
      }
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 != 8);
  iVar4 = 0;
  do {
    if (*(char *)(*(int *)puVar2 + 0x40) != '\0') {
      iVar5 = FUN_00608fd8(*(undefined4 *)puVar2,iVar4);
      if ((*(char *)(iVar5 + 4) != '\0') &&
         (local_1c = *(int *)(*(int *)(PTR_DAT_00688df4 + 0x1c) + (iVar4 + 0x32) * 4),
         -1 < local_1c + -1)) {
        local_24 = 0;
        do {
          uVar1 = *(undefined4 *)
                   (*(int *)(*(int *)(PTR_DAT_00688e68 + 0x1c) + (iVar4 + 0x32) * 4) + local_24 * 4)
          ;
          iVar5 = FUN_0060aa04(*(undefined4 *)puVar2,uVar1);
          if (-1 < iVar5 + -1) {
            local_28 = 0;
            do {
              iVar6 = FUN_0060aa2c(*(undefined4 *)puVar2,uVar1,local_28);
              if (*(char *)(iVar6 + 0x108) == '\0') {
                cVar3 = FUN_005798a4(*(undefined4 *)(iVar6 + 8));
                if (cVar3 == '\0') {
                  cVar3 = FUN_005798a4(*(undefined4 *)(iVar6 + 0x44));
                  if (cVar3 == '\0') {
                    iVar7 = FUN_00608fd8(*(undefined4 *)puVar2,iVar4);
                    if ((double)*(int *)(iVar7 + 8) <= *(double *)(iVar6 + 0x50)) {
                      iVar7 = FUN_00608fd8(*(undefined4 *)puVar2,iVar4);
                      iVar7 = *(int *)(iVar7 + 8);
                      iVar8 = FUN_00608fd8(*(undefined4 *)puVar2,iVar4);
                      if (*(double *)(iVar6 + 0x50) <= (double)(iVar7 + *(int *)(iVar8 + 0x10))) {
                        iVar7 = FUN_00608fd8(*(undefined4 *)puVar2,iVar4);
                        if ((double)*(int *)(iVar7 + 0xc) <= *(double *)(iVar6 + 0x58)) {
                          iVar7 = FUN_00608fd8(*(undefined4 *)puVar2,iVar4);
                          iVar7 = *(int *)(iVar7 + 0xc);
                          iVar8 = FUN_00608fd8(*(undefined4 *)puVar2,iVar4);
                          if (*(double *)(iVar6 + 0x58) <= (double)(iVar7 + *(int *)(iVar8 + 0x14)))
                          goto LAB_005f8479;
                        }
                      }
                    }
                    FUN_0058a738(iVar6,iVar6,7,iVar4 + 0x32);
                    goto LAB_005f8479;
                  }
                }
                iVar7 = FUN_00608fd8(*(undefined4 *)puVar2,iVar4);
                if (*(int *)(iVar7 + 8) <= *(int *)(iVar6 + 0xb8)) {
                  iVar7 = FUN_00608fd8(*(undefined4 *)puVar2,iVar4);
                  iVar7 = *(int *)(iVar7 + 8);
                  iVar8 = FUN_00608fd8(*(undefined4 *)puVar2,iVar4);
                  if (*(int *)(iVar6 + 0xc0) <= iVar7 + *(int *)(iVar8 + 0x10)) {
                    iVar7 = FUN_00608fd8(*(undefined4 *)puVar2,iVar4);
                    if (*(int *)(iVar7 + 0xc) <= *(int *)(iVar6 + 0xbc)) {
                      iVar7 = FUN_00608fd8(*(undefined4 *)puVar2,iVar4);
                      iVar7 = *(int *)(iVar7 + 0xc);
                      iVar8 = FUN_00608fd8(*(undefined4 *)puVar2,iVar4);
                      if (*(int *)(iVar6 + 0xc4) <= iVar7 + *(int *)(iVar8 + 0x14))
                      goto LAB_005f8479;
                    }
                  }
                }
                FUN_0058a738(iVar6,iVar6,7,iVar4 + 0x32);
              }
LAB_005f8479:
              local_28 = local_28 + 1;
              iVar5 = iVar5 + -1;
            } while (iVar5 != 0);
          }
          local_24 = local_24 + 1;
          local_1c = local_1c + -1;
        } while (local_1c != 0);
      }
    }
    iVar4 = iVar4 + 1;
    if (iVar4 == 8) {
      return;
    }
  } while( true );
}
