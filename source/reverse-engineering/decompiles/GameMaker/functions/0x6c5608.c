// rea decompile_all
// name: FUN_006c5608
// address: 0x6c5608
// body: available
// range: 0x6c5608-0x6c5768 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6c5621 (push 0x6c5769 followed by fs-segment stack chaining); handler 0x6c5769 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006c5608(int param_1)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  puStack_24 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  local_18 = 0;
  puStack_28 = &LAB_006c5769;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  FUN_0062cabc(*(undefined4 *)(param_1 + 0x46c),&local_8);
  FUN_004ee6d8(*(undefined4 *)(param_1 + 0x3cc),local_8);
  FUN_004ee6a0(*(undefined4 *)(param_1 + 0x3cc),&local_10);
  FUN_0040839c(&local_c,L"Object Properties: ",local_10);
  FUN_004ee6d8(param_1,local_c);
  FUN_006c5800(param_1);
  (**(code **)(**(int **)(param_1 + 0x3fc) + 0xf0))
            (*(int **)(param_1 + 0x3fc),*(undefined1 *)(*(int *)(param_1 + 0x45c) + 8));
  (**(code **)(**(int **)(param_1 + 0x400) + 0xf0))
            (*(int **)(param_1 + 0x400),*(undefined1 *)(*(int *)(param_1 + 0x45c) + 9));
  FUN_00530760(*(undefined4 *)(param_1 + 0x41c),*(undefined4 *)(*(int *)(param_1 + 0x45c) + 0xc));
  (**(code **)(**(int **)(param_1 + 0x424) + 0xf0))
            (*(int **)(param_1 + 0x424),*(undefined1 *)(*(int *)(param_1 + 0x45c) + 0x10));
  iVar1 = *(int *)(*(int *)(param_1 + 0x45c) + 0x14);
  if (iVar1 < 0) {
    FUN_004ee6d8(*(undefined4 *)(param_1 + 0x420),L"<no parent>");
  }
  else {
    FUN_0062cabc(iVar1,&local_14);
    FUN_004ee6d8(*(undefined4 *)(param_1 + 0x420),local_14);
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0x45c) + 0x18);
  if (iVar1 < 0) {
    FUN_004ee6d8(*(undefined4 *)(param_1 + 0x428),L"<same as sprite>");
  }
  else {
    FUN_006f5920(iVar1,&local_18);
    FUN_004ee6d8(*(undefined4 *)(param_1 + 0x428),local_18);
  }
  puVar2 = puStack_24;
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_006c5770;
  puStack_28 = (undefined1 *)0x6c5753;
  thunk_FUN_00406e80(&local_18,2,puVar2);
  puStack_28 = (undefined1 *)0x6c575b;
  thunk_FUN_00406e5c(&local_10);
  puStack_28 = (undefined1 *)0x6c5768;
  thunk_FUN_00406e80(&local_c,2);
  return;
}
