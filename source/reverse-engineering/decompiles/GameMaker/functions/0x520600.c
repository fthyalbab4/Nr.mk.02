// rea decompile_all
// name: FUN_00520600
// address: 0x520600
// body: available
// range: 0x520600-0x52066f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00520600(int param_1)

{
  LPARAM lParam;
  LONG dwNewLong;
  int iVar1;

  if (*PTR_DAT_00781e70 == '\0') {
    iVar1 = FUN_005130e4(*(undefined4 *)(param_1 + 0x170));
    if (iVar1 != 0) {
      InvalidateRect(*(HWND *)(param_1 + 0x170),(RECT *)0x0,-1);
    }
  }
  else {
    lParam = FUN_0051eebc(param_1);
    SendMessageW(*(HWND *)(param_1 + 0x170),0x80,1,lParam);
    dwNewLong = FUN_0051eebc(param_1);
    SetClassLongW(*(HWND *)(param_1 + 0x170),-0xe,dwNewLong);
  }
  FUN_005205b8(param_1,0xb01d,0,0);
  return;
}
