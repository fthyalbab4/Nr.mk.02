// rea decompile_all
// name: FUN_006ad5d0
// address: 0x6ad5d0
// body: available
// range: 0x6ad5d0-0x6ad654 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6ad5f0 (push 0x6ad655 followed by fs-segment stack chaining); handler 0x6ad655 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006ad5d0(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_8;

  puStack_14 = (undefined1 *)0x6ad5e5;
  local_8 = param_1;
  thunk_FUN_00407660(param_1);
  puStack_18 = &LAB_006ad655;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  puStack_14 = &stack0xfffffffc;
  iVar3 = FUN_006ad4ac(local_8,param_2,param_3);
  iVar1 = *(int *)(*(int *)(param_2 + 4) + iVar3 * 0xc);
  if ((iVar1 - 0x65U < 5) || (iVar1 - 0x72U < 3)) {
    FUN_006ad534(local_8,param_2,iVar3 + 1);
  }
  else {
    FUN_006ae3bc(local_8,*(undefined4 *)(*(int *)(param_2 + 4) + 8 + iVar3 * 0xc),
                 L"Assignment operator expected.");
  }
  puVar2 = puStack_14;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_006ad65c;
  puStack_18 = (undefined1 *)0x6ad654;
  thunk_FUN_00406e5c(&local_8,uStack_1c,puVar2);
  return;
}
