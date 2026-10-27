// rea decompile_all
// name: FUN_004cfd8c
// address: 0x4cfd8c
// body: available
// range: 0x4cfd8c-0x4cfe19 inclusive
// range: 0x4cfe33-0x4cfe39 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4cfdff (push 0x4cfe1a followed by fs-segment stack chaining); handler 0x4cfe1a lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004cfd8c(int param_1,HWND param_2)

{
  WPARAM wParam;
  LRESULT LVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar2;
  undefined1 local_64 [92];
  int local_8;

  local_8 = param_1;
  FUN_0040efd0(param_2,0x401,0);
  FUN_004d005c(local_8,local_64);
  wParam = SendDlgItemMessageW(param_2,0x473,0x147,0,0);
  if (wParam != 0xffffffff) {
    LVar1 = SendDlgItemMessageW(param_2,0x473,0x150,wParam,0);
    FUN_0045b0d0(*(undefined4 *)(local_8 + 0x68),LVar1);
  }
  uVar2 = *in_FS_OFFSET;
  *in_FS_OFFSET = &stack0xffffff84;
  FUN_00405d08(local_8,param_2);
  *in_FS_OFFSET = uVar2;
  return;
}
