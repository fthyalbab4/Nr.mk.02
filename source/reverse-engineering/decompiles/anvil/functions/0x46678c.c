// rea decompile_all
// name: FUN_0046678c
// address: 0x46678c
// body: available
// range: 0x46678c-0x4667d8 inclusive
// range: 0x4667f9-0x466808 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4667b5 (push 0x4667d9 followed by fs-segment stack chaining); handler 0x4667d9 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0046678c(int param_1)

{
  undefined4 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined *puStack_1c;

  puVar1 = *(undefined4 **)(param_1 + 4);
  if (puVar1 == (undefined4 *)0x0) {
    return;
  }
  puStack_1c = (undefined *)0x4667aa;
  FUN_004665b4(param_1);
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  *(undefined4 *)(param_1 + 4) = *puVar1;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &DAT_004667e0;
  uStack_20 = 0x4667d8;
  FUN_004665c0(param_1,uStack_24,&stack0xfffffffc);
  return;
}
