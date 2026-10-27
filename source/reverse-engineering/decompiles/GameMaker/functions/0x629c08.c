// rea decompile_all
// name: FUN_00629c08
// address: 0x629c08
// body: available
// range: 0x629c08-0x629c93 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x629c25 (push 0x629c94 followed by fs-segment stack chaining); handler 0x629c94 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00629c08(undefined4 param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int *in_FS_OFFSET;
  undefined4 uVar4;
  undefined4 *puStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  uint local_18;
  undefined1 local_14;
  undefined4 local_10;
  int local_c;
  int local_8;

  puStack_28 = &stack0xfffffffc;
  local_10 = 0;
  puStack_2c = &LAB_00629c94;
  puStack_30 = (undefined4 *)*in_FS_OFFSET;
  *in_FS_OFFSET = (int)&puStack_30;
  FUN_00407eb8(param_2,0);
  uVar4 = 0x629c3b;
  FUN_00629ba8(param_1,&local_c);
  if (SBORROW4(local_c,1)) {
    uVar4 = 0x629c48;
    FUN_00405944();
  }
  if (-1 < local_c + -1) {
    iVar3 = 0;
    iVar2 = local_c;
    do {
      puStack_30 = &local_10;
      local_18 = (uint)*(byte *)(local_8 + iVar3);
      local_14 = 0;
      FUN_005e1dd0(L"%.2x",&local_18,0,uVar4);
      FUN_004082dc(param_2,local_10);
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  puVar1 = puStack_28;
  *in_FS_OFFSET = (int)puStack_30;
  puStack_28 = &LAB_00629c9b;
  puStack_2c = (undefined1 *)0x629c93;
  thunk_FUN_00406e5c(&local_10,puStack_30,puVar1);
  return;
}
