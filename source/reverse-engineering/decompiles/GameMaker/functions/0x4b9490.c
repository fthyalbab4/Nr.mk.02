// rea decompile_all
// name: FUN_004b9490
// address: 0x4b9490
// body: available
// range: 0x4b9490-0x4b94eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_004b9490(int param_1,int param_2,int param_3)

{
  HWND hWnd;
  undefined1 auStack_4c [60];

  if (param_2 == 0) {
    param_2 = (**(code **)(**(int **)(param_1 + 4) + 0x11c))();
  }
  if (param_3 < 0) {
    param_3 = FUN_004b94ec(param_1);
  }
  hWnd = (HWND)FUN_004b9528(param_1);
  FUN_004ba518(param_1,param_3,param_2,auStack_4c);
  SendMessageW(hWnd,0x104d,0,(LPARAM)auStack_4c);
  return param_2;
}
