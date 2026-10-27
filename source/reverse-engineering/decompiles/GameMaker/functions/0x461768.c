// rea decompile_all
// name: FUN_00461768
// address: 0x461768
// body: available
// range: 0x461768-0x461816 inclusive
// range: 0x46181e-0x461823 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4617d2 (push 0x461817 followed by fs-segment stack chaining); handler 0x461817 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00461768(HGDIOBJ param_1,undefined4 param_2,int param_3)

{
  UINT cEntries;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar1;
  RGBQUAD local_414 [256];
  HGDIOBJ local_14;
  HDC local_10;
  HDC local_c;
  undefined4 local_8;

  if ((param_1 != (HGDIOBJ)0x0) && (*(ushort *)(param_3 + 0x26) < 9)) {
    local_8 = param_2;
    cEntries = FUN_0045d9a0(param_2,local_414,0xff);
    if (cEntries != 0) {
      local_c = GetDC((HWND)0x0);
      local_10 = CreateCompatibleDC(local_c);
      local_14 = SelectObject(local_10,param_1);
      uVar1 = *in_FS_OFFSET;
      *in_FS_OFFSET = &stack0xfffffbd8;
      SetDIBColorTable(local_10,0,cEntries,local_414);
      *in_FS_OFFSET = uVar1;
      SelectObject(local_10,local_14);
      DeleteDC(local_10);
      ReleaseDC((HWND)0x0,local_c);
      return;
    }
  }
  return;
}
