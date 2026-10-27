// rea decompile_all
// name: FUN_0045d214
// address: 0x45d214
// body: available
// range: 0x45d214-0x45d2d0 inclusive
// range: 0x45d2d8-0x45d361 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x45d248 (push 0x45d362 followed by fs-segment stack chaining); handler 0x45d362 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x45d296 (push 0x45d2d1 followed by fs-segment stack chaining); handler 0x45d2d1 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0045d214(HANDLE param_1,int *param_2,char param_3)

{
  HGDIOBJ h;
  HGDIOBJ h_00;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar1;
  undefined4 uStack_50;
  undefined1 local_38 [4];
  int local_34;
  int local_30;
  HDC local_20;
  HDC local_1c;
  HDC local_18;
  HBITMAP local_14;
  int local_10;
  int local_c;
  HANDLE local_8;

  local_10 = *param_2;
  local_c = param_2[1];
  local_8 = param_1;
  local_1c = CreateCompatibleDC((HDC)0x0);
  local_20 = CreateCompatibleDC((HDC)0x0);
  uStack_50 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_50;
  GetObjectW(local_8,0x18,local_38);
  if (param_3 != '\0') {
    local_14 = CreateBitmap(local_10,local_c,1,1,(void *)0x0);
    if (local_14 != (HBITMAP)0x0) {
      h = SelectObject(local_1c,local_8);
      h_00 = SelectObject(local_20,local_14);
      StretchBlt(local_20,0,0,local_10,local_c,local_1c,0,0,local_34,local_30,0xcc0020);
      if (h != (HGDIOBJ)0x0) {
        SelectObject(local_1c,h);
      }
      if (h_00 != (HGDIOBJ)0x0) {
        SelectObject(local_20,h_00);
      }
    }
    *in_FS_OFFSET = uStack_50;
    uStack_50 = 0x45d358;
    DeleteDC(local_1c);
    uStack_50 = 0x45d361;
    DeleteDC(local_20);
    return;
  }
  local_18 = GetDC((HWND)0x0);
  if (local_18 == (HDC)0x0) {
    FUN_0045d15c();
  }
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = &stack0xffffffa4;
  local_14 = CreateCompatibleBitmap(local_18,local_10,local_c);
  if (local_14 == (HBITMAP)0x0) {
    FUN_0045d15c();
  }
  *in_FS_OFFSET = uVar1;
  ReleaseDC((HWND)0x0,local_18);
  return;
}
