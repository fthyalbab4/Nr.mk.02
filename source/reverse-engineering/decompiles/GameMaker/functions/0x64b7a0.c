// rea decompile_all
// name: FUN_0064b7a0
// address: 0x64b7a0
// body: available
// range: 0x64b7a0-0x64b890 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x64b7c7 (push 0x64b891 followed by fs-segment stack chaining); handler 0x64b891 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0064b7a0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,int *param_5,
                 int *param_6)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 local_14;
  int local_10;
  undefined4 local_c;
  int local_8;

  local_14 = 0;
  local_c = 0;
  puStack_24 = (undefined1 *)0x64b7bc;
  local_8 = param_2;
  thunk_FUN_00407660(param_2);
  puStack_28 = &LAB_0064b891;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  *param_6 = 0;
  *param_5 = 0;
  iVar3 = 1;
  puStack_24 = &stack0xfffffffc;
  while( true ) {
    FUN_00407058(&local_8);
    iVar2 = FUN_00408238();
    puVar1 = puStack_24;
    if (iVar2 < iVar3) break;
    FUN_00407f0c(&local_c,0);
    while( true ) {
      FUN_00407058(&local_8);
      iVar2 = FUN_00408238();
      if ((iVar2 < iVar3) ||
         (iVar2 = FUN_00407058(&local_8), *(short *)(iVar2 + -2 + iVar3 * 2) == 0x23)) break;
      FUN_00408034(&local_14,*(undefined2 *)(local_8 + -2 + iVar3 * 2));
      FUN_004082dc(&local_c,local_14);
      iVar3 = iVar3 + 1;
    }
    iVar3 = iVar3 + 1;
    iVar2 = *param_6;
    local_10 = FUN_00630e74(local_c);
    if (local_10 < iVar2) {
      local_10 = iVar2;
    }
    *param_6 = local_10;
    iVar2 = FUN_00630ee4(local_c);
    *param_5 = *param_5 + iVar2;
  }
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_0064b898;
  puStack_28 = (undefined1 *)0x64b883;
  thunk_FUN_00406e5c(&local_14,uStack_2c,puVar1);
  puStack_28 = (undefined1 *)0x64b890;
  thunk_FUN_00406e80(&local_c,2);
  return;
}
