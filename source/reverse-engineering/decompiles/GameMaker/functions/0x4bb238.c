// rea decompile_all
// name: FUN_004bb238
// address: 0x4bb238
// body: available
// range: 0x4bb238-0x4bb2b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4bb269 (push 0x4bb2b4 followed by fs-segment stack chaining); handler 0x4bb2b4 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004bb238(HDC param_1,LONG *param_2,undefined4 param_3,int param_4)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uVar1;
  RECT local_1c;
  HPAINTBUFFER local_c;
  HDC local_8;

  local_1c.left = *param_2;
  local_1c.top = param_2[1];
  local_1c.right = param_2[2];
  local_1c.bottom = param_2[3];
  local_c = BeginBufferedPaint(param_1,&local_1c,BPBF_TOPDOWNDIB,(BP_PAINTPARAMS *)0x0,&local_8);
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = &stack0xffffffd0;
  SendMessageW(*(HWND *)(*(int *)(param_4 + -4) + 0x2cc),0x318,(WPARAM)local_8,4);
  BufferedPaintSetAlpha(local_c,&local_1c,0xff);
  *in_FS_OFFSET = uVar1;
  EndBufferedPaint(local_c,-1);
  return;
}
