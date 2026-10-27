// rea decompile_all
// name: FUN_00727c9c
// address: 0x727c9c
// body: available
// range: 0x727c9c-0x727d78 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x727cb3 (push 0x727d79 followed by fs-segment stack chaining); handler 0x727d79 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00727c9c(int param_1,int param_2)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *in_FS_OFFSET;
  byte bVar9;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_8;

  bVar9 = 0;
  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  puStack_1c = &LAB_00727d79;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  cVar2 = FUN_00405c98(param_2,&PTR_LAB_00725010);
  if (cVar2 == '\0') {
    FUN_0040b75c(PTR_PTR_00782054,&local_8);
    FUN_0072b474(*(undefined4 *)(param_1 + 0xc),&PTR_LAB_00722ee4,local_8);
  }
  else {
    puVar6 = (undefined4 *)(param_1 + 0x45c + (uint)bVar9 * -8);
    puVar5 = (undefined4 *)(param_2 + 0x45c + (uint)bVar9 * -8);
    *(undefined4 *)(param_1 + 0x458) = *(undefined4 *)(param_2 + 0x458);
    puVar7 = puVar6 + (uint)bVar9 * -2 + 1;
    puVar8 = puVar5 + (uint)bVar9 * -2 + 1;
    *puVar6 = *puVar5;
    *puVar7 = *puVar8;
    *(undefined1 *)(puVar7 + (uint)bVar9 * -2 + 1) = *(undefined1 *)(puVar8 + (uint)bVar9 * -2 + 1);
    FUN_00728120(param_1);
    FUN_0040450c(*(undefined4 *)(param_2 + 0x450),*(undefined4 *)(param_1 + 0x450),
                 *(int *)(param_1 + 0x468) * *(int *)(param_1 + 0x45c));
    FUN_0040450c(*(undefined4 *)(param_2 + 0x454),*(undefined4 *)(param_1 + 0x454),
                 *(int *)(param_1 + 0x458) * *(int *)(param_1 + 0x45c));
    puVar5 = (undefined4 *)(param_2 + 0x49);
    puVar8 = (undefined4 *)(param_1 + 0x49);
    for (iVar4 = 0x100; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar8 = *puVar5;
      puVar5 = puVar5 + (uint)bVar9 * -2 + 1;
      puVar8 = puVar8 + (uint)bVar9 * -2 + 1;
    }
    uVar3 = FUN_00461ed4(*(undefined4 *)(param_2 + 0x1c));
    (**(code **)(**(int **)(param_1 + 0xc) + 0x3c))(*(int **)(param_1 + 0xc),uVar3);
  }
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_00727d80;
  puStack_1c = (undefined1 *)0x727d78;
  thunk_FUN_00406e5c(&local_8,uStack_20,puVar1);
  return;
}
