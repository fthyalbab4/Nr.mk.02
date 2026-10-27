// rea decompile_all
// name: FUN_004f8964
// address: 0x4f8964
// body: available
// range: 0x4f8964-0x4f89e1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004f8964(undefined4 param_1,HPALETTE param_2,char param_3)

{
  int iVar1;
  undefined4 uVar2;
  HPALETTE hPal;
  BOOL bForceBkgd;

  iVar1 = FUN_004f6500(param_1);
  if (*(char *)(iVar1 + 0x20) != '\0') {
    if (param_3 != '\0') {
      uVar2 = FUN_004f6500(param_1);
      FUN_004f2eb0(uVar2,param_2);
    }
    bForceBkgd = 0;
    hPal = param_2;
    iVar1 = FUN_004f6500(param_1);
    SelectPalette(*(HDC *)(iVar1 + 0x18),hPal,bForceBkgd);
    iVar1 = FUN_004f6500(param_1);
    RealizePalette(*(HDC *)(iVar1 + 0x18));
    iVar1 = FUN_004f6500(param_1);
    DeleteObject(*(HGDIOBJ *)(iVar1 + 0x1c));
    iVar1 = FUN_004f6500(param_1);
    *(HPALETTE *)(iVar1 + 0x1c) = param_2;
  }
  return;
}
