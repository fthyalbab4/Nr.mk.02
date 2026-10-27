// rea decompile_all
// name: FUN_006ba624
// address: 0x6ba624
// body: available
// range: 0x6ba624-0x6ba704 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6ba656 (push 0x6ba705 followed by fs-segment stack chaining); handler 0x6ba705 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006ba624(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_c;
  undefined4 local_8;

  puStack_14 = (undefined1 *)0x6ba63b;
  local_c = param_3;
  local_8 = param_2;
  thunk_FUN_00407660(param_2);
  puStack_14 = (undefined1 *)0x6ba643;
  thunk_FUN_00407660(local_c);
  puStack_14 = (undefined1 *)0x6ba64b;
  thunk_FUN_00407660(param_5);
  puStack_18 = &LAB_006ba705;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  puStack_14 = &stack0xfffffffc;
  iVar2 = FUN_006ba050(param_1);
  FUN_00409be0(param_1 + 0x28c,&DAT_006b9290,1,iVar2 + 1);
  iVar2 = FUN_006ba050(param_1);
  FUN_00407eb8(*(int *)(param_1 + 0x28c) + -0x10 + iVar2 * 0x10,local_8);
  iVar2 = FUN_006ba050(param_1);
  FUN_00407eb8(*(int *)(param_1 + 0x28c) + -8 + iVar2 * 0x10,local_c);
  iVar2 = FUN_006ba050(param_1);
  FUN_00407eb8(*(int *)(param_1 + 0x28c) + -4 + iVar2 * 0x10,param_5);
  iVar2 = FUN_006ba050(param_1);
  puVar1 = puStack_14;
  *(undefined4 *)(*(int *)(param_1 + 0x28c) + -0xc + iVar2 * 0x10) = param_4;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_006ba70c;
  puStack_18 = (undefined1 *)0x6ba6fc;
  thunk_FUN_00406e80(&local_c,2,puVar1);
  puStack_18 = (undefined1 *)0x6ba704;
  thunk_FUN_00406e5c(&param_5);
  return;
}
