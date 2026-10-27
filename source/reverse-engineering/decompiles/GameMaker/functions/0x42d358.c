// rea decompile_all
// name: FUN_0042d358
// address: 0x42d358
// body: available
// range: 0x42d358-0x42d3cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x42d371 (push 0x42d3cc followed by fs-segment stack chaining); handler 0x42d3cc lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0042d358(char *param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  undefined1 *puVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_8;

  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  puStack_1c = &LAB_0042d3cc;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  cVar1 = *param_1;
  if (cVar1 == '\x01') {
    FUN_0041666c(param_2,param_3);
  }
  else if ((cVar1 == '\x02') || (cVar1 == '\t')) {
    puStack_18 = &stack0xfffffffc;
    FUN_0041666c(param_2,&local_8);
    FUN_0040839c(param_3,&DAT_0042d3e8,local_8);
  }
  else {
    puStack_18 = &stack0xfffffffc;
    FUN_0042ce70(param_1,param_2,param_3);
  }
  puVar2 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_0042d3d3;
  puStack_1c = (undefined1 *)0x42d3cb;
  thunk_FUN_00406e5c(&local_8,uStack_20,puVar2);
  return;
}
