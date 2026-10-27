// rea decompile_all
// name: FUN_006d1af4
// address: 0x6d1af4
// body: available
// range: 0x6d1af4-0x6d1bb8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6d1b18 (push 0x6d1bb9 followed by fs-segment stack chaining); handler 0x6d1bb9 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006d1af4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int *piVar1;
  undefined1 *puVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_8;

  puStack_18 = (undefined1 *)0x6d1b0d;
  local_8 = param_2;
  thunk_FUN_00407660(param_2);
  puStack_1c = &LAB_006d1bb9;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puStack_18 = &stack0xfffffffc;
  if (*(int *)(param_1 + 0x3bc) < 16000) {
    *(int *)(param_1 + 0x3bc) = *(int *)(param_1 + 0x3bc) + 1;
    puStack_18 = &stack0xfffffffc;
    FUN_00407eb8(param_1 + 0x3bc + *(int *)(param_1 + 0x3bc) * 4,local_8);
    *(undefined4 *)(param_1 + 0xfdc0 + *(int *)(param_1 + 0x3bc) * 4) = param_4;
    *(undefined4 *)(param_1 + 0x1f7c4 + *(int *)(param_1 + 0x3bc) * 4) = param_3;
    *(undefined4 *)(param_1 + 0x2f1c8 + *(int *)(param_1 + 0x3bc) * 4) = param_6;
    *(undefined4 *)(param_1 + 0x3ebcc + *(int *)(param_1 + 0x3bc) * 4) = param_5;
    FUN_004b418c(*(undefined4 *)(*(int *)(param_1 + 0x3ac) + 0x2ac),param_4);
    piVar1 = *(int **)(*(int *)(param_1 + 0x3ac) + 0x2c0);
    (**(code **)(*piVar1 + 0x38))(piVar1,local_8);
  }
  puVar2 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_006d1bc0;
  puStack_1c = (undefined1 *)0x6d1bb8;
  thunk_FUN_00406e5c(&local_8,uStack_20,puVar2);
  return;
}
