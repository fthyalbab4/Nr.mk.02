// rea decompile_all
// name: FUN_0055ff4c
// address: 0x55ff4c
// body: available
// range: 0x55ff4c-0x55ffd1 inclusive
// range: 0x55ffd9-0x55ffdb inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x55ff80 (push 0x55ffd2 followed by fs-segment stack chaining); handler 0x55ffd2 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0055ff4c(int param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_14;
  undefined1 *puStack_10;
  undefined1 *puStack_c;
  int local_8;

  puStack_c = &stack0xfffffffc;
  if (((*(char *)(param_1 + 0x42) != '\0') && (*(int *)(param_1 + 0x34) != 0)) &&
     (*(char *)(param_1 + 0x43) == '\0')) {
    *(undefined1 *)(param_1 + 0x43) = 1;
    puStack_10 = &LAB_0055ffd2;
    uStack_14 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_14;
    local_8 = param_1;
    if (*(char *)(param_1 + 0x44) == '\0') {
      FUN_00560220(param_1);
    }
    else {
      puStack_c = &stack0xfffffffc;
      FUN_00560294(param_1);
    }
    if (*(char *)(local_8 + 0x40) != '\0') {
      FUN_0055fbc0(local_8,*(undefined1 *)(local_8 + 0x41));
    }
    *in_FS_OFFSET = uStack_14;
    *(undefined1 *)(local_8 + 0x43) = 0;
    *(undefined1 *)(local_8 + 0x42) = 0;
    return;
  }
  return;
}
