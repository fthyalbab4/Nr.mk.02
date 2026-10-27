// rea decompile_all
// name: FUN_00477ee4
// address: 0x477ee4
// body: available
// range: 0x477ee4-0x477f59 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x477f03 (push 0x477f5a followed by fs-segment stack chaining); handler 0x477f5a lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00477ee4(int param_1)

{
  HGDIOBJ pvVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar2;
  tagTEXTMETRICW local_84;
  tagTEXTMETRICW local_48;
  HDC local_c;
  int local_8;

  local_8 = param_1;
  local_c = GetDC((HWND)0x0);
  uVar2 = *in_FS_OFFSET;
  *in_FS_OFFSET = &stack0xffffff6c;
  GetTextMetricsW(local_c,&local_48);
  pvVar1 = (HGDIOBJ)FUN_0045b7cc(*(undefined4 *)(local_8 + 100));
  pvVar1 = SelectObject(local_c,pvVar1);
  GetTextMetricsW(local_c,&local_84);
  SelectObject(local_c,pvVar1);
  *in_FS_OFFSET = uVar2;
  ReleaseDC((HWND)0x0,local_c);
  return;
}
