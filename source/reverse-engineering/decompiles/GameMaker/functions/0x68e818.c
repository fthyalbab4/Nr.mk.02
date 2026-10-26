// rea decompile_all
// name: FUN_0068e818
// address: 0x68e818
// body: available
// range: 0x68e818-0x68ef91 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x68e83d (push 0x68ef92 followed by fs-segment stack chaining); handler 0x68ef92 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0068e818(int param_1,undefined4 param_2,int *param_3)

{
  double dVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  undefined4 uVar9;
  undefined4 *in_FS_OFFSET;
  undefined2 uVar10;
  undefined2 uVar11;
  undefined4 uStack_c0;
  undefined1 *puStack_bc;
  undefined1 *puStack_b8;
  undefined1 local_a8 [16];
  int local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  char local_42;
  char local_41;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  int local_2c;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  undefined4 local_8;

  puStack_b8 = &stack0xfffffffc;
  local_5c = *param_3;
  local_58 = param_3[1];
  local_54 = param_3[2];
  local_50 = param_3[3];
  puStack_bc = &LAB_0068ef92;
  uStack_c0 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_c0;
  local_8 = param_2;
  local_14 = FUN_00410538();
  iVar5 = FUN_00410538();
  local_18 = FUN_00410538();
  local_1c = FUN_00410538();
  *(int *)(param_1 + 0x169c) = *(int *)(param_1 + 0x169c) + 1;
  if ((*(char *)(param_1 + 0x162f) == '\0') &&
     (*(int *)(*(int *)(param_1 + 0x38c) + 0x2d4) != *(int *)(param_1 + 0x3c8))) {
    local_41 = '\0';
  }
  else {
    local_41 = '\x01';
  }
  local_42 = *(char *)(param_1 + 0x1630);
  iVar6 = FUN_00409a18(*(undefined4 *)(param_1 + 0x16a0));
  if (-1 < iVar6 + -1) {
    local_24 = 0;
    local_48 = iVar6;
    do {
      FUN_00692118(*(undefined4 *)(*(int *)(param_1 + 0x16a0) + 4 + local_24 * 8));
      local_24 = local_24 + 1;
      local_48 = local_48 + -1;
    } while (local_48 != 0);
  }
  local_20 = iVar5;
  if (iVar5 < local_1c) {
    do {
      iVar5 = local_14;
      if (local_14 < local_18) {
        do {
          if (((((-1 < iVar5) && (iVar5 < *(int *)(param_1 + 0x168c))) && (-1 < local_20)) &&
              ((local_20 < *(int *)(param_1 + 0x1690) &&
               (local_c = local_20 * *(int *)(param_1 + 0x168c) + iVar5,
               *(int *)(*(int *)(param_1 + 0x16a8) + local_c * 4) != 0)))) &&
             (iVar6 = *(int *)(*(int *)(*(int *)(param_1 + 0x16a8) + local_c * 4) + 8),
             -1 < iVar6 + -1)) {
            local_24 = 0;
            local_48 = iVar6;
            do {
              local_2c = FUN_0069190c(*(undefined4 *)(*(int *)(param_1 + 0x16a8) + local_c * 4),
                                      local_24);
              FUN_00691c04(*(undefined4 *)
                            (*(int *)(param_1 + 0x16a0) + 4 +
                            *(int *)(*(int *)(param_1 + 0x16a4) + local_2c * 0x10 + 4) * 8),local_2c
                          );
              local_24 = local_24 + 1;
              local_48 = local_48 + -1;
            } while (local_48 != 0);
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < local_18);
      }
      local_20 = local_20 + 1;
    } while (local_20 < local_1c);
  }
  iVar5 = FUN_00462a64(local_8);
  FUN_0045b850(*(undefined4 *)(iVar5 + 0x44),0xff);
  iVar5 = FUN_00462a64(local_8);
  FUN_0045b954(*(undefined4 *)(iVar5 + 0x44),10);
  iVar5 = FUN_00462a64(local_8);
  FUN_0045b9a4(*(undefined4 *)(iVar5 + 0x44),5);
  iVar5 = FUN_00462a64(local_8);
  FUN_0045bc24(*(undefined4 *)(iVar5 + 0x48),0xff);
  local_48 = FUN_00409a18(*(undefined4 *)(param_1 + 0x16a0));
  if (-1 < local_48 + -1) {
    local_24 = 0;
    do {
      local_4c = *(int *)(*(int *)(*(int *)(param_1 + 0x16a0) + 4 + local_24 * 8) + 8);
      if (-1 < local_4c + -1) {
        local_2c = 0;
        do {
          iVar5 = FUN_0069190c(*(undefined4 *)(*(int *)(param_1 + 0x16a0) + 4 + local_24 * 8),
                               local_2c);
          piVar8 = (int *)(*(int *)(param_1 + 0x16a4) + iVar5 * 0x10);
          if (*(int *)(param_1 + 0x169c) != *piVar8) {
            *piVar8 = *(int *)(param_1 + 0x169c);
            if ((local_41 == '\0') || (piVar8[3] == -1)) {
              if (((local_42 != '\0') ||
                  ((*(int *)(*(int *)(param_1 + 0x38c) + 0x2d4) == *(int *)(param_1 + 0x3d8) &&
                   (*(int *)(*(int *)(param_1 + 0x16a0) + local_24 * 8) ==
                    *(int *)(param_1 + 0x161c))))) && (piVar8[2] != -1)) {
                piVar8 = (int *)(*(int *)(*(int *)(param_1 + 0x61c) + 0x2fc) + piVar8[2] * 0x28);
                uVar9 = FUN_0064e048(piVar8[2]);
                dVar1 = (double)((float)*piVar8 * *(float *)(param_1 + 0x165c) - (float)local_5c);
                uVar10 = SUB82(dVar1,0);
                uVar11 = (undefined2)((ulonglong)dVar1 >> 0x20);
                dVar1 = (double)((float)piVar8[1] * *(float *)(param_1 + 0x165c) - (float)local_58);
                uVar3 = SUB82(dVar1,0);
                uVar4 = (undefined2)((ulonglong)dVar1 >> 0x20);
                uVar2 = 0;
                FUN_00438c38(piVar8[3],piVar8[4],piVar8[3] + piVar8[5],local_a8,
                             piVar8[4] + piVar8[6]);
                FUN_0062dd24(uVar9,local_8,0,*(undefined4 *)(param_1 + 0x165c),local_a8,uVar2,uVar3,
                             uVar4,uVar10,uVar11);
              }
            }
            else {
              piVar8 = (int *)(*(int *)(*(int *)(param_1 + 0x61c) + 0x2f4) + piVar8[3] * 0x18);
              iVar5 = FUN_0062cd94(piVar8[2]);
              if ((iVar5 != 0) &&
                 ((*(char *)(iVar5 + 9) != '\0' || (*(char *)(param_1 + 0x1632) != '\0')))) {
                local_10 = FUN_006f5b30(*(undefined4 *)(iVar5 + 4));
                if ((local_10 == 0) && (*(char *)(param_1 + 0x1634) != '\0')) {
                  local_34 = (float)*piVar8 * *(float *)(param_1 + 0x165c) - (float)local_5c;
                  local_38 = (float)piVar8[1] * *(float *)(param_1 + 0x165c) - (float)local_58;
                  piVar7 = (int *)FUN_0045f64c(*(undefined4 *)(*(int *)(param_1 + 0x494) + 0x1b0));
                  local_98 = (**(code **)(*piVar7 + 0x30))();
                  local_3c = (float)local_98 * *(float *)(param_1 + 0x165c);
                  piVar7 = (int *)FUN_0045f64c(*(undefined4 *)(*(int *)(param_1 + 0x494) + 0x1b0));
                  local_98 = (**(code **)(*piVar7 + 0x24))();
                  local_40 = (float)local_98 * *(float *)(param_1 + 0x165c);
                  local_94 = FUN_00410538();
                  local_8c = FUN_00410538();
                  local_90 = FUN_00410538();
                  local_88 = FUN_00410538();
                  uVar2 = FUN_0045f64c(*(undefined4 *)(*(int *)(param_1 + 0x494) + 0x1b0));
                  piVar7 = (int *)FUN_00462a64(local_8);
                  (**(code **)(*piVar7 + 0x80))(piVar7,&local_94,uVar2);
                  if ((*(char *)(param_1 + 0x1635) != '\0') && (piVar8[4] != 0)) {
                    piVar7 = (int *)FUN_0045f64c(*(undefined4 *)(*(int *)(param_1 + 0x494) + 0x1b0))
                    ;
                    local_98 = (**(code **)(*piVar7 + 0x30))();
                    local_98 = local_98 + *piVar8;
                    FUN_00410538();
                    piVar7 = (int *)FUN_0045f64c(*(undefined4 *)(*(int *)(param_1 + 0x494) + 0x1b0))
                    ;
                    local_98 = (**(code **)(*piVar7 + 0x24))();
                    local_98 = local_98 + piVar8[1];
                    uVar2 = FUN_00410538();
                    uVar3 = FUN_00410538();
                    uVar4 = FUN_00410538();
                    piVar8 = (int *)FUN_00462a64(local_8);
                    (**(code **)(*piVar8 + 0x74))(piVar8,uVar4,uVar3,uVar2);
                  }
                }
                else if (local_10 != 0) {
                  uVar2 = FUN_00410538();
                  uVar10 = 0;
                  uVar4 = 0;
                  uVar3 = (undefined2)*(undefined4 *)(param_1 + 0x165c);
                  uVar9 = FUN_00410538();
                  FUN_005b3504(local_10,local_8,uVar9,uVar3,uVar4,uVar10,uVar2);
                  if ((*(char *)(param_1 + 0x1635) != '\0') && (piVar8[4] != 0)) {
                    local_98 = FUN_005b2ec4(local_10);
                    local_98 = local_98 + (*piVar8 - *(int *)(local_10 + 8));
                    FUN_00410538();
                    local_98 = FUN_005b2edc(local_10);
                    local_98 = local_98 + (piVar8[1] - *(int *)(local_10 + 0xc));
                    uVar2 = FUN_00410538();
                    local_98 = piVar8[1] - *(int *)(local_10 + 0xc);
                    uVar3 = FUN_00410538();
                    local_98 = *piVar8 - *(int *)(local_10 + 8);
                    uVar4 = FUN_00410538();
                    piVar8 = (int *)FUN_00462a64(local_8);
                    (**(code **)(*piVar8 + 0x74))(piVar8,uVar4,uVar3,uVar2);
                  }
                }
              }
            }
          }
          local_2c = local_2c + 1;
          local_4c = local_4c + -1;
        } while (local_4c != 0);
      }
      local_24 = local_24 + 1;
      local_48 = local_48 + -1;
    } while (local_48 != 0);
  }
  *in_FS_OFFSET = uStack_c0;
  return;
}
