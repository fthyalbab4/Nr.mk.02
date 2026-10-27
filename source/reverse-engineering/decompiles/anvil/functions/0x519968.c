// rea decompile_all
// name: FUN_00519968
// address: 0x519968
// body: available
// range: 0x519968-0x519c73 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1
FUN_00519968(int param_1,int *param_2,undefined4 param_3,int param_4,int param_5,int param_6,
            int param_7,undefined4 param_8,undefined4 param_9,undefined4 param_10,
            undefined4 param_11,undefined4 param_12,undefined4 param_13,undefined4 param_14,
            undefined4 param_15,undefined2 param_16)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  float10 in_ST0;
  float10 in_ST1;
  undefined1 local_4c [16];
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  double local_2c;
  double local_24;
  double local_1c;
  undefined1 local_d;
  undefined4 local_c;
  int local_8;

  iVar1 = param_7;
  iVar5 = param_6;
  local_3c = *param_2;
  local_38 = param_2[1];
  local_34 = param_2[2];
  local_30 = param_2[3];
  local_d = 0;
  local_c = param_3;
  local_8 = param_1;
  if ((param_5 == param_7) || (param_4 == param_6)) {
    iVar5 = param_4;
    if (param_6 < param_4) {
      iVar5 = param_6;
    }
    if (param_4 < param_6) {
      param_4 = param_6;
    }
    FUN_00436ad0(param_7,iVar5,param_5,local_4c,param_4);
    local_d = FUN_005193e4(local_8,&local_3c,local_c,local_4c,param_8,param_9,param_10,param_11,
                           param_12,param_13,param_14,param_15,param_16);
  }
  else {
    FUN_00404874();
    local_24 = (double)in_ST0;
    FUN_00404864();
    local_2c = (double)in_ST1;
    uVar3 = param_5 - param_7 >> 0x1f;
    uVar4 = param_4 - param_6 >> 0x1f;
    if ((int)((param_5 - param_7 ^ uVar3) - uVar3) < (int)((param_4 - param_6 ^ uVar4) - uVar4)) {
      if (param_4 < param_6) {
        param_6 = param_4;
        param_7 = param_5;
        param_4 = iVar5;
        param_5 = iVar1;
      }
      local_1c = (double)(param_5 - param_7) / (double)(param_4 - param_6);
      iVar5 = local_38;
      if (local_38 <= param_6) {
        iVar5 = param_6;
      }
      iVar1 = local_30;
      if (param_4 <= local_30) {
        iVar1 = param_4;
      }
      if (iVar5 <= iVar1) {
        iVar5 = (iVar1 - iVar5) + 1;
        do {
          iVar1 = FUN_004102e4();
          iVar2 = FUN_004102e4();
          if ((((-1 < iVar1) && (iVar1 < *(int *)(local_8 + 4))) && (-1 < iVar2)) &&
             ((iVar2 < *(int *)(local_8 + 8) &&
              (*(char *)(*(int *)(*(int *)(local_8 + 0xc) + iVar1 * 4) + iVar2) != '\0')))) {
            return 1;
          }
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
    }
    else {
      if (param_5 < param_7) {
        param_7 = param_5;
        param_6 = param_4;
        param_4 = iVar5;
        param_5 = iVar1;
      }
      local_1c = (double)(param_4 - param_6) / (double)(param_5 - param_7);
      iVar5 = local_3c;
      if (local_3c <= param_7) {
        iVar5 = param_7;
      }
      iVar1 = local_34;
      if (param_5 <= local_34) {
        iVar1 = param_5;
      }
      if (iVar5 <= iVar1) {
        iVar5 = (iVar1 - iVar5) + 1;
        do {
          iVar1 = FUN_004102e4();
          iVar2 = FUN_004102e4();
          if (((-1 < iVar1) && (iVar1 < *(int *)(local_8 + 4))) &&
             ((-1 < iVar2 &&
              ((iVar2 < *(int *)(local_8 + 8) &&
               (*(char *)(*(int *)(*(int *)(local_8 + 0xc) + iVar1 * 4) + iVar2) != '\0')))))) {
            return 1;
          }
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
    }
  }
                    /* WARNING: Read-only address (ram,0x00519c74) is written */
  return local_d;
}
