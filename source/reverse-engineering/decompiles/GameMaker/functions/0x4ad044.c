// rea decompile_all
// name: FUN_004ad044
// address: 0x4ad044
// body: available
// range: 0x4ad044-0x4ad089 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_004ad044(int param_1)

{
  HWND hWnd;
  LRESULT LVar1;
  bool bVar2;
  undefined4 local_30;
  undefined4 local_2c;
  int local_10;

  bVar2 = false;
  if (*(char *)(param_1 + 0x24) == '\0') {
    local_30 = 0x40;
    local_2c = *(undefined4 *)(param_1 + 0x10);
    hWnd = (HWND)FUN_004ac860();
    LVar1 = SendMessageW(hWnd,0x113e,0,(LPARAM)&local_30);
    if (LVar1 != 0) {
      bVar2 = 0 < local_10;
    }
  }
  return bVar2;
}
