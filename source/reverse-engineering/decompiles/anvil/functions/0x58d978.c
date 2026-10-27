// rea decompile_all
// name: FUN_0058d978
// address: 0x58d978
// body: available
// range: 0x58d978-0x58dde3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0058d978(int param_1)

{
  int iVar1;
  int iVar2;
  double dVar3;
  float fVar4;
  int iVar5;
  float10 in_ST0;
  float10 fVar6;
  float10 in_ST1;
  float10 in_ST2;
  float10 in_ST3;
  float10 in_ST4;
  float10 in_ST5;
  int local_8c;
  double local_84;
  double local_7c;
  double local_74;
  double local_6c;
  double local_64;
  double local_5c;
  double local_54;
  double local_4c;
  double local_44;
  double local_3c;
  double local_34;
  int local_2c;
  int local_28;
  int local_24;
  float10 local_20;
  int local_14;

  iVar1 = DAT_00686b30 + param_1 * 0x58;
  local_2c = *(int *)(iVar1 + 8);
  if (-1 < local_2c + -1) {
    local_8c = 0;
    do {
      iVar2 = *(int *)(iVar1 + 4) + local_8c * 0x68;
      local_28 = DAT_00686b28 + *(int *)(iVar2 + 4) * 0x120;
      *(undefined4 *)(iVar2 + 0x20) = *(undefined4 *)(iVar2 + 0x10);
      *(undefined4 *)(iVar2 + 0x24) = *(undefined4 *)(iVar2 + 0x14);
      *(undefined4 *)(iVar2 + 0x28) = *(undefined4 *)(iVar2 + 0x18);
      *(undefined4 *)(iVar2 + 0x2c) = *(undefined4 *)(iVar2 + 0x1c);
      *(double *)(iVar2 + 0x30) = *(double *)(iVar2 + 0x30) + *(double *)(local_28 + 0x68);
      if (*(double *)(iVar2 + 0x30) < 0.0) {
        *(undefined4 *)(iVar2 + 0x30) = 0;
        *(undefined4 *)(iVar2 + 0x34) = 0;
      }
      *(double *)(iVar2 + 0x38) = *(double *)(iVar2 + 0x38) + *(double *)(local_28 + 0x88);
      *(double *)(iVar2 + 0x40) = *(double *)(iVar2 + 0x40) + *(double *)(local_28 + 0xb8);
      local_4c = 0.0;
      local_44 = 0.0;
      if ((*(double *)(local_28 + 0x98) != 0.0) || (0 < *(int *)(iVar1 + 0x18))) {
        FUN_0058b540(&local_84,&local_7c);
        if (*(double *)(local_28 + 0x98) != 0.0) {
          FUN_0058b540(&local_74,&local_6c);
          local_84 = local_84 + local_74;
          local_7c = local_7c + local_6c;
        }
        if (-1 < *(int *)(iVar1 + 0x18) + -1) {
          iVar5 = 0;
          fVar6 = in_ST0;
          local_24 = *(int *)(iVar1 + 0x18);
          do {
            in_ST0 = fVar6;
            if (*(char *)(*(int *)(iVar1 + 0x14) + iVar5 * 0x30) != '\0') {
              local_64 = *(double *)(*(int *)(iVar1 + 0x14) + 8 + iVar5 * 0x30) -
                         *(double *)(iVar2 + 0x10);
              local_5c = *(double *)(*(int *)(iVar1 + 0x14) + 0x10 + iVar5 * 0x30) -
                         *(double *)(iVar2 + 0x18);
              local_20 = (float10)local_64 * (float10)local_64;
              in_ST0 = in_ST1;
              in_ST1 = in_ST2;
              in_ST2 = in_ST3;
              in_ST3 = in_ST4;
              in_ST4 = in_ST5;
              FUN_004048a8();
              local_54 = (double)fVar6;
              if ((((local_54 <= *(double *)(*(int *)(iVar1 + 0x14) + 0x20 + iVar5 * 0x30)) &&
                   (local_54 != 0.0)) &&
                  (*(double *)(*(int *)(iVar1 + 0x14) + 0x18 + iVar5 * 0x30) != 0.0)) &&
                 (*(double *)(*(int *)(iVar1 + 0x14) + 0x20 + iVar5 * 0x30) != 0.0)) {
                local_74 = (*(double *)(*(int *)(iVar1 + 0x14) + 0x18 + iVar5 * 0x30) * local_64) /
                           local_54;
                local_6c = (*(double *)(*(int *)(iVar1 + 0x14) + 0x18 + iVar5 * 0x30) * local_5c) /
                           local_54;
                if (*(int *)(*(int *)(iVar1 + 0x14) + 0x28 + iVar5 * 0x30) == 1) {
                  local_74 = ((*(double *)(*(int *)(iVar1 + 0x14) + 0x20 + iVar5 * 0x30) - local_54)
                             * local_74) / *(double *)(*(int *)(iVar1 + 0x14) + 0x20 + iVar5 * 0x30)
                  ;
                  local_6c = ((*(double *)(*(int *)(iVar1 + 0x14) + 0x20 + iVar5 * 0x30) - local_54)
                             * local_6c) / *(double *)(*(int *)(iVar1 + 0x14) + 0x20 + iVar5 * 0x30)
                  ;
                }
                if (*(int *)(*(int *)(iVar1 + 0x14) + 0x28 + iVar5 * 0x30) == 2) {
                  dVar3 = (*(double *)(*(int *)(iVar1 + 0x14) + 0x20 + iVar5 * 0x30) - local_54) /
                          *(double *)(*(int *)(iVar1 + 0x14) + 0x20 + iVar5 * 0x30);
                  local_74 = dVar3 * dVar3 * local_74;
                  dVar3 = (*(double *)(*(int *)(iVar1 + 0x14) + 0x20 + iVar5 * 0x30) - local_54) /
                          *(double *)(*(int *)(iVar1 + 0x14) + 0x20 + iVar5 * 0x30);
                  local_6c = dVar3 * dVar3 * local_6c;
                }
                if (*(char *)(*(int *)(iVar1 + 0x14) + 0x2c + iVar5 * 0x30) == '\0') {
                  local_4c = local_4c + local_74;
                  local_44 = local_44 + local_6c;
                }
                else {
                  local_84 = local_84 + local_74;
                  local_7c = local_7c + local_6c;
                }
              }
            }
            iVar5 = iVar5 + 1;
            local_24 = local_24 + -1;
            fVar6 = in_ST0;
          } while (local_24 != 0);
        }
        FUN_0058b42c(iVar2 + 0x38,iVar2 + 0x30);
      }
      fVar4 = (float)((*(int *)(iVar2 + 8) + *(int *)(iVar2 + 100) * 3) % 0x18) / 6.0;
      local_3c = (double)fVar4;
      if (2.0 < local_3c) {
        local_3c = (double)(4.0 - fVar4);
      }
      local_3c = local_3c - 1.0;
      local_14 = (*(int *)(iVar2 + 8) + *(int *)(iVar2 + 100) * 4) % 0x14;
      local_34 = (double)((float)local_14 / 5.0);
      if (2.0 < local_34) {
        local_34 = (double)(4.0 - (float)local_14 / 5.0);
      }
      local_34 = local_34 - 1.0;
      dVar3 = local_3c * *(double *)(local_28 + 0x90) + *(double *)(iVar2 + 0x38);
      FUN_0058b540(&local_84,&local_7c,0x14,
                   local_34 * *(double *)(local_28 + 0x70) + *(double *)(iVar2 + 0x30),
                   SUB84(dVar3,0),(short)((ulonglong)dVar3 >> 0x20));
      *(double *)(iVar2 + 0x10) = *(double *)(iVar2 + 0x10) + local_84 + local_4c;
      *(double *)(iVar2 + 0x18) = *(double *)(iVar2 + 0x18) + local_7c + local_44;
      local_8c = local_8c + 1;
      local_2c = local_2c + -1;
    } while (local_2c != 0);
  }
  return;
}
