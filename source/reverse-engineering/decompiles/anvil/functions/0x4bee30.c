// rea decompile_all
// name: FUN_004bee30
// address: 0x4bee30
// body: available
// range: 0x4bee30-0x4bf0aa inclusive
// range: 0x4bf0c7-0x4bf171 inclusive
// range: 0x4bf18a-0x4bf217 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004bee30(int *param_1,int param_2,int *param_3,char param_4,int *param_5,
                 undefined4 *param_6,byte param_7)

{
  uint uVar1;
  int iVar2;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  uint local_1c;
  uint local_18;
  int local_14;
  int local_10;
  int *local_c;

  local_2c = *param_6;
  uStack_28 = param_6[1];
  uStack_24 = param_6[2];
  uStack_20 = param_6[3];
  local_c = param_3;
  if ((param_7 == 0) || ((&DAT_00681844)[param_7] != *(char *)(param_2 + 99))) {
    if ((*(int *)(param_2 + 0x18c) != 0) && (*(int *)(param_2 + 400) != 0)) {
      local_10 = (**(code **)(**(int **)(param_2 + 0x74) + 0x10))(*(int **)(param_2 + 0x74),0);
      local_14 = (**(code **)(**(int **)(param_2 + 0x74) + 0x10))(*(int **)(param_2 + 0x74),1);
      local_18 = (**(code **)(**(int **)(param_2 + 0x74) + 0x10))(*(int **)(param_2 + 0x74),2);
      local_1c = (**(code **)(**(int **)(param_2 + 0x74) + 0x10))(*(int **)(param_2 + 0x74),3);
      if ((*(byte *)(param_2 + 99) & 4) == 0) {
        if ((*(byte *)(param_2 + 99) & 1) == 0) {
          local_10 = MulDiv(*(int *)(param_2 + 0x17c),*local_c,*(int *)(param_2 + 0x18c));
          iVar2 = (int)local_18 >> 1;
          if (iVar2 < 0) {
            iVar2 = iVar2 + (uint)((local_18 & 1) != 0);
          }
          local_10 = local_10 - iVar2;
        }
      }
      else if ((*(byte *)(param_2 + 99) & 1) == 0) {
        local_10 = *local_c - (*(int *)(param_2 + 0x18c) - *(int *)(param_2 + 0x17c));
      }
      else {
        local_18 = *local_c - (*(int *)(param_2 + 0x18c) - *(int *)(param_2 + 0x17c));
      }
      if ((*(byte *)(param_2 + 99) & 8) == 0) {
        if ((*(byte *)(param_2 + 99) & 2) == 0) {
          local_14 = MulDiv(*(int *)(param_2 + 0x180),local_c[1],*(int *)(param_2 + 400));
          iVar2 = (int)local_1c >> 1;
          if (iVar2 < 0) {
            iVar2 = iVar2 + (uint)((local_1c & 1) != 0);
          }
          local_14 = local_14 - iVar2;
        }
      }
      else if ((*(byte *)(param_2 + 99) & 2) == 0) {
        local_14 = local_c[1] - (*(int *)(param_2 + 400) - *(int *)(param_2 + 0x180));
      }
      else {
        local_1c = local_c[1] - (*(int *)(param_2 + 400) - *(int *)(param_2 + 0x180));
      }
      if (param_4 != '\0') {
        if ((*(byte *)(param_2 + 99) & 5) != 0) {
          local_10 = MulDiv(*(int *)(param_2 + 0x184),*local_c,*(int *)(param_2 + 0x18c));
          iVar2 = (int)local_18 >> 1;
          if (iVar2 < 0) {
            iVar2 = iVar2 + (uint)((local_18 & 1) != 0);
          }
          local_10 = local_10 - iVar2;
        }
        if ((*(byte *)(param_2 + 99) & 10) != 0) {
          local_14 = MulDiv(*(int *)(param_2 + 0x188),local_c[1],*(int *)(param_2 + 400));
          iVar2 = (int)local_1c >> 1;
          if (iVar2 < 0) {
            iVar2 = iVar2 + (uint)((local_1c & 1) != 0);
          }
          local_14 = local_14 - iVar2;
        }
      }
      FUN_004cb04c(*(undefined4 *)(param_2 + 0x74),local_10,local_14,1,local_1c,local_18);
    }
    if (param_7 == 0) {
      return;
    }
  }
  local_18 = param_5[2] - *param_5;
  if ((((int)local_18 < 0) || ((byte)(param_7 - 3) < 2)) || (param_7 == 6)) {
    local_18 = (**(code **)(**(int **)(param_2 + 0x74) + 0x10))(*(int **)(param_2 + 0x74),2);
  }
  local_1c = param_5[3] - param_5[1];
  if ((((int)local_1c < 0) || ((byte)(param_7 - 1) < 2)) || (param_7 == 6)) {
    local_1c = (**(code **)(**(int **)(param_2 + 0x74) + 0x10))(*(int **)(param_2 + 0x74),3);
  }
  local_10 = *param_5;
  local_14 = param_5[1];
  switch(param_7) {
  case 1:
    param_5[1] = param_5[1] + local_1c;
    break;
  case 2:
    param_5[3] = param_5[3] - local_1c;
    local_14 = param_5[3];
    break;
  case 3:
    *param_5 = *param_5 + local_18;
    break;
  case 4:
    param_5[2] = param_5[2] - local_18;
    local_10 = param_5[2];
    break;
  case 6:
    local_10 = *(int *)(param_2 + 0x40);
    local_14 = *(int *)(param_2 + 0x44);
    (**(code **)(*param_1 + 0xbc))
              (param_1,param_2,&local_10,&local_2c,param_5,&local_1c,&local_18,&local_14);
  }
  FUN_004cb04c(*(undefined4 *)(param_2 + 0x74),local_10,local_14,1,local_1c,local_18);
  uVar1 = (**(code **)(**(int **)(param_2 + 0x74) + 0x10))(*(int **)(param_2 + 0x74),2);
  if ((uVar1 != local_18) ||
     (uVar1 = (**(code **)(**(int **)(param_2 + 0x74) + 0x10))(*(int **)(param_2 + 0x74),3),
     uVar1 != local_1c)) {
    switch(param_7) {
    case 1:
      iVar2 = (**(code **)(**(int **)(param_2 + 0x74) + 0x10))(*(int **)(param_2 + 0x74),3);
      param_5[1] = param_5[1] - (local_1c - iVar2);
      break;
    case 2:
      iVar2 = (**(code **)(**(int **)(param_2 + 0x74) + 0x10))(*(int **)(param_2 + 0x74),3);
      param_5[3] = param_5[3] + (local_1c - iVar2);
      break;
    case 3:
      iVar2 = (**(code **)(**(int **)(param_2 + 0x74) + 0x10))(*(int **)(param_2 + 0x74),2);
      *param_5 = *param_5 - (local_18 - iVar2);
      break;
    case 4:
      iVar2 = (**(code **)(**(int **)(param_2 + 0x74) + 0x10))(*(int **)(param_2 + 0x74),2);
      param_5[2] = param_5[2] + (local_18 - iVar2);
      break;
    case 5:
      iVar2 = (**(code **)(**(int **)(param_2 + 0x74) + 0x10))(*(int **)(param_2 + 0x74),2);
      param_5[2] = param_5[2] + (local_18 - iVar2);
      iVar2 = (**(code **)(**(int **)(param_2 + 0x74) + 0x10))(*(int **)(param_2 + 0x74),3);
      param_5[3] = param_5[3] + (local_1c - iVar2);
    }
  }
  return;
}
