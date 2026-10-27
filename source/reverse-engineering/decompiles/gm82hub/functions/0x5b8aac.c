// rea decompile_all
// name: FUN_005b8aac
// address: 0x5b8aac
// body: available
// range: 0x5b8aac-0x5b8c68 inclusive
// range: 0x5b8c9c-0x5b8cc6 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5b8ad9 (push 0x5b8cc7 followed by fs-segment stack chaining); handler 0x5b8cc7 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5b8c51 (push 0x5b8c69 followed by fs-segment stack chaining); handler 0x5b8c69 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005b8aac(undefined4 param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  local_14 = 0;
  local_10 = 0;
  puStack_24 = (undefined1 *)0x5b8ac8;
  local_8 = param_1;
  thunk_FUN_00407ad0(param_1);
  puVar2 = PTR_DAT_00688c44;
  puStack_28 = &LAB_005b8cc7;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  puStack_24 = &stack0xfffffffc;
  if (*PTR_PTR_0068909c == '\0') {
LAB_005b8b27:
    puStack_30 = (undefined1 *)0x5b8b33;
    local_c = FUN_00405fac(&PTR_LAB_0050b4b8,1);
    puStack_30 = (undefined1 *)0x5b8b43;
    FUN_0050bce8(local_c,0x21c);
    puStack_30 = (undefined1 *)0x5b8b53;
    FUN_0050bce8(local_c,*(undefined4 *)PTR_DAT_00688e9c);
    puStack_30 = (undefined1 *)0x5b8b63;
    FUN_0050bce8(local_c,*(undefined4 *)PTR_DAT_00688964);
    puStack_30 = (undefined1 *)0x5b8b73;
    FUN_0050bce8(local_c,*(undefined4 *)PTR_DAT_006889c0);
    puStack_30 = (undefined1 *)0x5b8b83;
    FUN_0050bce8(local_c,*(undefined4 *)PTR_DAT_00688f94);
    puStack_30 = (undefined1 *)0x5b8b93;
    FUN_0050bce8(local_c,*(undefined4 *)PTR_DAT_00688b88);
    puStack_30 = *(undefined1 **)(PTR_DAT_00688c48 + 4);
    puStack_34 = *(undefined1 **)PTR_DAT_00688c48;
    uStack_38 = 0x5b8ba5;
    FUN_0050bcfc(local_c);
    puStack_30 = (undefined1 *)0x5b8bb5;
    FUN_0050bce8(local_c,*(undefined4 *)PTR_DAT_00688ff0);
    puStack_30 = (undefined1 *)0x5b8bc5;
    FUN_0050bce8(local_c,*(undefined4 *)PTR_DAT_00688a0c);
    puStack_30 = (undefined1 *)0x5b8bd6;
    FUN_0050bdfc(local_c,*PTR_DAT_006891d0);
    puStack_30 = (undefined1 *)0x5b8bde;
    FUN_005725cc(local_c);
    puStack_30 = (undefined1 *)0x5b8be5;
    uVar5 = FUN_00409c34(*(undefined4 *)puVar2);
    puStack_30 = (undefined1 *)0x5b8bef;
    FUN_0050bce8(local_c,uVar5);
    puStack_30 = (undefined1 *)0x5b8bf6;
    iVar4 = FUN_00409c34(*(undefined4 *)puVar2);
    if (-1 < iVar4 + -1) {
      iVar6 = 0;
      do {
        puStack_30 = (undefined1 *)0x5b8c11;
        FUN_0050bdfc(local_c,*(int *)(*(int *)puVar2 + iVar6 * 4) != 0);
        iVar1 = *(int *)(*(int *)puVar2 + iVar6 * 4);
        if (iVar1 != 0) {
          puStack_30 = (undefined1 *)0x5b8c22;
          FUN_0060a5a8(iVar1,local_c);
        }
        iVar6 = iVar6 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    puStack_30 = (undefined1 *)0x5b8c36;
    FUN_0050bce8(local_c,*(undefined4 *)PTR_DAT_00689180);
    puStack_30 = (undefined1 *)0x5b8c46;
    FUN_0050bce8(local_c,*(undefined4 *)PTR_DAT_00688a74);
    puStack_34 = &LAB_005b8c69;
    uStack_38 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_38;
    puStack_30 = &stack0xfffffffc;
    FUN_0043d470(local_c,local_8);
    puVar3 = puStack_30;
    *in_FS_OFFSET = uStack_38;
    puStack_30 = (undefined1 *)0x5b8ca4;
    FUN_00405fdc(local_c,uStack_38,puVar3);
  }
  else {
    puStack_30 = (undefined1 *)0x5b8af3;
    puStack_24 = &stack0xfffffffc;
    iVar4 = FUN_00408d44(&DAT_005b8ce4,local_8);
    if (iVar4 == 0) {
      puStack_30 = (undefined1 *)0x5b8b04;
      iVar4 = FUN_00408d44(&DAT_005b8cf4,local_8);
      if (iVar4 == 0) goto LAB_005b8b27;
    }
    puStack_30 = (undefined1 *)0x5b8b18;
    FUN_00408678(&local_10,&PTR_DAT_005b8d04,local_8);
    puStack_30 = (undefined1 *)0x5b8b22;
    FUN_0061156c(local_10,0);
  }
  puVar3 = puStack_24;
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_005b8cce;
  puStack_28 = (undefined1 *)0x5b8cbe;
  thunk_FUN_004072fc(&local_14,2,puVar3);
  puStack_28 = (undefined1 *)0x5b8cc6;
  thunk_FUN_004072d8(&local_8);
  return;
}
