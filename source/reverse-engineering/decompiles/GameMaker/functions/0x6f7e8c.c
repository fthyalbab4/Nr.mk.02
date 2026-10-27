// rea decompile_all
// name: FUN_006f7e8c
// address: 0x6f7e8c
// body: available
// range: 0x6f7e8c-0x6f7f6f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6f7ea1 (push 0x6f7f70 followed by fs-segment stack chaining); handler 0x6f7f70 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006f7e8c(undefined4 param_1)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_8;

  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  puStack_1c = &LAB_006f7f70;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  iVar2 = FUN_00514e78(&PTR_LAB_006f6a40,1,0);
  FUN_006dfbf0(*(undefined4 *)PTR_DAT_00781a58,iVar2);
  iVar3 = FUN_006fa818(param_1);
  *(int *)(iVar2 + 0x420) = iVar3;
  if (iVar3 != 0) {
    FUN_005adfb8(iVar3);
  }
  *(undefined4 *)(iVar2 + 0x430) = param_1;
  uVar4 = FUN_005adf3c(&DAT_005ad98c,1);
  *(undefined4 *)(iVar2 + 0x424) = uVar4;
  FUN_005ae000(uVar4,*(undefined4 *)(iVar2 + 0x420));
  FUN_006fa608(param_1,&local_8);
  FUN_00407eb8(iVar2 + 0x428,local_8);
  *(undefined1 *)(iVar2 + 0x42c) = 0;
  if (*(int *)PTR_DAT_00781ad8 == 0) {
    uVar4 = FUN_005a5048(&DAT_005a4c6c,1);
    *(undefined4 *)PTR_DAT_00781ad8 = uVar4;
  }
  FUN_006f7fac(iVar2);
  FUN_006f8194(iVar2,0);
  puVar1 = puStack_18;
  *(undefined4 *)(iVar2 + 0x2b8) = 2;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_006f7f77;
  puStack_1c = (undefined1 *)0x6f7f6f;
  thunk_FUN_00406e5c(&local_8,uStack_20,puVar1);
  return;
}
