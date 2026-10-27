// rea decompile_all
// name: FUN_0071ffe4
// address: 0x71ffe4
// body: available
// range: 0x71ffe4-0x7200ea inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x71fffb (push 0x7200eb followed by fs-segment stack chaining); handler 0x7200eb lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0071ffe4(int param_1)

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
  puStack_1c = &LAB_007200eb;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  *(undefined1 *)(param_1 + 0x45c) = 1;
  FUN_00722840(*(undefined4 *)(param_1 + 0x458),&local_8);
  FUN_004ee6d8(*(undefined4 *)(param_1 + 0x390),local_8);
  FUN_004ee6a0(*(undefined4 *)(param_1 + 0x390),&local_10);
  FUN_0040839c(&local_c,L"Path Properties: ",local_10);
  FUN_004ee6d8(param_1,local_c);
  FUN_0048f164(*(undefined4 *)(param_1 + 0x394),*(undefined4 *)(*(int *)(param_1 + 0x444) + 0xc));
  (**(code **)(**(int **)(param_1 + 0x3c0) + 0xf0))
            (*(int **)(param_1 + 0x3c0),*(undefined1 *)(*(int *)(param_1 + 0x444) + 0x10));
  FUN_00530760(*(undefined4 *)(param_1 + 0x41c),*(undefined4 *)(*(int *)(param_1 + 0x444) + 0x14));
  FUN_00530760(*(undefined4 *)(param_1 + 0x428),*(undefined4 *)(*(int *)(param_1 + 0x444) + 0x2c));
  FUN_00530760(*(undefined4 *)(param_1 + 0x430),*(undefined4 *)(*(int *)(param_1 + 0x444) + 0x30));
  *(undefined1 *)(param_1 + 0x45c) = 0;
  FUN_007201f0(param_1);
  FUN_00721ec4(param_1,param_1);
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_007200f2;
  puStack_1c = (undefined1 *)0x7200dd;
  thunk_FUN_00406e5c(&local_10,uStack_20,puVar1);
  puStack_1c = (undefined1 *)0x7200ea;
  thunk_FUN_00406e80(&local_c,2);
  return;
}
