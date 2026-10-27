// rea decompile_all
// name: FUN_005bc04c
// address: 0x5bc04c
// body: available
// range: 0x5bc04c-0x5bc08b inclusive
// range: 0x5bc091-0x5bc09a inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5bc062 (push 0x5bc08c followed by fs-segment stack chaining); handler 0x5bc08c lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
FUN_005bc04c(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
            undefined4 *param_5)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  int iStack_18;

  puStack_1c = &stack0xfffffffc;
  iStack_18 = param_4;
  puStack_20 = &LAB_005bc08c;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  piVar1 = *(int **)(param_4 + 0xc);
  (**(code **)(*piVar1 + 0x2c))();
  FUN_0040b250();
  *param_5 = param_3;
  *in_FS_OFFSET = piVar1;
  return 0;
}
