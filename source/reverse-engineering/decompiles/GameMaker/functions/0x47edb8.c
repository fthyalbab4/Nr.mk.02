// rea decompile_all
// name: FUN_0047edb8
// address: 0x47edb8
// body: available
// range: 0x47edb8-0x47ee39 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x47edcf (push 0x47ee3a followed by fs-segment stack chaining); handler 0x47ee3a lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0047edb8(int *param_1,WPARAM param_2)

{
  undefined1 *puVar1;
  HWND hWnd;
  LRESULT LVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  UINT Msg;
  WPARAM wParam;
  LPARAM lParam;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_8;

  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  puStack_1c = &LAB_0047ee3a;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  lParam = 0;
  Msg = 0x150;
  wParam = param_2;
  hWnd = (HWND)FUN_004f76a8(param_1[7]);
  LVar2 = SendMessageW(hWnd,Msg,wParam,lParam);
  if (LVar2 == -1) {
    iVar3 = (**(code **)(*param_1 + 0x14))();
    if ((iVar3 != 0) && (-1 < (int)param_2)) {
      iVar3 = (**(code **)(*param_1 + 0x14))();
      if ((int)param_2 <= iVar3) goto LAB_0047ee22;
    }
    FUN_0040b75c(PTR_PTR_007824e4,&local_8);
    FUN_0043d4dc(param_1,local_8,param_2);
  }
LAB_0047ee22:
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_0047ee41;
  puStack_1c = (undefined1 *)0x47ee39;
  thunk_FUN_00406e5c(&local_8,uStack_20,puVar1);
  return;
}
