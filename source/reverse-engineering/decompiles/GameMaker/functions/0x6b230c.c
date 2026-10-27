// rea decompile_all
// name: FUN_006b230c
// address: 0x6b230c
// body: available
// range: 0x6b230c-0x6b24b2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6b2328 (push 0x6b24b3 followed by fs-segment stack chaining); handler 0x6b24b3 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006b230c(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 *puVar4;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  undefined4 local_2c;
  undefined1 local_28;
  undefined4 local_24;
  int local_20;
  undefined1 local_1c;
  undefined4 local_18;
  undefined1 local_14;
  int local_10;
  undefined1 local_c;
  undefined4 local_8;

  puStack_34 = &stack0xfffffffc;
  local_24 = 0;
  local_8 = 0;
  puStack_38 = &LAB_006b24b3;
  uStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_3c;
  puVar4 = &local_8;
  local_20 = *(int *)(param_1 + 0x2ec) + 1;
  local_1c = 0;
  local_18 = FUN_00409a18(*(undefined4 *)(param_1 + 0x2d8),0,param_3,puVar4);
  local_14 = 0;
  local_10 = *(int *)(param_1 + 0x2f0) + 1;
  local_c = 0;
  FUN_00417d4c(L"%4d/%d: %3d",&local_20,2,puVar4);
  uVar3 = local_8;
  uVar2 = FUN_004ab8a8(*(undefined4 *)(*(int *)(param_1 + 0x284) + 0x270),0);
  FUN_004ab804(uVar2,uVar3);
  if (*(char *)(param_1 + 0x32f) == '\0') {
    uVar3 = FUN_004ab8a8(*(undefined4 *)(*(int *)(param_1 + 0x284) + 0x270),1);
    FUN_004ab804(uVar3,&DAT_006b2504);
  }
  else {
    uVar3 = FUN_004ab8a8(*(undefined4 *)(*(int *)(param_1 + 0x284) + 0x270),1);
    FUN_004ab804(uVar3,&DAT_006b24f0);
  }
  if (*(char *)(param_1 + 0x304) == '\0') {
    uVar3 = FUN_004ab8a8(*(undefined4 *)(*(int *)(param_1 + 0x284) + 0x270),2);
    FUN_004ab804(uVar3,0);
  }
  else {
    uVar3 = FUN_004ab8a8(*(undefined4 *)(*(int *)(param_1 + 0x284) + 0x270),2);
    FUN_004ab804(uVar3,L"Modified");
  }
  puVar4 = &local_24;
  local_2c = FUN_0045b450(*(undefined4 *)(*(int *)(param_1 + 0x270) + 0x40));
  local_28 = 0;
  FUN_00417d4c(L"%d pt",&local_2c,0,puVar4);
  uVar3 = local_24;
  uVar2 = FUN_004ab8a8(*(undefined4 *)(*(int *)(param_1 + 0x284) + 0x270),3);
  FUN_004ab804(uVar2,uVar3);
  uVar3 = FUN_004ab8a8(*(undefined4 *)(*(int *)(param_1 + 0x284) + 0x270),4);
  FUN_004ab804(uVar3,L"functionhelp");
  (**(code **)(**(int **)(param_1 + 0x284) + 0x9c))();
  puVar1 = puStack_34;
  *in_FS_OFFSET = uStack_3c;
  puStack_34 = &LAB_006b24ba;
  puStack_38 = (undefined1 *)0x6b24aa;
  thunk_FUN_00406e5c(&local_24,uStack_3c,puVar1);
  puStack_38 = (undefined1 *)0x6b24b2;
  thunk_FUN_00406e5c(&local_8);
  return;
}
