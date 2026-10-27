// rea decompile_all
// name: FUN_0052824c
// address: 0x52824c
// body: available
// range: 0x52824c-0x528744 inclusive
// range: 0x5287ac-0x5287c1 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x528267 (push 0x5287c2 followed by fs-segment stack chaining); handler 0x5287c2 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x528284 (push 0x528795 followed by fs-segment stack chaining); handler 0x528795 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x528330 (push 0x528784 followed by fs-segment stack chaining); handler 0x528784 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x528502 (push 0x528745 followed by fs-segment stack chaining); handler 0x528745 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0052824c(int param_1)

{
  longlong lVar1;
  undefined1 uVar2;
  char cVar3;
  byte bVar4;
  undefined1 uVar5;
  undefined2 uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  HBITMAP pHVar12;
  undefined4 *in_FS_OFFSET;
  undefined1 *puVar13;
  UINT nPlanes;
  undefined4 uVar14;
  UINT nBitCount;
  byte *lpBits;
  undefined1 *puVar15;
  undefined4 uStack_88;
  undefined1 *puStack_84;
  undefined1 *puStack_80;
  undefined4 uStack_7c;
  undefined1 *puStack_78;
  undefined1 *puStack_74;
  undefined4 uStack_70;
  undefined1 *puStack_6c;
  undefined1 *puStack_68;
  undefined4 local_58;
  undefined1 local_54 [18];
  byte local_42;
  byte local_41;
  uint local_40;
  int local_3c;
  byte *local_38;
  byte *local_34;
  byte *local_30;
  char local_2c;
  char local_2b;
  char local_2a;
  byte local_29;
  int local_28;
  undefined2 local_23;
  byte local_21;
  uint local_20;
  undefined1 *local_1c;
  byte *local_18;
  undefined4 *local_14;
  int *local_10;
  undefined4 local_c;
  int *local_8;

  puStack_68 = &stack0xfffffffc;
  puVar15 = &stack0xfffffffc;
  local_58 = 0;
  puStack_6c = &LAB_005287c2;
  uStack_70 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_70;
  puStack_74 = (undefined1 *)0x528276;
  local_8 = (int *)FUN_00462804(&PTR_FUN_00458e94,1);
  puStack_78 = &LAB_00528795;
  uStack_7c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_7c;
  puStack_80 = (undefined1 *)0x528293;
  puStack_74 = &stack0xfffffffc;
  uVar7 = FUN_005281b8(param_1,3);
  puStack_80 = (undefined1 *)0x5282a2;
  uVar8 = FUN_005281b8(param_1,4);
  if (500000 < (uVar7 & 0xffff) * (uVar8 & 0xffff)) {
    puStack_80 = (undefined1 *)0x5282ba;
    FUN_0051f0e4(local_8,1);
  }
  puStack_80 = (undefined1 *)0x5282c1;
  cVar3 = FUN_00527f54(param_1);
  if (cVar3 != '\0') {
    puStack_80 = (undefined1 *)0x5282d1;
    uVar6 = FUN_005281b8(param_1,3);
    puStack_80 = (undefined1 *)0x5282dc;
    (**(code **)(*local_8 + 0x44))(local_8,uVar6);
    puStack_80 = (undefined1 *)0x5282e8;
    uVar6 = FUN_005281b8(param_1,4);
    puStack_80 = (undefined1 *)0x5282f3;
    (**(code **)(*local_8 + 0x38))(local_8,uVar6);
    puStack_80 = (undefined1 *)0x5282fa;
    FUN_00527f90(param_1);
    puStack_80 = (undefined1 *)0x5282ff;
    uVar9 = FUN_00462594();
    puStack_80 = (undefined1 *)0x528309;
    (**(code **)(*local_8 + 0x3c))(local_8,uVar9);
    puVar15 = puStack_68;
    *in_FS_OFFSET = uStack_7c;
    *in_FS_OFFSET = uStack_70;
    puStack_68 = &LAB_005287c9;
    puStack_6c = (undefined1 *)0x5287c1;
    thunk_FUN_004072d8(&local_58,uStack_70,puVar15);
    return;
  }
  local_c = 0;
  local_10 = (int *)0x0;
  local_14 = (undefined4 *)0x0;
  puStack_84 = &LAB_00528784;
  uStack_88 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_88;
  puStack_80 = &stack0xfffffffc;
  uVar9 = FUN_00527f90(param_1);
  local_c = FUN_00520628(&PTR_FUN_0052000c,1,uVar9);
  uVar6 = FUN_005281b8(param_1,3);
  local_10 = (int *)FUN_00521b94(&PTR_FUN_00520af0,1,uVar6);
  FUN_005281b8(param_1,3);
  FUN_005281b8(param_1,4);
  FUN_00527f90(param_1);
  local_14 = (undefined4 *)FUN_0051f674(&PTR_FUN_0051f36c,1,local_8);
  iVar10 = FUN_00528d78(param_1);
  local_28 = *(int *)(iVar10 + 4);
  if ((*(char *)(param_1 + 0x10) == '\0') || (*(char *)(param_1 + 0x34) == '\0')) {
    local_2a = '\0';
  }
  else {
    local_2a = '\x01';
  }
  local_2b = '\0';
  *(undefined1 *)(param_1 + 0x10) = 0;
  local_29 = 0;
  local_2c = '\0';
  if ((*(int *)(param_1 + 0xc) == 0) && (local_2a != '\0')) {
    local_2a = '\x01';
    local_29 = FUN_0052b664(*(undefined4 *)(param_1 + 0x38));
    uVar6 = *(undefined2 *)(local_28 + (uint)local_29 * 3);
    local_21 = *(byte *)(local_28 + 2 + (uint)local_29 * 3);
    local_23._1_1_ = (byte)((ushort)uVar6 >> 8);
    uVar7 = (uint)local_23._1_1_;
    local_23 = uVar6;
    iVar10 = MulDiv(6,uVar7,0x33);
    bVar4 = local_21 / 0x33;
    iVar11 = MulDiv(0x24,(uint)(byte)local_23,0x33);
    local_2c = (char)iVar10 + bVar4 + (char)iVar11 + '\x01';
  }
  local_34 = (byte *)0x0;
  local_41 = 0;
  if (local_2a == '\0') {
    local_30 = (byte *)0x0;
    local_3c = 0;
    local_40 = 0;
    local_42 = 0;
  }
  else {
    uVar7 = FUN_005281b8(param_1,3);
    local_3c = ((uVar7 & 0xffff) + 0xf >> 4) * 2;
    uVar7 = FUN_005281b8(param_1,3);
    local_40 = (uVar7 & 0xffff) + 7 >> 3;
    bVar4 = FUN_005281b8(param_1,3);
    local_42 = '\x01' << (8 - (bVar4 & 7) & 7);
    uVar7 = FUN_005281b8(param_1,4);
    lVar1 = (longlong)(int)(uVar7 & 0xffff) * (longlong)local_3c;
    local_30 = (byte *)FUN_00404324((int)lVar1,(int)((ulonglong)lVar1 >> 0x20));
    uVar7 = FUN_005281b8(param_1,4);
    FUN_00404f38(local_30,(uVar7 & 0xffff) * local_3c,0);
  }
  uVar9 = *in_FS_OFFSET;
  *in_FS_OFFSET = &stack0xffffff5c;
  local_20 = 0;
  local_38 = local_30;
  local_18 = *(byte **)(param_1 + 0x18);
  while( true ) {
    uVar7 = FUN_005281b8(param_1,4);
    if ((int)(uVar7 & 0xffff) <= (int)local_20) break;
    if ((local_20 & 0x1f) == 0) {
      uVar7 = FUN_005281b8(param_1,4);
      iVar10 = MulDiv(local_20,100,uVar7 & 0xffff);
      uVar14 = 0;
      FUN_00436ad0(0,0,0,local_54,0);
      puVar13 = local_54;
      FUN_0040b9d0(&LAB_0051ec1c,&local_58);
      FUN_00406268(*(undefined4 *)(param_1 + 4),param_1,1,local_58,puVar13,uVar14,iVar10);
    }
    local_1c = (undefined1 *)(**(code **)*local_14)(local_14,local_20);
    if (local_2a != '\0') {
      uVar6 = FUN_005281b8(param_1,3);
      FUN_00404f38(local_1c,uVar6,local_2c);
      if (local_10[1] == 1) {
        local_34 = local_38;
        local_41 = 0x80;
      }
      else {
        local_34 = local_38 + (local_40 - 1);
        local_41 = local_42;
      }
    }
    local_1c = (undefined1 *)((int)local_1c + local_10[2]);
    while ((local_10[2] < local_10[4] && (-1 < local_10[2]))) {
      iVar10 = (uint)*local_18 * 3;
      uVar6 = *(undefined2 *)(local_28 + iVar10);
      local_21 = *(byte *)(local_28 + 2 + iVar10);
      local_23 = uVar6;
      if ((local_2a == '\0') || (*local_18 != local_29)) {
        local_23._1_1_ = (byte)((ushort)uVar6 >> 8);
        uVar5 = local_23._1_1_;
        local_23._0_1_ = (byte)uVar6;
        uVar2 = (byte)local_23;
        uVar5 = (**(code **)(*local_10 + 4))
                          (local_10,uVar2,uVar5,&local_21,(int)&local_23 + 1,&local_23,local_21);
        *local_1c = uVar5;
      }
      else {
        *local_34 = *local_34 | local_41;
        local_2b = '\x01';
        FUN_00521b8c(local_10);
      }
      if (local_2a != '\0') {
        if (local_10[1] == 1) {
          local_41 = local_41 >> 1;
          if (local_41 == 0) {
            local_41 = 0x80;
            local_34 = local_34 + 1;
          }
        }
        else {
          local_41 = local_41 << 1;
          if (local_41 == 0) {
            local_41 = 1;
            local_34 = local_34 + -1;
          }
        }
      }
      local_18 = local_18 + local_10[1];
      local_1c = local_1c + local_10[1];
    }
    if (local_2a != '\0') {
      local_38 = local_38 + local_3c;
    }
    local_20 = local_20 + 1;
    uVar7 = FUN_005281b8(param_1,3);
    local_18 = local_18 + ((uVar7 & 0xffff) - local_10[1]);
    (**(code **)(*local_10 + 8))();
  }
  if ((local_2a != '\0') && (local_2b != '\0')) {
    nBitCount = 1;
    nPlanes = 1;
    lpBits = local_30;
    uVar7 = FUN_005281b8(param_1,4);
    uVar7 = uVar7 & 0xffff;
    uVar8 = FUN_005281b8(param_1,3);
    pHVar12 = CreateBitmap(uVar8 & 0xffff,uVar7,nPlanes,nBitCount,lpBits);
    *(HBITMAP *)(param_1 + 0xc) = pHVar12;
  }
  *in_FS_OFFSET = uVar9;
  if (local_30 != (byte *)0x0) {
    FUN_00404340(local_30,uVar9,puVar15);
  }
  return;
}
