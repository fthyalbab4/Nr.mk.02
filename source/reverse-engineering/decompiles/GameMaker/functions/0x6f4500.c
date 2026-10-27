// rea decompile_all
// name: FUN_006f4500
// address: 0x6f4500
// body: available
// range: 0x6f4500-0x6f4619 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6f4515 (push 0x6f461a followed by fs-segment stack chaining); handler 0x6f461a lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006f4500(undefined4 param_1)

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
  puStack_1c = &LAB_006f461a;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  iVar2 = FUN_00514e78(&PTR_LAB_006f3774,1,0);
  FUN_004ee5c0(*(undefined4 *)(iVar2 + 1000),*PTR_DAT_0078258c);
  FUN_004ee5c0(*(undefined4 *)(iVar2 + 0x3d0),*PTR_DAT_0078258c);
  if (*PTR_DAT_0078258c == '\0') {
    FUN_004edce0(*(int *)(iVar2 + 0x388),
                 *(int *)(*(int *)(iVar2 + 0x3c4) + 0x40) - *(int *)(*(int *)(iVar2 + 0x388) + 0x40)
                );
    FUN_004ee5c0(*(undefined4 *)(iVar2 + 0x3c4),0);
    FUN_004ee5c0(*(undefined4 *)(iVar2 + 0x3c8),0);
  }
  FUN_006dfbf0(*(undefined4 *)PTR_DAT_00781a58,iVar2);
  uVar3 = FUN_006f5b30(param_1);
  *(undefined4 *)(iVar2 + 0x3fc) = uVar3;
  *(undefined4 *)(iVar2 + 0x40c) = param_1;
  uVar3 = FUN_005b325c(&DAT_005b27dc,1);
  *(undefined4 *)(iVar2 + 0x400) = uVar3;
  FUN_005b33a8(uVar3,*(undefined4 *)(iVar2 + 0x3fc));
  FUN_006f5920(param_1,&local_8);
  FUN_00407eb8(iVar2 + 0x404,local_8);
  *(undefined1 *)(iVar2 + 0x408) = 0;
  *(undefined1 *)(iVar2 + 0x414) = 0;
  FUN_006f488c(iVar2);
  puVar1 = puStack_18;
  *(undefined4 *)(iVar2 + 0x2b8) = 2;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_006f4621;
  puStack_1c = (undefined1 *)0x6f4619;
  thunk_FUN_00406e5c(&local_8,uStack_20,puVar1);
  return;
}
