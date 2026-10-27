// rea decompile_all
// name: FUN_0061a994
// address: 0x61a994
// body: available
// range: 0x61a994-0x61a9ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x61a9b0 (push 0x61aa1d followed by fs-segment stack chaining); handler 0x61aa1d lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x61a9cd (push 0x61aa00 followed by fs-segment stack chaining); handler 0x61aa00 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0061a994(undefined4 param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  int *in_FS_OFFSET;
  int iStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  int iStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_c;
  undefined4 local_8;

  puStack_18 = &stack0xfffffffc;
  local_c = 0;
  puStack_1c = &LAB_0061aa1d;
  iStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_20;
  puStack_24 = (undefined1 *)0x61a9bf;
  local_8 = FUN_00619678(&PTR_FUN_006195f0,1);
  puStack_28 = &LAB_0061aa00;
  iStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_2c;
  puStack_24 = &stack0xfffffffc;
  FUN_00619064(local_8,param_1,0);
  FUN_00415758(local_c,param_2);
  puVar1 = puStack_28;
  *in_FS_OFFSET = (int)&local_c;
  puStack_28 = &LAB_0061aa07;
  iStack_2c = 0x61a9ff;
  FUN_00405a7c(local_8,&local_c,puVar1);
  return;
}
