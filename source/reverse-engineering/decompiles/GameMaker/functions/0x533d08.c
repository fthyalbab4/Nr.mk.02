// rea decompile_all
// name: FUN_00533d08
// address: 0x533d08
// body: available
// range: 0x533d08-0x533d96 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x533d2f (push 0x533d97 followed by fs-segment stack chaining); handler 0x533d97 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00533d08(undefined4 param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar3;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_c;
  undefined4 local_8;

  local_c = 0;
  puStack_14 = (undefined1 *)0x533d1f;
  local_8 = param_1;
  thunk_FUN_00407660(param_1);
  puStack_18 = &LAB_00533d97;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  puStack_14 = &stack0xfffffffc;
  FUN_00407eb8(&DAT_00788970,local_8);
  do {
    uVar3 = local_8;
    uVar2 = FUN_004047b0(100000);
    FUN_0041666c(uVar2,&local_c);
    uStack_1c = local_c;
    FUN_00408480(&DAT_00788974,3);
    cVar1 = FUN_00416e88(DAT_00788974);
  } while (cVar1 != '\0');
  FUN_00416eac(DAT_00788974);
  *in_FS_OFFSET = uStack_1c;
  thunk_FUN_00406e80(&local_c,2,uVar3,&LAB_00533d9e);
  return;
}
