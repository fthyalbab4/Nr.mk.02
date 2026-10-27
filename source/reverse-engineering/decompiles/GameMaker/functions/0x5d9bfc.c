// rea decompile_all
// name: FUN_005d9bfc
// address: 0x5d9bfc
// body: available
// range: 0x5d9bfc-0x5d9c74 inclusive
// range: 0x5d9c7c-0x5d9c7e inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5d9c47 (push 0x5d9c75 followed by fs-segment stack chaining); handler 0x5d9c75 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005d9bfc(int param_1)

{
  char cVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_14;
  undefined1 *puStack_10;
  undefined1 *puStack_c;
  int local_8;

  puStack_c = (undefined1 *)0x5d9c0b;
  local_8 = param_1;
  FUN_004f6990(param_1);
  if (((*(byte *)(*(int *)(local_8 + 0x270) + 0x2c) & 1) != 0) &&
     (*(char *)(local_8 + 0x2b1) == '\0')) {
    puStack_c = (undefined1 *)0x5d9c2e;
    cVar1 = FUN_004f7a54(local_8);
    if (cVar1 != '\0') {
      *(undefined1 *)(local_8 + 0x2b1) = 1;
      puStack_10 = &LAB_005d9c75;
      uStack_14 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_14;
      puStack_c = &stack0xfffffffc;
      FUN_005d90dc(local_8,0xfffffe0b,*(undefined4 *)(local_8 + 0x6c));
      *in_FS_OFFSET = uStack_14;
      *(undefined1 *)(local_8 + 0x2b1) = 0;
      return;
    }
  }
  return;
}
