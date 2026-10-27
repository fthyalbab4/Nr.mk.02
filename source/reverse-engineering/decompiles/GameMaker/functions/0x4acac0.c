// rea decompile_all
// name: FUN_004acac0
// address: 0x4acac0
// body: available
// range: 0x4acac0-0x4acaea inclusive
// range: 0x4acaff-0x4acb61 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004acac0(int param_1,uint param_2,char param_3)

{
  HWND hWnd;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;

  if (*(char *)(param_1 + 0x24) == '\0') {
    local_2c = 8;
    local_28 = *(undefined4 *)(param_1 + 0x10);
    switch(param_2 & 0x7f) {
    case 0:
      local_20 = 4;
      break;
    case 1:
      local_20 = 8;
      break;
    case 2:
      local_20 = 1;
      break;
    case 3:
      local_20 = 2;
      break;
    case 4:
      local_20 = 0x20;
    }
    if (param_3 == '\0') {
      local_24 = 0;
    }
    else {
      local_24 = local_20;
    }
    hWnd = (HWND)FUN_004ac860();
    SendMessageW(hWnd,0x113f,0,(LPARAM)&local_2c);
  }
  return;
}
