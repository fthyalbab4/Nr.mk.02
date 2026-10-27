// rea decompile_all
// name: FUN_005193e4
// address: 0x5193e4
// body: available
// range: 0x5193e4-0x5195f5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1
FUN_005193e4(int param_1,int *param_2,int param_3,int *param_4,double param_5,double param_6,
            double param_7,int param_8,int param_9,int param_10)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_34;
  int local_30;
  int local_10;

  iVar2 = param_4[3];
  local_10 = *param_2;
  if (*param_2 <= *param_4) {
    local_10 = *param_4;
  }
  iVar5 = param_2[2];
  if (param_4[2] <= param_2[2]) {
    iVar5 = param_4[2];
  }
  iVar1 = param_2[1];
  if (param_2[1] <= param_4[1]) {
    iVar1 = param_4[1];
  }
  if (param_2[3] < iVar2) {
    iVar2 = param_2[3];
  }
  if (((param_7 == 1.0) && (param_6 == 1.0)) && (param_5 == 0.0)) {
    if (local_10 <= iVar5) {
      local_30 = (iVar5 - local_10) + 1;
      do {
        if (iVar1 <= iVar2) {
          local_34 = (iVar2 - iVar1) + 1;
          iVar5 = iVar1;
          do {
            iVar4 = (local_10 - param_3) + param_9;
            iVar3 = (iVar5 - param_10) + param_8;
            if ((((-1 < iVar4) && (iVar4 < *(int *)(param_1 + 4))) && (-1 < iVar3)) &&
               ((iVar3 < *(int *)(param_1 + 8) &&
                (*(char *)(*(int *)(*(int *)(param_1 + 0xc) + iVar4 * 4) + iVar3) != '\0')))) {
              return 1;
            }
            iVar5 = iVar5 + 1;
            local_34 = local_34 + -1;
          } while (local_34 != 0);
        }
        local_10 = local_10 + 1;
        local_30 = local_30 + -1;
      } while (local_30 != 0);
    }
  }
  else {
    FUN_00404874();
    FUN_00404864();
    if (local_10 <= iVar5) {
      local_30 = (iVar5 - local_10) + 1;
      do {
        if (iVar1 <= iVar2) {
          local_34 = (iVar2 - iVar1) + 1;
          do {
            iVar5 = FUN_004102e4();
            iVar3 = FUN_004102e4();
            if (((-1 < iVar5) && (iVar5 < *(int *)(param_1 + 4))) &&
               ((-1 < iVar3 &&
                ((iVar3 < *(int *)(param_1 + 8) &&
                 (*(char *)(*(int *)(*(int *)(param_1 + 0xc) + iVar5 * 4) + iVar3) != '\0')))))) {
              return 1;
            }
            local_34 = local_34 + -1;
          } while (local_34 != 0);
        }
        local_30 = local_30 + -1;
      } while (local_30 != 0);
    }
  }
                    /* WARNING: Read-only address (ram,0x00519600) is written */
  return 0;
}
