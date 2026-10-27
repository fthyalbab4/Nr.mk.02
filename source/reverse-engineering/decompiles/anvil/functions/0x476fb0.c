// rea decompile_all
// name: FUN_00476fb0
// address: 0x476fb0
// body: available
// range: 0x476fb0-0x47702e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x476feb (push 0x47702f followed by fs-segment stack chaining); handler 0x47702f lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00476fb0(int param_1,LONG *param_2)

{
  HDC hdcTarget;
  HBRUSH hbr;
  undefined4 *in_FS_OFFSET;
  RECT *prcTarget;
  BP_BUFFERFORMAT dwFormat;
  undefined4 uVar1;
  BP_PAINTPARAMS *pPaintParams;
  HDC *phdc;
  RECT local_1c;
  HPAINTBUFFER local_c;
  HDC local_8;

  local_1c.left = *param_2;
  local_1c.top = param_2[1];
  local_1c.right = param_2[2];
  local_1c.bottom = param_2[3];
  phdc = &local_8;
  pPaintParams = (BP_PAINTPARAMS *)0x0;
  dwFormat = BPBF_TOPDOWNDIB;
  prcTarget = &local_1c;
  hdcTarget = (HDC)FUN_0045d4ec(param_1);
  local_c = BeginBufferedPaint(hdcTarget,prcTarget,dwFormat,pPaintParams,phdc);
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = &stack0xffffffcc;
  hbr = (HBRUSH)FUN_0045c344(*(undefined4 *)(param_1 + 0x48));
  FillRect(local_8,&local_1c,hbr);
  BufferedPaintSetAlpha(local_c,&local_1c,0xff);
  *in_FS_OFFSET = uVar1;
  EndBufferedPaint(local_c,-1);
  return;
}
