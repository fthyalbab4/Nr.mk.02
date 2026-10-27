// rea decompile_all
// name: FUN_004aa584
// address: 0x4aa584
// body: available
// range: 0x4aa584-0x4aa610 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4aa59b (push 0x4aa611 followed by fs-segment stack chaining); handler 0x4aa611 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004aa584(int param_1,byte param_2)

{
  int iVar1;
  undefined1 *puVar2;
  uint lParam;
  WPARAM wParam;
  HWND hWnd;
  undefined4 *in_FS_OFFSET;
  UINT Msg;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_8;

  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  puStack_1c = &LAB_004aa611;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puVar2 = &stack0xfffffffc;
  if ((*(byte *)(param_1 + 0x1c) & 2) == 0) {
    iVar1 = *(int *)(param_1 + 0x274);
    if (iVar1 == 0) {
      FUN_0040b75c(PTR_PTR_007826e4,&local_8);
      FUN_0041beb8(&PTR_LAB_0042f068,1,local_8);
      FUN_00406618();
      puVar2 = puStack_18;
    }
    else {
      lParam = (uint)param_2;
      puStack_18 = &stack0xfffffffc;
      wParam = FUN_004aa28c(param_1);
      Msg = 0x1333;
      hWnd = (HWND)FUN_004f76a8(iVar1);
      SendMessageW(hWnd,Msg,wParam,lParam);
      puVar2 = puStack_18;
    }
  }
  puStack_18 = puVar2;
  puVar2 = puStack_18;
  *(byte *)(param_1 + 0x27a) = param_2;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_004aa618;
  puStack_1c = (undefined1 *)0x4aa610;
  thunk_FUN_00406e5c(&local_8,uStack_20,puVar2);
  return;
}
