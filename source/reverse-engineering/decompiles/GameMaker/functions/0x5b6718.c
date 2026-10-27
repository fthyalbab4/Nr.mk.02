// rea decompile_all
// name: FUN_005b6718
// address: 0x5b6718
// body: available
// range: 0x5b6718-0x5b67a9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5b6739 (push 0x5b67aa followed by fs-segment stack chaining); handler 0x5b67aa lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005b6718(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  int *local_c;
  int *local_8;

  puStack_20 = &stack0xfffffffc;
  local_8 = (int *)0x0;
  local_c = (int *)0x0;
  puStack_24 = &LAB_005b67aa;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  *param_4 = 0;
  uVar1 = FUN_0040b140(&local_8);
  uVar2 = (**(code **)*param_1)();
  if ((uVar2 & 0x80000000) == 0) {
    FUN_0040b140(&local_c);
    uVar2 = (**(code **)(*local_8 + 0x10))();
    if ((uVar2 & 0x80000000) == 0) {
      (**(code **)(*local_c + 0x14))();
    }
  }
  *in_FS_OFFSET = param_1;
  FUN_0040b140(&local_c,param_1,uVar1,&LAB_005b67b1);
  FUN_0040b140(&local_8);
  return;
}
