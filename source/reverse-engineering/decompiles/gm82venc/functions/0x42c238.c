// rea decompile_all
// name: FUN_0042c238
// address: 0x42c238
// body: available
// range: 0x42c238-0x42c284 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x42c251 (push 0x42c285 followed by fs-segment stack chaining); handler 0x42c285 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0042c238(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 unaff_EDI;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_8;

  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  puStack_1c = &LAB_0042c285;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  FUN_0042c428(param_1,param_2,&local_8);
  FUN_00407654(param_3,local_8,0);
  *in_FS_OFFSET = puStack_1c;
  puStack_18 = (undefined1 *)0x42c284;
  FUN_00407dd0(&local_8,puStack_1c,unaff_EDI);
  return;
}
