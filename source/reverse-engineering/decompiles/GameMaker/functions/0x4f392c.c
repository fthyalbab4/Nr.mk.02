// rea decompile_all
// name: FUN_004f392c
// address: 0x4f392c
// body: available
// range: 0x4f392c-0x4f39c1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004f392c(int *param_1)

{
  HWND hWndInsertAfter;
  int iVar1;
  int iVar2;
  int cx;
  int cy;
  UINT uFlags;

  if (param_1[0x96] == 0) {
    (**(code **)(*param_1 + 0xb4))();
    SetPropW((HWND)param_1[0x96],(LPCWSTR)(uint)DAT_0078825e,param_1);
    SetPropW((HWND)param_1[0x96],(LPCWSTR)(uint)DAT_0078825c,param_1);
    if (param_1[0xd] != 0) {
      uFlags = 0x13;
      cy = 0;
      cx = 0;
      iVar2 = 0;
      iVar1 = 0;
      hWndInsertAfter = (HWND)FUN_004f38e4(param_1[0xd],param_1);
      SetWindowPos((HWND)param_1[0x96],hWndInsertAfter,iVar1,iVar2,cx,cy,uFlags);
    }
    iVar1 = FUN_004f3124(param_1);
    if (-1 < iVar1 + -1) {
      iVar2 = 0;
      do {
        FUN_004f30e8(param_1,iVar2);
        FUN_004edaf4();
        iVar2 = iVar2 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
  return;
}
