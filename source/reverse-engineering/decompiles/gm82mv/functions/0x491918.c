// rea decompile_all
// name: FUN_00491918
// address: 0x491918
// body: available
// range: 0x491918-0x4919e8 inclusive
// range: 0x491a0d-0x491a11 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x491954 (push 0x491a06 followed by fs-segment stack chaining); handler 0x491a06 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x491996 (push 0x4919e9 followed by fs-segment stack chaining); handler 0x4919e9 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00491918(int param_1,int param_2)

{
  HWND pHVar1;
  uint dwNewLong;
  uint dwNewLong_00;
  int *in_FS_OFFSET;
  undefined1 *puVar2;
  int iVar3;
  int iStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;

  if (((*(byte *)(param_1 + 0x1c) & 1) == 0) && (*(int *)(param_1 + 0x2e0) < 1)) {
    puStack_14 = (undefined1 *)0x491949;
    FUN_00492630(param_1);
    puStack_18 = &LAB_00491a06;
    iStack_1c = *in_FS_OFFSET;
    *in_FS_OFFSET = (int)&iStack_1c;
    puStack_14 = &stack0xfffffffc;
    FUN_004c45b8(param_1);
    iVar3 = -0x10;
    pHVar1 = (HWND)FUN_004c45dc(param_1);
    dwNewLong = GetWindowLongW(pHVar1,iVar3);
    dwNewLong_00 = dwNewLong & 0xefffffff;
    iVar3 = -0x10;
    pHVar1 = (HWND)FUN_004c45dc(param_1);
    SetWindowLongW(pHVar1,iVar3,dwNewLong_00);
    puVar2 = &LAB_004919e9;
    *in_FS_OFFSET = (int)&stack0xffffffd8;
    iVar3 = FUN_00492678(param_1);
    if (param_2 < iVar3) {
      FUN_00491578(param_1,0x440,param_2);
    }
    else {
      FUN_00491320(param_1,0x443,param_2);
    }
    *in_FS_OFFSET = param_2;
    iVar3 = -0x10;
    pHVar1 = (HWND)FUN_004c45dc(param_1,param_2,puVar2);
    SetWindowLongW(pHVar1,iVar3,dwNewLong);
    return;
  }
  return;
}
