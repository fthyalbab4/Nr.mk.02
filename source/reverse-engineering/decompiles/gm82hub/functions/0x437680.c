// rea decompile_all
// name: FUN_00437680
// address: 0x437680
// body: available
// range: 0x437680-0x4376e6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x437697 (push 0x4376e7 followed by fs-segment stack chaining); handler 0x4376e7 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00437680(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_8;

  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  puStack_1c = &LAB_004376e7;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  piVar1 = *(int **)(param_1 + 4);
  puVar2 = &stack0xfffffffc;
  if (piVar1 != (int *)0x0) {
    FUN_00405eb4(param_2,&local_8);
    iVar3 = (**(code **)(*piVar1 + 0x54))(piVar1,local_8);
    puVar2 = puStack_18;
    if (-1 < iVar3) {
      (**(code **)(**(int **)(param_1 + 4) + 0x18))(*(int **)(param_1 + 4),iVar3);
      puVar2 = puStack_18;
    }
  }
  puStack_18 = puVar2;
  puVar2 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_004376ee;
  puStack_1c = (undefined1 *)0x4376e6;
  thunk_FUN_004072d8(&local_8,uStack_20,puVar2);
  return;
}
