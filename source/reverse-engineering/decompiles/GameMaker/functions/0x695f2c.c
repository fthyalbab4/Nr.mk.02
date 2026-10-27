// rea decompile_all
// name: FUN_00695f2c
// address: 0x695f2c
// body: available
// range: 0x695f2c-0x696060 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x695f45 (push 0x696061 followed by fs-segment stack chaining); handler 0x696061 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00695f2c(int param_1)

{
  undefined1 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  int local_8;

  puStack_24 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  puStack_28 = &LAB_00696061;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  puVar1 = &stack0xfffffffc;
  if (*(char *)(param_1 + 0x3c0) == '\0') {
    piVar2 = (int *)FUN_00576014(*(undefined4 *)(param_1 + 0x38c));
    uVar3 = (**(code **)(*piVar2 + 0x14))();
    *(undefined4 *)PTR_DAT_00781d24 = uVar3;
    FUN_00409be0(PTR_DAT_00781664,&DAT_00696594,1,*(undefined4 *)PTR_DAT_00781d24);
    FUN_00409be0(PTR_DAT_00781ae4,&DAT_006965c0,1,*(undefined4 *)PTR_DAT_00781d24);
    iVar5 = 0;
    if (-1 < *(int *)PTR_DAT_00781d24 + -1) {
      iVar4 = 0;
      local_8 = *(int *)PTR_DAT_00781d24;
      do {
        uVar3 = FUN_00576014(*(undefined4 *)(param_1 + 0x38c));
        FUN_0043d9f4(uVar3,iVar4,&local_c);
        if (local_c != 0) {
          iVar5 = iVar5 + 1;
          uVar3 = FUN_00576014(*(undefined4 *)(param_1 + 0x38c));
          FUN_0043d9f4(uVar3,iVar4,&local_10);
          FUN_00407eb8(*(int *)PTR_DAT_00781664 + -4 + iVar5 * 4,local_10);
          uVar3 = FUN_00576014(*(undefined4 *)(param_1 + 0x38c));
          FUN_0043e9e0(uVar3,iVar4,&local_14);
          FUN_00407eb8(*(int *)PTR_DAT_00781ae4 + -4 + iVar5 * 4,local_14);
        }
        iVar4 = iVar4 + 1;
        local_8 = local_8 + -1;
      } while (local_8 != 0);
    }
    *(int *)PTR_DAT_00781d24 = iVar5;
    FUN_006968c0();
    *(undefined1 *)(param_1 + 0x3c2) = 1;
    puVar1 = puStack_24;
  }
  puStack_24 = puVar1;
  puVar1 = puStack_24;
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_00696068;
  puStack_28 = (undefined1 *)0x696060;
  thunk_FUN_00406e80(&local_14,3,puVar1);
  return;
}
