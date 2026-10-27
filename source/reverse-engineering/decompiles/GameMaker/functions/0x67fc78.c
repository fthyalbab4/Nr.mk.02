// rea decompile_all
// name: FUN_0067fc78
// address: 0x67fc78
// body: available
// range: 0x67fc78-0x67fec3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0067fc78(int *param_1)

{
  LONG LVar1;
  int iVar2;
  HDC pHVar3;
  LPCWSTR pWVar4;
  uint uVar5;
  int iVar6;
  tagRECT *ptVar7;
  UINT UVar8;
  tagRECT tStack_44;
  undefined1 auStack_34 [4];
  undefined1 local_30 [8];
  int iStack_28;
  int iStack_24;
  undefined1 auStack_20 [8];
  int iStack_18;

  if (*(char *)(param_1[0xa7] + 0x38) != '\0') {
    tStack_44.left = 0x67fca4;
    FUN_0045b9a4(*(undefined4 *)(param_1[0x9c] + 0x44),1);
    tStack_44.left = 0x67fcb7;
    FUN_0045b850(*(undefined4 *)(param_1[0x9c] + 0x44),&DAT_00808080);
    tStack_44.left = 0x67fcc2;
    (**(code **)(*param_1 + 0x54))(param_1,local_30);
    tStack_44.left = 0x67fcdc;
    (**(code **)(*(int *)param_1[0x9c] + 0x5c))((int *)param_1[0x9c],5,iStack_24 + -0x1e);
    tStack_44.left = 0x67fce7;
    (**(code **)(*param_1 + 0x54))(param_1,local_30);
    tStack_44.left = iStack_24 + -0x1e;
    (**(code **)(*param_1 + 0x54))(param_1,auStack_20);
    LVar1 = tStack_44.left;
    tStack_44.left = 0x67fd11;
    (**(code **)(*(int *)param_1[0x9c] + 0x58))((int *)param_1[0x9c],iStack_18 + -5,LVar1);
    tStack_44.left = 0x67fd24;
    FUN_0045b850(*(undefined4 *)(param_1[0x9c] + 0x44),0xffffff);
    tStack_44.left = 0x67fd2f;
    (**(code **)(*param_1 + 0x54))(param_1,local_30);
    tStack_44.left = 0x67fd47;
    (**(code **)(*(int *)param_1[0x9c] + 0x5c))((int *)param_1[0x9c],4,iStack_24 + -0x1d);
    tStack_44.left = 0x67fd52;
    (**(code **)(*param_1 + 0x54))(param_1,local_30);
    tStack_44.left = iStack_24 + -0x1d;
    (**(code **)(*param_1 + 0x54))(param_1,auStack_20);
    LVar1 = tStack_44.left;
    tStack_44.left = 0x67fd79;
    (**(code **)(*(int *)param_1[0x9c] + 0x58))((int *)param_1[0x9c],iStack_18 + -4,LVar1);
    tStack_44.left = 0x67fd84;
    iVar2 = (**(code **)(*(int *)param_1[0xa4] + 0x24))();
    iVar6 = (int)(0x1cU - iVar2) >> 1;
    if (iVar6 < 0) {
      iVar6 = iVar6 + (uint)((0x1cU - iVar2 & 1) != 0);
    }
    tStack_44.left = param_1[0xa4];
    (**(code **)(*param_1 + 0x54))(param_1,local_30);
    (**(code **)(*(int *)param_1[0x9c] + 0x3c))((int *)param_1[0x9c],8,iStack_24 + -0x1c + iVar6);
    ptVar7 = &tStack_44;
    (**(code **)(*param_1 + 0x54))(param_1,&tStack_44);
    tStack_44.bottom = tStack_44.top;
    FUN_0045b498(*(undefined4 *)(param_1[0x9c] + 0x40),1);
    FUN_0045b0d0(*(undefined4 *)(param_1[0x9c] + 0x40),0xff000008);
    pHVar3 = (HDC)FUN_0045ce2c(param_1[0x9c]);
    UVar8 = 0x400;
    iVar2 = -1;
    pWVar4 = (LPCWSTR)FUN_00407f44(param_1[0xa8]);
    DrawTextW(pHVar3,pWVar4,iVar2,ptVar7,UVar8);
    iVar2 = tStack_44.bottom - tStack_44.top;
    (**(code **)(*param_1 + 0x54))(param_1,auStack_34);
    uVar5 = 0x1c - iVar2;
    tStack_44.top = (int)uVar5 >> 1;
    if (tStack_44.top < 0) {
      tStack_44.top = tStack_44.top + (uint)((uVar5 & 1) != 0);
    }
    tStack_44.top = iStack_28 + -0x1c + tStack_44.top;
    tStack_44.right = FUN_0045bec4(param_1[0x9c],param_1[0xa8]);
    if ((int *)param_1[0xa4] == (int *)0x0) {
      tStack_44.left = 0x10;
    }
    else {
      tStack_44.left = (**(code **)(*(int *)param_1[0xa4] + 0x30))();
      tStack_44.left = tStack_44.left + 0x10;
    }
    ptVar7 = &tStack_44;
    tStack_44.right = tStack_44.right + tStack_44.left;
    tStack_44.bottom = iVar2 + tStack_44.top;
    pHVar3 = (HDC)FUN_0045ce2c(param_1[0x9c]);
    UVar8 = 0;
    iVar2 = -1;
    pWVar4 = (LPCWSTR)FUN_00407f44(param_1[0xa8]);
    DrawTextW(pHVar3,pWVar4,iVar2,ptVar7,UVar8);
  }
  return;
}
