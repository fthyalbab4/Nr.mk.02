// rea decompile_all
// name: FUN_004acc60
// address: 0x4acc60
// body: available
// range: 0x4acc60-0x4accad inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004acc60(int param_1,int param_2)

{
  HWND hWnd;
  undefined4 local_2c;
  undefined4 local_28;
  int local_24;
  undefined4 local_20;

  if ((*(char *)(param_1 + 0x24) == '\0') && (param_2 != *(int *)(param_1 + 0x1c))) {
    *(int *)(param_1 + 0x1c) = param_2;
    local_2c = 0x18;
    local_20 = 0xf00;
    local_28 = *(undefined4 *)(param_1 + 0x10);
    local_24 = (param_2 + 1) * 0x100;
    hWnd = (HWND)FUN_004ac860();
    SendMessageW(hWnd,0x113f,0,(LPARAM)&local_2c);
  }
  return;
}
