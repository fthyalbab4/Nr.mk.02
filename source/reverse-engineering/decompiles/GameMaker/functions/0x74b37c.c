// rea decompile_all
// name: FUN_0074b37c
// address: 0x74b37c
// body: available
// range: 0x74b37c-0x74b43c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x74b397 (push 0x74b43d followed by fs-segment stack chaining); handler 0x74b43d lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0074b37c(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  bool bVar5;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 local_14;
  int local_10;
  undefined4 local_c;
  int local_8;

  puStack_24 = &stack0xfffffffc;
  local_14 = 0;
  puStack_28 = &LAB_0074b43d;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  (**(code **)(**(int **)(param_1 + 0x18) + 8))();
  if (-1 < *(int *)(param_1 + 8) + -1) {
    local_8 = 0;
    local_10 = *(int *)(param_1 + 8);
    do {
      local_c = FUN_0074b19c(param_1,local_8);
      iVar2 = 0;
      if (*(int *)(param_1 + 0x1c) != 0) {
        iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + -4);
      }
      if (iVar2 == 0) {
        bVar5 = true;
      }
      else {
        FUN_0074a9dc(local_c,&local_14);
        iVar2 = FUN_00415c5c(local_14,*(undefined4 *)(param_1 + 0x1c));
        bVar5 = iVar2 == 0;
      }
      if (bVar5) {
        iVar2 = FUN_0074a95c(local_c);
        if (-1 < iVar2 + -1) {
          iVar4 = 0;
          do {
            uVar3 = FUN_0074a9c8(local_c,iVar4);
            FUN_0043ae88(*(undefined4 *)(param_1 + 0x18),uVar3);
            iVar4 = iVar4 + 1;
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
        }
      }
      local_8 = local_8 + 1;
      local_10 = local_10 + -1;
    } while (local_10 != 0);
  }
  puVar1 = puStack_24;
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_0074b444;
  puStack_28 = (undefined1 *)0x74b43c;
  thunk_FUN_00406e5c(&local_14,uStack_2c,puVar1);
  return;
}
