// rea decompile_all
// name: FUN_004a109c
// address: 0x4a109c
// body: available
// range: 0x4a109c-0x4a165a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4a10d0 (push 0x4a165b followed by fs-segment stack chaining); handler 0x4a165b lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004a109c(int param_1,byte param_2,ushort param_3,byte param_4)

{
  undefined1 *puVar1;
  char cVar2;
  byte bVar3;
  undefined4 uVar4;
  uint uVar5;
  LPCWSTR pWVar6;
  HDC pHVar7;
  int iVar8;
  HICON pHVar9;
  ushort uVar10;
  int *piVar11;
  LONG LVar12;
  undefined **ppuVar13;
  int *in_FS_OFFSET;
  bool bVar14;
  byte abStackY_100b [3943];
  int iVar15;
  tagRECT *ptVar16;
  int iVar17;
  undefined1 *puStack_90;
  undefined1 *puStack_8c;
  undefined1 *puStack_88;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  tagRECT local_68;
  int *local_58;
  undefined **local_54;
  int local_50;
  int *local_4c;
  int *local_48;
  byte local_41;
  int local_40;
  int local_3c;
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
  int *local_10;
  ushort local_b;
  byte local_9;
  int local_8;

  local_78 = 0;
  local_74 = 0;
  local_70 = 0;
  local_6c = 0;
  puStack_88 = (undefined1 *)0x4a10c5;
  local_b = param_3;
  local_9 = param_2;
  local_8 = param_1;
  thunk_FUN_00407ad0(param_1);
  puStack_8c = &LAB_004a165b;
  puStack_90 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = (int)&puStack_90;
  puStack_88 = &stack0xfffffffc;
  local_10 = (int *)FUN_004a0ab8(&PTR_LAB_004a08f8,1,*(undefined4 *)PTR_DAT_0068917c,0);
  (**(code **)(*local_10 + 0x80))(local_10,*(undefined1 *)(*(int *)PTR_DAT_0068917c + 0x35));
  FUN_004e2e6c(local_10,3);
  uVar4 = FUN_004e3248(local_10);
  FUN_0045d3e0(uVar4,local_10[0x19]);
  *(undefined1 *)(local_10 + 0xa7) = 1;
  FUN_004e37a0(local_10,1);
  FUN_004e3784(local_10,0);
  local_10[0x87] = (int)local_10;
  local_10[0x86] = (int)&LAB_004a0b24;
  uVar4 = FUN_004e3248(local_10);
  FUN_004a0848(uVar4,&local_18);
  iVar15 = local_18;
  local_1c = MulDiv(8,local_18,4);
  local_20 = MulDiv(8,local_14,8);
  local_24 = MulDiv(10,iVar15,4);
  local_28 = MulDiv(10,local_14,8);
  local_2c = MulDiv(0x32,iVar15,4);
  uVar10 = 0;
  piVar11 = &DAT_0068f1d0;
  local_54 = &PTR_LAB_00681620;
  do {
    bVar14 = (byte)uVar10 < 0xf;
    if ((byte)uVar10 < 0x10) {
      bVar14 = (*(byte *)((int)&local_b + ((int)(short)(uVar10 & 0x7f) >> 3)) >> (uVar10 & 7) & 1)
               != 0;
    }
    if (bVar14) {
      if (*piVar11 == 0) {
        FUN_00436ad0(0,0,0,&local_68,0);
        uVar5 = FUN_004be44c(local_10);
        uVar5 = uVar5 | 0x420;
        ptVar16 = &local_68;
        iVar15 = -1;
        FUN_0040b9d0(*local_54,&local_6c);
        pWVar6 = (LPCWSTR)FUN_00408220(local_6c);
        FUN_004e3248(local_10);
        pHVar7 = (HDC)FUN_0045d4ec();
        DrawTextW(pHVar7,pWVar6,iVar15,ptVar16,uVar5);
        *piVar11 = (local_68.right - local_68.left) + 8;
      }
      if (local_2c < *piVar11) {
        local_2c = *piVar11;
      }
    }
    uVar10 = uVar10 + 1;
    local_54 = local_54 + 1;
    piVar11 = piVar11 + 1;
  } while ((char)uVar10 != '\f');
  local_30 = MulDiv(0xe,local_14,8);
  local_34 = MulDiv(4,local_18,4);
  iVar17 = 0;
  uVar5 = FUN_004e86ac(*(undefined4 *)PTR_DAT_00689620);
  iVar15 = (int)uVar5 >> 1;
  if (iVar15 < 0) {
    iVar15 = iVar15 + (uint)((uVar5 & 1) != 0);
  }
  SetRect(&local_68,0,0,iVar15,iVar17);
  FUN_004e3248(local_10);
  pHVar7 = (HDC)FUN_0045d4ec();
  iVar15 = local_8;
  if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
    iVar15 = FUN_00407488(&local_8,local_8);
  }
  iVar17 = 0;
  if (iVar15 != 0) {
    iVar17 = *(int *)(iVar15 + -4);
  }
  uVar5 = FUN_004be44c(local_10);
  uVar5 = uVar5 | 0x450;
  ptVar16 = &local_68;
  iVar17 = iVar17 + 1;
  pWVar6 = (LPCWSTR)FUN_00408220(local_8);
  local_50 = DrawTextW(pHVar7,pWVar6,iVar17,ptVar16,uVar5);
  pWVar6 = *(LPCWSTR *)(&DAT_0068160c + (uint)local_9 * 4);
  local_38 = local_68.bottom;
  LVar12 = local_68.right;
  if ((pWVar6 != (LPCWSTR)0x0) &&
     (LVar12 = local_68.right + local_24 + 0x20, local_68.bottom < 0x20)) {
    local_38 = 0x20;
  }
  iVar15 = 0;
  uVar10 = 0;
  do {
    bVar14 = (byte)uVar10 < 0xf;
    if ((byte)uVar10 < 0x10) {
      bVar14 = (*(byte *)((int)&local_b + ((int)(short)(uVar10 & 0x7f) >> 3)) >> (uVar10 & 7) & 1)
               != 0;
    }
    if (bVar14) {
      iVar15 = iVar15 + 1;
    }
    uVar10 = uVar10 + 1;
  } while ((char)uVar10 != '\f');
  iVar17 = 0;
  if (iVar15 != 0) {
    iVar17 = local_2c * iVar15 + (iVar15 + -1) * local_34;
  }
  iVar15 = iVar17;
  if (iVar17 < LVar12) {
    iVar15 = LVar12;
  }
  FUN_004e1ed8(local_10,local_1c * 2 + iVar15);
  FUN_004e1f0c(local_10,local_38 + local_30 + local_28 + local_20 * 2);
  uVar5 = FUN_004e86ac(*(undefined4 *)PTR_DAT_00689620);
  iVar15 = (int)uVar5 >> 1;
  if (iVar15 < 0) {
    iVar15 = iVar15 + (uint)((uVar5 & 1) != 0);
  }
  iVar8 = local_10[0x12] >> 1;
  if (iVar8 < 0) {
    iVar8 = iVar8 + (uint)((local_10[0x12] & 1U) != 0);
  }
  FUN_004e7918(local_10,iVar15 - iVar8);
  uVar5 = FUN_004e86a0(*(undefined4 *)PTR_DAT_00689620);
  iVar15 = (int)uVar5 >> 1;
  if (iVar15 < 0) {
    iVar15 = iVar15 + (uint)((uVar5 & 1) != 0);
  }
  iVar8 = local_10[0x13] >> 1;
  if (iVar8 < 0) {
    iVar8 = iVar8 + (uint)((local_10[0x13] & 1U) != 0);
  }
  FUN_004e7954(local_10,iVar15 - iVar8);
  if (local_9 == 4) {
    FUN_004eb164(*(undefined4 *)PTR_DAT_0068917c,&local_74);
    FUN_004bb690(local_10,local_74);
  }
  else {
    FUN_0040b9d0((&PTR_LAB_006815f8)[local_9],&local_70);
    FUN_004bb690(local_10,local_70);
  }
  if (pWVar6 != (LPCWSTR)0x0) {
    local_4c = (int *)FUN_00483e90(&PTR_FUN_004821e8,1,local_10);
    (**(code **)(*local_4c + 0x18))(local_4c,L"Image");
    (**(code **)(*local_4c + 0x78))(local_4c,local_10);
    pHVar9 = LoadIconW((HINSTANCE)0x0,pWVar6);
    uVar4 = FUN_0045fd24(local_4c[0x6c]);
    FUN_004652b0(uVar4,pHVar9);
    (**(code **)(*local_4c + 0x98))(local_4c,local_1c,local_20,0x20,0x20);
  }
  iVar15 = FUN_00476a18(&PTR_FUN_0046fff8,1,local_10);
  local_10[0xe2] = iVar15;
  piVar11 = (int *)local_10[0xe2];
  (**(code **)(*piVar11 + 0x18))(piVar11,L"Message");
  (**(code **)(*piVar11 + 0x78))(piVar11,local_10);
  FUN_00477384(piVar11,1);
  FUN_004bb690(piVar11,local_8);
  FUN_004baf08(piVar11,&local_68);
  (**(code **)(*piVar11 + 0x80))(piVar11,*(undefined1 *)((int)local_10 + 0x61));
  local_40 = (LVar12 - local_68.right) + local_1c;
  cVar2 = FUN_00406268(piVar11);
  if (cVar2 != '\0') {
    iVar15 = FUN_004baf44(local_10);
    local_40 = (iVar15 - local_40) - piVar11[0x12];
  }
  (**(code **)(*piVar11 + 0x98))(piVar11,local_40,local_20,local_68.bottom,local_68.right);
  if ((local_b & 8) == 0) {
    if ((local_b & 2) == 0) {
      local_41 = 2;
    }
    else {
      local_41 = 1;
    }
  }
  else {
    local_41 = 3;
  }
  iVar15 = FUN_004baf44(local_10);
  local_3c = iVar15 - iVar17 >> 1;
  if (local_3c < 0) {
    local_3c = local_3c + (uint)((iVar15 - iVar17 & 1U) != 0);
  }
  uVar10 = 0;
  local_54 = &PTR_PTR_00681650;
  ppuVar13 = &PTR_LAB_00681620;
  local_58 = &DAT_00681680;
  iVar15 = local_68.bottom;
  do {
    bVar3 = (byte)uVar10;
    bVar14 = bVar3 < 0xf;
    if (bVar3 < 0x10) {
      bVar14 = (*(byte *)((int)&local_b + ((int)(short)(uVar10 & 0x7f) >> 3)) >> (uVar10 & 7) & 1)
               != 0;
    }
    if (bVar14) {
      local_48 = (int *)FUN_0047b3c8(&PTR_LAB_00474d7c,1,local_10);
      (**(code **)(*local_48 + 0x18))(local_48,*local_54);
      (**(code **)(*local_48 + 0x78))(local_48,local_10);
      FUN_0040b9d0(*ppuVar13,&local_78);
      FUN_004bb690(local_48,local_78);
      local_48[0xab] = *local_58;
      if (bVar3 == param_4) {
        FUN_0047b894(local_48,1);
        FUN_004e4900(local_10,local_48);
      }
      if (bVar3 == local_41) {
        *(undefined1 *)((int)local_48 + 0x279) = 1;
      }
      (**(code **)(*local_48 + 0x98))
                (local_48,local_3c,local_38 + local_20 + local_28,local_30,local_2c);
      local_3c = local_3c + local_2c + local_34;
      if (bVar3 == 10) {
        local_48[0x45] = (int)local_10;
        local_48[0x44] = (int)&LAB_004a0b0c;
      }
    }
    puVar1 = puStack_90;
    uVar10 = uVar10 + 1;
    local_58 = local_58 + 1;
    ppuVar13 = ppuVar13 + 1;
    local_54 = local_54 + 1;
  } while ((char)uVar10 != '\f');
  *in_FS_OFFSET = iVar15;
  puStack_90 = &LAB_004a1662;
  thunk_FUN_004072fc(&local_78,4,puVar1);
  thunk_FUN_004072d8(&local_8);
  return;
}
