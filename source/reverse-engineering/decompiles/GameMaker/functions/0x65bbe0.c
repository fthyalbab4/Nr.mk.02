// rea decompile_all
// name: FUN_0065bbe0
// address: 0x65bbe0
// body: available
// range: 0x65bbe0-0x65bcab inclusive
// range: 0x65bf55-0x65bf5d inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x65bc4a (push 0x65bcac followed by fs-segment stack chaining); handler 0x65bcac lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0065bbe0(int param_1)

{
  HWND pHVar1;
  HDC hDC;
  HDC hdc;
  undefined4 *in_FS_OFFSET;
  int x;
  int y;
  int cx;
  int cy;
  HDC hdcSrc;
  int x1;
  int y1;
  DWORD rop;
  undefined4 uVar2;

  FUN_004f6eb0(param_1);
  if (*(char *)(param_1 + 0x59) == '\0') {
    (**(code **)(**(int **)(param_1 + 0x27c) + 0x44))
              (*(int **)(param_1 + 0x27c),*(undefined4 *)(param_1 + 0x48));
    (**(code **)(**(int **)(param_1 + 0x27c) + 0x38))
              (*(int **)(param_1 + 0x27c),*(undefined4 *)(param_1 + 0x4c));
    pHVar1 = GetDesktopWindow();
    hDC = GetDC(pHVar1);
    uVar2 = *in_FS_OFFSET;
    *in_FS_OFFSET = &stack0xffffffd4;
    rop = 0xcc0020;
    y1 = *(int *)(param_1 + 0x44);
    x1 = *(int *)(param_1 + 0x40);
    cy = *(int *)(param_1 + 0x4c);
    cx = *(int *)(param_1 + 0x48);
    y = 0;
    x = 0;
    hdcSrc = hDC;
    FUN_00462a64(*(undefined4 *)(param_1 + 0x27c));
    hdc = (HDC)FUN_0045ce2c();
    BitBlt(hdc,x,y,cx,cy,hdcSrc,x1,y1,rop);
    *in_FS_OFFSET = uVar2;
    pHVar1 = GetDesktopWindow();
    ReleaseDC(pHVar1,hDC);
    return;
  }
  return;
}
