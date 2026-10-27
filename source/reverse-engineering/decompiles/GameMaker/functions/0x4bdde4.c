// rea decompile_all
// name: FUN_004bdde4
// address: 0x4bdde4
// body: available
// range: 0x4bdde4-0x4bde89 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_004bdde4(undefined4 param_1,undefined4 param_2,int param_3)

{
  HWND hWnd;
  uint uVar1;
  undefined4 local_28;
  int local_24;
  uint local_20;

  uVar1 = 0;
  local_28 = param_2;
  local_24 = param_3;
  hWnd = (HWND)FUN_004f76a8();
  SendMessageW(hWnd,0x1012,0,(LPARAM)&local_28);
  if (((local_20 & 8) != 0) && (param_3 < 0)) {
    uVar1 = 1;
  }
  if ((local_20 & 0x10) != 0) {
    uVar1 = uVar1 | 2;
  }
  if ((local_20 & 1) != 0) {
    uVar1 = uVar1 | 4;
  }
  if ((local_20 & 0xe) == 0xe) {
    uVar1 = uVar1 | 8;
  }
  else {
    if ((local_20 & 2) != 0) {
      uVar1 = uVar1 | 0x20;
    }
    if ((local_20 & 4) != 0) {
      uVar1 = uVar1 | 0x80;
    }
    if ((local_20 & 8) != 0) {
      uVar1 = uVar1 | 0x200;
    }
  }
  if ((local_20 & 0x40) != 0) {
    uVar1 = uVar1 | 0x400;
  }
  if ((local_20 & 0x20) != 0) {
    uVar1 = uVar1 | 0x800;
  }
  return uVar1;
}
