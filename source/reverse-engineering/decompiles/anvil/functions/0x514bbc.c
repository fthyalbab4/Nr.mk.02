// rea decompile_all
// name: FUN_00514bbc
// address: 0x514bbc
// body: available
// range: 0x514bbc-0x514c3d inclusive
// range: 0x514c4f-0x514c68 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x514bdd (push 0x514c69 followed by fs-segment stack chaining); handler 0x514c69 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x514c26 (push 0x514c3e followed by fs-segment stack chaining); handler 0x514c3e lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00514bbc(int param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 local_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_10;
  undefined1 local_9;
  undefined4 local_8;

  puStack_20 = (undefined1 *)0x514bd2;
  local_8 = param_2;
  thunk_FUN_00407ad0(param_2);
  puStack_24 = &LAB_00514c69;
  local_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_28;
  local_9 = 0;
  puStack_2c = (undefined1 *)0x514bf0;
  puStack_20 = &stack0xfffffffc;
  local_10 = FUN_00405fac(&PTR_LAB_0050b4b8,1);
  puStack_2c = (undefined1 *)0x514bfb;
  FUN_005149cc(&local_10);
  puStack_2c = (undefined1 *)0x514c09;
  FUN_005149ec(&local_10,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8));
  puStack_2c = (undefined1 *)0x514c13;
  FUN_00514a6c(&local_10,param_1);
  puStack_2c = (undefined1 *)0x514c1b;
  FUN_00514b94(&local_10);
  puStack_30 = &LAB_00514c3e;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  puStack_2c = &stack0xfffffffc;
  FUN_0043d470(local_10,local_8);
  puVar1 = puStack_20;
  *in_FS_OFFSET = uStack_34;
  local_9 = 1;
  *in_FS_OFFSET = local_28;
  puStack_20 = &LAB_00514c70;
  puStack_24 = (undefined1 *)0x514c68;
  thunk_FUN_004072d8(&local_8,local_28,puVar1);
  return;
}
