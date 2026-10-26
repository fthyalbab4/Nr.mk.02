// rea decompile_all
// name: FUN_0045e304
// address: 0x45e304
// body: available
// range: 0x45e304-0x45e3ec inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x45e338 (push 0x45e605 followed by fs-segment stack chaining); handler 0x45e605 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x45e398 (push 0x45e3ed followed by fs-segment stack chaining); handler 0x45e3ed lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0045e304(int *param_1,undefined4 param_2,int param_3,int *param_4,int *param_5)

{
  undefined4 uVar1;
  int iVar2;
  HDC hdc;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_8c;
  undefined1 *puStack_88;
  undefined1 *puStack_84;

  puStack_84 = (undefined1 *)0x45e32a;
  uVar1 = FUN_0040430c(param_3 << 4);
  puStack_88 = &LAB_0045e605;
  uStack_8c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_8c;
  puStack_84 = &stack0xfffffffc;
  (**(code **)(*param_1 + 0xc))(param_1,uVar1,param_3 << 4);
  if (*param_5 == 0 && param_5[1] == 0) {
    iVar2 = GetSystemMetrics(0xb);
    *param_4 = iVar2;
    iVar2 = GetSystemMetrics(0xc);
    param_4[1] = iVar2;
  }
  else {
    *param_4 = *param_5;
    param_4[1] = param_5[1];
  }
  hdc = GetDC((HWND)0x0);
  if (hdc == (HDC)0x0) {
    FUN_0045d7c8();
  }
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = &stack0xffffff68;
  GetDeviceCaps(hdc,0xe);
  GetDeviceCaps(hdc,0xc);
  *in_FS_OFFSET = uVar1;
  ReleaseDC((HWND)0x0,hdc);
  return;
}
