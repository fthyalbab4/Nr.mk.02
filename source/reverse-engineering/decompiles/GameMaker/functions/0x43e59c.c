// rea decompile_all
// name: FUN_0043e59c
// address: 0x43e59c
// body: available
// range: 0x43e59c-0x43e640 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x43e5c0 (push 0x43e641 followed by fs-segment stack chaining); handler 0x43e641 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0043e59c(int *param_1,undefined4 param_2,int param_3)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  int iVar4;
  undefined4 uVar5;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  undefined4 local_8;

  puStack_24 = &stack0xfffffffc;
  local_10 = 0;
  local_14 = 0;
  puStack_28 = &LAB_0043e641;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  local_c = param_3;
  local_8 = param_2;
  iVar2 = (**(code **)(*param_1 + 0x58))(param_1,param_2);
  if (local_c == 0) {
    if (-1 < iVar2) {
      (**(code **)(*param_1 + 0x48))(param_1,iVar2);
    }
  }
  else {
    if (iVar2 < 0) {
      iVar2 = (**(code **)(*param_1 + 0x38))(param_1,0);
    }
    uVar5 = local_8;
    uVar3 = FUN_0043e9a4(param_1);
    FUN_00408034(&local_14,uVar3);
    iVar4 = local_c;
    uVar3 = local_14;
    FUN_00408480(&local_10,3);
    (**(code **)(*param_1 + 0x20))(param_1,iVar2,local_10,iVar4,uVar3,uVar5);
  }
  puVar1 = puStack_24;
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_0043e648;
  puStack_28 = (undefined1 *)0x43e640;
  thunk_FUN_00406e80(&local_14,2,puVar1);
  return;
}
