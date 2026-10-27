// rea decompile_all
// name: FUN_00575c80
// address: 0x575c80
// body: available
// range: 0x575c80-0x575d12 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x575c96 (push 0x575d13 followed by fs-segment stack chaining); handler 0x575d13 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00575c80(int *param_1)

{
  undefined1 *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  int local_c;
  int local_8;

  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  puStack_1c = &LAB_00575d13;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  piVar2 = (int *)FUN_00576014(param_1);
  iVar3 = (**(code **)(*piVar2 + 0x14))();
  if ((param_1[0xa3] - param_1[0xa8] < iVar3) &&
     ((**(code **)(*param_1 + 0x120))(param_1,0,param_1[0xa3],&local_8), local_8 == 0)) {
    (**(code **)(*param_1 + 0x120))(param_1,1,param_1[0xa3],&local_c);
  }
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_00575d1a;
  puStack_1c = (undefined1 *)0x575d12;
  thunk_FUN_00406e80(&local_c,2,puVar1);
  return;
}
