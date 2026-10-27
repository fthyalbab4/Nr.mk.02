// rea decompile_all
// name: FUN_004eb00c
// address: 0x4eb00c
// body: available
// range: 0x4eb00c-0x4eb090 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4eb02f (push 0x4eb0b3 followed by fs-segment stack chaining); handler 0x4eb0b3 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4eb052 (push 0x4eb091 followed by fs-segment stack chaining); handler 0x4eb091 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004eb00c(HWND param_1,RECT *param_2)

{
  HPAINTBUFFER hBufferedPaint;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar1;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  HDC local_10;
  HDC local_c;
  HWND local_8;

  puStack_20 = (undefined1 *)0x4eb021;
  local_8 = param_1;
  local_c = GetDC(param_1);
  puStack_20 = &LAB_004eb0b3;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  hBufferedPaint =
       BeginBufferedPaint(local_c,param_2,BPBF_TOPDOWNDIB,(BP_PAINTPARAMS *)0x0,&local_10);
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = &stack0xffffffd0;
  SendMessageW(local_8,0x318,(WPARAM)local_10,4);
  BufferedPaintSetAlpha(hBufferedPaint,param_2,0xff);
  *in_FS_OFFSET = uVar1;
  EndBufferedPaint(hBufferedPaint,-1);
  return;
}
