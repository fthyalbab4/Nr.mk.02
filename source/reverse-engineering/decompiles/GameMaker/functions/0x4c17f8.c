// rea decompile_all
// name: FUN_004c17f8
// address: 0x4c17f8
// body: available
// range: 0x4c17f8-0x4c18cf inclusive
// range: 0x4c18f4-0x4c1900 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4c1834 (push 0x4c18ed followed by fs-segment stack chaining); handler 0x4c18ed lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4c186e (push 0x4c18d0 followed by fs-segment stack chaining); handler 0x4c18d0 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


LONG FUN_004c17f8(int param_1,int param_2)

{
  char cVar1;
  HWND pHVar2;
  uint dwNewLong;
  uint dwNewLong_00;
  int iVar3;
  LONG LVar4;
  int *in_FS_OFFSET;
  int in_stack_ffffffcc;
  int iVar5;
  int iStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;

  if (((*(byte *)(param_1 + 0x1c) & 1) == 0) && (*(int *)(param_1 + 0x2e0) == 0)) {
    puStack_18 = (undefined1 *)0x4c1829;
    FUN_004c261c(param_1);
    puStack_1c = &LAB_004c18ed;
    iStack_20 = *in_FS_OFFSET;
    *in_FS_OFFSET = (int)&iStack_20;
    iVar5 = -0x10;
    puStack_18 = &stack0xfffffffc;
    pHVar2 = (HWND)FUN_004f76a8(param_1);
    dwNewLong = GetWindowLongW(pHVar2,iVar5);
    dwNewLong_00 = dwNewLong & 0xefffffff;
    iVar5 = -0x10;
    pHVar2 = (HWND)FUN_004f76a8(param_1);
    SetWindowLongW(pHVar2,iVar5,dwNewLong_00);
    iVar5 = *in_FS_OFFSET;
    *in_FS_OFFSET = (int)&stack0xffffffd4;
    iVar3 = FUN_004c2664(param_1);
    if (param_2 < iVar3) {
      in_stack_ffffffcc = 0x4c188d;
      cVar1 = FUN_004c130c(param_1,0x416,param_2,param_2);
      if (cVar1 != '\0') {
        FUN_004c130c(param_1,0x443,param_2);
        in_stack_ffffffcc = param_2;
      }
    }
    *in_FS_OFFSET = in_stack_ffffffcc;
    iVar3 = -0x10;
    pHVar2 = (HWND)FUN_004f76a8(param_1,in_stack_ffffffcc,iVar5);
    LVar4 = SetWindowLongW(pHVar2,iVar3,dwNewLong);
    return LVar4;
  }
  return 0;
}
