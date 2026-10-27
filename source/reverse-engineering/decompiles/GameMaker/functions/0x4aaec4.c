// rea decompile_all
// name: FUN_004aaec4
// address: 0x4aaec4
// body: available
// range: 0x4aaec4-0x4aaf49 inclusive
// range: 0x4aaf51-0x4aaf54 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4aaef2 (push 0x4aaf4a followed by fs-segment stack chaining); handler 0x4aaf4a lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004aaec4(int *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;

  puStack_10 = &stack0xfffffffc;
  if ((param_2 != 0) && (*(int **)(param_2 + 0x274) != param_1)) {
    return;
  }
  *(undefined1 *)(param_1 + 0xb8) = 1;
  puStack_14 = &LAB_004aaf4a;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  FUN_004aa978(param_1,param_2);
  if (param_2 == 0) {
    (**(code **)(*param_1 + 0xf8))(param_1,0xffffffff);
  }
  else if (param_2 == param_1[0xb5]) {
    uVar1 = FUN_004aa28c(param_2);
    (**(code **)(*param_1 + 0xf8))(param_1,uVar1);
  }
  *in_FS_OFFSET = uStack_18;
  *(undefined1 *)(param_1 + 0xb8) = 0;
  return;
}
