// rea decompile_all
// name: FUN_006d1ccc
// address: 0x6d1ccc
// body: available
// range: 0x6d1ccc-0x6d1d8f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6d1ce5 (push 0x6d1d90 followed by fs-segment stack chaining); handler 0x6d1d90 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006d1ccc(undefined4 param_1)

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
  undefined4 local_c;
  undefined4 local_8;

  puStack_24 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  puStack_28 = &LAB_006d1d90;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  iVar2 = FUN_006934ec();
  if (-1 < iVar2 + -1) {
    iVar3 = 0;
    do {
      uStack_2c = 0x800000;
      FUN_006934f4(iVar3,&local_c);
      FUN_0040839c(&local_8,L"local:   ",local_c);
      FUN_006d1af4(param_1,local_8,0xffffffff);
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  iVar2 = FUN_0069355c();
  if (-1 < iVar2 + -1) {
    iVar3 = 0;
    do {
      uStack_2c = 0x80;
      FUN_00693564(iVar3,&local_14);
      FUN_0040839c(&local_10,L"global:  ",local_14);
      FUN_006d1af4(param_1,local_10,0xffffffff);
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_006d194c(param_1);
  puVar1 = puStack_24;
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_006d1d97;
  puStack_28 = (undefined1 *)0x6d1d8f;
  thunk_FUN_00406e80(&local_14,4,puVar1);
  return;
}
