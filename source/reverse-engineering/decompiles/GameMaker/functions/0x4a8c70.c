// rea decompile_all
// name: FUN_004a8c70
// address: 0x4a8c70
// body: available
// range: 0x4a8c70-0x4a8cfb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4a8c8f (push 0x4a8cfc followed by fs-segment stack chaining); handler 0x4a8cfc lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004a8c70(int param_1,WPARAM param_2)

{
  undefined1 *puVar1;
  HWND hWnd;
  LRESULT LVar2;
  undefined4 *in_FS_OFFSET;
  UINT Msg;
  WPARAM wParam;
  LPARAM lParam;
  undefined4 *puVar3;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  WPARAM local_14;
  undefined1 local_10;
  undefined4 local_c;
  undefined4 local_8;

  puStack_20 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  puStack_24 = &LAB_004a8cfc;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  lParam = 0;
  Msg = 0x1308;
  wParam = param_2;
  hWnd = (HWND)FUN_004f76a8(*(undefined4 *)(param_1 + 0x1c));
  LVar2 = SendMessageW(hWnd,Msg,wParam,lParam);
  if (LVar2 == 0) {
    puVar3 = &local_8;
    FUN_0040b75c(PTR_PTR_00782198,&local_c);
    local_10 = 0;
    local_14 = param_2;
    FUN_00417d4c(local_c,&local_14,0,puVar3);
    FUN_004a8be8(local_8);
  }
  FUN_004a99f0(*(undefined4 *)(param_1 + 0x1c));
  puVar1 = puStack_20;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_004a8d03;
  puStack_24 = (undefined1 *)0x4a8cfb;
  thunk_FUN_00406e80(&local_c,2,puVar1);
  return;
}
