// rea decompile_all
// name: FUN_005ee374
// address: 0x5ee374
// body: available
// range: 0x5ee374-0x5ee40d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5ee3a5 (push 0x5ee40e followed by fs-segment stack chaining); handler 0x5ee40e lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005ee374(int param_1)

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

  puStack_28 = (undefined1 *)0x5ee388;
  local_8 = param_1;
  FUN_005ed5ec(param_1);
  puStack_28 = (undefined1 *)0x5ee38d;
  local_c = GetActiveWindow();
  puStack_28 = (undefined1 *)0x5ee397;
  local_10 = FUN_004df468(0);
  puStack_2c = &LAB_005ee40e;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  puStack_28 = &stack0xfffffffc;
  FUN_004baee8(local_8,local_20);
  puVar6 = local_20;
  uVar2 = FUN_004c4378(local_8);
  uVar5 = 0;
  iVar3 = local_8;
  if (local_8 != 0) {
    iVar3 = local_8 + 0x2ec;
  }
  uVar4 = 0;
  piVar1 = *(int **)(local_8 + 0x280);
  (**(code **)(*piVar1 + 0x2c))();
  FUN_005365fc();
  *in_FS_OFFSET = piVar1;
  FUN_004df52c(local_10,piVar1,uVar4,&LAB_005ee415,iVar3,uVar5,uVar2,puVar6);
  SetActiveWindow(local_c);
  SetFocus(local_c);
  return;
}
