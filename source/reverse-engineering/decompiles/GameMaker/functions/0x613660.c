// rea decompile_all
// name: FUN_00613660
// address: 0x613660
// body: available
// range: 0x613660-0x6136cc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x61368e (push 0x6136cd followed by fs-segment stack chaining); handler 0x6136cd lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00613660(int *param_1,undefined4 param_2,int *param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  int *local_8;

  puStack_18 = (undefined1 *)0x613674;
  local_8 = param_3;
  (**(code **)(*param_3 + 0x44))();
  puStack_18 = (undefined1 *)0x613680;
  local_8 = (int *)FUN_00405a4c(&LAB_00433630,1);
  puStack_1c = &LAB_006136cd;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puStack_18 = &stack0xfffffffc;
  (**(code **)(*param_1 + 0x38))(param_1,param_2,local_8);
  FUN_0043f254(local_8);
  (**(code **)(*param_3 + 0x70))(param_3,local_8);
  puVar1 = puStack_1c;
  *in_FS_OFFSET = param_4;
  puStack_1c = &LAB_006136d4;
  uStack_20 = 0x6136cc;
  FUN_0041ef80(&local_8,param_4,puVar1);
  return;
}
