// rea decompile_all
// name: FUN_0045e0e4
// address: 0x45e0e4
// body: available
// range: 0x45e0e4-0x45e180 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x45e119 (push 0x45e181 followed by fs-segment stack chaining); handler 0x45e181 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0045e0e4(HBITMAP param_1,HPALETTE param_2,LPBITMAPINFO param_3,undefined4 param_4,
                 LPVOID param_5)

{
  HDC hdc;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar1;
  HPALETTE local_c;

  FUN_0045df90(param_1,param_3,param_4);
  local_c = (HPALETTE)0x0;
  hdc = CreateCompatibleDC((HDC)0x0);
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = &stack0xffffffd8;
  if (param_2 != (HPALETTE)0x0) {
    local_c = SelectPalette(hdc,param_2,0);
    RealizePalette(hdc);
  }
  GetDIBits(hdc,param_1,0,(param_3->bmiHeader).biHeight,param_5,param_3,0);
  *in_FS_OFFSET = uVar1;
  if (local_c != (HPALETTE)0x0) {
    SelectPalette(hdc,local_c,0);
  }
  DeleteDC(hdc);
  return;
}
