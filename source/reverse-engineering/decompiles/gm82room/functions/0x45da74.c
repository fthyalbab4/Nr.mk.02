// rea decompile_all
// name: FUN_0045da74
// address: 0x45da74
// body: available
// range: 0x45da74-0x45db3b inclusive
// range: 0x45db43-0x45dce8 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x45dadf (push 0x45db3c followed by fs-segment stack chaining); handler 0x45db3c lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x45db62 (push 0x45dce9 followed by fs-segment stack chaining); handler 0x45dce9 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0045da74(HDC param_1,int param_2,int param_3,int param_4,int param_5,HDC param_6,
                 int param_7,int param_8,int param_9,int param_10,HDC param_11,int param_12,
                 int param_13)

{
  HGDIOBJ pvVar1;
  HBITMAP hbmMask;
  HDC hdc;
  HGDIOBJ h;
  HPALETTE hPal;
  COLORREF color;
  COLORREF color_00;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar2;
  HPALETTE local_28;

  if (((*(int *)PTR_DAT_0068966c == 2) && (param_8 == param_13)) && (param_7 == param_12)) {
    CreateCompatibleBitmap(param_11,1,1);
    pvVar1 = (HGDIOBJ)FUN_0045d8c4();
    hbmMask = SelectObject(param_6,pvVar1);
    uVar2 = *in_FS_OFFSET;
    *in_FS_OFFSET = &stack0xffffffc0;
    MaskBlt(param_1,param_2,param_3,param_13,param_12,param_11,param_10,param_9,hbmMask,param_5,
            param_4,0xccaa0029);
    *in_FS_OFFSET = uVar2;
    pvVar1 = SelectObject(param_6,hbmMask);
    DeleteObject(pvVar1);
    return;
  }
  CreateCompatibleDC((HDC)0x0);
  hdc = (HDC)FUN_0045d8c4();
  uVar2 = *in_FS_OFFSET;
  *in_FS_OFFSET = &stack0xffffffc0;
  CreateCompatibleBitmap(param_11,param_8,param_7);
  pvVar1 = (HGDIOBJ)FUN_0045d8c4();
  h = SelectObject(hdc,pvVar1);
  hPal = SelectPalette(param_11,DAT_0068f104,0);
  SelectPalette(param_11,hPal,0);
  if (hPal == (HPALETTE)0x0) {
    local_28 = SelectPalette(hdc,DAT_0068f104,-1);
  }
  else {
    local_28 = SelectPalette(hdc,hPal,-1);
  }
  RealizePalette(hdc);
  StretchBlt(hdc,0,0,param_8,param_7,param_6,param_5,param_4,param_8,param_7,0xcc0020);
  StretchBlt(hdc,0,0,param_8,param_7,param_11,param_10,param_9,param_8,param_7,0x440328);
  color = SetTextColor(param_1,0);
  color_00 = SetBkColor(param_1,0xffffff);
  StretchBlt(param_1,param_2,param_3,param_13,param_12,param_6,param_5,param_4,param_8,param_7,
             0x8800c6);
  StretchBlt(param_1,param_2,param_3,param_13,param_12,hdc,0,0,param_8,param_7,0x660046);
  SetTextColor(param_1,color);
  SetBkColor(param_1,color_00);
  if (h != (HGDIOBJ)0x0) {
    SelectObject(hdc,h);
  }
  DeleteObject(pvVar1);
  *in_FS_OFFSET = uVar2;
  if (local_28 != (HPALETTE)0x0) {
    SelectPalette(hdc,local_28,0);
  }
  DeleteDC(hdc);
  return;
}
