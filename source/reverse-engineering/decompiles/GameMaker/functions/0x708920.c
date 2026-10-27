// rea decompile_all
// name: FUN_00708920
// address: 0x708920
// body: available
// range: 0x708920-0x70898f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x708933 (push 0x708990 followed by fs-segment stack chaining); handler 0x708990 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00708920(int param_1)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  undefined4 local_8;

  puStack_10 = &stack0xfffffffc;
  local_8 = 0;
  puStack_14 = &LAB_00708990;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  cVar2 = (**(code **)(**(int **)(param_1 + 0x50c) + 0x40))();
  if (cVar2 != '\0') {
    FUN_004cf2f4(*(undefined4 *)(param_1 + 0x50c),&local_8);
    FUN_00407eb8(&DAT_00790810,local_8);
    cVar2 = FUN_00416e40(DAT_00790810);
    if (cVar2 == '\0') {
      FUN_00407eb8(&DAT_00790810,0);
    }
  }
  puVar1 = puStack_10;
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_00708997;
  puStack_14 = (undefined1 *)0x70898f;
  thunk_FUN_00406e5c(&local_8,uStack_18,puVar1);
  return;
}
