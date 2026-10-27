// rea decompile_all
// name: FUN_005fda78
// address: 0x5fda78
// body: available
// range: 0x5fda78-0x5fdb4d inclusive
// range: 0x5fdb58-0x5fdb8f inclusive
// range: 0x5fdb9a-0x5fdbbc inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5fda98 (push 0x5fdbbd followed by fs-segment stack chaining); handler 0x5fdbbd lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5fdb2b (push 0x5fdb4e followed by fs-segment stack chaining); handler 0x5fdb4e lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5fdb6d (push 0x5fdb90 followed by fs-segment stack chaining); handler 0x5fdb90 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005fda78(void)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  int in_stack_0000000c;
  undefined4 uStack_40;
  undefined1 *puStack_3c;
  undefined1 *puStack_38;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  int *local_8;

  puStack_2c = &stack0xfffffffc;
  local_8 = (int *)0x0;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  local_18 = 0;
  local_1c = 0;
  puStack_30 = &LAB_005fdbbd;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  if (*(int *)(in_stack_0000000c + 0x10) == 0) {
    puStack_38 = (undefined1 *)0x5fdaad;
    puStack_2c = &stack0xfffffffc;
    FUN_0061156c(&PTR_DAT_005fdbdc,0);
  }
  else {
    puStack_38 = (undefined1 *)0x5fdab7;
    local_8 = (int *)FUN_00620338();
    if (local_8 != (int *)0x0) {
      puStack_38 = (undefined1 *)0x5fdacf;
      FUN_004083c0(&local_14,*(undefined4 *)(in_stack_0000000c + 0x10));
      puStack_38 = (undefined1 *)0x5fdada;
      FUN_0041733c(local_14,&local_10);
      puStack_38 = (undefined1 *)0x5fdae7;
      iVar2 = FUN_00415770(local_10,L".png");
      if (iVar2 == 0) {
        puStack_38 = (undefined1 *)0x5fdafa;
        local_c = FUN_00515b64(&DAT_00514cd4,1,local_8);
        iVar2 = *(int *)(local_c + 4) * *(int *)(local_c + 8);
        if (-1 < iVar2 + -1) {
          iVar3 = 0;
          do {
            *(undefined1 *)(*(int *)(local_c + 0xc) + 3 + iVar3 * 4) = 0xff;
            iVar3 = iVar3 + 1;
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
        }
        puStack_3c = &LAB_005fdb4e;
        uStack_40 = *in_FS_OFFSET;
        *in_FS_OFFSET = &uStack_40;
        puStack_38 = &stack0xfffffffc;
        FUN_004083c0(&local_18,*(undefined4 *)(in_stack_0000000c + 0x10));
        FUN_00516554(local_c,local_18);
        puVar1 = puStack_38;
        *in_FS_OFFSET = uStack_40;
        puStack_38 = (undefined1 *)0x5fdb60;
        FUN_00405fdc(local_c,uStack_40,puVar1);
      }
      else {
        puStack_3c = &LAB_005fdb90;
        uStack_40 = *in_FS_OFFSET;
        *in_FS_OFFSET = &uStack_40;
        puStack_38 = &stack0xfffffffc;
        FUN_004083c0(&local_1c,*(undefined4 *)(in_stack_0000000c + 0x10));
        (**(code **)(*local_8 + 0x58))(local_8,local_1c);
        *in_FS_OFFSET = uStack_40;
      }
      puStack_38 = (undefined1 *)0x5fdba2;
      FUN_00405fdc(local_8);
    }
  }
  puVar1 = puStack_2c;
  *in_FS_OFFSET = uStack_34;
  puStack_2c = &LAB_005fdbc4;
  puStack_30 = (undefined1 *)0x5fdbbc;
  thunk_FUN_004072fc(&local_1c,4,puVar1);
  return;
}
