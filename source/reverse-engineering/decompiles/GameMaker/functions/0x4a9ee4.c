// rea decompile_all
// name: FUN_004a9ee4
// address: 0x4a9ee4
// body: available
// range: 0x4a9ee4-0x4a9f41 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


LRESULT FUN_004a9ee4(int *param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  HWND hWnd;
  LRESULT LVar2;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined1 local_20 [16];

  LVar2 = -1;
  local_34 = param_2;
  local_30 = param_3;
  (**(code **)(*param_1 + 0x54))(param_1,local_20);
  cVar1 = FUN_0040c15c(local_20,&local_34);
  if (cVar1 != '\0') {
    uStack_2c = param_2;
    uStack_28 = param_3;
    hWnd = (HWND)FUN_004f76a8(param_1);
    LVar2 = SendMessageW(hWnd,0x130d,0,(LPARAM)&uStack_2c);
  }
  return LVar2;
}
