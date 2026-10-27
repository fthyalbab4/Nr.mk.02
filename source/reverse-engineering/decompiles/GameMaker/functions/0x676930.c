// rea decompile_all
// name: FUN_00676930
// address: 0x676930
// body: available
// range: 0x676930-0x6769aa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x676953 (push 0x6769ce followed by fs-segment stack chaining); handler 0x6769ce lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x676971 (push 0x6769ab followed by fs-segment stack chaining); handler 0x6769ab lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00676930(int *param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;

  puStack_10 = (undefined1 *)0x676948;
  FUN_0045be3c(param_1[0xa1]);
  puStack_14 = &LAB_006769ce;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_1c = (undefined1 *)0x676966;
  puStack_10 = &stack0xfffffffc;
  FUN_0045ceb4(param_1[0xa1],param_2);
  puStack_20 = &LAB_006769ab;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puStack_1c = &stack0xfffffffc;
  FUN_004ecd50(param_1[0xa1]);
  (**(code **)(*param_1 + 0x138))();
  puVar1 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_006769b2;
  puStack_20 = (undefined1 *)0x6769aa;
  FUN_0045ceb4(param_1[0xa1],0,puVar1);
  return;
}
