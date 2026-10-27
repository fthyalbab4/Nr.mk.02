// rea decompile_all
// name: FUN_004079d8
// address: 0x4079d8
// body: available
// range: 0x4079d8-0x407a38 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4079f1 (push 0x407a39 followed by fs-segment stack chaining); handler 0x407a39 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004079d8(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 unaff_EDI;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_8;

  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  puStack_1c = &LAB_00407a39;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  iVar1 = FUN_00407c70(param_2);
  FUN_004054c4(param_1,param_3 - iVar1);
  FUN_004071e4(&local_8,param_2,0);
  uStack_20 = 0x407a21;
  FUN_0040797c(param_1,local_8,0);
  *in_FS_OFFSET = puStack_1c;
  puStack_18 = (undefined1 *)0x407a38;
  FUN_00406e5c(&local_8,puStack_1c,unaff_EDI);
  return;
}
