// rea decompile_all
// name: FUN_005d7fc8
// address: 0x5d7fc8
// body: available
// range: 0x5d7fc8-0x5d8061 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5d7ff9 (push 0x5d8062 followed by fs-segment stack chaining); handler 0x5d8062 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005d7fc8(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined1 local_20 [16];
  undefined4 local_10;
  HWND local_c;
  int local_8;

  puStack_28 = (undefined1 *)0x5d7fdc;
  local_8 = param_1;
  FUN_005d7240(param_1);
  puStack_28 = (undefined1 *)0x5d7fe1;
  local_c = GetActiveWindow();
  puStack_28 = (undefined1 *)0x5d7feb;
  local_10 = FUN_005132b4(0);
  puStack_2c = &LAB_005d8062;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  puStack_28 = &stack0xfffffffc;
  FUN_004edf30(local_8,local_20);
  puVar6 = local_20;
  uVar2 = FUN_004f7444(local_8);
  uVar5 = 0;
  iVar3 = local_8;
  if (local_8 != 0) {
    iVar3 = local_8 + 0x2ec;
  }
  uVar4 = 0;
  piVar1 = *(int **)(local_8 + 0x280);
  (**(code **)(*piVar1 + 0x2c))();
  FUN_005b641c();
  *in_FS_OFFSET = piVar1;
  FUN_00513378(local_10,piVar1,uVar4,&LAB_005d8069,iVar3,uVar5,uVar2,puVar6);
  SetActiveWindow(local_c);
  SetFocus(local_c);
  return;
}
