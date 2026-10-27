// rea decompile_all
// name: FUN_00461870
// address: 0x461870
// body: available
// range: 0x461870-0x461bc7 inclusive
// range: 0x461bcf-0x461e14 inclusive
// range: 0x461e1c-0x461e3e inclusive
// range: 0x461ec8-0x461ed3 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x46192a (push 0x461ec1 followed by fs-segment stack chaining); handler 0x461ec1 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4619ac (push 0x461bc8 followed by fs-segment stack chaining); handler 0x461bc8 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x461bf7 (push 0x461e72 followed by fs-segment stack chaining); handler 0x461e72 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x461c05 (push 0x461e61 followed by fs-segment stack chaining); handler 0x461e61 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x461c3b (push 0x461e3f followed by fs-segment stack chaining); handler 0x461e3f lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x461d45 (push 0x461e15 followed by fs-segment stack chaining); handler 0x461e15 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


HPALETTE FUN_00461870(HBITMAP param_1,HPALETTE param_2,HPALETTE param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  UINT UVar3;
  HBRUSH hbr;
  COLORREF CVar4;
  HGDIOBJ h;
  uint uVar5;
  HPALETTE pHVar6;
  DWORD *pDVar7;
  LPBITMAPINFO ptVar8;
  undefined4 *in_FS_OFFSET;
  byte bVar9;
  undefined4 uVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  RECT local_9c;
  undefined1 local_8c [4];
  int local_88;
  int local_84;
  int local_78;
  int local_74;
  RGBQUAD local_38;
  undefined4 local_34;
  LPVOID local_30;
  LPBITMAPINFO local_2c;
  HPALETTE local_28;
  HDC local_24;
  HDC local_20;
  HDC local_1c;
  HGDIOBJ local_18;
  HPALETTE local_14;
  HPALETTE local_10;
  HPALETTE local_c;
  HBITMAP local_8;

  bVar9 = 0;
  puVar11 = &stack0xfffffffc;
  local_14 = (HPALETTE)0x0;
  if (((*(int *)(param_5 + 0x18) == 0) ||
      ((*(int *)(param_5 + 0x1c) != 0 && (*(int *)(param_5 + 0x20) != 0)))) &&
     ((*(int *)(param_5 + 0x18) != 0 ||
      ((*(int *)(param_5 + 4) != 0 && (*(int *)(param_5 + 8) != 0)))))) {
    local_10 = param_3;
    local_c = param_2;
    local_8 = param_1;
    FUN_004613e8(param_1);
    local_74 = 0;
    if (local_8 != (HBITMAP)0x0) {
      iVar1 = GetObjectW(local_8,0x54,local_8c);
      if (iVar1 < 0x18) {
        FUN_0045d0e4();
      }
    }
    GetDC((HWND)0x0);
    local_1c = (HDC)FUN_0045d204();
    CreateCompatibleDC(local_1c);
    local_20 = (HDC)FUN_0045d204();
    *in_FS_OFFSET = &stack0xffffff4c;
    if (*(uint *)(param_5 + 0x18) < 0x28) {
      if ((*(ushort *)(param_5 + 0x10) | *(ushort *)(param_5 + 0x12)) == 1) {
        CreateBitmap(*(int *)(param_5 + 4),*(int *)(param_5 + 8),1,1,(void *)0x0);
        local_14 = (HPALETTE)FUN_0045d204();
      }
      else {
        CreateCompatibleBitmap(local_1c,*(int *)(param_5 + 4),*(int *)(param_5 + 8));
        local_14 = (HPALETTE)FUN_0045d204();
      }
      FUN_0045d204(local_14);
      SelectObject(local_20,local_14);
      local_18 = (HGDIOBJ)FUN_0045d204();
      *in_FS_OFFSET = &stack0xffffff40;
      *in_FS_OFFSET = &stack0xffffff34;
      local_28 = (HPALETTE)0x0;
      pHVar6 = (HPALETTE)0x0;
      if (local_10 != (HPALETTE)0x0) {
        local_28 = SelectPalette(local_20,local_10,0);
        RealizePalette(local_20);
      }
      uVar10 = *in_FS_OFFSET;
      *in_FS_OFFSET = &stack0xffffff28;
      if (param_4 == 0) {
        PatBlt(local_20,0,0,*(int *)(param_5 + 4),*(int *)(param_5 + 8),0xff0062);
      }
      else {
        hbr = (HBRUSH)FUN_0045bc84(*(undefined4 *)(param_4 + 0x48));
        FUN_0040c114(0,0,*(undefined4 *)(param_5 + 4));
        FillRect(local_20,&local_9c,hbr);
        CVar4 = FUN_0045aa34(*(undefined4 *)(*(int *)(param_4 + 0x40) + 0x18));
        SetTextColor(local_20,CVar4);
        CVar4 = FUN_0045aa34(*(undefined4 *)(*(int *)(*(int *)(param_4 + 0x48) + 0x10) + 0x14));
        SetBkColor(local_20,CVar4);
        if ((*(short *)(param_5 + 0x26) == 1) && (*(int *)(param_5 + 0x14) != 0)) {
          local_38 = (RGBQUAD)FUN_0045aa34(*(undefined4 *)(*(int *)(param_4 + 0x40) + 0x18));
          local_34 = FUN_0045aa34(*(undefined4 *)(*(int *)(*(int *)(param_4 + 0x48) + 0x10) + 0x14))
          ;
          SetDIBColorTable(local_20,0,2,&local_38);
        }
      }
      if (local_8 != (HBITMAP)0x0) {
        CreateCompatibleDC(local_1c);
        local_24 = (HDC)FUN_0045d204();
        uVar10 = *in_FS_OFFSET;
        *in_FS_OFFSET = &stack0xffffff1c;
        SelectObject(local_24,local_8);
        h = (HGDIOBJ)FUN_0045d204();
        if (local_c != (HPALETTE)0x0) {
          pHVar6 = SelectPalette(local_24,local_c,0);
          RealizePalette(local_24);
        }
        if (param_4 != 0) {
          CVar4 = FUN_0045aa34(*(undefined4 *)(*(int *)(param_4 + 0x40) + 0x18));
          SetTextColor(local_24,CVar4);
          CVar4 = FUN_0045aa34(*(undefined4 *)(*(int *)(*(int *)(param_4 + 0x48) + 0x10) + 0x14));
          SetBkColor(local_24,CVar4);
        }
        BitBlt(local_20,0,0,*(int *)(param_5 + 4),*(int *)(param_5 + 8),local_24,0,0,0xcc0020);
        if (local_c != (HPALETTE)0x0) {
          SelectPalette(local_24,pHVar6,-1);
        }
        SelectObject(local_24,h);
        FUN_0045d204();
        *in_FS_OFFSET = uVar10;
        pHVar6 = (HPALETTE)DeleteDC(local_24);
        return pHVar6;
      }
      pHVar6 = (HPALETTE)0x0;
      *in_FS_OFFSET = uVar10;
      if (local_10 != (HPALETTE)0x0) {
        pHVar6 = SelectPalette(local_20,local_28,-1);
      }
      return pHVar6;
    }
    local_2c = (LPBITMAPINFO)FUN_0040431c(0x42c);
    uVar10 = *in_FS_OFFSET;
    *in_FS_OFFSET = &stack0xffffff40;
    *(undefined4 *)(param_5 + 0x18) = 0x28;
    *(undefined2 *)(param_5 + 0x24) = 1;
    puVar12 = &stack0xfffffffc;
    if (*(short *)(param_5 + 0x26) == 0) {
      iVar1 = GetDeviceCaps(local_1c,0xc);
      iVar2 = GetDeviceCaps(local_1c,0xe);
      *(short *)(param_5 + 0x26) = (short)iVar1 * (short)iVar2;
      puVar12 = puVar11;
    }
    pDVar7 = (DWORD *)(param_5 + 0x18);
    ptVar8 = local_2c;
    for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
      (ptVar8->bmiHeader).biSize = *pDVar7;
      pDVar7 = pDVar7 + (uint)bVar9 * -2 + 1;
      ptVar8 = (LPBITMAPINFO)((int)ptVar8 + (uint)bVar9 * -8 + 4);
    }
    *(undefined4 *)(param_5 + 4) = *(undefined4 *)(param_5 + 0x1c);
    *(undefined4 *)(param_5 + 8) = *(undefined4 *)(param_5 + 0x20);
    if (*(ushort *)(param_5 + 0x26) < 9) {
      if ((*(short *)(param_5 + 0x26) == 1) && ((local_8 == (HBITMAP)0x0 || (local_78 == 0)))) {
        local_2c->bmiColors[0].rgbBlue = '\0';
        local_2c->bmiColors[0].rgbGreen = '\0';
        local_2c->bmiColors[0].rgbRed = '\0';
        local_2c->bmiColors[0].rgbReserved = '\0';
        local_2c[1].bmiHeader.biSize = 0xffffff;
      }
      else if (local_10 == (HPALETTE)0x0) {
        if (local_8 != (HBITMAP)0x0) {
          local_18 = SelectObject(local_20,local_8);
          if ((local_74 == 0) || (local_78 == 0)) {
            uVar5 = (int)*(uint *)(param_5 + 0x20) >> 0x1f;
            GetDIBits(local_20,local_8,0,(*(uint *)(param_5 + 0x20) ^ uVar5) - uVar5,(LPVOID)0x0,
                      local_2c,0);
          }
          else {
            UVar3 = GetDIBColorTable(local_20,0,0x100,local_2c->bmiColors);
            *(UINT *)(param_5 + 0x38) = UVar3;
          }
          SelectObject(local_20,local_18);
        }
      }
      else {
        FUN_0045d9a0(local_10,local_2c->bmiColors,0xff);
      }
    }
    else if (((*(short *)(param_5 + 0x26) == 0x10) || (*(short *)(param_5 + 0x26) == 0x20)) &&
            ((*(byte *)(param_5 + 0x28) & 3) != 0)) {
      FUN_00461824(param_5,param_5);
      FUN_0040450c(param_5 + 0x40,local_2c->bmiColors,0xc);
    }
    CreateDIBSection(local_1c,local_2c,0,&local_30,(HANDLE)0x0,0);
    local_14 = (HPALETTE)FUN_0045d204();
    if (local_30 == (LPVOID)0x0) {
      FUN_0045d15c();
    }
    if ((((local_8 == (HBITMAP)0x0) || (*(int *)(param_5 + 0x1c) != local_88)) ||
        (*(int *)(param_5 + 0x20) != local_84)) || (*(ushort *)(param_5 + 0x26) < 9)) {
      *in_FS_OFFSET = uVar10;
      pHVar6 = (HPALETTE)FUN_00404338(local_2c,uVar10,puVar12);
      return pHVar6;
    }
    uVar5 = (int)*(uint *)(param_5 + 0x20) >> 0x1f;
    GetDIBits(local_20,local_8,0,(*(uint *)(param_5 + 0x20) ^ uVar5) - uVar5,local_30,local_2c,0);
    FUN_0040670c();
    FUN_0040670c();
  }
  return local_14;
}
