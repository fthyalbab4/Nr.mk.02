// rea decompile_all
// name: FUN_006129c0
// address: 0x6129c0
// body: available
// range: 0x6129c0-0x612a8a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6129de (push 0x612a8b followed by fs-segment stack chaining); handler 0x612a8b lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006129c0(int *param_1,undefined4 param_2,int param_3)

{
  undefined1 *puVar1;
  int iVar2;
  int *in_FS_OFFSET;
  int iVar3;
  int iVar4;
  int iStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;

  puStack_20 = &stack0xfffffffc;
  local_c = 0;
  local_10 = 0;
  puStack_24 = &LAB_00612a8b;
  iStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_28;
  local_8 = param_3;
  iVar2 = FUN_00612930(param_1,param_2);
  if (local_8 == 0) {
    if (-1 < iVar2) {
      if (*(char *)((int)param_1 + 0x4d) != '\0') {
        FUN_00612388(param_1,iVar2);
      }
      (**(code **)(*param_1 + 0x48))(param_1,iVar2);
    }
  }
  else {
    if (iVar2 < 0) {
      iVar2 = (**(code **)(*param_1 + 0x38))(param_1,0);
    }
    if (*(char *)((int)param_1 + 0x4d) == '\0') {
      iVar4 = param_1[0x12];
      iVar3 = local_8;
      FUN_00408480(&local_10,3);
      (**(code **)(*param_1 + 0x20))(param_1,iVar2,local_10,iVar3,iVar4,param_2);
    }
    else {
      FUN_00612388(param_1,iVar2);
      iStack_28 = local_8;
      FUN_00408480(&local_c,3);
      FUN_006124d0(param_1,local_c,iVar2);
    }
  }
  puVar1 = puStack_20;
  *in_FS_OFFSET = iStack_28;
  puStack_20 = &LAB_00612a92;
  puStack_24 = (undefined1 *)0x612a8a;
  thunk_FUN_00406e80(&local_10,2,puVar1);
  return;
}
