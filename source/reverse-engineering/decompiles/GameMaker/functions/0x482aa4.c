// rea decompile_all
// name: FUN_00482aa4
// address: 0x482aa4
// body: available
// range: 0x482aa4-0x482b68 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x482ac4 (push 0x482b69 followed by fs-segment stack chaining); handler 0x482b69 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00482aa4(int param_1,WPARAM param_2,undefined4 *param_3)

{
  int iVar1;
  undefined1 *puVar2;
  HWND pHVar3;
  LRESULT LVar4;
  undefined4 *in_FS_OFFSET;
  UINT UVar5;
  WPARAM wParam;
  LPARAM LVar6;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_10;
  undefined4 *local_c;

  puStack_20 = &stack0xfffffffc;
  local_10 = 0;
  puStack_24 = &LAB_00482b69;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  iVar1 = *(int *)(param_1 + 0x1c);
  local_c = param_3;
  if ((byte)(*(char *)(iVar1 + 0x2a0) - 3U) < 2) {
    puStack_20 = &stack0xfffffffc;
    FUN_00484a04(iVar1,param_2,param_3);
  }
  else {
    LVar6 = 0;
    UVar5 = 0x18a;
    wParam = param_2;
    pHVar3 = (HWND)FUN_004f76a8(iVar1);
    LVar4 = SendMessageW(pHVar3,UVar5,wParam,LVar6);
    if (LVar4 == -1) {
      FUN_0040b75c(PTR_PTR_007824e4,&local_10);
      FUN_0043d4dc(param_1,local_10,param_2);
    }
    FUN_00408244(local_c,LVar4);
    if (LVar4 != 0) {
      LVar6 = FUN_00407f44(*local_c);
      UVar5 = 0x189;
      pHVar3 = (HWND)FUN_004f76a8(*(undefined4 *)(param_1 + 0x1c));
      LVar4 = SendMessageW(pHVar3,UVar5,param_2,LVar6);
      FUN_00408244(local_c,LVar4);
    }
  }
  puVar2 = puStack_20;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_00482b70;
  puStack_24 = (undefined1 *)0x482b68;
  thunk_FUN_00406e5c(&local_10,uStack_28,puVar2);
  return;
}
