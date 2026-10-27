// rea decompile_all
// name: FUN_00448e58
// address: 0x448e58
// body: available
// range: 0x448e58-0x448eb1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x448e7a (push 0x448eb2 followed by fs-segment stack chaining); handler 0x448eb2 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00448e58(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined1 *puStack_18;

  puStack_18 = (undefined1 *)0x448e6c;
  puVar1 = (undefined4 *)FUN_00448df4(param_1);
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  if (puVar1 == (undefined4 *)0x0) {
    *param_2 = param_2;
  }
  else {
    *param_2 = *puVar1;
    *puVar1 = param_2;
  }
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_00448eb9;
  uStack_1c = 0x448eb1;
  FUN_00449044(param_1,param_2,&stack0xfffffffc);
  return;
}
