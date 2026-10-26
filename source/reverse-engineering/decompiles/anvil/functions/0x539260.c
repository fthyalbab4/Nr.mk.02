// rea decompile_all
// name: FUN_00539260
// address: 0x539260
// body: available
// range: 0x539260-0x5392ee inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x53927b (push 0x5392ef followed by fs-segment stack chaining); handler 0x5392ef lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00539260(int param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_c;
  int local_8;

  puStack_1c = &stack0xfffffffc;
  local_c = 0;
  puStack_20 = &LAB_005392ef;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  piVar3 = (int *)FUN_00539edc(param_1);
  (**(code **)(*piVar3 + 0x44))();
  iVar4 = (**(code **)(**(int **)(param_1 + 0x10) + 0x14))();
  if (-1 < iVar4 + -1) {
    iVar5 = 0;
    local_8 = iVar4;
    do {
      iVar4 = (**(code **)(**(int **)(param_1 + 0x10) + 0x18))(*(int **)(param_1 + 0x10),iVar5);
      if (iVar4 == *(int *)(param_1 + 0x1c)) {
        (**(code **)(**(int **)(param_1 + 0x10) + 0xc))(*(int **)(param_1 + 0x10),iVar5,&local_c);
        uVar2 = local_c;
        piVar3 = (int *)FUN_00539edc(param_1);
        (**(code **)(*piVar3 + 0x3c))
                  (piVar3,uVar2,
                   *(undefined4 *)(*(int *)(param_1 + 0x18) + *(int *)(param_1 + 0x1c) * 4));
      }
      iVar5 = iVar5 + 1;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
  }
  puVar1 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_005392f6;
  puStack_20 = (undefined1 *)0x5392ee;
  thunk_FUN_004072d8(&local_c,uStack_24,puVar1);
  return;
}
