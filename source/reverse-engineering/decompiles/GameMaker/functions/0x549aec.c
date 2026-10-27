// rea decompile_all
// name: FUN_00549aec
// address: 0x549aec
// body: available
// range: 0x549aec-0x549b54 inclusive
// range: 0x549b5c-0x549b5f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x549b19 (push 0x549b55 followed by fs-segment stack chaining); handler 0x549b55 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00549aec(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,int param_6)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_10;
  undefined1 *puStack_c;
  undefined1 *puStack_8;

  puStack_8 = &stack0xfffffffc;
  if (param_4._2_2_ != 0) {
    iVar1 = *(int *)(param_6 + -4);
    *(undefined4 *)(iVar1 + 0x90) = param_4;
    *(undefined4 *)(iVar1 + 0x94) = param_5;
    puStack_c = &LAB_00549b55;
    uStack_10 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_10;
    FUN_0054942c(*(undefined4 *)(param_6 + -4),param_5,param_3,&LAB_0054951c,
                 *(undefined4 *)(param_6 + -4));
    *in_FS_OFFSET = uStack_10;
    iVar1 = *(int *)(param_6 + -4);
    *(undefined4 *)(iVar1 + 0x90) = 0;
    *(undefined4 *)(iVar1 + 0x94) = 0;
    return;
  }
  return;
}
