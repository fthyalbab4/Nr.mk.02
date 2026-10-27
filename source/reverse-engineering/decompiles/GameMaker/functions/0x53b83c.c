// rea decompile_all
// name: FUN_0053b83c
// address: 0x53b83c
// body: available
// range: 0x53b83c-0x53b8f1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x53b85f (push 0x53b8f2 followed by fs-segment stack chaining); handler 0x53b8f2 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0053b83c(int *param_1,int *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_124;
  undefined1 *puStack_120;
  undefined1 *puStack_11c;
  undefined4 local_10c;
  undefined1 local_105 [256];
  byte local_5;

  puStack_11c = &stack0xfffffffc;
  local_10c = 0;
  puStack_120 = &LAB_0053b8f2;
  uStack_124 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_124;
  (**(code **)(*param_2 + 0x44))();
  iVar2 = (**(code **)(*param_1 + 0xc))(param_1,&local_5,1);
  puVar1 = puStack_11c;
  while ((iVar2 == 1 && (local_5 != 0))) {
    puStack_11c = puVar1;
    FUN_0053b6b8(param_1,local_105,local_5);
    local_105[local_5] = 0;
    FUN_004080b0(&local_10c,local_105,0x100);
    (**(code **)(*param_2 + 0x38))(param_2,local_10c);
    iVar2 = (**(code **)(*param_1 + 0xc))(param_1,&local_5,1);
    puVar1 = puStack_11c;
  }
  *in_FS_OFFSET = uStack_124;
  puStack_11c = &LAB_0053b8f9;
  puStack_120 = (undefined1 *)0x53b8f1;
  thunk_FUN_00406e5c(&local_10c,uStack_124,puVar1);
  return;
}
