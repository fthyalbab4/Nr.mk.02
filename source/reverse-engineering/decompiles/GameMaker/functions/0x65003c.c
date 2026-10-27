// rea decompile_all
// name: FUN_0065003c
// address: 0x65003c
// body: available
// range: 0x65003c-0x650128 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x650051 (push 0x650129 followed by fs-segment stack chaining); handler 0x650129 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0065003c(int param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_8;

  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  puStack_1c = &LAB_00650129;
  puStack_20 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_20;
  puVar1 = &stack0xfffffffc;
  if (*(int *)(param_1 + 0x2c) != 0) {
    puVar1 = &stack0xfffffffc;
    if (-1 < *(int *)(param_1 + 0x30)) {
      FUN_00650138(param_1);
      puVar1 = puStack_18;
    }
    puStack_18 = puVar1;
    FUN_0064ea0c();
    *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
    FUN_0064e7e0(*(undefined4 *)PTR_DAT_00781a58);
    uStack_28 = 0;
    FUN_0064ee50();
    if (*(int *)(param_1 + 4) == 3) {
      FUN_005342d4(*(undefined4 *)(param_1 + 8),&local_8);
      FUN_00407eb8(param_1 + 0x34,local_8);
      FUN_0043fe70(*(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x34));
      uVar2 = FUN_0064eaa0(*(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 4));
      *(undefined4 *)(param_1 + 0x30) = uVar2;
    }
    else {
      uVar2 = FUN_0064ebf4(*(undefined4 *)(param_1 + 0x2c),*(int *)(param_1 + 4));
      *(undefined4 *)(param_1 + 0x30) = uVar2;
      FUN_0064f310(uVar2,*(undefined4 *)(param_1 + 0xc));
      FUN_0064f1e8(*(undefined4 *)(param_1 + 0x30),0);
      uStack_28 = *(undefined4 *)(param_1 + 0x20);
      FUN_0064f248(*(undefined4 *)(param_1 + 0x30));
      FUN_00407eb8(param_1 + 0x34,0);
    }
    FUN_0064eebc(*(undefined4 *)(param_1 + 0x30),1);
    puVar1 = puStack_18;
  }
  puStack_18 = puVar1;
  puVar1 = puStack_20;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_00650130;
  thunk_FUN_00406e5c(&local_8,uStack_28,puVar1);
  return;
}
