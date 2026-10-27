// rea decompile_all
// name: FUN_0046344c
// address: 0x46344c
// body: available
// range: 0x46344c-0x4637f8 inclusive
// range: 0x46382c-0x46388b inclusive
// range: 0x4638a4-0x4638bc inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4634b8 (push 0x46396f followed by fs-segment stack chaining); handler 0x46396f lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4634c6 (push 0x463942 followed by fs-segment stack chaining); handler 0x463942 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4636d4 (push 0x4638bd followed by fs-segment stack chaining); handler 0x4638bd lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x46370d (push 0x463825 followed by fs-segment stack chaining); handler 0x463825 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x46378c (push 0x4637f9 followed by fs-segment stack chaining); handler 0x4637f9 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x463872 (push 0x46388c followed by fs-segment stack chaining); handler 0x46388c lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0046344c(undefined4 param_1,int *param_2,int param_3,undefined2 *param_4)

{
  WORD WVar1;
  uint uVar2;
  longlong lVar3;
  BITMAPINFO *pBVar4;
  DWORD DVar5;
  int iVar6;
  HBITMAP h;
  HGDIOBJ ho;
  undefined2 extraout_var;
  uint uVar7;
  uint uVar8;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uStack_d4;
  undefined1 *puStack_d0;
  undefined1 *puStack_cc;
  undefined4 uStack_c8;
  undefined1 *puStack_c4;
  undefined1 *puStack_c0;
  undefined2 local_ae;
  int local_ac;
  ushort local_48;
  ushort local_46;
  WORD local_44;
  WORD local_42;
  BITMAPINFO *local_40;
  int *local_3c;
  HPALETTE local_38;
  HPALETTE local_34;
  HGDIOBJ local_30;
  HBITMAP local_2c;
  byte local_25;
  DWORD local_24;
  int local_20;
  BITMAPINFO *local_1c;
  void *local_18;
  HDC local_14;
  HDC local_10;
  int *local_c;
  undefined4 local_8;

  local_34 = (HPALETTE)0x0;
  local_2c = (HBITMAP)0x0;
  local_3c = (int *)0x0;
  puStack_c0 = (undefined1 *)0x46347f;
  local_c = param_2;
  local_8 = param_1;
  (**(code **)(*param_2 + 0xc))(param_2,&local_24,4);
  local_25 = local_24 == 0xc;
  if ((bool)local_25) {
    local_24 = 0x28;
  }
  puStack_c0 = (undefined1 *)0x4634a4;
  local_40 = (BITMAPINFO *)FUN_0040431c(local_24 + 0x40c);
  puStack_c4 = &LAB_0046396f;
  uStack_c8 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_c8;
  puStack_d0 = &LAB_00463942;
  uStack_d4 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_d4;
  local_1c = local_40;
  if (local_25 == 0) {
    puStack_cc = &stack0xfffffffc;
    puStack_c0 = &stack0xfffffffc;
    (**(code **)(*local_c + 0xc))(local_c,&(local_40->bmiHeader).biWidth,local_24 - 4);
    param_3 = param_3 - local_24;
    DVar5 = (local_40->bmiHeader).biCompression;
    if ((DVar5 != 3) && (DVar5 != 0)) {
      local_3c = (int *)FUN_00405a4c(&LAB_00433630,1);
      if (param_4 == (undefined2 *)0x0) {
        FUN_00404f08(&local_ae,0xe,0);
        local_ae = 0x4d42;
        local_ac = local_24 + param_3;
        param_4 = &local_ae;
      }
      (**(code **)(*local_3c + 0x10))(local_3c,param_4,0xe);
      (**(code **)(*local_3c + 0x10))(local_3c,&local_24,4);
      (**(code **)(*local_3c + 0x10))(local_3c,&(local_1c->bmiHeader).biWidth,local_24 - 4);
      FUN_0043f4f8(local_3c,local_c);
      (**(code **)(*local_3c + 0x14))(local_3c,-param_3,CONCAT22(extraout_var,2));
      local_c = local_3c;
    }
  }
  else {
    puStack_cc = &stack0xfffffffc;
    puStack_c0 = &stack0xfffffffc;
    (**(code **)(*local_c + 0xc))(local_c,&local_48,8);
    pBVar4 = local_40;
    FUN_00404f08(local_40,0x28,0);
    (pBVar4->bmiHeader).biWidth = (uint)local_48;
    (pBVar4->bmiHeader).biHeight = (uint)local_46;
    (pBVar4->bmiHeader).biPlanes = local_44;
    (pBVar4->bmiHeader).biBitCount = local_42;
    param_3 = param_3 + -0xc;
  }
  pBVar4 = local_40;
  (local_40->bmiHeader).biSize = local_24;
  local_20 = (int)&(((BITMAPINFO *)(local_1c->bmiColors + -10))->bmiHeader).biSize + local_24;
  if ((local_40->bmiHeader).biPlanes != 1) {
    FUN_0045d0e4();
  }
  if ((local_24 == 0x28) &&
     (((WVar1 = (pBVar4->bmiHeader).biBitCount, WVar1 == 0x10 || (WVar1 == 0x20)) &&
      ((pBVar4->bmiHeader).biCompression == 3)))) {
    FUN_0043f488(local_c,local_20,0xc);
    local_20 = local_20 + 0xc;
    param_3 = param_3 + -0xc;
  }
  if ((pBVar4->bmiHeader).biClrUsed == 0) {
    DVar5 = FUN_0045d374((pBVar4->bmiHeader).biBitCount);
    (pBVar4->bmiHeader).biClrUsed = DVar5;
  }
  uVar8 = (uint)local_25;
  FUN_0043f488(local_c,local_20,(pBVar4->bmiHeader).biClrUsed * (uint)(byte)(&DAT_0077453c)[uVar8]);
  lVar3 = (longlong)(int)(pBVar4->bmiHeader).biClrUsed *
          (longlong)(int)(uint)(byte)(&DAT_0077453c)[uVar8];
  uVar7 = (uint)((ulonglong)lVar3 >> 0x20);
  uVar8 = param_3 - (int)lVar3;
  if (((pBVar4->bmiHeader).biSizeImage == 0) || ((pBVar4->bmiHeader).biCompression == 0)) {
    iVar6 = FUN_0045d394((pBVar4->bmiHeader).biWidth,(pBVar4->bmiHeader).biBitCount,0x20);
    uVar2 = (pBVar4->bmiHeader).biHeight;
    uVar7 = (int)uVar2 >> 0x1f;
    (pBVar4->bmiHeader).biSizeImage = iVar6 * ((uVar2 ^ uVar7) - uVar7);
  }
  uVar2 = (pBVar4->bmiHeader).biSizeImage;
  if (uVar2 < uVar8) {
    uVar8 = uVar2;
  }
  if (local_25 != 0) {
    FUN_0045d640(local_20,uVar7);
  }
  GetDC((HWND)0x0);
  local_10 = (HDC)FUN_0045d204();
  uVar9 = *in_FS_OFFSET;
  *in_FS_OFFSET = &stack0xffffff20;
  DVar5 = (local_40->bmiHeader).biCompression;
  if (((DVar5 == 0) || (DVar5 == 3)) && (DAT_00774250 == '\0')) {
    local_2c = CreateDIBSection(local_10,local_1c,0,&local_18,(HANDLE)0x0,0);
    if ((local_2c == (HBITMAP)0x0) || (local_18 == (void *)0x0)) {
      DVar5 = GetLastError();
      if (DVar5 == 0) {
        FUN_0045d0e4();
      }
      else {
        FUN_0041e9c8();
      }
    }
    uVar10 = *in_FS_OFFSET;
    *in_FS_OFFSET = &stack0xffffff14;
    FUN_0043f488(local_c,local_18,uVar8);
    *in_FS_OFFSET = uVar10;
    *in_FS_OFFSET = uVar9;
    ReleaseDC((HWND)0x0,local_10);
    return;
  }
  local_14 = (HDC)0x0;
  local_18 = (void *)FUN_0040431c(uVar8);
  *in_FS_OFFSET = &stack0xffffff14;
  FUN_0043f488(local_c,local_18,uVar8);
  CreateCompatibleDC(local_10);
  local_14 = (HDC)FUN_0045d204();
  h = CreateCompatibleBitmap(local_10,1,1);
  local_30 = SelectObject(local_14,h);
  local_38 = (HPALETTE)0x0;
  DVar5 = (local_40->bmiHeader).biClrUsed;
  if (DVar5 != 0) {
    local_34 = (HPALETTE)FUN_0045d8fc(0,local_20,DVar5);
    local_38 = SelectPalette(local_14,local_34,0);
    RealizePalette(local_14);
  }
  uVar9 = *in_FS_OFFSET;
  *in_FS_OFFSET = &stack0xffffff08;
  local_2c = CreateDIBitmap(local_14,&local_1c->bmiHeader,4,local_18,local_1c,0);
  if (local_2c == (HBITMAP)0x0) {
    DVar5 = GetLastError();
    if (DVar5 == 0) {
      FUN_0045d0e4();
    }
    else {
      FUN_0041e9c8();
    }
  }
  *in_FS_OFFSET = uVar9;
  if (local_38 != (HPALETTE)0x0) {
    SelectPalette(local_14,local_38,-1);
  }
  ho = SelectObject(local_14,local_30);
  DeleteObject(ho);
  return;
}
