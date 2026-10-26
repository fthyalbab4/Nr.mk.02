// rea decompile_all
// name: FUN_004ac8bc
// address: 0x4ac8bc
// body: available
// range: 0x4ac8bc-0x4ac90d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004ac8bc(int param_1,char param_2)

{
  HWND hWnd;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_10;

  if ((*(char *)(param_1 + 0x24) == '\0') && (param_2 != *(char *)(param_1 + 0x26))) {
    *(char *)(param_1 + 0x26) = param_2;
    local_3c = 0x100;
    local_38 = *(undefined4 *)(param_1 + 0x10);
    if (param_2 == '\0') {
      local_10 = 2;
    }
    else {
      local_10 = 0;
    }
    hWnd = (HWND)FUN_004ac860();
    SendMessageW(hWnd,0x113f,0,(LPARAM)&local_3c);
  }
  return;
}
