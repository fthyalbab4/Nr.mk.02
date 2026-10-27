// rea decompile_all
// name: FUN_005469b8
// address: 0x5469b8
// body: available
// range: 0x5469b8-0x546a7f inclusive
// range: 0x546a87-0x546c49 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x546a23 (push 0x546a80 followed by fs-segment stack chaining); handler 0x546a80 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x546aa8 (push 0x546d94 followed by fs-segment stack chaining); handler 0x546d94 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x546acf (push 0x546d61 followed by fs-segment stack chaining); handler 0x546d61 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x546aed (push 0x546d43 followed by fs-segment stack chaining); handler 0x546d43 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x546b0c (push 0x546c86 followed by fs-segment stack chaining); handler 0x546c86 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x546b35 (push 0x546c68 followed by fs-segment stack chaining); handler 0x546c68 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x546b53 (push 0x546c4a followed by fs-segment stack chaining); handler 0x546c4a lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005469b8(HDC param_1,int param_2,int param_3,int param_4,int param_5,HDC param_6,
                 int param_7,int param_8,int param_9,int param_10,HDC param_11,int param_12,
                 int param_13)

{
  HGDIOBJ pvVar1;
  HBITMAP hbmMask;
  HDC hdc;
  HDC hdc_00;
  HPALETTE hPal;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar2;

  if (((*(int *)PTR_DAT_00782944 == 2) && (param_8 == param_13)) && (param_7 == param_12)) {
    CreateCompatibleBitmap(param_11,1,1);
    pvVar1 = (HGDIOBJ)FUN_0053b50c();
    hbmMask = SelectObject(param_6,pvVar1);
    uVar2 = *in_FS_OFFSET;
    *in_FS_OFFSET = &stack0xffffffbc;
    MaskBlt(param_1,param_2,param_3,param_13,param_12,param_11,param_10,param_9,hbmMask,param_5,
            param_4,0xccaa0029);
    *in_FS_OFFSET = uVar2;
    pvVar1 = SelectObject(param_6,hbmMask);
    DeleteObject(pvVar1);
    return;
  }
  CreateCompatibleDC(param_1);
  hdc = (HDC)FUN_0053b50c();
  *in_FS_OFFSET = &stack0xffffffbc;
  CreateCompatibleBitmap(param_1,param_8,param_7);
  pvVar1 = (HGDIOBJ)FUN_0053b50c();
  *in_FS_OFFSET = &stack0xffffffb0;
  SelectObject(hdc,pvVar1);
  *in_FS_OFFSET = &stack0xffffffa4;
  CreateCompatibleDC(param_1);
  hdc_00 = (HDC)FUN_0053b50c();
  *in_FS_OFFSET = &stack0xffffff98;
  CreateBitmap(param_8,param_7,1,1,(void *)0x0);
  pvVar1 = (HGDIOBJ)FUN_0053b50c();
  *in_FS_OFFSET = &stack0xffffff8c;
  pvVar1 = SelectObject(hdc_00,pvVar1);
  uVar2 = *in_FS_OFFSET;
  *in_FS_OFFSET = &stack0xffffff80;
  BitBlt(hdc_00,param_10,param_9,param_8,param_7,param_6,param_10,param_9,0x330008);
  hPal = SelectPalette(param_11,*(HPALETTE *)PTR_DAT_0078188c,0);
  SelectPalette(param_11,hPal,0);
  if (hPal == (HPALETTE)0x0) {
    SelectPalette(hdc,*(HPALETTE *)PTR_DAT_0078188c,-1);
  }
  else {
    SelectPalette(hdc,hPal,-1);
  }
  RealizePalette(hdc);
  BitBlt(hdc,param_10,param_9,param_8,param_7,hdc_00,param_10,param_9,0xcc0020);
  BitBlt(hdc,param_10,param_9,param_8,param_7,param_11,param_10,param_9,0x8800c6);
  *in_FS_OFFSET = uVar2;
  if (pvVar1 != (HGDIOBJ)0x0) {
    SelectObject(hdc_00,pvVar1);
  }
  return;
}
