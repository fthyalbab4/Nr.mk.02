// rea decompile_all
// name: FUN_0045de0c
// address: 0x45de0c
// body: available
// range: 0x45de0c-0x45df08 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x45de4d (push 0x45df09 followed by fs-segment stack chaining); handler 0x45df09 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0045de0c(undefined4 param_1)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar2;
  tagPALETTEENTRY local_408 [7];
  tagPALETTEENTRY local_3ec;
  tagPALETTEENTRY local_3e8;
  tagPALETTEENTRY local_3e4 [247];
  HDC local_8;

  FUN_00404514(param_1,local_408,0x40);
  local_8 = GetDC((HWND)0x0);
  uVar2 = *in_FS_OFFSET;
  *in_FS_OFFSET = &stack0xfffffbe4;
  iVar1 = GetDeviceCaps(local_8,0x68);
  if (0xf < iVar1) {
    GetSystemPaletteEntries(local_8,0,8,local_408);
    if (local_3ec == (tagPALETTEENTRY)0xc0c0c0) {
      GetSystemPaletteEntries(local_8,iVar1 - 8,1,&local_3ec);
      GetSystemPaletteEntries(local_8,iVar1 - 7,7,local_3e4);
      GetSystemPaletteEntries(local_8,7,1,&local_3e8);
    }
    else {
      GetSystemPaletteEntries(local_8,iVar1 - 8,8,&local_3e8);
    }
  }
  *in_FS_OFFSET = uVar2;
  ReleaseDC((HWND)0x0,local_8);
  return;
}
