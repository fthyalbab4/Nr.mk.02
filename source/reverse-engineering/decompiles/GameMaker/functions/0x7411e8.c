// rea decompile_all
// name: FUN_007411e8
// address: 0x7411e8
// body: available
// range: 0x7411e8-0x7412e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x74121d (push 0x741306 followed by fs-segment stack chaining); handler 0x741306 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x741233 (push 0x7412e4 followed by fs-segment stack chaining); handler 0x7412e4 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_007411e8(int param_1,int param_2,int *param_3,char param_4)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  int local_10;
  int local_c;
  int local_8;

  local_10 = 0;
  puStack_24 = (undefined1 *)0x74120a;
  local_c = param_2;
  local_8 = param_1;
  thunk_FUN_00407660(param_1);
  puStack_24 = (undefined1 *)0x741212;
  thunk_FUN_00407660(local_c);
  puStack_28 = &LAB_00741306;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  puStack_30 = (undefined1 *)0x741228;
  puStack_24 = &stack0xfffffffc;
  FUN_0043d354(param_3);
  puStack_34 = &LAB_007412e4;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  puStack_30 = &stack0xfffffffc;
  (**(code **)(*param_3 + 0x44))();
  iVar2 = local_c;
  if ((local_c != 0) && (*(short *)(local_c + -10) != 2)) {
    iVar2 = FUN_00407048(&local_c,local_c);
  }
  iVar3 = 0;
  if (iVar2 != 0) {
    iVar3 = *(int *)(iVar2 + -4);
  }
  iVar2 = FUN_00408a68(local_c,local_8);
  while (0 < iVar2) {
    FUN_00740eb8(local_8,iVar2 + -1,&local_10);
    if (local_10 != 0 || param_4 != '\0') {
      (**(code **)(*param_3 + 0x38))(param_3,local_10);
    }
    FUN_00408778(&local_8,1,iVar3 + iVar2 + -1);
    iVar2 = FUN_00408a68(local_c,local_8);
  }
  if (local_8 != 0) {
    (**(code **)(*param_3 + 0x38))(param_3,local_8);
  }
  puVar1 = puStack_30;
  *in_FS_OFFSET = uStack_38;
  puStack_30 = &LAB_007412eb;
  puStack_34 = (undefined1 *)0x7412e3;
  FUN_0043d41c(param_3,uStack_38,puVar1);
  return;
}
