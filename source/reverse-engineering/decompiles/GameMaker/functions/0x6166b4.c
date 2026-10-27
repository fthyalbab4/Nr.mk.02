// rea decompile_all
// name: FUN_006166b4
// address: 0x6166b4
// body: available
// range: 0x6166b4-0x6166fa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6166d0 (push 0x6166fb followed by fs-segment stack chaining); handler 0x6166fb lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006166b4(int param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined1 *puStack_10;
  byte local_9;
  int local_8;

  puStack_10 = (undefined1 *)0x6166c5;
  local_8 = param_1;
  FUN_006160d0(param_1);
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  local_9 = *(byte *)(local_8 + 8) ^ 1;
  *(byte *)(local_8 + 8) = local_9;
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_00616702;
  uStack_14 = 0x6166fa;
  FUN_006160dc(local_8,uStack_18,&stack0xfffffffc);
  return;
}
