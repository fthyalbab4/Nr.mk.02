// rea decompile_all
// name: FUN_004d9644
// address: 0x4d9644
// body: available
// range: 0x4d9644-0x4da089 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4d9665 (push 0x4da08a followed by fs-segment stack chaining); handler 0x4da08a lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004d9644(char param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int *piVar10;
  int *piVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  int *in_FS_OFFSET;
  bool bVar14;
  undefined1 uVar15;
  byte bVar16;
  int aiStackY_1838 [1462];
  int in_stack_fffffea0;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  int iStack_84;
  undefined1 *puStack_80;
  undefined1 *puStack_7c;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  undefined4 local_5c;
  int aiStack_58 [5];
  int local_44;
  int local_3c;
  int local_38;
  int local_30;
  int local_2c;
  int local_28;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  undefined4 local_c;
  undefined4 local_8;

  bVar16 = 0;
  puStack_7c = &stack0xfffffffc;
  local_8 = 0;
  piVar7 = (int *)(param_4 + -0x24);
  puStack_80 = &LAB_004da08a;
  iStack_84 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_84;
  if (*(char *)(param_4 + 8) == '\0') {
    FUN_0045ce2c(*(undefined4 *)(param_4 + -0x28),0,param_3,9,0,param_4 + -0x10,0);
    uVar2 = FUN_00503a6c();
    FUN_00503b38(uVar2,7);
    (**(code **)PTR_DAT_00781f44)();
    uVar2 = FUN_00503a6c();
    FUN_00503b38(uVar2,7);
    (**(code **)PTR_DAT_007824e0)();
    FUN_0045b0d0(*(undefined4 *)(*(int *)(param_4 + -0x28) + 0x40),local_c);
  }
  else if (((*(byte *)(param_4 + 0xc) & 1) == 0) && ((*(byte *)(param_4 + 0xc) & 0x40) == 0)) {
    puStack_7c = &stack0xfffffffc;
    FUN_0045bc24(*(undefined4 *)(*(int *)(param_4 + -0x28) + 0x48),0xff00001e);
    (**(code **)(**(int **)(param_4 + -0x28) + 0x4c))(*(int **)(param_4 + -0x28),param_4 + -0x10);
  }
  else {
    puStack_7c = &stack0xfffffffc;
    uVar2 = FUN_00503a6c();
    FUN_00503b38(uVar2,7);
    (**(code **)PTR_DAT_007824e0)();
    FUN_0045b0d0(*(undefined4 *)(*(int *)(param_4 + -0x28) + 0x40),local_c);
    FUN_0045ce2c(*(undefined4 *)(param_4 + -0x28));
    uVar2 = FUN_00503a6c();
    FUN_00503b38(uVar2,7);
    (**(code **)PTR_DAT_00781f44)();
  }
  FUN_0045ce2c(*(undefined4 *)(param_4 + -0x28));
  uVar2 = FUN_00503a6c();
  FUN_00503b38(uVar2,7);
  (**(code **)PTR_DAT_00781f40)();
  FUN_0045ce2c(*(undefined4 *)(param_4 + -0x28));
  uVar2 = FUN_00503a6c();
  FUN_00503b38(uVar2,7);
  (**(code **)PTR_DAT_00782148)();
  if (param_1 == '\x01') {
    FUN_0040c114((*(int *)(param_4 + -8) - local_1c) + local_38 * -2,*(undefined4 *)(param_4 + -0xc)
                 ,*(undefined4 *)(param_4 + -8),&local_5c,
                 *(int *)(param_4 + -0xc) + local_18 + local_30 * 2);
  }
  else {
    FUN_0040c114(*(int *)(param_4 + -0x10),*(undefined4 *)(param_4 + -0xc),
                 *(int *)(param_4 + -0x10) + local_1c + local_38 * 2,&local_5c,
                 *(int *)(param_4 + -0xc) + local_18 + local_30 * 2);
  }
  piVar10 = (int *)(param_4 + -0x1c + (uint)bVar16 * -8);
  *(undefined4 *)(param_4 + -0x20) = local_5c;
  piVar11 = piVar10 + (uint)bVar16 * -2 + 1;
  *piVar10 = aiStack_58[(uint)bVar16 * -2];
  *piVar11 = aiStack_58[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 1];
  piVar11[(uint)bVar16 * -2 + 1] =
       (aiStack_58 + (uint)bVar16 * -2 + (uint)bVar16 * -2 + 1)[(uint)bVar16 * -2 + 1];
  if (*(int *)(param_4 + -0x2c) != 0) {
    iVar5 = *(int *)(*(int *)(param_4 + -0x2c) + 0x34);
    if (local_18 < iVar5) {
      *(int *)(param_4 + -0x14) = *(int *)(param_4 + -0x14) + (iVar5 - local_18);
    }
    iVar5 = *(int *)(*(int *)(param_4 + -0x2c) + 0x38);
    if (local_1c < iVar5) {
      if (param_1 == '\x01') {
        *(int *)(param_4 + -0x20) = *(int *)(param_4 + -0x20) - (iVar5 - local_1c);
      }
      else {
        *(int *)(param_4 + -0x18) = *(int *)(param_4 + -0x18) + (iVar5 - local_1c);
      }
    }
    uVar4 = *(int *)(param_4 + -0x14) - aiStack_58[2];
    iVar5 = (int)uVar4 >> 1;
    if (iVar5 < 0) {
      iVar5 = iVar5 + (uint)((uVar4 & 1) != 0);
    }
    uVar4 = *(int *)(param_4 + -0x18) - aiStack_58[1];
    iVar6 = (int)uVar4 >> 1;
    if (iVar6 < 0) {
      iVar6 = iVar6 + (uint)((uVar4 & 1) != 0);
    }
    FUN_0040c268(&local_5c,iVar6,iVar5);
  }
  piVar10 = (int *)(param_4 + -0x1c + (uint)bVar16 * -8);
  aiStack_58[3] = *(int *)(param_4 + -0x20);
  piVar11 = piVar10 + (uint)bVar16 * -2 + 1;
  aiStack_58[(uint)bVar16 * -2 + 4] = *piVar10;
  aiStack_58[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 5] = *piVar11;
  (aiStack_58 + (uint)bVar16 * -2 + (uint)bVar16 * -2 + 5)[(uint)bVar16 * -2 + 1] =
       piVar11[(uint)bVar16 * -2 + 1];
  if (param_1 != '\0') {
    local_44 = *(int *)(param_4 + -0x20);
  }
  FUN_0045ce2c(*(undefined4 *)(param_4 + -0x28));
  uVar2 = FUN_00503a6c();
  FUN_00503b38(uVar2,7);
  (**(code **)PTR_DAT_00781f40)();
  uStack_10c = 0;
  uStack_110 = 0xe11;
  uStack_114 = 0;
  uStack_118 = 0xd;
  uStack_11c = 0x4d99a4;
  uStack_11c = FUN_0045ce2c(*(undefined4 *)(param_4 + -0x28));
  uStack_120 = 0x4d99aa;
  uVar2 = FUN_00503a6c();
  uStack_120 = 0x4d99b1;
  uStack_120 = FUN_00503b38(uVar2,7);
  (**(code **)PTR_DAT_00782148)();
  if (param_1 == '\x01') {
    aiStack_58[3] = aiStack_58[3] - (local_14 + local_38);
    local_44 = local_44 - local_28;
  }
  else {
    local_44 = local_44 + local_14 + local_3c + local_2c;
  }
  if (*(char *)(param_4 + 8) == '\0') {
    uStack_130 = 0xd;
    uStack_134 = 0x4d9a01;
    uStack_134 = FUN_0045ce2c(*(undefined4 *)(param_4 + -0x28));
    uStack_138 = 0x4d9a07;
    uVar2 = FUN_00503a6c();
    uStack_138 = 0x4d9a0e;
    uStack_138 = FUN_00503b38(uVar2,7);
    (**(code **)PTR_DAT_00781f44)();
  }
  if (*(int *)(param_4 + -0x30) == 0) {
    cVar1 = FUN_00405c98(*(undefined4 *)(param_4 + -0x30),&PTR_FUN_004d7824);
    bVar14 = cVar1 == '\0';
    if (bVar14) {
      *(undefined1 *)(param_4 + -0x31) = 0;
    }
    else {
      *(undefined1 *)(param_4 + -0x31) = *(undefined1 *)(*(int *)(param_4 + -0x30) + 0x68);
    }
  }
  else {
    *(undefined1 *)(param_4 + -0x31) = 0;
    bVar14 = false;
  }
  FUN_00408640(*(undefined4 *)(*piVar7 + 0x34),&DAT_004da0a4);
  if (bVar14) goto LAB_004d9cdd;
  if (*(int *)(param_4 + -0x2c) == 0) {
LAB_004d9aad:
    uVar15 = 0;
  }
  else {
    iVar5 = *(int *)(*piVar7 + 0x40);
    if (iVar5 < 0) {
LAB_004d9a8f:
      if (*(char *)(*piVar7 + 0x38) == '\0') goto LAB_004d9aad;
      if (*(int *)(*piVar7 + 0x4c) != 0) {
        cVar1 = (**(code **)(**(int **)(*piVar7 + 0x4c) + 0x20))();
        if (cVar1 == '\0') goto LAB_004d9aad;
      }
    }
    else {
      iVar6 = FUN_00507098(*(undefined4 *)(param_4 + -0x2c));
      if (iVar6 <= iVar5) goto LAB_004d9a8f;
    }
    uVar15 = 1;
  }
  *(undefined1 *)(param_4 + -0x32) = uVar15;
  if (*(char *)(param_4 + -0x32) == '\0') {
    if (*(int **)(*piVar7 + 0x4c) == (int *)0x0) goto LAB_004d9cdd;
    cVar1 = (**(code **)(**(int **)(*piVar7 + 0x4c) + 0x20))();
    if (cVar1 != '\0') goto LAB_004d9cdd;
  }
  if (*(char *)(param_4 + -0x32) == '\0') {
    FUN_0040c114(0,0,0x10,&local_6c,0x10);
    uVar4 = (*(int *)(param_4 + -0x14) - *(int *)(param_4 + -0x1c)) - 0x10;
    iVar5 = (int)uVar4 >> 1;
    if (iVar5 < 0) {
      iVar5 = iVar5 + (uint)((uVar4 & 1) != 0);
    }
    uVar4 = (*(int *)(param_4 + -0x18) - *(int *)(param_4 + -0x20)) - 0x10;
    iVar6 = (int)uVar4 >> 1;
    if (iVar6 < 0) {
      iVar6 = iVar6 + (uint)((uVar4 & 1) != 0);
    }
    FUN_0040c268(&local_6c,iVar6 + *(int *)(param_4 + -0x20),iVar5 + *(int *)(param_4 + -0x1c));
    iVar5 = (**(code **)(**(int **)(*piVar7 + 0x4c) + 0x30))();
    if (iVar5 < local_1c) {
      iVar5 = (**(code **)(**(int **)(*piVar7 + 0x4c) + 0x30))();
      uVar4 = (local_64 - local_6c) - iVar5;
      iVar5 = (int)uVar4 >> 1;
      if (iVar5 < 0) {
        iVar5 = iVar5 + (uint)((uVar4 & 1) != 0);
      }
      local_6c = local_6c + iVar5;
      local_64 = (**(code **)(**(int **)(*piVar7 + 0x4c) + 0x30))();
      local_64 = local_64 + local_6c;
    }
    iVar5 = (**(code **)(**(int **)(*piVar7 + 0x4c) + 0x24))();
    if (iVar5 < local_18) {
      iVar5 = (**(code **)(**(int **)(*piVar7 + 0x4c) + 0x24))();
      uVar4 = (local_60 - local_68) - iVar5;
      iVar5 = (int)uVar4 >> 1;
      if (iVar5 < 0) {
        iVar5 = iVar5 + (uint)((uVar4 & 1) != 0);
      }
      local_68 = local_68 + iVar5;
      local_60 = (**(code **)(**(int **)(*piVar7 + 0x4c) + 0x24))();
      local_60 = local_60 + local_68;
    }
    (**(code **)(**(int **)(param_4 + -0x28) + 0x80))
              (*(int **)(param_4 + -0x28),&local_6c,*(undefined4 *)(*piVar7 + 0x4c));
  }
  else {
    iVar5 = *(int *)(*piVar7 + 0x40);
    if (-1 < iVar5) {
      iVar6 = FUN_00507098(*(undefined4 *)(param_4 + -0x2c));
      if (iVar5 < iVar6) {
        uVar4 = (*(int *)(param_4 + -0x14) - *(int *)(param_4 + -0x1c)) -
                *(int *)(*(int *)(param_4 + -0x2c) + 0x34);
        iVar5 = (int)uVar4 >> 1;
        if (iVar5 < 0) {
          iVar5 = iVar5 + (uint)((uVar4 & 1) != 0);
        }
        uVar4 = (*(int *)(param_4 + -0x18) - *(int *)(param_4 + -0x20)) -
                *(int *)(*(int *)(param_4 + -0x2c) + 0x38);
        iVar6 = (int)uVar4 >> 1;
        if (iVar6 < 0) {
          iVar6 = iVar6 + (uint)((uVar4 & 1) != 0);
        }
        uStack_130 = 0x4d9b69;
        FUN_005077bc(*(undefined4 *)(param_4 + -0x2c),*(undefined4 *)(param_4 + -0x28),
                     iVar6 + *(int *)(param_4 + -0x20),*(undefined1 *)(*piVar7 + 0x39),
                     *(undefined4 *)(*piVar7 + 0x40),iVar5 + *(int *)(param_4 + -0x1c));
        goto LAB_004d9cdd;
      }
    }
    if (*(char *)(param_4 + 8) == '\0') {
      uStack_130 = 0xc;
      uStack_134 = 0x4d9b9c;
      uStack_134 = FUN_0045ce2c(*(undefined4 *)(param_4 + -0x28));
      uStack_138 = 0x4d9ba2;
      uVar2 = FUN_00503a6c();
      uStack_138 = 0x4d9ba9;
      uStack_138 = FUN_00503b38(uVar2,7);
      (**(code **)PTR_DAT_00781f44)();
      FUN_0045ce2c(*(undefined4 *)(param_4 + -0x28));
      uVar2 = FUN_00503a6c();
      FUN_00503b38(uVar2,7);
      (**(code **)PTR_DAT_00781f44)();
    }
  }
