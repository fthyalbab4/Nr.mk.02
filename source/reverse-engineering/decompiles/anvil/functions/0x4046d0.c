// rea decompile_all
// name: FUN_004046d0
// address: 0x4046d0
// body: available
// range: 0x4046d0-0x404720 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4046e2 (push 0x404721 followed by fs-segment stack chaining); handler 0x404721 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004046d0(void)

{
  undefined1 *puVar1;
  LPWSTR pWVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  int local_8;

  puStack_14 = &stack0xfffffffc;
  local_8 = 0;
  puStack_18 = &LAB_00404721;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  pWVar2 = GetCommandLineW();
  uVar3 = FUN_00404614(pWVar2,&local_8);
  do {
    uVar3 = FUN_00404614(uVar3,&local_8);
    puVar1 = puStack_14;
  } while (local_8 != 0);
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_00404728;
  puStack_18 = (undefined1 *)0x404720;
  thunk_FUN_004072d8(&local_8,uStack_1c,puVar1);
  return;
}
