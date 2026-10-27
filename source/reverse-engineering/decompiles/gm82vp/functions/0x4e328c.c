// rea decompile_all
// name: FUN_004e328c
// address: 0x4e328c
// body: available
// range: 0x4e328c-0x4e33f3 inclusive
// range: 0x4e33fb-0x4e33ff inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4e336b (push 0x4e33f4 followed by fs-segment stack chaining); handler 0x4e33f4 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004e328c(int *param_1,char param_2)

{
  char cVar1;
  HWND hWnd;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  bool bVar3;
  HWND hWndInsertAfter;
  int X;
  int Y;
  int cx;
  undefined4 uVar4;
  int cy;
  UINT uFlags;
  undefined1 *puVar5;
  undefined1 *puVar6;

  puVar5 = &stack0xfffffffc;
  if (param_2 != *(char *)((int)param_1 + 0x29e)) {
    if (((param_2 != '\0') || (*(char *)((int)param_1 + 0x29e) != '\x03')) &&
       ((param_2 != '\x03' || (*(char *)((int)param_1 + 0x29e) != '\0')))) {
      if ((param_2 == '\x01') && (*(char *)((int)param_1 + 0x29f) == '\0')) {
        FUN_004e3784(param_1,1);
      }
      bVar3 = (*(byte *)(param_1 + 7) & 0x10) == 0;
      if (bVar3) {
        FUN_004c6490(param_1,1);
      }
      uVar4 = *in_FS_OFFSET;
      *in_FS_OFFSET = &stack0xffffffe4;
      puVar6 = &stack0xfffffffc;
      if (bVar3) {
        (**(code **)(*param_1 + 0xc0))();
        puVar6 = puVar5;
      }
      cVar1 = *(char *)((int)param_1 + 0x29e);
      *(char *)((int)param_1 + 0x29e) = param_2;
      if (((param_2 == '\x02') || (cVar1 == '\x02')) && (*(char *)((int)param_1 + 0x1e9) == '\0')) {
        uVar2 = FUN_004e38b8(param_1);
        FUN_004bb810(param_1,uVar2);
      }
      if (bVar3) {
        FUN_004c0cac(param_1);
      }
      if (param_2 == '\x01') {
        FUN_004e1f40(param_1,1);
      }
      *in_FS_OFFSET = uVar4;
      if (bVar3) {
        FUN_004c6490(param_1,0,puVar6);
      }
      return;
    }
    *(char *)((int)param_1 + 0x29e) = param_2;
    if ((*(byte *)(param_1 + 7) & 0x10) == 0) {
      cVar1 = FUN_004c4988(param_1);
      if (cVar1 != '\0') {
        uFlags = 0x213;
        cy = 0;
        cx = 0;
        Y = 0;
        X = 0;
        hWndInsertAfter =
             *(HWND *)(&DAT_00681b0c + (uint)(*(char *)((int)param_1 + 0x29e) == '\x03') * 4);
        hWnd = (HWND)FUN_004c45dc(param_1);
        SetWindowPos(hWnd,hWndInsertAfter,X,Y,cx,cy,uFlags);
      }
    }
  }
  return;
}
