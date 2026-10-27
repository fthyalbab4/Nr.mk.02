// rea decompile_all
// name: FUN_00576c38
// address: 0x576c38
// body: available
// range: 0x576c38-0x576cde inclusive
// range: 0x576ce6-0x576ce9 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x576c67 (push 0x576cdf followed by fs-segment stack chaining); handler 0x576cdf lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00576c38(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;

  puStack_10 = &stack0xfffffffc;
  if (*(char *)(param_1 + 0x38c) != '\0') {
    return;
  }
  *(undefined1 *)(param_1 + 0x38c) = 1;
  puStack_14 = &LAB_00576cdf;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  piVar1 = (int *)FUN_00576014(param_1);
  iVar2 = (**(code **)(*piVar1 + 0x14))();
  if ((iVar2 != 0) && (0 < param_2)) {
    iVar2 = FUN_00575d5c(param_1);
    if (param_2 <= iVar2 - *(int *)(param_1 + 0x2a0)) goto LAB_00576cac;
  }
  FUN_0041bfec(&PTR_LAB_0056953c,1,PTR_PTR_00782338);
  FUN_00406618();
LAB_00576cac:
  piVar1 = (int *)FUN_00576014(param_1);
  (**(code **)(*piVar1 + 0x48))(piVar1,param_2 - *(int *)(param_1 + 0x2a0));
  *in_FS_OFFSET = uStack_18;
  *(undefined1 *)(param_1 + 0x38c) = 0;
  return;
}
