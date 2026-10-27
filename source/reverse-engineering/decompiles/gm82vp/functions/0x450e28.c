// rea decompile_all
// name: FUN_00450e28
// address: 0x450e28
// body: available
// range: 0x450e28-0x450f25 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x450e4d (push 0x450f48 followed by fs-segment stack chaining); handler 0x450f48 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x450e63 (push 0x450f26 followed by fs-segment stack chaining); handler 0x450f26 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00450e28(int param_1,int *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined *puVar4;
  undefined4 uVar5;
  undefined4 uStack_48;
  undefined1 *puStack_44;
  undefined1 *puStack_40;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  int *local_14;
  int local_10;
  int *local_c;
  int local_8;

  puStack_34 = &stack0xfffffffc;
  local_24 = 0;
  local_1c = 0;
  local_20 = 0;
  puStack_38 = &LAB_00450f48;
  uStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_3c;
  puStack_40 = (undefined1 *)0x450e58;
  local_c = param_2;
  local_8 = param_1;
  FUN_0043aa0c(param_2);
  puStack_44 = &LAB_00450f26;
  uStack_48 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_48;
  puStack_40 = &stack0xfffffffc;
  iVar2 = (**(code **)(**(int **)(local_8 + 8) + 0x14))();
  if (-1 < iVar2 + -1) {
    local_10 = 0;
    local_18 = iVar2;
    do {
      (**(code **)(**(int **)(local_8 + 8) + 0xc))
                (*(int **)(local_8 + 8),local_10,&local_20,&DAT_00450f64);
      puVar4 = &DAT_00450f74;
      uVar5 = local_20;
      FUN_0040875c(&local_1c,3);
      (**(code **)(*local_c + 0x38))(local_c,local_1c,*local_c,puVar4,uVar5);
      local_14 = (int *)(**(code **)(**(int **)(local_8 + 8) + 0x18))
                                  (*(int **)(local_8 + 8),local_10);
      iVar2 = (**(code **)(*local_14 + 0x14))();
      if (-1 < iVar2 + -1) {
        iVar3 = 0;
        do {
          (**(code **)(*local_14 + 0xc))(local_14,iVar3,&local_24);
          (**(code **)(*local_c + 0x38))(local_c,local_24);
          iVar3 = iVar3 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      (**(code **)(*local_c + 0x38))(local_c,0);
      local_10 = local_10 + 1;
      local_18 = local_18 + -1;
    } while (local_18 != 0);
  }
  puVar1 = puStack_40;
  *in_FS_OFFSET = uStack_48;
  puStack_40 = &LAB_00450f2d;
  puStack_44 = (undefined1 *)0x450f25;
  FUN_0043aad4(local_c,uStack_48,puVar1);
  return;
}
