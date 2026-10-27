// rea decompile_all
// name: FUN_0043c824
// address: 0x43c824
// body: available
// range: 0x43c824-0x43c878 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x43c83d (push 0x43c879 followed by fs-segment stack chaining); handler 0x43c879 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0043c824(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  int *local_8;

  puStack_18 = &stack0xfffffffc;
  local_8 = (int *)0x0;
  puStack_1c = &LAB_0043c879;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  uVar2 = FUN_0040b140(&local_8);
  FUN_0043c780(param_1,uVar2);
  if (local_8 != (int *)0x0) {
    (**(code **)(*local_8 + 0x10))(local_8,param_2,param_3);
  }
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_0043c880;
  puStack_1c = (undefined1 *)0x43c878;
  FUN_0040b140(&local_8,uStack_20,puVar1);
  return;
}
