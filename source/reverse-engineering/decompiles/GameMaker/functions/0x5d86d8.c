// rea decompile_all
// name: FUN_005d86d8
// address: 0x5d86d8
// body: available
// range: 0x5d86d8-0x5d874a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5d86f1 (push 0x5d874b followed by fs-segment stack chaining); handler 0x5d874b lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005d86d8(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_8;

  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  puStack_1c = &LAB_005d874b;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  FUN_005d7240(param_1);
  if (*(int *)(param_1 + 0x290) != 0) {
    FUN_00407a78(&local_8);
    iVar2 = (**(code **)(**(int **)(param_1 + 0x290) + 0xc))();
    if (iVar2 == 0) {
      FUN_00408130(param_3,local_8);
      goto LAB_005d8735;
    }
  }
  FUN_005d88e4(param_1,param_2,param_3);
LAB_005d8735:
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_005d8752;
  puStack_1c = (undefined1 *)0x5d874a;
  FUN_00407a78(&local_8,uStack_20,puVar1);
  return;
}
