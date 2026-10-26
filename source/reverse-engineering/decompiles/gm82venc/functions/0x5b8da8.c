// rea decompile_all
// name: FUN_005b8da8
// address: 0x5b8da8
// body: available
// range: 0x5b8da8-0x5b8e6b inclusive
// range: 0x5b8e76-0x5b8ea2 inclusive
// range: 0x5b8ead-0x5b8ed2 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5b8dcc (push 0x5b8ed3 followed by fs-segment stack chaining); handler 0x5b8ed3 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5b8e54 (push 0x5b8e6c followed by fs-segment stack chaining); handler 0x5b8e6c lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5b8e8b (push 0x5b8ea3 followed by fs-segment stack chaining); handler 0x5b8ea3 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005b8da8(int param_1)

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
  undefined4 local_14;
  int local_10;
  int *local_c;
  int local_8;

  local_14 = 0;
  puStack_24 = (undefined1 *)0x5b8dc1;
  local_8 = param_1;
  thunk_FUN_00407ad0(param_1);
  puStack_28 = &LAB_005b8ed3;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  if (local_8 == 0) {
    puStack_30 = (undefined1 *)0x5b8de1;
    puStack_24 = &stack0xfffffffc;
    FUN_0061156c(&PTR_DAT_005b8ef0,0);
  }
  else {
    puStack_30 = (undefined1 *)0x5b8deb;
    puStack_24 = &stack0xfffffffc;
    local_c = (int *)FUN_00620338();
    if (local_c != (int *)0x0) {
      puStack_30 = (undefined1 *)0x5b8e03;
      FUN_0041733c(local_8,&local_14);
      puStack_30 = (undefined1 *)0x5b8e10;
      iVar2 = FUN_00415770(local_14,L".png");
      if (iVar2 == 0) {
        puStack_30 = (undefined1 *)0x5b8e23;
        local_10 = FUN_00515b64(&DAT_00514cd4,1,local_c);
        iVar2 = *(int *)(local_10 + 4) * *(int *)(local_10 + 8);
        if (-1 < iVar2 + -1) {
          iVar3 = 0;
          do {
            *(undefined1 *)(*(int *)(local_10 + 0xc) + 3 + iVar3 * 4) = 0xff;
            iVar3 = iVar3 + 1;
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
        }
        puStack_34 = &LAB_005b8e6c;
        uStack_38 = *in_FS_OFFSET;
        *in_FS_OFFSET = &uStack_38;
        puStack_30 = &stack0xfffffffc;
        FUN_00516554(local_10,local_8);
        puVar1 = puStack_30;
        *in_FS_OFFSET = uStack_38;
        puStack_30 = (undefined1 *)0x5b8e7e;
        FUN_00405fdc(local_10,uStack_38,puVar1);
      }
      else {
        puStack_34 = &LAB_005b8ea3;
        uStack_38 = *in_FS_OFFSET;
        *in_FS_OFFSET = &uStack_38;
        puStack_30 = &stack0xfffffffc;
        (**(code **)(*local_c + 0x58))(local_c,local_8);
        *in_FS_OFFSET = uStack_38;
      }
      puStack_30 = (undefined1 *)0x5b8eb5;
      FUN_00405fdc(local_c);
    }
  }
  puVar1 = puStack_24;
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_005b8eda;
  puStack_28 = (undefined1 *)0x5b8eca;
  thunk_FUN_004072d8(&local_14,uStack_2c,puVar1);
  puStack_28 = (undefined1 *)0x5b8ed2;
  thunk_FUN_004072d8(&local_8);
  return;
}
