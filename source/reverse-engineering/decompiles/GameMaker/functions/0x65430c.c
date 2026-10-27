// rea decompile_all
// name: FUN_0065430c
// address: 0x65430c
// body: available
// range: 0x65430c-0x6543b8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x65431f (push 0x6543b9 followed by fs-segment stack chaining); handler 0x6543b9 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0065430c(int param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  undefined4 local_8;

  puStack_10 = &stack0xfffffffc;
  local_8 = 0;
  puStack_14 = &LAB_006543b9;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  FUN_004ee5c0(*(int *)(param_1 + 0x3dc),*(byte *)(*(int *)(param_1 + 0x3dc) + 0x59) ^ 1);
  FUN_004c0238(*(undefined4 *)(param_1 + 0x3ac),*(undefined1 *)(*(int *)(param_1 + 0x3dc) + 0x59));
  if (*(char *)(*(int *)(param_1 + 0x3dc) + 0x59) == '\0') {
    uStack_1c = 0;
    FUN_006b8c88(*(undefined4 *)(param_1 + 0x434),0,0);
  }
  else {
    uStack_1c = (**(code **)(**(int **)(param_1 + 0x3fc) + 0xec))();
    uVar2 = (**(code **)(**(int **)(param_1 + 0x3f8) + 0xec))();
    FUN_004ee6a0(*(undefined4 *)(param_1 + 0x3e4),&local_8);
    FUN_006b8c88(*(undefined4 *)(param_1 + 0x434),local_8,uVar2);
  }
  puVar1 = puStack_14;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_006543c0;
  uStack_18 = 0x6543b8;
  thunk_FUN_00406e5c(&local_8,uStack_1c,puVar1);
  return;
}
