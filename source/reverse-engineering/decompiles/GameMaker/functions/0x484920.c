// rea decompile_all
// name: FUN_00484920
// address: 0x484920
// body: available
// range: 0x484920-0x4849f4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x48493f (push 0x4849f5 followed by fs-segment stack chaining); handler 0x4849f5 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00484920(int param_1,WPARAM param_2)

{
  undefined1 *puVar1;
  HWND hWnd;
  LRESULT LVar2;
  undefined4 *in_FS_OFFSET;
  UINT Msg;
  WPARAM wParam;
  undefined4 uVar3;
  LPARAM lParam;
  undefined4 *puVar4;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined1 local_8;

  puStack_20 = &stack0xfffffffc;
  local_14 = 0;
  local_10 = 0;
  puStack_24 = &LAB_004849f5;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  if ((byte)(*(char *)(param_1 + 0x2a0) - 3U) < 2) {
    lParam = 0;
    Msg = 0x1a7;
    wParam = param_2;
    puStack_20 = &stack0xfffffffc;
    hWnd = (HWND)FUN_004f76a8(param_1);
    LVar2 = SendMessageW(hWnd,Msg,wParam,lParam);
    if ((LVar2 == -1) || (LVar2 == -2)) {
      local_c = *(undefined4 *)(param_1 + 8);
      local_8 = 0x11;
      puVar4 = &local_c;
      uVar3 = 0;
      FUN_0040b75c(PTR_PTR_007824d4,&local_10);
      FUN_0041bef4(&PTR_LAB_00410b4c,1,local_10,uVar3,puVar4);
      FUN_00406618();
    }
    else {
      *(WPARAM *)(param_1 + 0x27c) = param_2;
    }
  }
  else {
    local_c = *(undefined4 *)(param_1 + 8);
    local_8 = 0x11;
    FUN_0040b75c(PTR_PTR_00781b1c,&local_14,0,0,&local_c);
    FUN_0041bef4(&PTR_LAB_00410b4c,1,local_14);
    FUN_00406618();
  }
  puVar1 = puStack_20;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_004849fc;
  puStack_24 = (undefined1 *)0x4849f4;
  thunk_FUN_00406e80(&local_14,2,puVar1);
  return;
}
