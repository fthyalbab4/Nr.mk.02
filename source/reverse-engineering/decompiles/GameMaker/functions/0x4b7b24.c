// rea decompile_all
// name: FUN_004b7b24
// address: 0x4b7b24
// body: available
// range: 0x4b7b24-0x4b7bd0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_004b7b24(int param_1,char param_2,int param_3)

{
  char cVar1;
  HWND hWnd;
  WPARAM wParam;
  int extraout_ECX;
  char extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_50;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_1c;
  char local_5;

  local_5 = '\0';
  if (param_2 != '\0') {
    param_1 = FUN_00405fb0();
    param_3 = extraout_ECX;
    local_5 = extraout_DL;
  }
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(*(int *)(param_3 + 8) + 8);
  FUN_0043c888(param_1,0,param_3);
  *(undefined4 *)(param_1 + 0x24) = 0x32;
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
  local_34 = 3;
  local_30 = 0;
  local_2c = *(undefined4 *)(param_1 + 0x24);
  local_1c = 0xffffffff;
  FUN_004b81c8(param_3);
  cVar1 = FUN_004f7a54();
  if (cVar1 != '\0') {
    FUN_004b81c8(param_3);
    hWnd = (HWND)FUN_004f76a8();
    wParam = FUN_0043c914(param_1);
    SendMessageW(hWnd,0x1061,wParam,(LPARAM)&local_34);
  }
  if (local_5 != '\0') {
    FUN_00406008(param_1);
    *in_FS_OFFSET = uStack_50;
  }
  return param_1;
}
