// rea decompile_all
// name: FUN_00478358
// address: 0x478358
// body: available
// range: 0x478358-0x4783ad inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00478358(undefined4 param_1,WPARAM param_2,undefined4 param_3)

{
  int iVar1;
  HWND hWnd;
  LRESULT LVar2;
  int in_stack_00000ff0;
  UINT Msg;
  undefined2 *lParam;
  undefined2 auStack_100c [2046];
  int local_10;

  iVar1 = 2;
  do {
    local_10 = iVar1;
    lParam = auStack_100c;
    iVar1 = local_10 + -1;
  } while (local_10 + -1 != 0);
  auStack_100c[0] = 0x1000;
  Msg = 0xc4;
  hWnd = (HWND)FUN_004c45dc(*(undefined4 *)(in_stack_00000ff0 + 0x1c));
  LVar2 = SendMessageW(hWnd,Msg,param_2,(LPARAM)lParam);
  FUN_004082d0(param_3,auStack_100c,LVar2);
  return;
}
