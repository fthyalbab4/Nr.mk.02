// rea decompile_all
// name: FUN_004acdd4
// address: 0x4acdd4
// body: available
// range: 0x4acdd4-0x4acebe inclusive
// range: 0x4acec6-0x4aceca inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4ace3c (push 0x4acebf followed by fs-segment stack chaining); handler 0x4acebf lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004acdd4(int param_1,undefined4 param_2,char param_3)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  HWND hWnd;
  WPARAM wParam;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;

  if (*(char *)(param_1 + 0x24) == '\0') {
    iVar3 = param_1;
    if (param_3 == '\0') {
      puStack_14 = (undefined1 *)0x4ace2a;
      iVar3 = FUN_004ac874(param_1);
      *(undefined1 *)(iVar3 + 0x2b1) = 1;
      puStack_18 = &LAB_004acebf;
      uStack_1c = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_1c;
      wParam = 0;
      if ((char)param_2 == '\0') {
        puStack_14 = &stack0xfffffffc;
        cVar2 = FUN_004acd3c(param_1,0);
        if (cVar2 != '\0') {
          wParam = 1;
          FUN_004acd90(param_1,0);
        }
      }
      else {
        puStack_14 = &stack0xfffffffc;
        cVar2 = FUN_004acd3c(param_1,1);
        if (cVar2 != '\0') {
          wParam = 2;
          FUN_004acd90(param_1,1);
        }
      }
      if (wParam != 0) {
        hWnd = (HWND)FUN_004ac860(param_1);
        SendMessageW(hWnd,0x1102,wParam,*(LPARAM *)(param_1 + 0x10));
      }
      puVar1 = puStack_14;
      *in_FS_OFFSET = uStack_1c;
      puStack_14 = (undefined1 *)0x4acec6;
      puStack_18 = (undefined1 *)0x4aceb7;
      iVar3 = FUN_004ac874(param_1,uStack_1c,puVar1);
      *(undefined1 *)(iVar3 + 0x2b1) = 0;
      return;
    }
    do {
      puStack_14 = (undefined1 *)0x4acdfe;
      FUN_004acdd4(iVar3,param_2,0);
      puStack_14 = (undefined1 *)0x4ace05;
      iVar3 = FUN_004ad2a8(iVar3);
      if (iVar3 == 0) {
        return;
      }
      puStack_14 = (undefined1 *)0x4ace19;
      cVar2 = FUN_004ac87c(iVar3,param_1);
    } while (cVar2 != '\0');
  }
  return;
}
