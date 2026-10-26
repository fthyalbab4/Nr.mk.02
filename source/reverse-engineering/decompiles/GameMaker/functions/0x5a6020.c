// rea decompile_all
// name: FUN_005a6020
// address: 0x5a6020
// body: available
// range: 0x5a6020-0x5a60a1 inclusive
// range: 0x5a60b3-0x5a60cc inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5a6041 (push 0x5a60cd followed by fs-segment stack chaining); handler 0x5a60cd lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5a608a (push 0x5a60a2 followed by fs-segment stack chaining); handler 0x5a60a2 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005a6020(int param_1,undefined4 param_2)

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

  puStack_20 = (undefined1 *)0x5a6036;
  local_8 = param_2;
  thunk_FUN_00407660(param_2);
  puStack_24 = &LAB_005a60cd;
  local_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_28;
  local_9 = 0;
  puStack_2c = (undefined1 *)0x5a6054;
  puStack_20 = &stack0xfffffffc;
  local_10 = FUN_00405a4c(&LAB_0052e8fc,1);
  puStack_2c = (undefined1 *)0x5a605f;
  FUN_005a5e30(&local_10);
  puStack_2c = (undefined1 *)0x5a606d;
  FUN_005a5e50(&local_10,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8));
  puStack_2c = (undefined1 *)0x5a6077;
  FUN_005a5ed0(&local_10,param_1);
  puStack_2c = (undefined1 *)0x5a607f;
  FUN_005a5ff8(&local_10);
  puStack_30 = &LAB_005a60a2;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  puStack_2c = &stack0xfffffffc;
  FUN_0043fe70(local_10,local_8);
  puVar1 = puStack_20;
  *in_FS_OFFSET = uStack_34;
  local_9 = 1;
  *in_FS_OFFSET = local_28;
  puStack_20 = &LAB_005a60d4;
  puStack_24 = (undefined1 *)0x5a60cc;
  thunk_FUN_00406e5c(&local_8,local_28,puVar1);
  return;
}
