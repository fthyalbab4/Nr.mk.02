// rea decompile_all
// name: FUN_00689a88
// address: 0x689a88
// body: available
// range: 0x689a88-0x689b70 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x689a9f (push 0x689b71 followed by fs-segment stack chaining); handler 0x689b71 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00689a88(int param_1)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  puStack_1c = &LAB_00689b71;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  FUN_00692f24(*(undefined4 *)(param_1 + 0x630),&local_8);
  FUN_004ee6d8(*(undefined4 *)(param_1 + 0x3e0),local_8);
  FUN_004ee6a0(*(undefined4 *)(param_1 + 0x3e0),&local_10);
  FUN_0040839c(&local_c,L"Room Properties: ",local_10);
  FUN_004ee6d8(param_1,local_c);
  FUN_004ee6d8(*(undefined4 *)(param_1 + 0x398),*(undefined4 *)(*(int *)(param_1 + 0x61c) + 4));
  FUN_00530760(*(undefined4 *)(param_1 + 0x3a8),*(undefined4 *)(*(int *)(param_1 + 0x61c) + 0xc));
  FUN_00530760(*(undefined4 *)(param_1 + 0x3ac),*(undefined4 *)(*(int *)(param_1 + 0x61c) + 0x10));
  FUN_00530760(*(undefined4 *)(param_1 + 0x3b0),*(undefined4 *)(*(int *)(param_1 + 0x61c) + 8));
  (**(code **)(**(int **)(param_1 + 0x3e4) + 0xf0))
            (*(int **)(param_1 + 0x3e4),*(undefined1 *)(*(int *)(param_1 + 0x61c) + 0x1d));
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_00689b78;
  puStack_1c = (undefined1 *)0x689b63;
  thunk_FUN_00406e5c(&local_10,uStack_20,puVar1);
  puStack_1c = (undefined1 *)0x689b70;
  thunk_FUN_00406e80(&local_c,2);
  return;
}
