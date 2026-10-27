// rea decompile_all
// name: FUN_00524e78
// address: 0x524e78
// body: available
// range: 0x524e78-0x524ec0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x524e98 (push 0x524ec1 followed by fs-segment stack chaining); handler 0x524ec1 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00524e78(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_8;

  puStack_14 = (undefined1 *)0x524e8d;
  local_8 = param_3;
  thunk_FUN_00407ad0(param_3);
  uVar2 = local_8;
  puStack_18 = &LAB_00524ec1;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  puStack_14 = &stack0xfffffffc;
  (**(code **)(**(int **)(param_1 + 8) + 0x70))(*(int **)(param_1 + 8),param_1,param_2);
  puVar1 = puStack_18;
  *in_FS_OFFSET = uVar2;
  puStack_18 = &LAB_00524ec8;
  uStack_1c = 0x524ec0;
  thunk_FUN_004072d8(&local_8,uVar2,puVar1);
  return;
}
