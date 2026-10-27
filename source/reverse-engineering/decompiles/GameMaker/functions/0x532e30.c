// rea decompile_all
// name: FUN_00532e30
// address: 0x532e30
// body: available
// range: 0x532e30-0x532eae inclusive
// range: 0x532ec0-0x532f14 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x532e47 (push 0x532f15 followed by fs-segment stack chaining); handler 0x532f15 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x532e78 (push 0x532eaf followed by fs-segment stack chaining); handler 0x532eaf lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00532e30(int param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 *puVar5;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_c;
  undefined4 local_8;

  puStack_1c = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  puStack_20 = &LAB_00532f15;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puStack_28 = (undefined1 *)0x0;
  piVar1 = *(int **)(param_1 + 0x388);
  puStack_2c = (undefined1 *)0x532e5c;
  uVar3 = (**(code **)(*piVar1 + 0xf8))();
  puStack_2c = (undefined1 *)0x532e6a;
  iVar4 = FUN_004efb90(piVar1,0xc9,uVar3);
  puStack_2c = &LAB_00532eaf;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  puVar5 = &local_8;
  puStack_28 = &stack0xfffffffc;
  FUN_0041666c(iVar4 + 1,&local_c);
  FUN_004d4d24(L"Goto Line",L"line number:",local_c,puVar5);
  iVar4 = FUN_00416900(local_8);
  *in_FS_OFFSET = uStack_30;
  puStack_28 = (undefined1 *)0x0;
  piVar1 = *(int **)(param_1 + 0x388);
  puStack_2c = (undefined1 *)0x532ed7;
  uVar3 = FUN_004efb90(piVar1,0xbb,iVar4 + -1);
  puStack_28 = (undefined1 *)0x532ee3;
  (**(code **)(*piVar1 + 0x104))(piVar1,uVar3);
  puStack_28 = (undefined1 *)0x532ef3;
  (**(code **)(**(int **)(param_1 + 0x388) + 0x100))(*(int **)(param_1 + 0x388),0);
  puStack_28 = (undefined1 *)0x532efa;
  FUN_00532994(param_1);
  puVar2 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_00532f1c;
  puStack_20 = (undefined1 *)0x532f14;
  thunk_FUN_00406e80(&local_c,2,puVar2);
  return;
}
