// rea decompile_all
// name: FUN_00519610
// address: 0x519610
// body: available
// range: 0x519610-0x519948 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1
FUN_00519610(int param_1,int *param_2,int param_3,int *param_4,double param_5,double param_6,
            double param_7,int param_8,int param_9,int param_10)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_10;

  iVar11 = *param_4;
  iVar8 = param_4[1];
  iVar10 = param_4[2];
  iVar1 = param_4[3];
  local_10 = iVar11;
  if (iVar11 < *param_2) {
    local_10 = *param_2;
  }
  iVar9 = iVar10;
  if (param_2[2] < iVar10) {
    iVar9 = param_2[2];
  }
  local_60 = iVar8;
  if (iVar8 < param_2[1]) {
    local_60 = param_2[1];
  }
  local_64 = iVar1;
  if (param_2[3] < iVar1) {
    local_64 = param_2[3];
  }
  fVar2 = (float)(iVar10 + iVar11) / 2.0;
  fVar3 = (float)(iVar1 + iVar8) / 2.0;
  fVar4 = (float)(iVar10 - iVar11) / 2.0;
  fVar5 = (float)(iVar1 - iVar8) / 2.0;
  if (((param_7 == 1.0) && (param_6 == 1.0)) && (param_5 == 0.0)) {
    if (local_10 <= iVar9) {
      local_58 = (iVar9 - local_10) + 1;
      do {
        if (local_60 <= local_64) {
          local_5c = (local_64 - local_60) + 1;
          iVar11 = local_60;
          do {
            fVar6 = ((float)local_10 - fVar2) / fVar4;
            fVar7 = ((float)iVar11 - fVar3) / fVar5;
            if (fVar6 * fVar6 + fVar7 * fVar7 <= 1.0) {
              iVar10 = (local_10 - param_3) + param_9;
              iVar8 = (iVar11 - param_10) + param_8;
              if ((((-1 < iVar10) && (iVar10 < *(int *)(param_1 + 4))) && (-1 < iVar8)) &&
                 ((iVar8 < *(int *)(param_1 + 8) &&
                  (*(char *)(*(int *)(*(int *)(param_1 + 0xc) + iVar10 * 4) + iVar8) != '\0')))) {
                return 1;
              }
            }
            iVar11 = iVar11 + 1;
            local_5c = local_5c + -1;
          } while (local_5c != 0);
        }
        local_10 = local_10 + 1;
        local_58 = local_58 + -1;
      } while (local_58 != 0);
    }
  }
  else {
    FUN_00404874();
    FUN_00404864();
    if (local_10 <= iVar9) {
      local_58 = (iVar9 - local_10) + 1;
      do {
        if (local_60 <= local_64) {
          local_5c = (local_64 - local_60) + 1;
          iVar11 = local_60;
          do {
            fVar6 = ((float)local_10 - fVar2) / fVar4;
            fVar7 = ((float)iVar11 - fVar3) / fVar5;
            if (fVar6 * fVar6 + fVar7 * fVar7 <= 1.0) {
              iVar8 = FUN_004102e4();
              iVar10 = FUN_004102e4();
              if (((-1 < iVar8) && (iVar8 < *(int *)(param_1 + 4))) &&
                 ((-1 < iVar10 &&
                  ((iVar10 < *(int *)(param_1 + 8) &&
                   (*(char *)(*(int *)(*(int *)(param_1 + 0xc) + iVar8 * 4) + iVar10) != '\0'))))))
              {
                return 1;
              }
            }
            iVar11 = iVar11 + 1;
            local_5c = local_5c + -1;
          } while (local_5c != 0);
        }
        local_10 = local_10 + 1;
        local_58 = local_58 + -1;
      } while (local_58 != 0);
    }
  }
                    /* WARNING: Read-only address (ram,0x00519958) is written */
  return 0;
}
