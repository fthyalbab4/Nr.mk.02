// rea decompile_all
// name: FUN_00543a68
// address: 0x543a68
// body: available
// range: 0x543a68-0x543b63 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x543a9d (push 0x543b86 followed by fs-segment stack chaining); handler 0x543b86 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x543ab3 (push 0x543b64 followed by fs-segment stack chaining); handler 0x543b64 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00543a68(int param_1,int param_2,int *param_3,char param_4)

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
  puStack_24 = (undefined1 *)0x543a8a;
  local_c = param_2;
  local_8 = param_1;
  thunk_FUN_00407ad0(param_1);
  puStack_24 = (undefined1 *)0x543a92;
  thunk_FUN_00407ad0(local_c);
  puStack_28 = &LAB_00543b86;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  puStack_30 = (undefined1 *)0x543aa8;
  puStack_24 = &stack0xfffffffc;
  FUN_0043aa0c(param_3);
  puStack_34 = &LAB_00543b64;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  puStack_30 = &stack0xfffffffc;
  (**(code **)(*param_3 + 0x44))();
  iVar2 = local_c;
  if ((local_c != 0) && (*(short *)(local_c + -10) != 2)) {
    iVar2 = FUN_00407488(&local_c,local_c);
  }
  iVar3 = 0;
  if (iVar2 != 0) {
    iVar3 = *(int *)(iVar2 + -4);
  }
  iVar2 = FUN_00408d44(local_c,local_8);
  while (0 < iVar2) {
    FUN_00543738(local_8,iVar2 + -1,&local_10);
    if (local_10 != 0 || param_4 != '\0') {
      (**(code **)(*param_3 + 0x38))(param_3,local_10);
    }
    FUN_00408a54(&local_8,1,iVar3 + iVar2 + -1);
    iVar2 = FUN_00408d44(local_c,local_8);
  }
  if (local_8 != 0) {
    (**(code **)(*param_3 + 0x38))(param_3,local_8);
  }
  puVar1 = puStack_30;
  *in_FS_OFFSET = uStack_38;
  puStack_30 = &LAB_00543b6b;
  puStack_34 = (undefined1 *)0x543b63;
  FUN_0043aad4(param_3,uStack_38,puVar1);
  return;
}
