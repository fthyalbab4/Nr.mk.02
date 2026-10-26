// rea decompile_all
// name: FUN_006f28f8
// address: 0x6f28f8
// body: available
// range: 0x6f28f8-0x6f2a8b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6f290d (push 0x6f2a8c followed by fs-segment stack chaining); handler 0x6f2a8c lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006f28f8(int param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_8;

  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  puStack_1c = &LAB_006f2a8c;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  uVar4 = FUN_005b2edc(*(undefined4 *)(param_1 + 0x420));
  uVar5 = FUN_005b2ec4(*(undefined4 *)(param_1 + 0x420));
  iVar6 = FUN_005b5764(uVar5,uVar4);
  uVar4 = FUN_005b2ef4(*(undefined4 *)(param_1 + 0x420),*(undefined4 *)(param_1 + 0x430));
  FUN_007034e0(iVar6,0,0,1,uVar4);
  cVar3 = (**(code **)(**(int **)(param_1 + 0x3b8) + 0xec))();
  if (cVar3 != '\0') {
    uVar4 = FUN_005b3458(*(undefined4 *)(param_1 + 0x420),*(undefined4 *)(param_1 + 0x430));
    FUN_007034e0(iVar6,0,0,1,uVar4);
    FUN_00405a7c(uVar4);
  }
  FUN_0070205c(iVar6,(*(int *)(iVar6 + 4) * *(int *)(param_1 + 0x440)) / 100,
               (*(int *)(iVar6 + 8) * *(int *)(param_1 + 0x440)) / 100,0);
  uVar4 = FUN_0070399c(iVar6);
  FUN_00405a7c(iVar6);
  piVar1 = *(int **)(*(int *)(param_1 + 0x390) + 0x1b0);
  (**(code **)(*piVar1 + 8))(piVar1,uVar4);
  FUN_00405a7c(uVar4);
  FUN_0041666c(*(undefined4 *)(param_1 + 0x430),&local_8);
  FUN_004ee6d8(*(undefined4 *)(param_1 + 0x3ac),local_8);
  FUN_004ee5c0(*(undefined4 *)(param_1 + 0x390),1);
  FUN_004ee5c0(*(undefined4 *)(param_1 + 0x3a8),1 < *(int *)(*(int *)(param_1 + 0x420) + 4));
  FUN_004ee5c0(*(undefined4 *)(param_1 + 0x3ac),1 < *(int *)(*(int *)(param_1 + 0x420) + 4));
  FUN_004ee5c0(*(undefined4 *)(param_1 + 0x3a0),0 < *(int *)(param_1 + 0x430));
  FUN_004ee5c0(*(undefined4 *)(param_1 + 0x3a4),
               *(int *)(param_1 + 0x430) < *(int *)(*(int *)(param_1 + 0x420) + 4) + -1);
  FUN_004eed28(*(undefined4 *)(param_1 + 0x390));
  puVar2 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_006f2a93;
  puStack_1c = (undefined1 *)0x6f2a8b;
  thunk_FUN_00406e5c(&local_8,uStack_20,puVar2);
  return;
}