LAB_004d9cdd:
  if ((*(char *)(param_4 + -0x33) != '\0') && (*(char *)(param_4 + 8) == '\0')) {
    uStack_130 = 0xe;
    uStack_134 = 0x4d9d07;
    uStack_134 = FUN_0045ce2c(*(undefined4 *)(param_4 + -0x28));
    uStack_138 = 0x4d9d0d;
    uVar2 = FUN_00503a6c();
    uStack_138 = 0x4d9d14;
    uStack_138 = FUN_00503b38(uVar2,7);
    (**(code **)PTR_DAT_00781f44)();
  }
  uStack_130 = 1;
  uStack_134 = 0xe;
  uStack_138 = 0x4d9d38;
  uStack_138 = FUN_0045ce2c(*(undefined4 *)(param_4 + -0x28));
  uVar2 = FUN_00503a6c();
  uVar2 = FUN_00503b38(uVar2,7);
  (**(code **)PTR_DAT_00782148)();
  if (*(char *)(param_4 + 8) == '\0') {
    if (param_1 == '\x01') {
      *(int *)(param_4 + -8) = aiStack_58[3];
      piVar10 = (int *)(param_4 + -8);
      *piVar10 = *piVar10 - local_2c;
      iVar5 = *piVar10;
    }
    else {
      *(int *)(param_4 + -0x10) = local_44;
      piVar10 = (int *)(param_4 + -0x10);
      *piVar10 = *piVar10 + local_2c;
      iVar5 = *piVar10;
    }
    uVar15 = iVar5 == 0;
    FUN_00408640(*(undefined4 *)(*piVar7 + 0x34),&DAT_004da0a4);
    if (!(bool)uVar15) {
      FUN_0045ce2c(*(undefined4 *)(param_4 + -0x28));
      uVar3 = FUN_00503a6c();
      FUN_00503b38(uVar3,7);
      (**(code **)PTR_DAT_00781f40)();
      if (param_1 == '\x01') {
        piVar10 = (int *)(param_4 + -0x10);
        *piVar10 = *piVar10 + local_14;
        uVar15 = *piVar10 == 0;
      }
      else {
        piVar10 = (int *)(param_4 + -8);
        *piVar10 = *piVar10 - local_14;
        uVar15 = *piVar10 == 0;
      }
    }
  }
  else if (((*(int *)(param_4 + -0x2c) == 0) || (*(int *)(*piVar7 + 0x40) == -1)) &&
          (*(int *)(*piVar7 + 0x4c) == 0)) {
    if (param_1 == '\0') {
      piVar10 = (int *)(param_4 + -0x10);
      *piVar10 = *piVar10 + local_2c + 3;
      uVar15 = *piVar10 == 0;
    }
    else {
      piVar10 = (int *)(param_4 + -8);
      *piVar10 = *piVar10 - (local_2c + 3);
      uVar15 = *piVar10 == 0;
    }
  }
  else if (param_1 == '\0') {
    piVar10 = (int *)(param_4 + -0x10);
    *piVar10 = *piVar10 + (*(int *)(param_4 + -0x18) - *(int *)(param_4 + -0x20));
    uVar15 = *piVar10 == 0;
  }
  else {
    piVar10 = (int *)(param_4 + -8);
    *piVar10 = *piVar10 - (*(int *)(param_4 + -0x18) - *(int *)(param_4 + -0x20));
    uVar15 = *piVar10 == 0;
  }
  FUN_00408640(*(undefined4 *)(*piVar7 + 0x34),&DAT_004da0a4);
  if ((bool)uVar15) {
    if (param_1 == '\0') {
      *(int *)(param_4 + -0x10) = local_44 + 1;
    }
    else {
      *(int *)(param_4 + -8) = aiStack_58[3] + -1;
    }
    FUN_0045ce2c(*(undefined4 *)(param_4 + -0x28));
    uVar2 = FUN_00503a6c();
    iVar5 = FUN_00503b38(uVar2,7);
    (**(code **)PTR_DAT_00782148)();
    *(int *)(param_4 + -4) = *(int *)(param_4 + -4) - local_20;
    in_stack_fffffea0 = param_4 + -0x10;
    FUN_0045ce2c(*(undefined4 *)(param_4 + -0x28));
    uVar2 = FUN_00503a6c();
    FUN_00503b38(uVar2,7);
    (**(code **)PTR_DAT_00781f44)();
  }
  else {
    *(uint *)(param_4 + -0x38) =
         (uint)(*(ushort *)(&DAT_00778a28 + (uint)*(byte *)(param_4 + -0x31) * 2) | 0x60);
    if ((*(byte *)(param_4 + 0xd) & 1) != 0) {
      *(uint *)(param_4 + -0x38) = *(uint *)(param_4 + -0x38) | 0x100000;
    }
    puVar12 = (undefined4 *)(param_4 + -0x44 + (uint)bVar16 * -8);
    puVar8 = (undefined4 *)(param_4 + -0xc + (uint)bVar16 * -8);
    *(undefined4 *)(param_4 + -0x48) = *(undefined4 *)(param_4 + -0x10);
    puVar13 = puVar12 + (uint)bVar16 * -2 + 1;
    puVar9 = puVar8 + (uint)bVar16 * -2 + 1;
    *puVar12 = *puVar8;
    *puVar13 = *puVar9;
    puVar13[(uint)bVar16 * -2 + 1] = puVar9[(uint)bVar16 * -2 + 1];
    FUN_004d9448(*piVar7,*(undefined4 *)(param_4 + -0x28),*(undefined4 *)(*piVar7 + 0x34),
                 *(uint *)(param_4 + -0x38) | 0x500,*(undefined1 *)(param_4 + -0x33),param_4 + -0x10
                 ,uVar2);
    if (param_1 != '\0') {
      *(undefined4 *)(param_4 + -0x10) = *(undefined4 *)(param_4 + -0x48);
      *(undefined4 *)(param_4 + -8) = *(undefined4 *)(param_4 + -0x40);
    }
    uVar4 = (*(int *)(param_4 + -0x3c) - *(int *)(param_4 + -0x44)) -
            (*(int *)(param_4 + -4) - *(int *)(param_4 + -0xc));
    iVar5 = (int)uVar4 >> 1;
    if (iVar5 < 0) {
      iVar5 = iVar5 + (uint)((uVar4 & 1) != 0);
    }
    FUN_0040c268(param_4 + -0x10,0,iVar5);
    iVar5 = 0x4d9f48;
    FUN_004d9448(*piVar7,*(undefined4 *)(param_4 + -0x28),*(undefined4 *)(*piVar7 + 0x34),
                 *(undefined4 *)(param_4 + -0x38),*(undefined1 *)(param_4 + -0x33),param_4 + -0x10);
    if (((*(short *)(*piVar7 + 0x60) != 0) && (*(char *)(param_4 + 8) == '\0')) &&
       (*(int *)(*piVar7 + 0x5c) == 0)) {
      FUN_004d801c(*(short *)(*piVar7 + 0x60),&local_8);
      if (param_1 == '\0') {
        *(undefined4 *)(param_4 + -0x10) = *(undefined4 *)(param_4 + -8);
        *(int *)(param_4 + -8) = (*(int *)(param_4 + -0x40) - local_14) - local_2c;
      }
      else {
        *(int *)(param_4 + -0x10) = local_14 * 2 + local_2c + local_28;
        iVar5 = FUN_0045bec4(*(undefined4 *)(param_4 + -0x28),local_8);
        *(int *)(param_4 + -8) = iVar5 + *(int *)(param_4 + -0x10);
      }
      iVar5 = param_4 + -0x10;
      in_stack_fffffea0 = 2;
      FUN_004d915c(*piVar7,*(undefined4 *)(param_4 + -0x28),local_8,2,
                   *(undefined1 *)(param_4 + -0x33));
    }
  }
  *in_FS_OFFSET = in_stack_fffffea0;
  thunk_FUN_00406e5c(&local_8,in_stack_fffffea0,iVar5,&LAB_004da091);
  return;
}
