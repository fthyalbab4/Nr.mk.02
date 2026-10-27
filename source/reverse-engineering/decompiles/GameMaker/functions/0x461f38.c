// rea decompile_all
// name: FUN_00461f38
// address: 0x461f38
// body: available
// range: 0x461f38-0x4620ea inclusive
// range: 0x4620f2-0x462132 inclusive
// range: 0x46213a-0x462143 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x461f84 (push 0x462133 followed by fs-segment stack chaining); handler 0x462133 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x462017 (push 0x4620eb followed by fs-segment stack chaining); handler 0x4620eb lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


BOOL FUN_00461f38(HGDIOBJ param_1,HPALETTE param_2,COLORREF param_3)

{
  int iVar1;
  COLORREF color;
  BOOL BVar2;
  int *in_FS_OFFSET;
  int iVar3;
  undefined1 local_74 [4];
  int local_70;
  int local_6c;
  int local_60;
  undefined4 local_5c;
  HGDIOBJ local_20;
  HGDIOBJ local_1c;
  char local_15;
  HDC local_14;
  HDC local_10;
  HDC local_c;
  HBITMAP local_8;

  local_8 = (HBITMAP)0x0;
  if (param_1 != (HANDLE)0x0) {
    iVar1 = GetObjectW(param_1,0x54,local_74);
    if (iVar1 != 0) {
      FUN_004613e8(param_1);
      local_c = (HDC)0x0;
      local_14 = (HDC)0x0;
      iVar1 = *in_FS_OFFSET;
      *in_FS_OFFSET = (int)&stack0xffffff74;
      GetDC((HWND)0x0);
      local_c = (HDC)FUN_0045d204();
      CreateCompatibleDC(local_c);
      local_14 = (HDC)FUN_0045d204();
      iVar3 = local_70;
      local_8 = CreateBitmap(local_70,local_6c,1,1,(void *)0x0);
      if (local_8 != (HBITMAP)0x0) {
        local_20 = SelectObject(local_14,local_8);
        if (param_3 != 0x1fffffff) {
          CreateCompatibleDC(local_c);
          local_10 = (HDC)FUN_0045d204();
          *in_FS_OFFSET = (int)&stack0xffffff68;
          if (local_60 == 0) {
            local_15 = '\0';
          }
          else {
            local_15 = '\x01';
            local_5c = 0;
            iVar3 = 0;
            param_1 = (HGDIOBJ)FUN_00461870(param_1,param_2,param_2,0,local_74);
          }
          local_1c = SelectObject(local_10,param_1);
          if (param_2 != (HPALETTE)0x0) {
            SelectPalette(local_10,param_2,0);
            RealizePalette(local_10);
            SelectPalette(local_14,param_2,0);
            RealizePalette(local_14);
          }
          color = SetBkColor(local_10,param_3);
          BitBlt(local_14,0,0,local_70,local_6c,local_10,0,0,0xcc0020);
          SetBkColor(local_10,color);
          if (local_1c != (HGDIOBJ)0x0) {
            SelectObject(local_10,local_1c);
          }
          if (local_15 != '\0') {
            DeleteObject(param_1);
          }
          *in_FS_OFFSET = iVar3;
          BVar2 = DeleteDC(local_10);
          return BVar2;
        }
        PatBlt(local_14,0,0,local_70,local_6c,0x42);
        if (local_20 != (HGDIOBJ)0x0) {
          SelectObject(local_14,local_20);
        }
      }
      BVar2 = 0;
      *in_FS_OFFSET = iVar1;
      if (local_14 != (HDC)0x0) {
        BVar2 = DeleteDC(local_14);
      }
      if (local_c != (HDC)0x0) {
        BVar2 = ReleaseDC((HWND)0x0,local_c);
      }
      return BVar2;
    }
  }
  return (BOOL)local_8;
}
