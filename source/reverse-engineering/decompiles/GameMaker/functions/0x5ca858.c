// rea decompile_all
// name: FUN_005ca858
// address: 0x5ca858
// body: available
// range: 0x5ca858-0x5ca8c6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5ca86b (push 0x5ca8c7 followed by fs-segment stack chaining); handler 0x5ca8c7 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005ca858(int param_1)

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
  puStack_14 = &LAB_005ca8c7;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puVar1 = &stack0xfffffffc;
  if (((*(byte *)(param_1 + 0x68) & 0x20) != 0) &&
     (cVar2 = FUN_005cb14c(param_1), puVar1 = puStack_10, cVar2 != '\0')) {
    if (*(char *)(param_1 + 0x84) == '\x01') {
      FUN_005ca0cc(param_1);
      puVar1 = puStack_10;
    }
    else if (*(char *)(param_1 + 0x84) == '\x03') {
      FUN_005cb0f0(param_1,&local_8);
      FUN_00405d08(param_1,local_8);
      puVar1 = puStack_10;
    }
  }
  puStack_10 = puVar1;
  puVar1 = puStack_10;
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_005ca8ce;
  puStack_14 = (undefined1 *)0x5ca8c6;
  thunk_FUN_00406e5c(&local_8,uStack_18,puVar1);
  return;
}
