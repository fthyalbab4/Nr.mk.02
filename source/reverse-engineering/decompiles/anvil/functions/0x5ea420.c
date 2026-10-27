// rea decompile_all
// name: FUN_005ea420
// address: 0x5ea420
// body: available
// range: 0x5ea420-0x5ea479 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5ea444 (push 0x5ea47a followed by fs-segment stack chaining); handler 0x5ea47a lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005ea420(undefined4 param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  int *local_c;
  undefined4 local_8;

  local_c = (int *)0x0;
  puStack_14 = (undefined1 *)0x5ea439;
  local_8 = param_2;
  FUN_0040b2dc(param_2);
  puStack_18 = &LAB_005ea47a;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  puStack_14 = &stack0xfffffffc;
  FUN_005ea330(param_1,&local_c);
  (**(code **)(*local_c + 0x10))(local_c,local_8);
  puVar1 = puStack_14;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_005ea481;
  puStack_18 = (undefined1 *)0x5ea471;
  FUN_0040b268(&local_c,uStack_1c,puVar1);
  puStack_18 = (undefined1 *)0x5ea479;
  FUN_0040b268(&local_8);
  return;
}
