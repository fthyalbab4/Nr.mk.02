// rea decompile_all
// name: FUN_00630060
// address: 0x630060
// body: available
// range: 0x630060-0x630878 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00630060(int param_1,int param_2,int param_3,undefined4 param_4,uint param_5,int param_6,
                 int param_7)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  float10 in_ST0;
  float10 fVar9;
  undefined2 uVar10;
  undefined2 uStack_da;
  int local_cc;
  undefined4 local_c8;
  int local_c4;
  undefined4 local_c0;
  int local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  int local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  int local_9c;
  undefined4 local_98;
  int local_94;
  int local_90 [5];
  undefined4 local_7c;
  int local_78;
  undefined4 local_74;
  int local_70;
  undefined4 local_6c;
  int local_68;
  undefined4 local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  undefined4 local_40;
  int local_3c;
  undefined4 local_38;
  int local_34;
  int local_30;
  double local_2c;
  double local_24;
  double local_1c;
  int local_10;
  int local_c;
  int local_8;

  iVar7 = (DAT_0078a0ec / 3 + 1) * 0xc;
  if (param_5 == 0) {
    iVar7 = 0;
  }
  lVar1 = (longlong)(param_6 - param_3) * (longlong)(param_6 - param_3);
  iVar2 = (int)lVar1;
  local_94 = (param_7 - param_2) * (param_7 - param_2) + iVar2;
  fVar9 = (float10)local_94;
  local_10 = param_3;
  local_c = param_2;
  local_8 = param_1;
  FUN_00404868(iVar2,(int)((ulonglong)lVar1 >> 0x20),local_94,SUB104(fVar9,0),
               (int)((unkuint10)fVar9 >> 0x20),(short)((unkuint10)fVar9 >> 0x40));
  local_1c = (double)in_ST0;
  local_24 = local_1c;
  if ((float)in_ST0 < 1.0) {
    local_24 = 1.0;
  }
  lVar1 = (longlong)(param_7 - local_c) * (longlong)iVar7;
  local_94 = (int)lVar1;
  iVar2 = FUN_00404884(local_94,(int)((ulonglong)lVar1 >> 0x20));
  if (1.0 <= (float)local_1c) {
    local_2c = local_1c;
  }
  else {
    local_2c = 1.0;
  }
  lVar1 = (longlong)(param_6 - local_10) * (longlong)iVar7;
  local_94 = (int)lVar1;
  iVar3 = FUN_00404884(local_94,(int)((ulonglong)lVar1 >> 0x20));
  FUN_00438bf4((param_7 - iVar2) - iVar3 / 3,iVar2 / 3 + (param_6 - iVar3),&local_9c);
  local_90[0] = local_9c;
  local_90[1] = local_98;
  FUN_00438bf4(param_7,param_6,&local_9c);
  local_90[2] = local_9c;
  local_90[3] = local_98;
  FUN_00438bf4(iVar3 / 3 + (param_7 - iVar2),(param_6 - iVar3) - iVar2 / 3,&local_9c);
  local_90[4] = local_9c;
  local_7c = local_98;
  FUN_00438bf4(iVar3 / 3 + local_c + iVar2,(local_10 + iVar3) - iVar2 / 3,&local_9c);
  local_78 = local_9c;
  local_74 = local_98;
  FUN_00438bf4(local_c,local_10,&local_9c);
  local_70 = local_9c;
  local_6c = local_98;
  FUN_00438bf4((local_c + iVar2) - iVar3 / 3,iVar2 / 3 + local_10 + iVar3,&local_9c);
  local_68 = local_9c;
  local_64 = local_98;
  FUN_0062f8ec(*(undefined4 *)(local_8 + 4),*(undefined4 *)(local_8 + 8));
  iVar2 = param_7;
  if (local_c < param_7) {
    iVar2 = local_c;
  }
  iVar3 = param_6;
  if (local_10 < param_6) {
    iVar3 = local_10;
  }
  iVar8 = param_7;
  if (param_7 < local_c) {
    iVar8 = local_c;
  }
  if (param_6 < local_10) {
    local_30 = local_10;
  }
  else {
    local_30 = param_6;
  }
  FUN_0062f940(iVar2 - iVar7 / 3,iVar3 - iVar7 / 3,iVar7 / 3 + iVar8,(short)(iVar7 / 3 + local_30));
  iVar2 = FUN_00462a64(DAT_0077f0e4);
  FUN_0045b850(*(undefined4 *)(iVar2 + 0x44),0xff);
  iVar2 = FUN_00462a64(DAT_0077f0e4);
  FUN_0045bc24(*(undefined4 *)(iVar2 + 0x48),0xff00);
  iVar2 = (int)param_5 >> 1;
  if (DAT_0078a0f4 == '\0') {
    iVar3 = FUN_00462a64(DAT_0077f0e4);
    FUN_0045b9a4(*(undefined4 *)(iVar3 + 0x44),DAT_0078a0ec);
    FUN_00438bf4(local_c,local_10,&local_9c);
    local_ac = local_9c;
    local_a8 = local_98;
    FUN_00438bf4(param_7,param_6,&local_b4);
    local_a4 = local_b4;
    local_a0 = local_b0;
    uVar10 = SUB42(&local_ac,0);
    uStack_da = (undefined2)((uint)&local_ac >> 0x10);
    piVar4 = (int *)FUN_00462a64(DAT_0077f0e4);
    (**(code **)(*piVar4 + 0x68))(piVar4,CONCAT22(uStack_da,uVar10),1);
    piVar4 = (int *)FUN_00462a64(DAT_0077f0e4);
    iVar3 = FUN_00462a64(DAT_0077f0e4);
    local_3c = *(int *)(iVar3 + 0x44);
    local_40 = *(undefined4 *)(*(int *)(local_3c + 0x10) + 0x14);
    (**(code **)(*piVar4 + 0x20))(piVar4,param_7,param_6,(short)local_40);
    if ((double)iVar7 < local_1c) {
      uVar5 = param_5 & 0x80000001;
      if ((int)uVar5 < 0) {
        uVar5 = (uVar5 - 1 | 0xfffffffe) + 1;
      }
      if (uVar5 == 1) {
        local_cc = local_90[0];
        local_c8 = local_90[1];
        local_c4 = local_90[2];
        local_c0 = local_90[3];
        local_bc = local_90[4];
        local_b8 = local_7c;
        piVar4 = &local_cc;
        local_94 = iVar7;
        piVar6 = (int *)FUN_00462a64(DAT_0077f0e4);
        (**(code **)(*piVar6 + 100))(piVar6,piVar4,2);
      }
    }
    local_94 = iVar7;
    if ((double)iVar7 < local_1c) {
      if (iVar2 < 0) {
        iVar2 = iVar2 + (uint)((param_5 & 1) != 0);
      }
      if (iVar2 == 1) {
        local_cc = local_78;
        local_c8 = local_74;
        local_c4 = local_70;
        local_c0 = local_6c;
        local_bc = local_68;
        local_b8 = local_64;
        piVar4 = &local_cc;
        piVar6 = (int *)FUN_00462a64(DAT_0077f0e4);
        (**(code **)(*piVar6 + 100))(piVar6,piVar4,2);
      }
    }
  }
  else {
    iVar3 = 6;
    piVar4 = local_90;
    do {
      *piVar4 = *piVar4 * 2;
      piVar4[1] = piVar4[1] * 2;
      piVar4 = piVar4 + 2;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    iVar3 = FUN_00462a64(DAT_0077f0e4);
    FUN_0045b9a4(*(undefined4 *)(iVar3 + 0x44),DAT_0078a0ec * 2);
    FUN_00438bf4(local_c * 2,local_10 * 2,&local_9c);
    local_ac = local_9c;
    local_a8 = local_98;
    FUN_00438bf4(param_7 * 2,param_6 * 2,&local_b4);
    local_a4 = local_b4;
    local_a0 = local_b0;
    uVar10 = SUB42(&local_ac,0);
    uStack_da = (undefined2)((uint)&local_ac >> 0x10);
    piVar4 = (int *)FUN_00462a64(DAT_0077f0e4);
    (**(code **)(*piVar4 + 0x68))(piVar4,CONCAT22(uStack_da,uVar10),1);
    piVar4 = (int *)FUN_00462a64(DAT_0077f0e4);
    iVar3 = FUN_00462a64(DAT_0077f0e4);
    local_34 = *(int *)(iVar3 + 0x44);
    local_38 = *(undefined4 *)(*(int *)(local_34 + 0x10) + 0x14);
    (**(code **)(*piVar4 + 0x20))(piVar4,param_7 * 2,param_6 * 2,(short)local_38);
    if ((double)iVar7 < local_1c) {
      uVar5 = param_5 & 0x80000001;
      if ((int)uVar5 < 0) {
        uVar5 = (uVar5 - 1 | 0xfffffffe) + 1;
      }
      if (uVar5 == 1) {
        local_cc = local_90[0];
        local_c8 = local_90[1];
        local_c4 = local_90[2];
        local_c0 = local_90[3];
        local_bc = local_90[4];
        local_b8 = local_7c;
        piVar4 = &local_cc;
        local_94 = iVar7;
        piVar6 = (int *)FUN_00462a64(DAT_0077f0e4);
        (**(code **)(*piVar6 + 100))(piVar6,piVar4,2);
      }
    }
    local_94 = iVar7;
    if ((double)iVar7 < local_1c) {
      if (iVar2 < 0) {
        iVar2 = iVar2 + (uint)((param_5 & 1) != 0);
      }
      if (iVar2 == 1) {
        local_cc = local_78;
        local_c8 = local_74;
        local_c4 = local_70;
        local_c0 = local_6c;
        local_bc = local_68;
        local_b8 = local_64;
        piVar4 = &local_cc;
        piVar6 = (int *)FUN_00462a64(DAT_0077f0e4);
        (**(code **)(*piVar6 + 100))(piVar6,piVar4,2);
      }
    }
  }
  iVar2 = param_7;
  if (local_c < param_7) {
    iVar2 = local_c;
  }
  iVar3 = param_6;
  if (local_10 < param_6) {
    iVar3 = local_10;
  }
  if (param_7 < local_c) {
    local_44 = local_c;
  }
  else {
    local_44 = param_7;
  }
  if (param_6 < local_10) {
    local_48 = local_10;
  }
  else {
    local_48 = param_6;
  }
  iVar7 = iVar7 / 3;
  FUN_00630034(local_8,iVar2 - iVar7,iVar3 - iVar7,iVar7 + local_48,iVar7 + local_44);
  iVar2 = param_7;
  if (local_c < param_7) {
    iVar2 = local_c;
  }
  iVar2 = ((iVar2 - DAT_0078a0ec) + -2) - iVar7;
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  if (local_10 < param_6) {
    local_4c = local_10;
  }
  else {
    local_4c = param_6;
  }
  local_50 = ((local_4c - DAT_0078a0ec) + -2) - iVar7;
  if (local_50 < 0) {
    local_50 = 0;
  }
  if (param_7 < local_c) {
    local_54 = local_c;
  }
  else {
    local_54 = param_7;
  }
  local_58 = iVar7 + local_54 + DAT_0078a0ec + 2;
  if (*(int *)(local_8 + 4) < local_58) {
    local_58 = *(int *)(local_8 + 4);
  }
  if (param_6 < local_10) {
    local_5c = local_10;
  }
  else {
    local_5c = param_6;
  }
  local_60 = iVar7 + local_5c + DAT_0078a0ec + 2;
  if (*(int *)(local_8 + 8) < local_60) {
    local_60 = *(int *)(local_8 + 8);
  }
  FUN_00438c38(iVar2,local_50,local_58,param_4,local_60);
  return;
}
