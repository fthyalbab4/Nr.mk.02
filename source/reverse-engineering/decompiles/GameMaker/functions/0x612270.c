// rea decompile_all
// name: FUN_00612270
// address: 0x612270
// body: available
// range: 0x612270-0x6122ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x612291 (push 0x612300 followed by fs-segment stack chaining); handler 0x612300 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00612270(int *param_1,int *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 *puVar3;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  int *local_8;

  puStack_24 = &stack0xfffffffc;
  local_10 = 0;
  local_14 = 0;
  puStack_28 = &LAB_00612300;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  local_8 = param_2;
  iVar2 = (**(code **)(*param_1 + 0x14))();
  if (SBORROW4(iVar2,1)) {
    FUN_00405944();
  }
  if (-1 < iVar2 + -1) {
    local_c = 0;
    do {
      puVar3 = &local_10;
      (**(code **)(*param_1 + 0xc))(param_1,local_c,&local_14,puVar3);
      FUN_005e25c0(local_14,param_1[0x12],&LAB_0061231c,puVar3);
      (**(code **)(*local_8 + 0x38))(local_8,local_10);
      local_c = local_c + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  puVar1 = puStack_24;
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_00612307;
  puStack_28 = (undefined1 *)0x6122ff;
  thunk_FUN_00406e80(&local_14,2,puVar1);
  return;
}
