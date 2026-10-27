// rea decompile_all
// name: FUN_0052521c
// address: 0x52521c
// body: available
// range: 0x52521c-0x525785 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x52523e (push 0x525786 followed by fs-segment stack chaining); handler 0x525786 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0052521c(int *param_1)

{
  undefined1 *puVar1;
  char cVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  HBRUSH hbr;
  HDC pHVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  UINT UVar10;
  int **ppiVar11;
  undefined4 *puVar12;
  undefined4 *in_FS_OFFSET;
  byte bVar13;
  undefined4 auStackY_181c [1510];
  int iVar14;
  int iVar15;
  int iVar16;
  undefined4 uVar17;
  tagRECT *ptVar18;
  undefined4 uVar19;
  RECT *pRVar20;
  UINT UVar21;
  undefined4 uVar22;
  undefined4 *puVar23;
  undefined4 uStack_60;
  undefined1 *puStack_5c;
  undefined1 *puStack_58;
  undefined4 local_48;
  undefined4 local_44;
  RECT local_40;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  tagRECT local_24;
  char local_12;
  char local_11;
  undefined4 local_10;
  undefined4 local_c;
  int *local_8;

  bVar13 = 0;
  puStack_58 = &stack0xfffffffc;
  local_48 = 0;
  local_44 = 0;
  ppiVar11 = &local_8;
  puStack_5c = &LAB_00525786;
  uStack_60 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_60;
  local_8 = param_1;
  cVar2 = (**(code **)(*param_1 + 0x5c))();
  if (cVar2 == '\0') {
    *(undefined1 *)((int)local_8 + 0x1ca) = 1;
    *(undefined1 *)((int)local_8 + 0x1b9) = 0;
  }
  else if (*(char *)((int)local_8 + 0x1ca) == '\x01') {
    if (((char)local_8[0x6e] == '\0') || (local_8[0x6c] == 0)) {
      *(undefined1 *)((int)local_8 + 0x1ca) = 0;
    }
    else {
      *(undefined1 *)((int)local_8 + 0x1ca) = 3;
    }
  }
  FUN_0045cd20(local_8[0x6a],local_8[0x19]);
  cVar2 = FUN_0050513c(local_8);
  if (cVar2 == '\0') {
    FUN_00438c38(0,0,local_8[0x12],&local_24,local_8[0x13]);
    if ((char)local_8[0x72] == '\0') {
      UVar10 = 0x2010;
      if ((byte)(*(char *)((int)local_8 + 0x1ca) - 2U) < 2) {
        UVar10 = 0x2210;
      }
      UVar21 = 4;
      ptVar18 = &local_24;
      pHVar6 = (HDC)FUN_0045ce2c(local_8[0x6a]);
      DrawFrameControl(pHVar6,ptVar18,UVar21,UVar10);
    }
    else {
      if (((byte)(*(char *)((int)local_8 + 0x1ca) - 2U) < 2) ||
         (((*(char *)((int)local_8 + 0x1c9) != '\0' && (*(char *)((int)local_8 + 0x1ca) != '\x01'))
          || ((*(byte *)(local_8 + 7) & 0x10) != 0)))) {
        uVar7 = *(uint *)(&DAT_00778eec + (uint)*(byte *)(local_8 + 0x70) * 4) | 0xf;
        UVar10 = *(UINT *)(&DAT_00778ee4 +
                          (uint)((byte)(*(char *)((int)local_8 + 0x1ca) - 2U) < 2) * 4);
        ptVar18 = &local_24;
        pHVar6 = (HDC)FUN_0045ce2c(local_8[0x6a]);
        DrawEdge(pHVar6,ptVar18,UVar10,uVar7);
      }
      else if ((char)local_8[0x70] == '\0') {
        FUN_0045bc24(*(undefined4 *)(local_8[0x6a] + 0x48),local_8[0x1b]);
        (**(code **)(*(int *)local_8[0x6a] + 0x4c))((int *)local_8[0x6a],&local_24);
      }
      InflateRect(&local_24,-1,-1);
    }
    if ((byte)(*(char *)((int)local_8 + 0x1ca) - 2U) < 2) {
      if ((*(char *)((int)local_8 + 0x1ca) == '\x03') &&
         (((char)local_8[0x72] == '\0' || (*(char *)((int)local_8 + 0x1c9) == '\0')))) {
        uVar4 = FUN_0046619c(0xff00000f,0xff000014);
        FUN_0045bbf8(*(undefined4 *)(local_8[0x6a] + 0x48),uVar4);
        (**(code **)(*(int *)local_8[0x6a] + 0x4c))((int *)local_8[0x6a],&local_24);
      }
      local_10 = 1;
      local_c = 1;
    }
    else {
      local_10 = 0;
      local_c = 0;
    }
    puVar23 = &local_10;
    FUN_004ee6a0(local_8,&local_48);
    uVar7 = (uint)*(byte *)((int)local_8 + 0x1bb);
    iVar16 = local_8[0x71];
    iVar15 = local_8[0x6f];
    uVar8 = (uint)*(byte *)((int)local_8 + 0x1ca);
    uVar9 = (uint)*(byte *)(local_8 + 0x70);
    uVar4 = local_48;
    uVar5 = FUN_004f1454(local_8,0);
    FUN_00524db0(local_8[0x6d],local_8[0x6a],&local_24,&local_40,uVar5,uVar9,uVar8,iVar15,iVar16,
                 uVar7,uVar4,puVar23);
    goto LAB_0052576b;
  }
  local_11 = FUN_005251c4();
  if (local_11 == '\0') {
    if ((char)local_8[0x70] == '\0') {
      uVar4 = FUN_0045ce2c(local_8[0x6a]);
      FUN_004eafbc(local_8,uVar4);
    }
    else {
      uVar22 = 0;
      uVar19 = 0;
      uVar17 = 0;
      uVar4 = FUN_0045ce2c(local_8[0x6a]);
      uVar5 = FUN_00503a6c();
      FUN_00503e2c(uVar5,0,uVar4,uVar17,uVar19,uVar22);
    }
  }
  else {
    hbr = GetStockObject(4);
    (**(code **)(*local_8 + 0x54))(local_8,&local_40);
    pRVar20 = &local_40;
    pHVar6 = (HDC)FUN_0045ce2c(local_8[0x6a]);
    FillRect(pHVar6,pRVar20,hbr);
  }
  cVar2 = (**(code **)(*local_8 + 0x5c))();
  if (cVar2 == '\0') {
    local_12 = '\x05';
  }
  else if ((byte)(*(char *)((int)local_8 + 0x1ca) - 2U) < 2) {
    local_12 = '\x04';
  }
  else if (*(char *)((int)local_8 + 0x1c9) == '\0') {
    local_12 = '\x02';
  }
  else {
    local_12 = '\x03';
  }
  cVar2 = '\0';
  if ((char)local_8[0x72] != '\0') {
    if (local_12 == '\x02') {
      cVar2 = '\x02';
    }
    else if (local_12 == '\x03') {
      cVar2 = '\x03';
    }
    else if (local_12 == '\x04') {
      cVar2 = '\x04';
    }
    else if (local_12 == '\x05') {
      cVar2 = '\x05';
    }
  }
  (**(code **)(*local_8 + 0x54))(local_8,&local_24);
  if (cVar2 == '\0') {
    uVar4 = FUN_00503a6c();
    FUN_00503f3c(uVar4,local_12,&local_30);
    ptVar18 = &local_24;
    uVar4 = FUN_0045ce2c(local_8[0x6a]);
    uVar5 = FUN_00503a6c();
    FUN_00503d0c(uVar5,uVar4,&local_30,ptVar18);
    ptVar18 = &local_24;
    pRVar20 = &local_40;
    uVar4 = FUN_0045ce2c(local_8[0x6a]);
    uVar5 = FUN_00503a6c();
    FUN_00503c24(uVar5,uVar4,&local_30,pRVar20,ptVar18);
    local_24.left = local_40.left;
    puVar12 = (undefined4 *)((int)&local_24 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8);
    puVar23 = (undefined4 *)((int)&local_40 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8);
    *(undefined4 *)((int)&local_24 + (uint)bVar13 * -8 + 4) =
         *(undefined4 *)((int)&local_40 + (uint)bVar13 * -8 + 4);
    *puVar12 = *puVar23;
    puVar12[(uint)bVar13 * -2 + 1] = puVar23[(uint)bVar13 * -2 + 1];
  }
  else {
    uVar4 = FUN_00503a6c();
    FUN_005048f4(uVar4,cVar2,&local_30);
    ptVar18 = &local_24;
    uVar4 = FUN_0045ce2c(local_8[0x6a]);
    uVar5 = FUN_00503a6c();
    FUN_00503d0c(uVar5,uVar4,&local_30,ptVar18);
    ptVar18 = &local_24;
    pRVar20 = &local_40;
    uVar4 = FUN_0045ce2c(local_8[0x6a]);
    uVar5 = FUN_00503a6c();
    FUN_00503c24(uVar5,uVar4,&local_30,pRVar20,ptVar18);
    local_24.left = local_40.left;
    puVar12 = (undefined4 *)((int)&local_24 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8);
    puVar23 = (undefined4 *)((int)&local_40 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8);
    *(undefined4 *)((int)&local_24 + (uint)bVar13 * -8 + 4) =
         *(undefined4 *)((int)&local_40 + (uint)bVar13 * -8 + 4);
    *puVar12 = *puVar23;
    puVar12[(uint)bVar13 * -2 + 1] = puVar23[(uint)bVar13 * -2 + 1];
    if (cVar2 == '\x05') {
      uVar4 = FUN_00503a6c();
      FUN_00503f3c(uVar4,local_12,&local_30);
    }
  }
  FUN_00438bf4(0,0,&local_10);
  if (local_12 == '\x04') {
    if (cVar2 != '\0') {
      cVar2 = FUN_0041d030(6,0);
      if (cVar2 == '\0') {
        FUN_0045b0d0(*(undefined4 *)((*ppiVar11)[0x6a] + 0x40),0xff00000e);
        goto LAB_005254dc;
      }
    }
    if ((char)(*ppiVar11)[0x72] != '\0') {
      FUN_00438bf4(1,0,&local_10);
    }
  }
LAB_005254dc:
  iVar16 = (*ppiVar11)[0x6d];
  *(char *)(iVar16 + 0x21) = local_11;
  *(undefined4 *)(iVar16 + 0x24) = local_30;
  *(undefined4 *)(iVar16 + 0x28) = local_2c;
  *(undefined4 *)(iVar16 + 0x2c) = local_28;
  *(undefined1 *)(iVar16 + 0x30) = 0x12;
  uVar3 = FUN_0050513c(*ppiVar11);
  iVar16 = (*ppiVar11)[0x6d];
  *(undefined1 *)(iVar16 + 0x31) = uVar3;
  puVar23 = &local_10;
  FUN_004ee6a0(*ppiVar11,&local_44);
  uVar7 = (uint)*(byte *)((int)*ppiVar11 + 0x1bb);
  iVar15 = (*ppiVar11)[0x71];
  iVar14 = (*ppiVar11)[0x6f];
  uVar8 = (uint)*(byte *)((int)*ppiVar11 + 0x1ca);
  uVar9 = (uint)*(byte *)(*ppiVar11 + 0x70);
  uVar4 = local_44;
  uVar5 = FUN_004f1454(*ppiVar11,0);
  FUN_00524db0(iVar16,(*ppiVar11)[0x6a],&local_24,&local_40,uVar5,uVar9,uVar8,iVar14,iVar15,uVar7,
               uVar4,puVar23);
LAB_0052576b:
  puVar1 = puStack_58;
  *in_FS_OFFSET = uStack_60;
  puStack_58 = &LAB_0052578d;
  puStack_5c = (undefined1 *)0x525785;
  thunk_FUN_00406e80(&local_48,2,puVar1);
  return;
}
