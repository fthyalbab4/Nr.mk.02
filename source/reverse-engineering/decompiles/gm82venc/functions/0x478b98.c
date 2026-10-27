// rea decompile_all
// name: FUN_00478b98
// address: 0x478b98
// body: available
// range: 0x478b98-0x478c19 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x478baf (push 0x478c1a followed by fs-segment stack chaining); handler 0x478c1a lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00478b98(int *param_1,WPARAM param_2)

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
  puStack_1c = &LAB_00478c1a;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  lParam = 0;
  Msg = 0x150;
  wParam = param_2;
  hWnd = (HWND)FUN_004c45dc(param_1[7]);
  LVar2 = SendMessageW(hWnd,Msg,wParam,lParam);
  if (LVar2 == -1) {
    iVar3 = (**(code **)(*param_1 + 0x14))();
    if ((iVar3 != 0) && (-1 < (int)param_2)) {
      iVar3 = (**(code **)(*param_1 + 0x14))();
      if ((int)param_2 <= iVar3) goto LAB_00478c02;
    }
    FUN_0040b9d0(PTR_LAB_00689324,&local_8);
    FUN_0043ab94(param_1,local_8,param_2);
  }
LAB_00478c02:
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_00478c21;
  puStack_1c = (undefined1 *)0x478c19;
  thunk_FUN_004072d8(&local_8,uStack_20,puVar1);
  return;
}
