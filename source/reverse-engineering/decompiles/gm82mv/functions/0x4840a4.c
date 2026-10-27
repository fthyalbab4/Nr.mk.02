// rea decompile_all
// name: FUN_004840a4
// address: 0x4840a4
// body: available
// range: 0x4840a4-0x484143 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4840e2 (push 0x484144 followed by fs-segment stack chaining); handler 0x484144 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004840a4(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  HDC hdcTarget;
  undefined4 *in_FS_OFFSET;
  RECT *prcTarget;
  BP_BUFFERFORMAT dwFormat;
  undefined4 uVar1;
  BP_PAINTPARAMS *pPaintParams;
  HDC *phdc;
  undefined1 local_2c [16];
  RECT local_1c;
  HPAINTBUFFER local_c;
  HDC local_8;

  FUN_00483f78(*(undefined4 *)(param_4 + -4),&local_1c);
  phdc = &local_8;
  pPaintParams = (BP_PAINTPARAMS *)0x0;
  dwFormat = BPBF_TOPDOWNDIB;
  prcTarget = &local_1c;
  hdcTarget = (HDC)FUN_0045d4ec(param_1);
  local_c = BeginBufferedPaint(hdcTarget,prcTarget,dwFormat,pPaintParams,phdc);
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = &stack0xffffffc4;
  FUN_0045d574(param_1,local_8);
  FUN_00483f78(*(undefined4 *)(param_4 + -4),local_2c);
  (**(code **)(*param_1 + 0x80))
            (param_1,local_2c,*(undefined4 *)(*(int *)(*(int *)(param_4 + -4) + 0x1b0) + 0xc));
  BufferedPaintSetAlpha(local_c,&local_1c,0xff);
  *in_FS_OFFSET = uVar1;
  EndBufferedPaint(local_c,-1);
  return;
}
