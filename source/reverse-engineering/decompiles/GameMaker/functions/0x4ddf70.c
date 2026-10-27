// rea decompile_all
// name: FUN_004ddf70
// address: 0x4ddf70
// body: available
// range: 0x4ddf70-0x4ddfe3 inclusive
// range: 0x4ddfeb-0x4ddfee inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4ddfa3 (push 0x4ddfe4 followed by fs-segment stack chaining); handler 0x4ddfe4 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004ddf70(int param_1)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  undefined1 local_a;
  char local_9;
  int local_8;

  puStack_10 = &stack0xfffffffc;
  if (PTR_DAT_00782974[0xd] != '\0') {
    local_9 = *(char *)(param_1 + 0x34);
    local_a = *(undefined1 *)(param_1 + 0x41);
    puStack_14 = &LAB_004ddfe4;
    uStack_18 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_18;
    local_8 = param_1;
    if (local_9 == '\0') {
      puStack_10 = &stack0xfffffffc;
      FUN_004de48c(param_1,1);
    }
    else {
      FUN_004de48c(param_1,0);
    }
    puVar1 = puStack_10;
    *in_FS_OFFSET = uStack_18;
    puStack_10 = (undefined1 *)0x4ddfeb;
    puStack_14 = (undefined1 *)0x4ddfd9;
    FUN_004de48c(local_8,local_9,puVar1);
    *(undefined1 *)(local_8 + 0x41) = local_a;
    return;
  }
  return;
}
