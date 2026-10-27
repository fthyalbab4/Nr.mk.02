// rea decompile_all
// name: FUN_0050ed7c
// address: 0x50ed7c
// body: available
// range: 0x50ed7c-0x50f072 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0050ed7c(int *param_1,char param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  undefined1 uVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  HWND pHVar9;
  HWND pHVar10;
  HDC hDC;
  int iVar11;
  undefined1 *puVar12;
  tagRECT *lprc;
  undefined1 *puVar13;
  undefined4 uVar14;
  char cStack_53;
  tagRECT tStack_50;
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [24];

  if ((*(char *)((int)param_1 + 0x311) == '\0') || (param_2 != *(char *)((int)param_1 + 0x312))) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  tStack_50.top._0_2_ = CONCAT11(uVar3,param_2);
  piVar1 = (int *)param_1[0x9c];
  tStack_50.left = 0x50edb9;
  FUN_0045c464(piVar1[0x12],0);
  tStack_50.left = 0x50edc6;
  FUN_0045c2e4(piVar1[0x12],0xff00000f);
  tStack_50.left = 0x50edd3;
  FUN_0045bf10(piVar1[0x11],0xff000006);
  tStack_50.left = 0x50ede0;
  FUN_0045c064(piVar1[0x11],1);
  tStack_50.left = param_1[0xc9] + param_3;
  uVar6 = param_1[0x13];
  (**(code **)(*piVar1 + 0x74))(piVar1,param_3,0);
  cStack_53 = (char)(uVar6 >> 8);
  if (cStack_53 == '\0') {
    FUN_0045bf10(piVar1[0x11],0xff000014);
    (**(code **)(*piVar1 + 0x5c))(piVar1,param_3 + 1,param_1[0x13] + -2);
    (**(code **)(*piVar1 + 0x58))(piVar1,param_3 + 1,1);
    (**(code **)(*piVar1 + 0x58))(piVar1,param_1[0xc9] + param_3 + -1,1);
    FUN_0045bf10(piVar1[0x11],0xff000010);
    (**(code **)(*piVar1 + 0x5c))(piVar1,param_3 + 2,param_1[0x13] + -2);
    (**(code **)(*piVar1 + 0x58))(piVar1,param_1[0xc9] + param_3 + -2,param_1[0x13] + -2);
    (**(code **)(*piVar1 + 0x58))(piVar1,param_1[0xc9] + param_3 + -2,1);
  }
  else {
    FUN_0045bf10(piVar1[0x11],0xff000010);
    (**(code **)(*piVar1 + 0x5c))(piVar1,param_3 + 1,param_1[0x13] + -2);
    (**(code **)(*piVar1 + 0x58))(piVar1,param_3 + 1,1);
    (**(code **)(*piVar1 + 0x58))(piVar1,param_1[0xc9] + param_3 + -1,1);
  }
  cVar4 = (**(code **)(*param_1 + 0x5c))();
  if ((cVar4 == '\0') && ((*(byte *)(param_1 + 7) & 0x10) == 0)) {
    iVar5 = 1;
  }
  else if (((char)param_1[0xe1] == '\0') || ((*(byte *)(param_1 + 7) & 0x10) != 0)) {
    if (*(char *)((int)param_1 + (uVar6 & 0xff) * 0x10 + 0x279) == '\0') {
      iVar5 = 1;
    }
    else {
      iVar5 = 0;
      if (*(char *)((int)param_1 + (uVar6 & 0xff) * 0x10 + 0x27a) != '\0') {
        iVar5 = 2;
      }
    }
  }
  else if (*(char *)((int)param_1 + (uVar6 & 0xff) * 0x10 + 0x27b) == '\0') {
    iVar5 = 1;
  }
  else {
    iVar5 = 0;
    if (*(char *)((int)param_1 + (uVar6 & 0xff) * 0x10 + 0x27a) != '\0') {
      iVar5 = 2;
    }
  }
  piVar2 = (int *)param_1[(uVar6 & 0xff) * 4 + iVar5 + 0x9f];
  uVar6 = (**(code **)(*piVar2 + 0x30))();
  iVar5 = (int)uVar6 >> 1;
  if (iVar5 < 0) {
    iVar5 = iVar5 + (uint)((uVar6 & 1) != 0);
  }
  tStack_50.left = param_1[0xc9] >> 1;
  if (tStack_50.left < 0) {
    tStack_50.left = tStack_50.left + (uint)((param_1[0xc9] & 1U) != 0);
  }
  tStack_50.left = tStack_50.left - iVar5;
  uVar6 = (**(code **)(*piVar2 + 0x24))();
  iVar5 = (int)uVar6 >> 1;
  if (iVar5 < 0) {
    iVar5 = iVar5 + (uint)((uVar6 & 1) != 0);
  }
  iVar11 = param_1[0x13] >> 1;
  if (iVar11 < 0) {
    iVar11 = iVar11 + (uint)((param_1[0x13] & 1U) != 0);
  }
  tStack_50.top = iVar11 - iVar5;
  if (cStack_53 != '\0') {
    tStack_50.left = tStack_50.left + 1;
    tStack_50.top = tStack_50.top + 1;
  }
  uVar7 = (**(code **)(*piVar2 + 0x24))();
  puVar13 = auStack_38;
  uVar8 = (**(code **)(*piVar2 + 0x30))();
  FUN_00436ad0(0,0,uVar8,puVar13,uVar7);
  puVar13 = auStack_38;
  uVar14 = 0x8080;
  uVar7 = (**(code **)(*piVar2 + 0x24))();
  puVar12 = auStack_28;
  uVar8 = (**(code **)(*piVar2 + 0x30))();
  FUN_00436af8(tStack_50.left + param_3,tStack_50.top,uVar8,puVar12,uVar7);
  (**(code **)(*piVar1 + 0x34))(piVar1,auStack_28,piVar2,uVar14,puVar13);
  pHVar9 = (HWND)FUN_004c45dc(param_1);
  pHVar10 = GetFocus();
  if ((pHVar9 == pHVar10) && ((char)uVar14 == (char)param_1[0xd2])) {
    FUN_00436af8(param_3,0,param_1[0xc9],&tStack_50,param_1[0x13]);
    cVar4 = (char)((uint)uVar14 >> 8);
    InflateRect(&tStack_50,-3,-3);
    if (cVar4 != '\0') {
      OffsetRect(&tStack_50,1,1);
    }
    lprc = &tStack_50;
    hDC = (HDC)FUN_0045d4ec(param_1[0x9c]);
    DrawFocusRect(hDC,lprc);
  }
  return;
}
