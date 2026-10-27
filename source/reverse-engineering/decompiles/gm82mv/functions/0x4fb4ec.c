// rea decompile_all
// name: FUN_004fb4ec
// address: 0x4fb4ec
// body: available
// range: 0x4fb4ec-0x4fb86d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4fb516 (push 0x4fb86e followed by fs-segment stack chaining); handler 0x4fb86e lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004fb4ec(int param_1,undefined4 param_2,int *param_3,uint param_4,LPRECT param_5,
                 int *param_6,int param_7,int param_8,byte param_9,int param_10,int *param_11)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  LPCWSTR lpchText;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *in_FS_OFFSET;
  byte bVar8;
  HDC apHStackY_1828 [1516];
  LPRECT lprc;
  undefined4 uStack_64;
  undefined1 *puStack_60;
  undefined1 *puStack_5c;
  LONG local_4c;
  HDC apHStack_48 [4];
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  undefined4 local_c;
  int local_8;

  bVar8 = 0;
  puStack_5c = (undefined1 *)0x4fb50b;
  local_c = param_2;
  local_8 = param_1;
  thunk_FUN_00407ad0(param_10);
  puStack_60 = &LAB_004fb86e;
  uStack_64 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_64;
  if ((param_4 & 2) == 2) {
    if (param_9 == 0) {
      param_9 = 1;
    }
    else if (param_9 == 1) {
      param_9 = 0;
    }
  }
  puStack_5c = &stack0xfffffffc;
  FUN_00436aa0(param_3[2] - *param_3,param_3[3] - param_3[1],&local_1c);
  if (*(int *)(local_8 + 4) == 0) {
    FUN_00436aa0(0,0,&local_24);
  }
  else {
    uVar2 = (**(code **)(**(int **)(local_8 + 4) + 0x24))();
    iVar3 = (**(code **)(**(int **)(local_8 + 4) + 0x30))();
    FUN_00436aa0(iVar3 / (int)(uint)*(byte *)(local_8 + 0x20),uVar2,&local_24);
  }
  iVar3 = param_10;
  if ((param_10 != 0) && (*(short *)(param_10 + -10) != 2)) {
    iVar3 = FUN_00407488(&param_10,param_10);
  }
  iVar4 = 0;
  if (iVar3 != 0) {
    iVar4 = *(int *)(iVar3 + -4);
  }
  if (iVar4 < 1) {
    FUN_00436ad0(0,0,0,&local_4c,0);
    puVar6 = (undefined4 *)((int)param_5 + (uint)bVar8 * -8 + 4);
    param_5->left = local_4c;
    puVar7 = puVar6 + (uint)bVar8 * -2 + 1;
    *puVar6 = apHStack_48[(uint)bVar8 * -2];
    *puVar7 = apHStack_48[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
    puVar7[(uint)bVar8 * -2 + 1] =
         (apHStack_48 + (uint)bVar8 * -2 + (uint)bVar8 * -2 + 1)[(uint)bVar8 * -2 + 1];
    FUN_00436aa0(0,0,&local_2c);
  }
  else {
    FUN_00436ad0(0,0,param_3[2] - *param_3,&local_4c,0);
    puVar6 = (undefined4 *)((int)param_5 + (uint)bVar8 * -8 + 4);
    param_5->left = local_4c;
    puVar7 = puVar6 + (uint)bVar8 * -2 + 1;
    *puVar6 = apHStack_48[(uint)bVar8 * -2];
    *puVar7 = apHStack_48[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
    puVar7[(uint)bVar8 * -2 + 1] =
         (apHStack_48 + (uint)bVar8 * -2 + (uint)bVar8 * -2 + 1)[(uint)bVar8 * -2 + 1];
    apHStack_48[3] = (HDC)FUN_0045d4ec(local_c);
    local_38 = param_10;
    if ((param_10 != 0) && (*(short *)(param_10 + -10) != 2)) {
      local_38 = FUN_00407488(&param_10,param_10);
    }
    if (local_38 != 0) {
      local_38 = *(int *)(local_38 + -4);
    }
    param_4 = param_4 | 0x400;
    iVar3 = local_38;
    lprc = param_5;
    lpchText = (LPCWSTR)FUN_00408220(param_10);
    DrawTextW(apHStack_48[3],lpchText,iVar3,lprc,param_4);
    FUN_00436aa0(param_5->right - param_5->left,param_5->bottom - param_5->top,&local_2c);
  }
  if (param_9 < 2) {
    uVar5 = (local_18 - local_20) + 1;
    iVar3 = (int)uVar5 >> 1;
    if (iVar3 < 0) {
      iVar3 = iVar3 + (uint)((uVar5 & 1) != 0);
    }
    param_6[1] = iVar3;
    uVar5 = (local_18 - local_28) + 1;
    local_10 = (int)uVar5 >> 1;
    if (local_10 < 0) {
      local_10 = local_10 + (uint)((uVar5 & 1) != 0);
    }
  }
  else {
    uVar5 = (local_1c - local_24) + 1;
    iVar3 = (int)uVar5 >> 1;
    if (iVar3 < 0) {
      iVar3 = iVar3 + (uint)((uVar5 & 1) != 0);
    }
    *param_6 = iVar3;
    uVar5 = (local_1c - local_2c) + 1;
    local_14 = (int)uVar5 >> 1;
    if (local_14 < 0) {
      local_14 = local_14 + (uint)((uVar5 & 1) != 0);
    }
  }
  if ((local_2c == 0) || (local_24 == 0)) {
    param_7 = 0;
  }
  if (param_8 == -1) {
    if (param_7 < 0) {
      FUN_00436aa0(local_24 + local_2c,local_20 + local_28,&local_34);
      if (param_9 < 2) {
        local_34 = local_1c - local_34;
      }
      else {
        local_34 = local_18 - local_30;
      }
      param_8 = local_34 / 3;
      param_7 = param_8;
    }
    else {
      FUN_00436aa0(local_24 + param_7 + local_2c,local_20 + param_7 + local_28,&local_34);
      if (param_9 < 2) {
        uVar5 = (local_1c - local_34) + 1;
        param_8 = (int)uVar5 >> 1;
        if (param_8 < 0) {
          param_8 = param_8 + (uint)((uVar5 & 1) != 0);
        }
      }
      else {
        uVar5 = (local_18 - local_30) + 1;
        param_8 = (int)uVar5 >> 1;
        if (param_8 < 0) {
          param_8 = param_8 + (uint)((uVar5 & 1) != 0);
        }
      }
    }
  }
  else if (param_7 < 0) {
    FUN_00436aa0(local_1c - (param_8 + local_24),local_18 - (param_8 + local_20),&local_34);
    if (param_9 < 2) {
      param_7 = local_34 - local_2c >> 1;
      if (param_7 < 0) {
        param_7 = param_7 + (uint)((local_34 - local_2c & 1U) != 0);
      }
    }
    else {
      param_7 = local_30 - local_28 >> 1;
      if (param_7 < 0) {
        param_7 = param_7 + (uint)((local_30 - local_28 & 1U) != 0);
      }
    }
  }
  if (param_9 == 0) {
    *param_6 = param_8;
    local_14 = param_8 + local_24 + param_7;
  }
  else if (param_9 == 1) {
    local_24 = (local_1c - param_8) - local_24;
    *param_6 = local_24;
    local_14 = (local_24 - param_7) - local_2c;
  }
  else if (param_9 == 2) {
    param_6[1] = param_8;
    local_10 = param_8 + local_20 + param_7;
  }
  else if (param_9 == 3) {
    local_20 = (local_18 - param_8) - local_20;
    param_6[1] = local_20;
    local_10 = (local_20 - param_7) - local_28;
  }
  *param_6 = *param_6 + *param_3 + *param_11;
  param_6[1] = param_6[1] + param_3[1] + param_11[1];
  OffsetRect(param_5,*param_3 + local_14 + *param_11,param_3[1] + local_10 + param_11[1]);
  puVar1 = puStack_5c;
  *in_FS_OFFSET = uStack_64;
  puStack_5c = &LAB_004fb875;
  puStack_60 = (undefined1 *)0x4fb86d;
  thunk_FUN_004072d8(&param_10,uStack_64,puVar1);
  return;
}
