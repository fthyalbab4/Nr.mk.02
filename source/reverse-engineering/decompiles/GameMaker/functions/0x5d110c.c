// rea decompile_all
// name: FUN_005d110c
// address: 0x5d110c
// body: available
// range: 0x5d110c-0x5d1164 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5d111c (push 0x5d1165 followed by fs-segment stack chaining); handler 0x5d1165 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005d110c(void)

{
  undefined1 *puVar1;
  LPCWSTR lpFileName;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_14;
  undefined1 *puStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  puStack_c = &stack0xfffffffc;
  local_8 = 0;
  puStack_10 = &LAB_005d1165;
  uStack_14 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_14;
  lpFileName = (LPCWSTR)FUN_00407f44(DAT_00789b8c);
  DeleteFileW(lpFileName);
  FUN_005ce8d8(&local_8);
  FUN_005d0f6c(local_8);
  FUN_005cea78(&local_8);
  FUN_005d0f6c(local_8);
  puVar1 = puStack_c;
  *in_FS_OFFSET = uStack_14;
  puStack_c = &LAB_005d116c;
  puStack_10 = (undefined1 *)0x5d1164;
  thunk_FUN_00406e5c(&local_8,uStack_14,puVar1);
  return;
}
