// rea decompile_all
// name: FUN_004b78f0
// address: 0x4b78f0
// body: available
// range: 0x4b78f0-0x4b79b2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4b7906 (push 0x4b79b3 followed by fs-segment stack chaining); handler 0x4b79b3 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004b78f0(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  char cVar3;
  int iVar4;
  HWND hWnd;
  undefined4 *in_FS_OFFSET;
  UINT Msg;
  WPARAM wParam;
  LPARAM lParam;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_8;

  puStack_14 = &stack0xfffffffc;
  local_8 = 0;
  puStack_18 = &LAB_004b79b3;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  iVar4 = FUN_004b77cc(param_1);
  if (param_2 != iVar4) {
    if ((*(byte *)(param_1 + 0x1c) & 0x10) == 0) {
      cVar3 = FUN_004b73c0(param_1,param_2,param_2 - *(int *)(param_1 + 0x28c));
      if (cVar3 == '\0') goto LAB_004b799d;
    }
    *(int *)(param_1 + 0x28c) = param_2;
    if (((*(byte *)(param_1 + 0x1c) & 0x10) != 0) && (*(int *)(param_1 + 0x274) != 0)) {
      uVar1 = *(undefined4 *)(param_1 + 0x274);
      cVar3 = FUN_00405c98(uVar1,&PTR_LAB_00471ba0);
      if (cVar3 != '\0') {
        FUN_0041666c(*(undefined4 *)(param_1 + 0x28c),&local_8);
        FUN_004ee6d8(uVar1,local_8);
      }
    }
    cVar3 = FUN_004f7a54(param_1);
    if (cVar3 != '\0') {
      lParam = *(LPARAM *)(param_1 + 0x28c);
      wParam = 0;
      Msg = 0x471;
      hWnd = (HWND)FUN_004f76a8(param_1);
      SendMessageW(hWnd,Msg,wParam,lParam);
    }
  }
LAB_004b799d:
  puVar2 = puStack_14;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_004b79ba;
  puStack_18 = (undefined1 *)0x4b79b2;
  thunk_FUN_00406e5c(&local_8,uStack_1c,puVar2);
  return;
}
