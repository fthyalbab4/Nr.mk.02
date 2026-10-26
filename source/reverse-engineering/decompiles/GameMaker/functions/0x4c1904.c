// rea decompile_all
// name: FUN_004c1904
// address: 0x4c1904
// body: available
// range: 0x4c1904-0x4c19d4 inclusive
// range: 0x4c19f9-0x4c19fd inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4c1940 (push 0x4c19f2 followed by fs-segment stack chaining); handler 0x4c19f2 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4c1982 (push 0x4c19d5 followed by fs-segment stack chaining); handler 0x4c19d5 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004c1904(int param_1,int param_2)

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
    puStack_14 = (undefined1 *)0x4c1935;
    FUN_004c261c(param_1);
    puStack_18 = &LAB_004c19f2;
    iStack_1c = *in_FS_OFFSET;
    *in_FS_OFFSET = (int)&iStack_1c;
    puStack_14 = &stack0xfffffffc;
    FUN_004f7684(param_1);
    iVar3 = -0x10;
    pHVar1 = (HWND)FUN_004f76a8(param_1);
    dwNewLong = GetWindowLongW(pHVar1,iVar3);
    dwNewLong_00 = dwNewLong & 0xefffffff;
    iVar3 = -0x10;
    pHVar1 = (HWND)FUN_004f76a8(param_1);
    SetWindowLongW(pHVar1,iVar3,dwNewLong_00);
    puVar2 = &LAB_004c19d5;
    *in_FS_OFFSET = (int)&stack0xffffffd8;
    iVar3 = FUN_004c2664(param_1);
    if (param_2 < iVar3) {
      FUN_004c1564(param_1,0x440,param_2);
    }
    else {
      FUN_004c130c(param_1,0x443,param_2);
    }
    *in_FS_OFFSET = param_2;
    iVar3 = -0x10;
    pHVar1 = (HWND)FUN_004f76a8(param_1,param_2,puVar2);
    SetWindowLongW(pHVar1,iVar3,dwNewLong);
    return;
  }
  return;
}
