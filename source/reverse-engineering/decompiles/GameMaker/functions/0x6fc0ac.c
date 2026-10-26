// rea decompile_all
// name: FUN_006fc0ac
// address: 0x6fc0ac
// body: available
// range: 0x6fc0ac-0x6fc162 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6fc0bf (push 0x6fc163 followed by fs-segment stack chaining); handler 0x6fc163 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006fc0ac(int param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  undefined4 local_8;

  puStack_10 = &stack0xfffffffc;
  local_8 = 0;
  puStack_14 = &LAB_006fc163;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  (**(code **)(**(int **)(param_1 + 0x3d0) + 0xec))();
  uVar2 = FUN_006fb9a8();
  *(undefined4 *)(*(int *)(param_1 + 1000) + 0x18) = uVar2;
  FUN_006fc3e0(param_1,0);
  FUN_006fce00(*(undefined4 *)(param_1 + 0x3f8));
  *(undefined1 *)(param_1 + 0x3f4) = 1;
  uVar2 = FUN_005a86b4(*(undefined4 *)(param_1 + 1000));
  FUN_004ee79c(*(undefined4 *)(param_1 + 0x3d8),uVar2);
  FUN_0045b520(*(undefined4 *)(*(int *)(param_1 + 0x3d4) + 100),
               *(undefined1 *)(*(int *)(param_1 + 1000) + 0x18));
  uVar2 = (**(code **)(**(int **)(param_1 + 0x3d0) + 0xec))();
  FUN_006fb59c(uVar2,&local_8);
  FUN_004ee6d8(*(undefined4 *)(param_1 + 0x3dc),local_8);
  puVar1 = puStack_10;
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_006fc16a;
  puStack_14 = (undefined1 *)0x6fc162;
  thunk_FUN_00406e5c(&local_8,uStack_18,puVar1);
  return;
}
