// rea decompile_all
// name: FUN_006b1cf0
// address: 0x6b1cf0
// body: available
// range: 0x6b1cf0-0x6b1e41 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6b1d0e (push 0x6b1e42 followed by fs-segment stack chaining); handler 0x6b1e42 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006b1cf0(int param_1)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 *puVar6;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  int local_8;

  puStack_24 = &stack0xfffffffc;
  local_10 = 0;
  local_14 = 0;
  puStack_28 = &LAB_006b1e42;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  iVar4 = *(int *)(param_1 + 0x2fc);
  local_c = *(int *)(param_1 + 0x2ec);
  local_8 = iVar4;
  if (local_c < iVar4) {
    local_8 = local_c;
    local_c = iVar4;
  }
  iVar4 = *(int *)(param_1 + 0x2f0);
  if (*(int *)(param_1 + 0x2f0) < *(int *)(param_1 + 0x300)) {
    iVar4 = *(int *)(param_1 + 0x300);
  }
  if (iVar4 == 0) {
    local_c = local_c + -1;
  }
  FUN_006b1018(param_1,4,local_8,local_c,local_8,local_c);
  if (local_8 <= local_c) {
    iVar5 = (local_c - local_8) + 1;
    iVar4 = local_8;
    do {
      FUN_00407e58(0x20,*(undefined4 *)PTR_DAT_007817a0,&local_10);
      puVar6 = &local_10;
      FUN_006b7d0c(param_1,iVar4,&local_14);
      FUN_004082dc(puVar6,local_14);
      FUN_006b7a68(param_1,iVar4,local_10);
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  if (*(int *)(param_1 + 0x300) != 0) {
    *(int *)(param_1 + 0x300) = *(int *)(param_1 + 0x300) + *(int *)PTR_DAT_007817a0;
  }
  if (*(int *)(param_1 + 0x2f0) != 0) {
    *(int *)(param_1 + 0x2f0) = *(int *)(param_1 + 0x2f0) + *(int *)PTR_DAT_007817a0;
  }
  uVar1 = *(undefined4 *)(param_1 + 0x2d8);
  iVar4 = local_c;
  uVar3 = FUN_00409a20(uVar1);
  FUN_006ab16c(uVar1,uVar3,local_8,iVar4);
  FUN_006b311c(param_1,local_8,local_c);
  if (*(short *)(param_1 + 0x2d2) != 0) {
    (**(code **)(param_1 + 0x2d0))(*(undefined4 *)(param_1 + 0x2d4),param_1);
  }
  FUN_006b281c(param_1);
  FUN_004eed28(param_1);
  puVar2 = puStack_24;
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_006b1e49;
  puStack_28 = (undefined1 *)0x6b1e41;
  thunk_FUN_00406e80(&local_14,2,puVar2);
  return;
}
