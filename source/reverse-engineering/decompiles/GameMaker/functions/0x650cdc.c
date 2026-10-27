// rea decompile_all
// name: FUN_00650cdc
// address: 0x650cdc
// body: available
// range: 0x650cdc-0x650dd7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x650cf1 (push 0x650dd8 followed by fs-segment stack chaining); handler 0x650dd8 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00650cdc(undefined4 param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_8;

  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  puStack_1c = &LAB_00650dd8;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  iVar2 = FUN_00514e78(&PTR_LAB_006501f0,1,0);
  FUN_004ee5c0(*(undefined4 *)(iVar2 + 0x3a4),*PTR_DAT_0078258c);
  if (*PTR_DAT_0078258c == '\0') {
    FUN_004edcac(*(undefined4 *)(iVar2 + 0x38c),*(undefined4 *)(*(int *)(iVar2 + 0x3a4) + 0x44));
    FUN_00515e80(iVar2,*(int *)(*(int *)(iVar2 + 0x38c) + 0x44) + 0x21);
  }
  FUN_006dfbf0(*(undefined4 *)PTR_DAT_00781a58,iVar2);
  uVar3 = FUN_006524d0(param_1);
  *(undefined4 *)(iVar2 + 1000) = uVar3;
  *(undefined4 *)(iVar2 + 0x3f8) = param_1;
  uVar3 = FUN_0064fb70(&DAT_0064f674,1);
  *(undefined4 *)(iVar2 + 0x3ec) = uVar3;
  FUN_0064fbfc(uVar3,*(undefined4 *)(iVar2 + 1000));
  FUN_006522c0(param_1,&local_8);
  FUN_00407eb8(iVar2 + 0x3f0,local_8);
  *(undefined1 *)(iVar2 + 0x3f4) = 0;
  *(undefined1 *)(iVar2 + 0x3fc) = 0;
  FUN_00650de8(iVar2);
  puVar1 = puStack_18;
  *(undefined4 *)(iVar2 + 0x2b8) = 2;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_00650ddf;
  puStack_1c = (undefined1 *)0x650dd7;
  thunk_FUN_00406e5c(&local_8,uStack_20,puVar1);
  return;
}
