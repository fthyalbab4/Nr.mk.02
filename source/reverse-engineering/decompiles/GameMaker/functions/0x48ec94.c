// rea decompile_all
// name: FUN_0048ec94
// address: 0x48ec94
// body: available
// range: 0x48ec94-0x48ecf8 inclusive
// range: 0x48ed12-0x48ed21 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x48ecc1 (push 0x48ecf9 followed by fs-segment stack chaining); handler 0x48ecf9 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0048ec94(int param_1,int param_2)

{
  char cVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;

  puStack_18 = &stack0xfffffffc;
  if (*(char *)(param_1 + 0x280) == '\0') {
    *(undefined1 *)(param_1 + 0x280) = 1;
    puStack_1c = &LAB_0048ecf9;
    uStack_20 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_20;
    if ((*(short *)(param_2 + 6) == 0) || (*(short *)(param_2 + 6) == 5)) {
      cVar1 = (**(code **)(**(int **)(param_1 + 0x34) + 0xf0))();
      if (cVar1 != '\0') {
        FUN_00482a58(param_1,param_2);
      }
    }
    *in_FS_OFFSET = uStack_20;
    *(undefined1 *)(param_1 + 0x280) = 0;
  }
  return;
}
