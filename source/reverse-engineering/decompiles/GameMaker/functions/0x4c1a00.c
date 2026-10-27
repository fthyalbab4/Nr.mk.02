// rea decompile_all
// name: FUN_004c1a00
// address: 0x4c1a00
// body: available
// range: 0x4c1a00-0x4c1acd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4c1a1f (push 0x4c1aeb followed by fs-segment stack chaining); handler 0x4c1aeb lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4c1a61 (push 0x4c1ace followed by fs-segment stack chaining); handler 0x4c1ace lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004c1a00(int param_1)

{
  HWND pHVar1;
  uint dwNewLong;
  uint dwNewLong_00;
  int iVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;

  puVar6 = &stack0xfffffffc;
  puStack_1c = (undefined1 *)0x4c1a14;
  FUN_004c261c(param_1);
  puStack_20 = &LAB_004c1aeb;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puStack_1c = &stack0xfffffffc;
  FUN_004f7684(param_1);
  iVar5 = -0x10;
  pHVar1 = (HWND)FUN_004f76a8(param_1);
  dwNewLong = GetWindowLongW(pHVar1,iVar5);
  dwNewLong_00 = dwNewLong & 0xefffffff;
  iVar5 = -0x10;
  pHVar1 = (HWND)FUN_004f76a8(param_1);
  SetWindowLongW(pHVar1,iVar5,dwNewLong_00);
  uVar4 = *in_FS_OFFSET;
  *in_FS_OFFSET = &stack0xffffffd0;
  iVar2 = FUN_004c2664(param_1);
  iVar5 = *(int *)(*(int *)(param_1 + 0x288) + 8);
  if (-1 < iVar5 + -1) {
    iVar3 = 0;
    do {
      if (iVar3 < iVar2) {
        FUN_004c1564(param_1,0x440,iVar3,iVar3);
      }
      else {
        FUN_004c130c(param_1,0x443,iVar3,iVar3);
      }
      iVar3 = iVar3 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  *in_FS_OFFSET = uVar4;
  iVar5 = -0x10;
  pHVar1 = (HWND)FUN_004f76a8(param_1,uVar4,puVar6);
  SetWindowLongW(pHVar1,iVar5,dwNewLong);
  return;
}
