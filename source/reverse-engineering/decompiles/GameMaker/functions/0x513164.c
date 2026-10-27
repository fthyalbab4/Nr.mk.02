// rea decompile_all
// name: FUN_00513164
// address: 0x513164
// body: available
// range: 0x513164-0x513224 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00513164(HWND param_1,char param_2,byte param_3)

{
  byte bVar1;
  uint uVar2;
  BOOL BVar3;
  bool bVar4;

  uVar2 = GetWindowLongW(param_1,-0x14);
  if (((param_2 != '\0') && ((uVar2 & 0x40000) == 0)) ||
     ((param_2 == '\0' && ((uVar2 & 0x40000) == 0x40000)))) {
    BVar3 = IsIconic(param_1);
    bVar4 = BVar3 == 0;
    BVar3 = IsWindowVisible(param_1);
    bVar1 = 1 - (BVar3 == 0);
    if (bVar1 != 0 || !bVar4) {
      ShowWindow(param_1,0);
    }
    if (param_2 == '\0') {
      SetWindowLongW(param_1,-0x14,uVar2 & 0xfffbffff);
    }
    else {
      SetWindowLongW(param_1,-0x14,uVar2 | 0x40000);
    }
    if (((param_3 & bVar1) != 0) || (!bVar4)) {
      if (bVar4) {
        ShowWindow(param_1,5);
      }
      else {
        ShowWindow(param_1,6);
      }
    }
  }
  return;
}
