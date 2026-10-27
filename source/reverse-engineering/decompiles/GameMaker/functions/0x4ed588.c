// rea decompile_all
// name: FUN_004ed588
// address: 0x4ed588
// body: available
// range: 0x4ed588-0x4ed600 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004ed588(int *param_1,char param_2)

{
  HPALETTE pHVar1;
  HDC hdc;
  UINT UVar2;
  undefined4 uVar3;
  HWND pHStack_14;

  uVar3 = 0;
  if (*(char *)((int)param_1 + 0x59) != '\0') {
    pHVar1 = (HPALETTE)FUN_00405d08(param_1);
    if (pHVar1 != (HPALETTE)0x0) {
      hdc = (HDC)(**(code **)(*param_1 + 0x58))(param_1,&pHStack_14);
      pHVar1 = SelectPalette(hdc,pHVar1,-(uint)(param_2 != '\x01'));
      UVar2 = RealizePalette(hdc);
      if (UVar2 != 0) {
        (**(code **)(*param_1 + 0x90))();
      }
      SelectPalette(hdc,pHVar1,-1);
      ReleaseDC(pHStack_14,hdc);
      uVar3 = 1;
    }
  }
  return uVar3;
}
