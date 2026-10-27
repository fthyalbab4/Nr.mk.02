// rea decompile_all
// name: FUN_00442634
// address: 0x442634
// body: available
// range: 0x442634-0x442826 inclusive
// range: 0x442844-0x44284d inclusive
// range: 0x442886-0x44289b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x442653 (push 0x44289c followed by fs-segment stack chaining); handler 0x44289c lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x442661 (push 0x44284e followed by fs-segment stack chaining); handler 0x44284e lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x44267a (push 0x442827 followed by fs-segment stack chaining); handler 0x442827 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00442634(int param_1,int *param_2)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  int *in_FS_OFFSET;
  int iStack_4c;
  undefined1 *puStack_48;
  undefined1 *puStack_44;
  int iStack_40;
  undefined1 *puStack_3c;
  undefined1 *puStack_38;
  int iStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  int *local_1c;
  int *local_18;
  int local_c;
  int *local_8;

  puStack_2c = &stack0xfffffffc;
  puStack_38 = &stack0xfffffffc;
  local_c = 0;
  puStack_30 = &LAB_0044289c;
  iStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_34;
  puStack_3c = &LAB_0044284e;
  iStack_40 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_40;
  puStack_44 = (undefined1 *)0x44266f;
  local_8 = param_2;
  FUN_00443320(param_1,&local_c);
  puStack_48 = &LAB_00442827;
  iStack_4c = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_4c;
  iVar7 = 1;
  iVar3 = local_c;
  puStack_44 = &stack0xfffffffc;
  if ((local_c != 0) && (puStack_44 = &stack0xfffffffc, *(short *)(local_c + -10) != 2)) {
    puStack_44 = &stack0xfffffffc;
    iVar3 = FUN_00407048(&local_c,local_c);
  }
  iVar4 = 0;
  if (iVar3 != 0) {
    iVar4 = *(int *)(iVar3 + -4);
  }
  local_18 = local_8;
  *(undefined1 *)(param_1 + 0x88) = 1;
  iVar3 = iVar7;
  while( true ) {
    for (; (iVar7 <= iVar4 &&
           (iVar5 = FUN_00407058(&local_c), *(short *)(iVar5 + -2 + iVar7 * 2) != 0x2e));
        iVar7 = iVar7 + 1) {
    }
    iStack_4c = param_1 + 0x80;
    FUN_004086a8(local_c,iVar3,iVar7 - iVar3);
    if (iVar4 < iVar7) break;
    puVar6 = (undefined4 *)
             FUN_0042d1b0(*(undefined4 *)(*local_18 + -0x48),*(undefined4 *)(param_1 + 0x80));
    if (puVar6 == (undefined4 *)0x0) {
      FUN_00407eb8(param_1 + 0x80,local_c);
      *(undefined1 *)(param_1 + 0x88) = 0;
      (**(code **)(*local_18 + 4))(local_18,param_1);
      *(undefined1 *)(param_1 + 0x88) = 1;
      if (*(int *)(param_1 + 0x80) != 0) {
        FUN_0044176c(param_1,*(undefined4 *)(param_1 + 0x80));
      }
      *in_FS_OFFSET = iStack_4c;
      *in_FS_OFFSET = iStack_40;
LAB_00442886:
      puVar1 = puStack_2c;
      *in_FS_OFFSET = iStack_34;
      puStack_2c = &LAB_004428a3;
      puStack_30 = (undefined1 *)0x44289b;
      thunk_FUN_00406e5c(&local_c,iStack_34,puVar1);
      return;
    }
    local_1c = (int *)0x0;
    if (**(char **)*puVar6 == '\a') {
      local_1c = (int *)FUN_0042d288(local_18,puVar6);
    }
    cVar2 = FUN_00405c98(local_1c,&PTR_FUN_00430768);
    if (cVar2 == '\0') {
      FUN_00442618();
    }
    local_18 = local_1c;
    iVar7 = iVar7 + 1;
    iVar3 = iVar7;
  }
  iVar3 = FUN_0042d1b0(*(undefined4 *)(*local_18 + -0x48),*(undefined4 *)(param_1 + 0x80));
  if (iVar3 == 0) {
    *(undefined1 *)(param_1 + 0x88) = 0;
    (**(code **)(*local_18 + 4))(local_18,param_1);
    *(undefined1 *)(param_1 + 0x88) = 1;
    if (*(int *)(param_1 + 0x80) != 0) {
      FUN_0044176c(param_1,*(undefined4 *)(param_1 + 0x80));
    }
  }
  else {
    FUN_00442a50(param_1,local_18,iVar3);
  }
  *in_FS_OFFSET = iStack_4c;
  *in_FS_OFFSET = iStack_40;
  goto LAB_00442886;
}
