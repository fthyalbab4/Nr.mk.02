// rea decompile_all
// name: FUN_0072c6fc
// address: 0x72c6fc
// body: available
// range: 0x72c6fc-0x72c746 inclusive
// range: 0x72c776-0x72c7a4 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x72c718 (push 0x72c7c2 followed by fs-segment stack chaining); handler 0x72c7c2 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x72c726 (push 0x72c747 followed by fs-segment stack chaining); handler 0x72c747 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x72c781 (push 0x72c7a5 followed by fs-segment stack chaining); handler 0x72c7a5 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0072c6fc(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;

  puStack_20 = &stack0xfffffffc;
  puStack_2c = &stack0xfffffffc;
  puStack_24 = &LAB_0072c7c2;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  puStack_30 = &LAB_0072c747;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  uVar2 = FUN_0044057c(&PTR_LAB_00433d68,1,param_2,10,param_3);
  *in_FS_OFFSET = uStack_34;
  puStack_30 = &LAB_0072c7a5;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  puStack_2c = &stack0xfffffffc;
  (**(code **)(*param_1 + 0x5c))(param_1,uVar2);
  puVar1 = puStack_2c;
  *in_FS_OFFSET = uStack_34;
  puStack_2c = &LAB_0072c7ac;
  puStack_30 = (undefined1 *)0x72c7a4;
  FUN_00405a7c(uVar2,uStack_34,puVar1);
  return;
}
