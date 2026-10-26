// rea decompile_all
// name: FUN_006796f4
// address: 0x6796f4
// body: available
// range: 0x6796f4-0x6797b5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x67970a (push 0x6797b6 followed by fs-segment stack chaining); handler 0x6797b6 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006796f4(int *param_1,char param_2)

{
  undefined1 *puVar1;
  int iVar2;
  HWND hwnd;
  undefined4 *in_FS_OFFSET;
  LONG idObject;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_8;

  puStack_14 = &stack0xfffffffc;
  local_8 = 0;
  puStack_18 = &LAB_006797b6;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  puVar1 = &stack0xfffffffc;
  if (param_2 != (char)param_1[0x75]) {
    *(char *)(param_1 + 0x75) = param_2;
    puVar1 = &stack0xfffffffc;
    if (param_2 != '\0') {
      FUN_006797c4(param_1);
      puVar1 = puStack_14;
    }
    puStack_14 = puVar1;
    (**(code **)(*param_1 + 0x90))();
    if (param_2 != '\0') {
      iVar2 = FUN_00673fd0(param_1[0x6d]);
      if (iVar2 == 0) {
        FUN_00520a88(*(undefined4 *)PTR_DAT_00782280);
      }
      else {
        iVar2 = FUN_00673fd0(param_1[0x6d]);
        FUN_004eaf74(*(undefined4 *)(iVar2 + 0x7c),&local_8);
        FUN_00520670(*(undefined4 *)PTR_DAT_00782280,local_8);
      }
    }
    puVar1 = puStack_14;
    if (param_2 != '\0') {
      iVar2 = FUN_0043c914(param_1[0x6d]);
      iVar2 = iVar2 + 1;
      idObject = -4;
      hwnd = (HWND)FUN_004f76a8(param_1[0xd]);
      NotifyWinEvent(0x8005,hwnd,idObject,iVar2);
      puVar1 = puStack_14;
    }
  }
  puStack_14 = puVar1;
  puVar1 = puStack_14;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_006797bd;
  puStack_18 = (undefined1 *)0x6797b5;
  thunk_FUN_00406e5c(&local_8,uStack_1c,puVar1);
  return;
}
