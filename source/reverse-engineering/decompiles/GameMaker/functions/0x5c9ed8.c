// rea decompile_all
// name: FUN_005c9ed8
// address: 0x5c9ed8
// body: available
// range: 0x5c9ed8-0x5c9f64 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5c9ef0 (push 0x5c9f65 followed by fs-segment stack chaining); handler 0x5c9f65 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005c9ed8(int *param_1,int param_2)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_c;
  int local_8;

  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  puStack_1c = &LAB_005c9f65;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  (**(code **)(*param_1 + 0x38))(param_1,0);
  if (param_2 != 0) {
    FUN_005cb104(param_1,param_2);
  }
  FUN_005cb0f0(param_1,&local_8);
  if (local_8 == 0) {
    FUN_0040b75c(PTR_PTR_007818d4,&local_c);
    FUN_005c4098(local_c);
  }
  FUN_00407eb8(param_1 + 0xd,0);
  FUN_005ca074(param_1,0);
  (**(code **)(*param_1 + 0x38))(param_1,1);
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_005c9f6c;
  puStack_1c = (undefined1 *)0x5c9f64;
  thunk_FUN_00406e80(&local_c,2,puVar1);
  return;
}
