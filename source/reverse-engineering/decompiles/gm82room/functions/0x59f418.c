// rea decompile_all
// name: FUN_0059f418
// address: 0x59f418
// body: available
// range: 0x59f418-0x59f4d8 inclusive
// range: 0x59f4e0-0x59f4ff inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x59f436 (push 0x59f500 followed by fs-segment stack chaining); handler 0x59f500 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x59f482 (push 0x59f4d9 followed by fs-segment stack chaining); handler 0x59f4d9 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0059f418(int *param_1,int *param_2)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_10;
  int local_c;
  int *local_8;

  puStack_20 = &stack0xfffffffc;
  local_10 = 0;
  puStack_24 = &LAB_0059f500;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  puStack_2c = (undefined1 *)0x59f446;
  local_8 = param_1;
  cVar2 = FUN_004061f8(param_2,&PTR_FUN_0042fa88);
  if (cVar2 != '\0') {
    puStack_2c = (undefined1 *)0x59f456;
    FUN_0043aa0c(local_8);
    puStack_2c = (undefined1 *)0x59f45d;
    iVar3 = (**(code **)(*param_2 + 0x14))();
    iVar3 = iVar3 + -1;
    puStack_2c = (undefined1 *)0x59f468;
    iVar4 = (**(code **)(*local_8 + 0x14))();
    if (iVar4 <= iVar3) {
      puStack_2c = (undefined1 *)0x59f474;
      iVar3 = (**(code **)(*local_8 + 0x14))();
      iVar3 = iVar3 + -1;
    }
    puStack_30 = &LAB_0059f4d9;
    uStack_34 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_34;
    puStack_2c = &stack0xfffffffc;
    if (-1 < iVar3) {
      local_c = iVar3 + 1;
      iVar3 = 0;
      puStack_2c = &stack0xfffffffc;
      do {
        (**(code **)(*param_2 + 0xc))(param_2,iVar3,&local_10);
        (**(code **)(*local_8 + 0x20))(local_8,iVar3,local_10);
        uVar5 = (**(code **)(*param_2 + 0x18))(param_2,iVar3);
        (**(code **)(*local_8 + 0x24))(local_8,iVar3,uVar5);
        iVar3 = iVar3 + 1;
        local_c = local_c + -1;
      } while (local_c != 0);
    }
    puVar1 = puStack_2c;
    *in_FS_OFFSET = uStack_34;
    puStack_2c = (undefined1 *)0x59f4ea;
    puStack_30 = (undefined1 *)0x59f4d8;
    FUN_0043aad4(local_8,uStack_34,puVar1);
    return;
  }
  puStack_2c = (undefined1 *)0x59f4ea;
  FUN_0043a950(local_8,param_2);
  puVar1 = puStack_20;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_0059f507;
  puStack_24 = (undefined1 *)0x59f4ff;
  thunk_FUN_004072d8(&local_10,uStack_28,puVar1);
  return;
}
