// rea decompile_all
// name: FUN_004a8e2c
// address: 0x4a8e2c
// body: available
// range: 0x4a8e2c-0x4a8ebb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4a8e4b (push 0x4a8ebc followed by fs-segment stack chaining); handler 0x4a8ebc lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004a8e2c(int param_1,WPARAM param_2)

{
  undefined1 *puVar1;
  HWND hWnd;
  LRESULT LVar2;
  undefined4 *in_FS_OFFSET;
  UINT Msg;
  WPARAM wParam;
  undefined4 *puVar3;
  undefined4 uStack_44;
  undefined1 *puStack_40;
  undefined1 *puStack_3c;
  WPARAM local_30;
  undefined1 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20 [7];

  puStack_3c = &stack0xfffffffc;
  local_24 = 0;
  local_28 = 0;
  puStack_40 = &LAB_004a8ebc;
  uStack_44 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_44;
  local_20[0] = 8;
  puVar3 = local_20;
  Msg = 0x133c;
  wParam = param_2;
  hWnd = (HWND)FUN_004f76a8(*(undefined4 *)(param_1 + 0x1c));
  LVar2 = SendMessageW(hWnd,Msg,wParam,(LPARAM)puVar3);
  if (LVar2 == 0) {
    puVar3 = &local_24;
    FUN_0040b75c(PTR_PTR_007820f0,&local_28);
    local_2c = 0;
    local_30 = param_2;
    FUN_00417d4c(local_28,&local_30,0,puVar3);
    FUN_004a8be8(local_24);
  }
  puVar1 = puStack_3c;
  *in_FS_OFFSET = uStack_44;
  puStack_3c = &LAB_004a8ec3;
  puStack_40 = (undefined1 *)0x4a8ebb;
  thunk_FUN_00406e80(&local_28,2,puVar1);
  return;
}
