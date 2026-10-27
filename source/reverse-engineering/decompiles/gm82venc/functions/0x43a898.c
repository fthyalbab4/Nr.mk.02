// rea decompile_all
// name: FUN_0043a898
// address: 0x43a898
// body: available
// range: 0x43a898-0x43a921 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x43a8b7 (push 0x43a93f followed by fs-segment stack chaining); handler 0x43a93f lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x43a8cd (push 0x43a922 followed by fs-segment stack chaining); handler 0x43a922 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0043a898(int *param_1,int *param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_10;
  int *local_c;
  int *local_8;

  puStack_20 = &stack0xfffffffc;
  local_10 = 0;
  puStack_24 = &LAB_0043a93f;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  puStack_2c = (undefined1 *)0x43a8c2;
  local_c = param_2;
  local_8 = param_1;
  FUN_0043aa0c(param_1);
  puStack_30 = &LAB_0043a922;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  puStack_2c = &stack0xfffffffc;
  iVar3 = (**(code **)(*local_c + 0x14))();
  if (-1 < iVar3 + -1) {
    iVar5 = 0;
    do {
      (**(code **)(*local_c + 0xc))(local_c,iVar5,&local_10);
      uVar2 = local_10;
      uVar4 = (**(code **)(*local_c + 0x18))(local_c,iVar5);
      (**(code **)(*local_8 + 0x3c))(local_8,uVar2,uVar4);
      iVar5 = iVar5 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  puVar1 = puStack_2c;
  *in_FS_OFFSET = uStack_34;
  puStack_2c = &LAB_0043a929;
  puStack_30 = (undefined1 *)0x43a921;
  FUN_0043aad4(local_8,uStack_34,puVar1);
  return;
}
