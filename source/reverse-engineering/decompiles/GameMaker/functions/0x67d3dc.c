// rea decompile_all
// name: FUN_0067d3dc
// address: 0x67d3dc
// body: available
// range: 0x67d3dc-0x67d469 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x67d3fb (push 0x67d487 followed by fs-segment stack chaining); handler 0x67d487 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x67d436 (push 0x67d46a followed by fs-segment stack chaining); handler 0x67d46a lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0067d3dc(undefined4 param_1,int *param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;

  puStack_18 = (undefined1 *)0x67d3f0;
  thunk_FUN_00407660(param_1);
  puStack_1c = &LAB_0067d487;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puStack_28 = (undefined1 *)0xa;
  uStack_2c = 0x67d416;
  puStack_24 = (undefined1 *)param_1;
  puStack_18 = &stack0xfffffffc;
  uVar2 = FUN_0044057c(&PTR_LAB_00433d68,1,DAT_00785c40);
  puStack_24 = (undefined1 *)0x67d428;
  uVar3 = FUN_00466b0c(&PTR_LAB_004665d0,1,uVar2);
  puStack_28 = &LAB_0067d46a;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  puStack_24 = &stack0xfffffffc;
  FUN_00462dd0(param_2,1);
  (**(code **)(*param_2 + 0x5c))(param_2,uVar3);
  puVar1 = puStack_24;
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_0067d471;
  puStack_28 = (undefined1 *)0x67d461;
  FUN_00405a7c(uVar3,uStack_2c,puVar1);
  puStack_28 = (undefined1 *)0x67d469;
  FUN_00405a7c(uVar2);
  return;
}
