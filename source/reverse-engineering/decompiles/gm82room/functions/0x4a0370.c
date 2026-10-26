// rea decompile_all
// name: FUN_004a0370
// address: 0x4a0370
// body: available
// range: 0x4a0370-0x4a03a9 inclusive
// range: 0x4a03d0-0x4a03d5 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4a038f (push 0x4a03aa followed by fs-segment stack chaining); handler 0x4a03aa lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004a0370(int param_1)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;

  puStack_18 = &stack0xfffffffc;
  iVar1 = *(int *)(param_1 + 0x6c);
  if (iVar1 != 0) {
    puStack_1c = &LAB_004a03aa;
    uStack_20 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_20;
    FUN_004ec0f4(*(undefined4 *)PTR_DAT_0068917c,iVar1);
    *in_FS_OFFSET = uStack_20;
  }
  return;
}
