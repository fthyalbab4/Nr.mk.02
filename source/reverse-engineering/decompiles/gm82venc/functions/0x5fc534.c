// rea decompile_all
// name: FUN_005fc534
// address: 0x5fc534
// body: available
// range: 0x5fc534-0x5fc5ea inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5fc559 (push 0x5fc5eb followed by fs-segment stack chaining); handler 0x5fc5eb lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005fc534(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 local_18;
  int local_14;
  int local_10;
  int *local_c;
  undefined4 local_8;

  local_18 = 0;
  puStack_24 = (undefined1 *)0x5fc54e;
  local_8 = param_1;
  thunk_FUN_00407ad0(param_1);
  puStack_28 = &LAB_005fc5eb;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  puStack_24 = &stack0xfffffffc;
  FUN_005fc04c();
  local_c = (int *)FUN_0043c790(&PTR_FUN_00430700,1);
  FUN_005fc090(local_8,param_3,&local_c);
  iVar2 = (**(code **)(*local_c + 0x14))();
  if (-1 < iVar2 + -1) {
    local_10 = 0;
    iVar3 = 1;
    local_14 = iVar2;
    do {
      (**(code **)(*local_c + 0xc))(local_c,local_10,&local_18);
      iVar2 = FUN_0057fae0(DAT_00688644,local_18);
      if (iVar2 < iVar3) {
        iVar2 = iVar3;
      }
      local_10 = local_10 + 1;
      local_14 = local_14 + -1;
      iVar3 = iVar2;
    } while (local_14 != 0);
  }
  FUN_00405fdc(local_c);
  puVar1 = puStack_24;
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_005fc5f2;
  puStack_28 = (undefined1 *)0x5fc5e2;
  thunk_FUN_004072d8(&local_18,uStack_2c,puVar1);
  puStack_28 = (undefined1 *)0x5fc5ea;
  thunk_FUN_004072d8(&local_8);
  return;
}
