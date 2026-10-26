// rea decompile_all
// name: FUN_0040b5c8
// address: 0x40b5c8
// body: available
// range: 0x40b5c8-0x40b630 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x40b5de (push 0x40b631 followed by fs-segment stack chaining); handler 0x40b631 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0040b5c8(int param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  short sVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_8;

  puStack_14 = &stack0xfffffffc;
  local_8 = 0;
  puStack_18 = &LAB_0040b631;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  sVar2 = DAT_0068a8d0;
  if (param_1 != 0) {
    sVar2 = *(short *)(param_1 + -0xc);
  }
  if (sVar2 == -0x217) {
    puStack_14 = &stack0xfffffffc;
    FUN_0040732c(param_2,param_1);
  }
  else {
    FUN_004083c0(&local_8,param_1);
    FUN_0040b4a8(local_8,param_2);
  }
  puVar1 = puStack_14;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_0040b638;
  puStack_18 = (undefined1 *)0x40b630;
  thunk_FUN_004072d8(&local_8,uStack_1c,puVar1);
  return;
}
