// rea decompile_all
// name: FUN_0045d9f4
// address: 0x45d9f4
// body: available
// range: 0x45d9f4-0x45dac6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x45da5c (push 0x45dba1 followed by fs-segment stack chaining); handler 0x45dba1 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x45da9e (push 0x45dac7 followed by fs-segment stack chaining); handler 0x45dac7 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0045d9f4(BITMAPINFOHEADER *param_1,undefined4 *param_2,undefined4 param_3,
                 undefined4 param_4)

{
  int iVar1;
  HDC hdc;
  HGDIOBJ ho;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar3;
  undefined4 uStack_38;
  undefined1 *puStack_34;

  param_1->biHeight = (uint)param_1->biHeight >> 1;
  iVar1 = FUN_0045d394(param_1->biWidth,param_1->biBitCount,0x20);
  param_1->biSizeImage = iVar1 * param_1->biHeight;
  iVar1 = FUN_0045d374(param_1->biBitCount);
  puStack_34 = (undefined1 *)0x45da43;
  hdc = GetDC((HWND)0x0);
  if (hdc == (HDC)0x0) {
    FUN_0045d108();
  }
  puStack_34 = &LAB_0045dba1;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  CreateDIBitmap(hdc,param_1,4,&param_1[1].biSize + iVar1,(BITMAPINFO *)param_1,0);
  ho = (HGDIOBJ)FUN_0045d204();
  uVar3 = *in_FS_OFFSET;
  *in_FS_OFFSET = &stack0xffffffbc;
  uVar2 = FUN_0045d214(ho,param_4,0);
  *param_2 = uVar2;
  *in_FS_OFFSET = uVar3;
  DeleteObject(ho);
  return;
}
