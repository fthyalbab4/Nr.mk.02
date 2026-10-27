// rea decompile_all
// name: FUN_00571c98
// address: 0x571c98
// body: available
// range: 0x571c98-0x571cf6 inclusive
// range: 0x571cfe-0x571d00 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x571cb6 (push 0x571cf7 followed by fs-segment stack chaining); handler 0x571cf7 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00571c98(int param_1)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_14;
  undefined1 *puStack_10;
  undefined1 *puStack_c;
  int local_8;

  puStack_c = &stack0xfffffffc;
  if (*(int *)(param_1 + 0x2ec) != 0) {
    puStack_10 = &LAB_00571cf7;
    uStack_14 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_14;
    local_8 = param_1;
    FUN_00571e54(param_1);
    puVar1 = puStack_c;
    *in_FS_OFFSET = uStack_14;
    puStack_c = (undefined1 *)0x571cfe;
    *(undefined4 *)(local_8 + 0x2f0) = 0xffffffff;
    *(undefined4 *)(local_8 + 0x2f4) = 0xffffffff;
    puStack_10 = (undefined1 *)0x571cf6;
    FUN_0056c0a0(*(undefined4 *)(local_8 + 0x2ec),uStack_14,puVar1);
    return;
  }
  return;
}
