// rea decompile_all
// name: FUN_0047eecc
// address: 0x47eecc
// body: available
// range: 0x47eecc-0x47ef2f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x47eedf (push 0x47ef30 followed by fs-segment stack chaining); handler 0x47ef30 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0047eecc(int param_1)

{
  undefined1 *puVar1;
  HWND hWnd;
  undefined4 *in_FS_OFFSET;
  UINT Msg;
  WPARAM wParam;
  LPARAM lParam;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  undefined4 local_8;

  puStack_10 = &stack0xfffffffc;
  local_8 = 0;
  puStack_14 = &LAB_0047ef30;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  FUN_004ee6a0(*(undefined4 *)(param_1 + 0x1c),&local_8);
  lParam = 0;
  wParam = 0;
  Msg = 0x14b;
  hWnd = (HWND)FUN_004f76a8(*(undefined4 *)(param_1 + 0x1c));
  SendMessageW(hWnd,Msg,wParam,lParam);
  FUN_004ee6d8(*(undefined4 *)(param_1 + 0x1c),local_8);
  (**(code **)(**(int **)(param_1 + 0x1c) + 0x9c))();
  puVar1 = puStack_10;
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_0047ef37;
  puStack_14 = (undefined1 *)0x47ef2f;
  thunk_FUN_00406e5c(&local_8,uStack_18,puVar1);
  return;
}
