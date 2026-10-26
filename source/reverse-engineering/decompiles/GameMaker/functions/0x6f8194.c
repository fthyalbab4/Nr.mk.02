// rea decompile_all
// name: FUN_006f8194
// address: 0x6f8194
// body: available
// range: 0x6f8194-0x6f8280 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6f81b0 (push 0x6f8281 followed by fs-segment stack chaining); handler 0x6f8281 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006f8194(int param_1,int param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;

  puStack_20 = &stack0xfffffffc;
  local_c = 0;
  local_10 = 0;
  puStack_24 = &LAB_006f8281;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  *(undefined4 *)(param_1 + 0x434) = 0;
  local_8 = param_2;
  (**(code **)(**(int **)(*(int *)(param_1 + 0x3d0) + 0x280) + 0x44))();
  if (*(int *)(param_1 + 0x420) != 0) {
    iVar4 = *(int *)(*(int *)(param_1 + 0x420) + 0xc);
    if (-1 < iVar4 + -1) {
      iVar5 = 0;
      do {
        uVar3 = FUN_005adeb0(*(undefined4 *)(param_1 + 0x420),iVar5);
        FUN_0041666c(uVar3,&local_10);
        FUN_0040839c(&local_c,L"Step ",local_10);
        piVar1 = *(int **)(*(int *)(param_1 + 0x3d0) + 0x280);
        (**(code **)(*piVar1 + 0x38))(piVar1,local_c);
        iVar5 = iVar5 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    iVar4 = *(int *)(*(int *)(param_1 + 0x420) + 0xc);
    if (iVar4 <= local_8) {
      local_8 = iVar4 + -1;
    }
    if (-1 < local_8) {
      (**(code **)(**(int **)(param_1 + 0x3d0) + 0xf0))(*(int **)(param_1 + 0x3d0),local_8);
      uVar3 = FUN_005ade9c(*(undefined4 *)(param_1 + 0x420),local_8);
      *(undefined4 *)(param_1 + 0x434) = uVar3;
    }
    FUN_006f8f10(param_1);
  }
  puVar2 = puStack_20;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_006f8288;
  puStack_24 = (undefined1 *)0x6f8280;
  thunk_FUN_00406e80(&local_10,2,puVar2);
  return;
}
