// rea decompile_all
// name: FUN_005f7a2c
// address: 0x5f7a2c
// body: available
// range: 0x5f7a2c-0x5f7b07 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5f7a4c (push 0x5f7b08 followed by fs-segment stack chaining); handler 0x5f7b08 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005f7a2c(int *param_1,undefined4 param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  char cVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  bool bVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined1 local_8;

  puStack_24 = &stack0xfffffffc;
  local_14 = 0;
  local_10 = 0;
  bVar5 = true;
  puStack_28 = &LAB_005f7b08;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  FUN_00408640(param_1[3],param_2);
  if (!bVar5) {
    cVar3 = (**(code **)(*param_1 + 0x24))(param_1,param_2);
    if (cVar3 == '\0') {
      local_8 = 0x11;
      puVar7 = &local_c;
      uVar6 = 0;
      local_c = param_2;
      FUN_0040b75c(PTR_PTR_00782400,&local_10);
      FUN_0041bef4(&PTR_LAB_005deea4,1,local_10,uVar6,puVar7);
      FUN_00406618();
    }
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      iVar4 = (**(code **)(*piVar1 + 0x2c))(piVar1,param_2,0);
      if (iVar4 != 0) {
        local_8 = 0x11;
        puVar7 = &local_c;
        uVar6 = 0;
        local_c = param_2;
        FUN_0040b75c(PTR_PTR_00782544,&local_14);
        FUN_0041bef4(&PTR_LAB_005deea4,1,local_14,uVar6,puVar7);
        FUN_00406618();
      }
    }
    (**(code **)(*param_1 + 0x30))();
    FUN_00407eb8(param_1 + 3,param_2);
  }
  puVar2 = puStack_24;
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_005f7b0f;
  puStack_28 = (undefined1 *)0x5f7b07;
  thunk_FUN_00406e80(&local_14,2,puVar2);
  return;
}
