// rea decompile_all
// name: FUN_004acbc0
// address: 0x4acbc0
// body: available
// range: 0x4acbc0-0x4acc01 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004acbc0(int param_1,int param_2)

{
  HWND hWnd;
  undefined4 local_3c;
  undefined4 local_38;
  int local_8;

  if ((*(char *)(param_1 + 0x24) == '\0') && (param_2 != *(int *)(param_1 + 0x28))) {
    *(int *)(param_1 + 0x28) = param_2;
    local_3c = 0x210;
    local_38 = *(undefined4 *)(param_1 + 0x10);
    local_8 = param_2;
    hWnd = (HWND)FUN_004ac860();
    SendMessageW(hWnd,0x113f,0,(LPARAM)&local_3c);
  }
  return;
}
