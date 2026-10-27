// rea decompile_all
// name: FUN_004f5a24
// address: 0x4f5a24
// body: available
// range: 0x4f5a24-0x4f5a9d inclusive
// range: 0x4f5aa5-0x4f5aa8 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4f5a71 (push 0x4f5a9e followed by fs-segment stack chaining); handler 0x4f5a9e lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004f5a24(int param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  char local_9;
  int local_8;

  puStack_10 = &stack0xfffffffc;
  if (*(int *)(param_1 + 0x34) != 0) {
    local_9 = '\0';
    if ((*(int *)(param_1 + 0x1a8) != 0) && (*(int *)(*(int *)(param_1 + 0x34) + 0x1a8) == 0)) {
      *(int *)(*(int *)(param_1 + 0x34) + 0x1a8) = *(int *)(param_1 + 0x1a8);
      local_9 = '\x01';
    }
    puStack_14 = &LAB_004f5a9e;
    uStack_18 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_18;
    local_8 = param_1;
    FUN_004ed7e4(param_1);
    *in_FS_OFFSET = uStack_18;
    if (local_9 != '\0') {
      *(undefined4 *)(*(int *)(local_8 + 0x34) + 0x1a8) = 0;
    }
    return;
  }
  return;
}
