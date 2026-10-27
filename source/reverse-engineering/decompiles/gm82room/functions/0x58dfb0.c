// rea decompile_all
// name: FUN_0058dfb0
// address: 0x58dfb0
// body: available
// range: 0x58dfb0-0x58e2b2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0058dfb0(int param_1)

{
  int iVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  byte bVar9;
  float10 fVar10;
  int local_a4;
  int local_8c;
  int local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  float10 local_1c;

  bVar9 = 0;
  iVar1 = DAT_00686b30 + param_1 * 0x58;
  local_8c = *(int *)(iVar1 + 0x30);
  if (-1 < local_8c + -1) {
    iVar6 = 0;
    do {
      if ((((*(double *)(*(int *)(iVar1 + 0x2c) + 8 + iVar6 * 0x38) <
             *(double *)(*(int *)(iVar1 + 0x2c) + 0x10 + iVar6 * 0x38)) &&
           (*(double *)(*(int *)(iVar1 + 0x2c) + 0x18 + iVar6 * 0x38) <
            *(double *)(*(int *)(iVar1 + 0x2c) + 0x20 + iVar6 * 0x38))) &&
          (*(char *)(*(int *)(iVar1 + 0x2c) + iVar6 * 0x38) != '\0')) &&
         (local_88 = *(int *)(iVar1 + 8), -1 < local_88 + -1)) {
        local_a4 = 0;
        do {
          iVar5 = *(int *)(iVar1 + 4) + local_a4 * 0x68;
          if (((*(double *)(*(int *)(iVar1 + 0x2c) + 8 + iVar6 * 0x38) <= *(double *)(iVar5 + 0x10))
              && (*(double *)(iVar5 + 0x10) <=
                  *(double *)(*(int *)(iVar1 + 0x2c) + 0x10 + iVar6 * 0x38))) &&
             ((*(double *)(*(int *)(iVar1 + 0x2c) + 0x18 + iVar6 * 0x38) <=
               *(double *)(iVar5 + 0x18) &&
              (*(double *)(iVar5 + 0x18) <=
               *(double *)(*(int *)(iVar1 + 0x2c) + 0x20 + iVar6 * 0x38))))) {
            dVar3 = ((*(double *)(iVar5 + 0x10) -
                     (*(double *)(*(int *)(iVar1 + 0x2c) + 0x10 + iVar6 * 0x38) +
                     *(double *)(*(int *)(iVar1 + 0x2c) + 8 + iVar6 * 0x38)) / 2.0) * 2.0) /
                    (*(double *)(*(int *)(iVar1 + 0x2c) + 0x10 + iVar6 * 0x38) -
                    *(double *)(*(int *)(iVar1 + 0x2c) + 8 + iVar6 * 0x38));
            dVar4 = ((*(double *)(iVar5 + 0x18) -
                     (*(double *)(*(int *)(iVar1 + 0x2c) + 0x20 + iVar6 * 0x38) +
                     *(double *)(*(int *)(iVar1 + 0x2c) + 0x18 + iVar6 * 0x38)) / 2.0) * 2.0) /
                    (*(double *)(*(int *)(iVar1 + 0x2c) + 0x20 + iVar6 * 0x38) -
                    *(double *)(*(int *)(iVar1 + 0x2c) + 0x18 + iVar6 * 0x38));
            iVar2 = *(int *)(*(int *)(iVar1 + 0x2c) + 0x28 + iVar6 * 0x38);
            if (iVar2 == 1) {
              local_1c = (float10)dVar3;
              local_1c = local_1c * local_1c;
              fVar10 = (float10)dVar4;
              if (local_1c + fVar10 * fVar10 <= (float10)1.0) goto LAB_0058e1cd;
            }
            else if ((iVar2 != 2) ||
                    (local_1c = ABS((float10)dVar3), local_1c + ABS((float10)dVar4) <= (float10)1.0)
                    ) {
LAB_0058e1cd:
              if (*(int *)(*(int *)(iVar1 + 0x2c) + 0x2c + iVar6 * 0x38) == *(int *)(iVar5 + 4)) {
                FUN_0058b88c(*(undefined4 *)(*(int *)(iVar1 + 0x2c) + 0x30 + iVar6 * 0x38),&local_84
                            );
                *(undefined4 *)(iVar5 + 4) = local_80;
                if (*(int *)(*(int *)(iVar1 + 0x2c) + 0x34 + iVar6 * 0x38) == 0) {
                  puVar7 = &local_84;
                  puVar8 = (undefined4 *)(*(int *)(iVar1 + 4) + local_a4 * 0x68);
                  for (iVar5 = 0x1a; iVar5 != 0; iVar5 = iVar5 + -1) {
                    *puVar8 = *puVar7;
                    puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
                    puVar8 = puVar8 + (uint)bVar9 * -2 + 1;
                  }
                }
                else if (*(int *)(*(int *)(iVar1 + 0x2c) + 0x34 + iVar6 * 0x38) == 1) {
                  *(undefined4 *)(iVar5 + 0x48) = local_3c;
                  *(undefined4 *)(iVar5 + 0x50) = local_34;
                  *(undefined4 *)(iVar5 + 0x54) = local_30;
                  *(undefined4 *)(iVar5 + 0x58) = local_2c;
                  *(undefined4 *)(iVar5 + 0x5c) = local_28;
                  *(undefined4 *)(iVar5 + 0x60) = local_24;
                  *(undefined4 *)(iVar5 + 0x40) = local_44;
                  *(undefined4 *)(iVar5 + 0x44) = local_40;
                }
                else {
                  *(undefined4 *)(iVar5 + 0x30) = local_54;
                  *(undefined4 *)(iVar5 + 0x34) = local_50;
                  *(undefined4 *)(iVar5 + 0x38) = local_4c;
                  *(undefined4 *)(iVar5 + 0x3c) = local_48;
                }
              }
            }
          }
          local_a4 = local_a4 + 1;
          local_88 = local_88 + -1;
        } while (local_88 != 0);
      }
      iVar6 = iVar6 + 1;
      local_8c = local_8c + -1;
    } while (local_8c != 0);
  }
  return;
}
