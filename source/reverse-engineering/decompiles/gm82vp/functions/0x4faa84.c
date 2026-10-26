// rea decompile_all
// name: FUN_004faa84
// address: 0x4faa84
// body: available
// range: 0x4faa84-0x4faff3 inclusive
// range: 0x4fb019-0x4fb02e inclusive
// range: 0x4fb04c-0x4fb054 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4fab51 (push 0x4fb02f followed by fs-segment stack chaining); handler 0x4fb02f lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4fac69 (push 0x4faff4 followed by fs-segment stack chaining); handler 0x4faff4 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_004faa84(int param_1,byte param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  HDC pHVar7;
  HDC pHVar8;
  int *piVar9;
  byte bVar10;
  undefined4 *in_FS_OFFSET;
  int iVar11;
  int iVar12;
  int x1;
  int iVar13;
  int y1;
  undefined1 *puVar14;
  DWORD DVar15;
  COLORREF CVar16;
  undefined4 uStack_60;
  undefined1 *puStack_5c;
  undefined1 *puStack_58;
  undefined4 uStack_54;
  undefined1 *puStack_50;
  undefined1 *puStack_4c;
  undefined1 local_3c [16];
  undefined1 local_2c [16];
  int local_1c;
  int *local_18;
  int *local_14;
  int *local_10;
  byte local_9;
  int local_8;

  local_9 = param_2;
  if ((param_2 == 2) && (*(byte *)(param_1 + 0x20) < 3)) {
    local_9 = 0;
  }
  iVar2 = *(int *)(param_1 + 0xc + (uint)local_9 * 4);
  if (iVar2 != -1) {
    return iVar2;
  }
  puStack_4c = (undefined1 *)0x4faac5;
  local_8 = param_1;
  iVar2 = (**(code **)(**(int **)(param_1 + 4) + 0x30))();
  puStack_4c = (undefined1 *)0x4faad2;
  iVar3 = (**(code **)(**(int **)(local_8 + 4) + 0x24))();
  if (iVar2 == 0 && iVar3 == 0) {
    return -1;
  }
  puStack_4c = (undefined1 *)0x4faae5;
  iVar2 = (**(code **)(**(int **)(local_8 + 4) + 0x30))();
  iVar2 = iVar2 / (int)(uint)*(byte *)(local_8 + 0x20);
  puStack_4c = (undefined1 *)0x4faafe;
  iVar3 = (**(code **)(**(int **)(local_8 + 4) + 0x24))();
  if (*(int *)(local_8 + 8) == 0) {
    if (DAT_00681dd8 == 0) {
      puStack_4c = (undefined1 *)0x4fab1e;
      DAT_00681dd8 = FUN_004fa774(&DAT_004fa190,1);
    }
    puStack_4c = (undefined1 *)0x4fab31;
    uVar4 = FUN_004fa7e8(DAT_00681dd8,iVar2,iVar3);
    *(undefined4 *)(local_8 + 8) = uVar4;
  }
  puStack_4c = (undefined1 *)0x4fab43;
  local_10 = (int *)FUN_00462804(&PTR_FUN_00458e94,1);
  puStack_50 = &LAB_004fb02f;
  uStack_54 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_54;
  puStack_58 = (undefined1 *)0x4fab5e;
  puStack_4c = &stack0xfffffffc;
  (**(code **)(*local_10 + 0x44))(local_10,iVar2);
  puStack_58 = (undefined1 *)0x4fab68;
  (**(code **)(*local_10 + 0x38))(local_10,iVar3);
  puStack_5c = local_2c;
  uStack_60 = 0x4fab78;
  puStack_58 = (undefined1 *)iVar3;
  FUN_00436ad0(0,0,iVar2);
  puStack_58 = (undefined1 *)0x4fab80;
  iVar5 = FUN_00463124(local_10);
  puStack_58 = (undefined1 *)0x4fab8d;
  FUN_0045c2e4(*(undefined4 *)(iVar5 + 0x48),0xff00000f);
  puStack_58 = (undefined1 *)0x4fab98;
  (**(code **)(**(int **)(local_8 + 4) + 0x28))();
  puStack_58 = (undefined1 *)0x4fab9d;
  uVar4 = FUN_00462594();
  puStack_58 = (undefined1 *)0x4faba7;
  (**(code **)(*local_10 + 0x3c))(local_10,uVar4);
  bVar10 = local_9;
  if (*(char *)(local_8 + 0x20) <= (char)local_9) {
    bVar10 = 0;
  }
  puStack_5c = local_3c;
  uStack_60 = 0x4fabcd;
  puStack_58 = (undefined1 *)iVar3;
  FUN_00436ad0((uint)bVar10 * iVar2,0,(bVar10 + 1) * iVar2);
  if (local_9 != 0) {
    if (local_9 == 1) {
      local_18 = (int *)0x0;
      local_14 = (int *)0x0;
      puStack_5c = &LAB_004faff4;
      uStack_60 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_60;
      puStack_58 = &stack0xfffffffc;
      local_18 = (int *)FUN_00462804(&PTR_FUN_00458e94,1);
      local_14 = (int *)FUN_00462804(&PTR_FUN_00458e94,1);
      (**(code **)(*local_14 + 8))(local_14,*(undefined4 *)(local_8 + 4));
      (**(code **)(*local_14 + 0x78))(local_14,1);
      if (*(byte *)(local_8 + 0x20) < 2) {
        (**(code **)(*local_18 + 8))(local_18,*(undefined4 *)(local_8 + 4));
        (**(code **)(*local_18 + 0x78))(local_18,1);
        iVar5 = FUN_00463124(local_18);
        FUN_0045c2e4(*(undefined4 *)(iVar5 + 0x48),0);
        (**(code **)(*local_18 + 0x44))(local_18,iVar2);
        cVar1 = FUN_004631f4(local_18);
        if (cVar1 != '\0') {
          iVar5 = FUN_00463124(local_18);
          FUN_0045b790(*(undefined4 *)(iVar5 + 0x40),0xffffff);
          FUN_00464330(local_18,0);
          iVar5 = FUN_00463124(local_18);
          FUN_0045c2e4(*(undefined4 *)(iVar5 + 0x48),0xffffff);
        }
        FUN_00464330(local_18,1);
        piVar9 = (int *)FUN_00463124(local_10);
        FUN_0045c2e4(piVar9[0x12],0xff00000f);
        (**(code **)(*piVar9 + 0x4c))(piVar9,local_2c);
        FUN_0045c2e4(piVar9[0x12],0xff000014);
        CVar16 = 0;
        pHVar7 = (HDC)FUN_0045d4ec(piVar9);
        SetTextColor(pHVar7,CVar16);
        CVar16 = 0xffffff;
        pHVar7 = (HDC)FUN_0045d4ec(piVar9);
        SetBkColor(pHVar7,CVar16);
        DVar15 = 0xe20746;
        y1 = 0;
        x1 = 0;
        FUN_00463124(local_18);
        pHVar7 = (HDC)FUN_0045d4ec();
        iVar12 = 1;
        iVar11 = 1;
        iVar5 = iVar2;
        iVar13 = iVar3;
        pHVar8 = (HDC)FUN_0045d4ec(piVar9);
        BitBlt(pHVar8,iVar11,iVar12,iVar5,iVar13,pHVar7,x1,y1,DVar15);
        FUN_0045c2e4(piVar9[0x12],0xff000010);
        CVar16 = 0;
        pHVar7 = (HDC)FUN_0045d4ec(piVar9);
        SetTextColor(pHVar7,CVar16);
        CVar16 = 0xffffff;
        pHVar7 = (HDC)FUN_0045d4ec(piVar9);
        SetBkColor(pHVar7,CVar16);
        DVar15 = 0xe20746;
        iVar12 = 0;
        iVar11 = 0;
        FUN_00463124(local_18);
        pHVar7 = (HDC)FUN_0045d4ec();
        iVar13 = 0;
        iVar5 = 0;
        pHVar8 = (HDC)FUN_0045d4ec(piVar9);
        BitBlt(pHVar8,iVar5,iVar13,iVar2,iVar3,pHVar7,iVar11,iVar12,DVar15);
      }
      else {
        local_1c = FUN_00463124(local_10);
        puVar14 = local_3c;
        uVar4 = FUN_00463124(local_14);
        FUN_0045cac0(local_1c,local_2c,uVar4,puVar14);
        FUN_00464330(local_18,1);
        (**(code **)(*local_18 + 0x44))(local_18,iVar2);
        (**(code **)(*local_18 + 0x38))(local_18,iVar3);
        iVar5 = FUN_00463124(local_14);
        FUN_0045c2e4(*(undefined4 *)(iVar5 + 0x48),0xffffff);
        puVar14 = local_3c;
        uVar4 = FUN_00463124(local_14);
        uVar6 = FUN_00463124(local_18);
        FUN_0045cac0(uVar6,local_2c,uVar4,puVar14);
        FUN_0045c2e4(*(undefined4 *)(local_1c + 0x48),0xff000014);
        pHVar7 = (HDC)FUN_0045d4ec(local_1c);
        SetTextColor(pHVar7,0);
        SetBkColor(pHVar7,0xffffff);
        DVar15 = 0xe20746;
        iVar13 = 0;
        iVar5 = 0;
        FUN_00463124(local_18);
        pHVar8 = (HDC)FUN_0045d4ec();
        BitBlt(pHVar7,0,0,iVar2,iVar3,pHVar8,iVar5,iVar13,DVar15);
        iVar5 = FUN_00463124(local_14);
        FUN_0045c2e4(*(undefined4 *)(iVar5 + 0x48),&DAT_00808080);
        puVar14 = local_3c;
        uVar4 = FUN_00463124(local_14);
        uVar6 = FUN_00463124(local_18);
        FUN_0045cac0(uVar6,local_2c,uVar4,puVar14);
        FUN_0045c2e4(*(undefined4 *)(local_1c + 0x48),0xff000010);
        pHVar7 = (HDC)FUN_0045d4ec(local_1c);
        SetTextColor(pHVar7,0);
        SetBkColor(pHVar7,0xffffff);
        DVar15 = 0xe20746;
        iVar13 = 0;
        iVar5 = 0;
        FUN_00463124(local_18);
        pHVar8 = (HDC)FUN_0045d4ec();
        BitBlt(pHVar7,0,0,iVar2,iVar3,pHVar8,iVar5,iVar13,DVar15);
        uVar4 = FUN_0045b0f4(*(undefined4 *)(local_8 + 0x1c));
        iVar5 = FUN_00463124(local_14);
        FUN_0045c2e4(*(undefined4 *)(iVar5 + 0x48),uVar4);
        puVar14 = local_3c;
        uVar4 = FUN_00463124(local_14);
        uVar6 = FUN_00463124(local_18);
        FUN_0045cac0(uVar6,local_2c,uVar4,puVar14);
        FUN_0045c2e4(*(undefined4 *)(local_1c + 0x48),0xff00000f);
        pHVar7 = (HDC)FUN_0045d4ec(local_1c);
        SetTextColor(pHVar7,0);
        SetBkColor(pHVar7,0xffffff);
        DVar15 = 0xe20746;
        iVar13 = 0;
        iVar5 = 0;
        FUN_00463124(local_18);
        pHVar8 = (HDC)FUN_0045d4ec();
        BitBlt(pHVar7,0,0,iVar2,iVar3,pHVar8,iVar5,iVar13,DVar15);
      }
      puVar14 = puStack_58;
      *in_FS_OFFSET = uStack_60;
      puStack_58 = &DAT_004faffb;
      puStack_5c = (undefined1 *)0x4fafeb;
      FUN_00405fdc(local_14,uStack_60,puVar14);
      puStack_5c = (undefined1 *)0x4faff3;
      iVar2 = FUN_00405fdc(local_18);
      return iVar2;
    }
    if (1 < (byte)(local_9 - 2)) goto LAB_004fb019;
  }
  puStack_58 = local_3c;
  puStack_5c = (undefined1 *)0x4fabef;
  puStack_5c = (undefined1 *)FUN_00463124(*(undefined4 *)(local_8 + 4));
  uStack_60 = 0x4fabf8;
  uVar4 = FUN_00463124(local_10);
  puVar14 = puStack_5c;
  puStack_5c = (undefined1 *)0x4fac01;
  FUN_0045cac0(uVar4,local_2c,puVar14);
  if (*(char *)(*(int *)(local_8 + 4) + 0x38) == '\x01') {
    puStack_58 = (undefined1 *)0x4fac21;
    uVar4 = FUN_004fa718(*(undefined4 *)(local_8 + 8),local_10,*(undefined4 *)(local_8 + 0x1c));
    *(undefined4 *)(local_8 + 0xc + (uint)local_9 * 4) = uVar4;
  }
  else {
    puStack_58 = (undefined1 *)0x4fac44;
    uVar4 = FUN_004fa718(*(undefined4 *)(local_8 + 8),local_10,0x20000000);
    *(undefined4 *)(local_8 + 0xc + (uint)local_9 * 4) = uVar4;
  }
LAB_004fb019:
  puVar14 = puStack_4c;
  *in_FS_OFFSET = uStack_54;
  puStack_4c = &DAT_004fb036;
  puStack_50 = (undefined1 *)0x4fb02e;
  iVar2 = FUN_00405fdc(local_10,uStack_54,puVar14);
  return iVar2;
}
