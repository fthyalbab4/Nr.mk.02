// rea decompile_all
// name: FUN_006135e0
// address: 0x6135e0
// body: available
// range: 0x6135e0-0x613650 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x613607 (push 0x613651 followed by fs-segment stack chaining); handler 0x613651 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006135e0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_8;

  puStack_18 = (undefined1 *)0x6135f9;
  local_8 = param_3;
  local_8 = FUN_00405a4c(&LAB_00433630,1);
  puStack_1c = &LAB_00613651;
  puStack_20 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_20;
  puStack_18 = &stack0xfffffffc;
  (**(code **)(*param_1 + 0x38))(param_1,param_2,local_8,param_3);
  FUN_0043f254(local_8);
  uVar2 = FUN_005e02c8(1);
  FUN_005e33ac(local_8,0xffffffff,uVar2);
  puVar1 = puStack_20;
  *in_FS_OFFSET = param_4;
  puStack_20 = &LAB_00613658;
  FUN_0041ef80(&local_8,param_4,puVar1);
  return;
}
