// rea decompile_all
// name: FUN_005c7e58
// address: 0x5c7e58
// body: available
// range: 0x5c7e58-0x5c7ec8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5c7e6e (push 0x5c7ec9 followed by fs-segment stack chaining); handler 0x5c7ec9 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005c7e58(int param_1)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_c;
  int *local_8;

  puStack_18 = &stack0xfffffffc;
  local_8 = (int *)0x0;
  local_c = 0;
  puStack_1c = &LAB_005c7ec9;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  iVar1 = *(int *)(param_1 + 0x28);
  if (iVar1 != 0) {
    iVar1 = iVar1 + 0x48;
  }
  FUN_0040b158(&local_8,iVar1);
  while (local_8 != (int *)0x0) {
    (**(code **)(*local_8 + 0x44))(local_8,&local_c);
    FUN_0040b158(&local_8,local_c);
  }
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_005c7ed0;
  puStack_1c = (undefined1 *)0x5c7ec8;
  FUN_00408e44(&local_c,&DAT_005c0e3c,2);
  return;
}
