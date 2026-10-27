// rea decompile_all
// name: FUN_004b8c54
// address: 0x4b8c54
// body: available
// range: 0x4b8c54-0x4b8ca9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004b8c54(int param_1,int param_2)

{
  HWND hWnd;
  undefined4 local_48;
  undefined4 local_44;
  int local_20;

  if (param_2 != *(int *)(param_1 + 0x2c)) {
    FUN_00404f08(&local_48,0x3c,0);
    local_48 = 0x100;
    local_44 = FUN_004b920c(param_1);
    local_20 = param_2;
    hWnd = (HWND)FUN_004b8b7c(param_1);
    SendMessageW(hWnd,0x104c,0,(LPARAM)&local_48);
    *(int *)(param_1 + 0x2c) = param_2;
  }
  return;
}
