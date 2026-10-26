// rea decompile_all
// name: FUN_0052a194
// address: 0x52a194
// body: available
// range: 0x52a194-0x52a25b inclusive
// range: 0x52a263-0x52a425 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x52a1ff (push 0x52a25c followed by fs-segment stack chaining); handler 0x52a25c lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x52a284 (push 0x52a570 followed by fs-segment stack chaining); handler 0x52a570 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x52a2ab (push 0x52a53d followed by fs-segment stack chaining); handler 0x52a53d lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x52a2c9 (push 0x52a51f followed by fs-segment stack chaining); handler 0x52a51f lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x52a2e8 (push 0x52a462 followed by fs-segment stack chaining); handler 0x52a462 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x52a311 (push 0x52a444 followed by fs-segment stack chaining); handler 0x52a444 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x52a32f (push 0x52a426 followed by fs-segment stack chaining); handler 0x52a426 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0052a194(HDC param_1,int param_2,int param_3,int param_4,int param_5,HDC param_6,
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

  if (((*(int *)PTR_DAT_0068966c == 2) && (param_8 == param_13)) && (param_7 == param_12)) {
    CreateCompatibleBitmap(param_11,1,1);
    pvVar1 = (HGDIOBJ)FUN_0051ece8();
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
  hdc = (HDC)FUN_0051ece8();
  *in_FS_OFFSET = &stack0xffffffbc;
  CreateCompatibleBitmap(param_1,param_8,param_7);
  pvVar1 = (HGDIOBJ)FUN_0051ece8();
  *in_FS_OFFSET = &stack0xffffffb0;
  SelectObject(hdc,pvVar1);
  *in_FS_OFFSET = &stack0xffffffa4;
  CreateCompatibleDC(param_1);
  hdc_00 = (HDC)FUN_0051ece8();
  *in_FS_OFFSET = &stack0xffffff98;
  CreateBitmap(param_8,param_7,1,1,(void *)0x0);
  pvVar1 = (HGDIOBJ)FUN_0051ece8();
  *in_FS_OFFSET = &stack0xffffff8c;
  pvVar1 = SelectObject(hdc_00,pvVar1);
  uVar2 = *in_FS_OFFSET;
  *in_FS_OFFSET = &stack0xffffff80;
  BitBlt(hdc_00,param_10,param_9,param_8,param_7,param_6,param_10,param_9,0x330008);
  hPal = SelectPalette(param_11,*(HPALETTE *)PTR_DAT_00688a98,0);
  SelectPalette(param_11,hPal,0);
  if (hPal == (HPALETTE)0x0) {
    SelectPalette(hdc,*(HPALETTE *)PTR_DAT_00688a98,-1);
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
