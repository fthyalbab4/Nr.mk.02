// rea decompile_all
// name: FUN_00518d84
// address: 0x518d84
// body: available
// range: 0x518d84-0x51926f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1
FUN_00518d84(int param_1,int *param_2,int param_3,double param_4,double param_5,double param_6,
            int param_7,int param_8,int param_9,int param_10,int *param_11,int param_12,
            double param_13,double param_14,double param_15,int param_16,int param_17,int param_18)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_10;

  local_48 = *param_11;
  local_50 = param_11[1];
  local_4c = param_11[2];
  local_54 = param_11[3];
  if (param_12 != 0) {
    if (local_48 < *param_2) {
      local_48 = *param_2;
    }
    if (param_2[2] < local_4c) {
      local_4c = param_2[2];
    }
    if (local_50 < param_2[1]) {
      local_50 = param_2[1];
    }
    if (param_2[3] < local_54) {
      local_54 = param_2[3];
    }
    if (((((param_15 == 1.0) && (param_6 == 1.0)) && (param_14 == 1.0)) &&
        ((param_5 == 1.0 && (param_13 == 0.0)))) && (param_4 == 0.0)) {
      if (local_48 <= local_4c) {
        local_40 = (local_4c - local_48) + 1;
        local_10 = local_48;
        do {
          if (local_50 <= local_54) {
            local_44 = (local_54 - local_50) + 1;
            iVar3 = local_50;
            do {
              iVar2 = (local_10 - param_3) + param_17;
              iVar1 = (iVar3 - param_18) + param_16;
              if ((((-1 < iVar2) && (iVar2 < *(int *)(param_1 + 4))) && (-1 < iVar1)) &&
                 ((iVar1 < *(int *)(param_1 + 8) &&
                  (*(char *)(*(int *)(*(int *)(param_1 + 0xc) + iVar2 * 4) + iVar1) != '\0')))) {
                iVar2 = (local_10 - param_10) + param_8;
                iVar1 = (iVar3 - param_9) + param_7;
                if (((-1 < iVar2) && ((iVar2 < *(int *)(param_12 + 4) && (-1 < iVar1)))) &&
                   ((iVar1 < *(int *)(param_12 + 8) &&
                    (*(char *)(*(int *)(*(int *)(param_12 + 0xc) + iVar2 * 4) + iVar1) != '\0')))) {
                  return 1;
                }
              }
              iVar3 = iVar3 + 1;
              local_44 = local_44 + -1;
            } while (local_44 != 0);
          }
          local_10 = local_10 + 1;
          local_40 = local_40 + -1;
        } while (local_40 != 0);
      }
    }
    else if ((param_13 == 0.0) && (param_4 == 0.0)) {
      if (local_48 <= local_4c) {
        local_40 = (local_4c - local_48) + 1;
        do {
          if (local_50 <= local_54) {
            local_44 = (local_54 - local_50) + 1;
            do {
              iVar3 = FUN_004102e4();
              iVar1 = FUN_004102e4();
              if ((((-1 < iVar3) && (iVar3 < *(int *)(param_1 + 4))) && (-1 < iVar1)) &&
                 ((iVar1 < *(int *)(param_1 + 8) &&
                  (*(char *)(*(int *)(*(int *)(param_1 + 0xc) + iVar3 * 4) + iVar1) != '\0')))) {
                iVar3 = FUN_004102e4();
                iVar1 = FUN_004102e4();
                if (((-1 < iVar3) && ((iVar3 < *(int *)(param_12 + 4) && (-1 < iVar1)))) &&
                   ((iVar1 < *(int *)(param_12 + 8) &&
                    (*(char *)(*(int *)(*(int *)(param_12 + 0xc) + iVar3 * 4) + iVar1) != '\0')))) {
                  return 1;
                }
              }
              local_44 = local_44 + -1;
            } while (local_44 != 0);
          }
          local_40 = local_40 + -1;
        } while (local_40 != 0);
      }
    }
    else {
      FUN_00404874();
      FUN_00404864();
      FUN_00404874();
      FUN_00404864();
      if (local_48 <= local_4c) {
        local_40 = (local_4c - local_48) + 1;
        do {
          if (local_50 <= local_54) {
            local_44 = (local_54 - local_50) + 1;
            do {
              iVar3 = FUN_004102e4();
              iVar1 = FUN_004102e4();
              if ((((-1 < iVar3) && (iVar3 < *(int *)(param_1 + 4))) && (-1 < iVar1)) &&
                 ((iVar1 < *(int *)(param_1 + 8) &&
                  (*(char *)(*(int *)(*(int *)(param_1 + 0xc) + iVar3 * 4) + iVar1) != '\0')))) {
                iVar3 = FUN_004102e4();
                iVar1 = FUN_004102e4();
                if ((((-1 < iVar3) && ((iVar3 < *(int *)(param_12 + 4) && (-1 < iVar1)))) &&
                    (iVar1 < *(int *)(param_12 + 8))) &&
                   (*(char *)(*(int *)(*(int *)(param_12 + 0xc) + iVar3 * 4) + iVar1) != '\0')) {
                  return 1;
                }
              }
              local_44 = local_44 + -1;
            } while (local_44 != 0);
          }
          local_40 = local_40 + -1;
        } while (local_40 != 0);
      }
    }
  }
                    /* WARNING: Read-only address (ram,0x00519278) is written */
  return 0;
}
