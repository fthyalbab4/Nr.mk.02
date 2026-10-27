// rea decompile_all
// name: FUN_006d1e58
// address: 0x6d1e58
// body: available
// range: 0x6d1e58-0x6d1f3f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6d1e77 (push 0x6d1f40 followed by fs-segment stack chaining); handler 0x6d1f40 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006d1e58(undefined4 param_1)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 local_14;
  undefined4 local_10;
  int *local_c;
  undefined4 local_8;

  puStack_24 = &stack0xfffffffc;
  local_14 = 0;
  local_10 = 0;
  puStack_28 = &LAB_006d1f40;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  local_8 = param_1;
  local_c = (int *)FUN_0043f190(&PTR_FUN_00432364,1);
  FUN_00713674(&local_c);
  iVar2 = (**(code **)(*local_c + 0x14))();
  if (-1 < iVar2 + -1) {
    iVar3 = 0;
    do {
      (**(code **)(*local_c + 0xc))(local_c,iVar3,&local_10,0x800000,0xffffffff,0xffffffff);
      FUN_006d1af4(local_8,local_10,0xffffffff);
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  (**(code **)(*local_c + 0x44))();
  FUN_007136ac(&local_c);
  iVar2 = (**(code **)(*local_c + 0x14))();
  if (-1 < iVar2 + -1) {
    iVar3 = 0;
    do {
      (**(code **)(*local_c + 0xc))(local_c,iVar3,&local_14,0x80,0xffffffff,0xffffffff);
      FUN_006d1af4(local_8,local_14,0xffffffff);
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00405a7c(local_c);
  FUN_006d194c(local_8);
  puVar1 = puStack_24;
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_006d1f47;
  puStack_28 = (undefined1 *)0x6d1f3f;
  thunk_FUN_00406e80(&local_14,2,puVar1);
  return;
}
