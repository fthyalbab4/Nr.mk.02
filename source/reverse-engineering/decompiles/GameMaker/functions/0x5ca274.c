// rea decompile_all
// name: FUN_005ca274
// address: 0x5ca274
// body: available
// range: 0x5ca274-0x5ca2de inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5ca28c (push 0x5ca2df followed by fs-segment stack chaining); handler 0x5ca2df lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005ca274(undefined4 param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  int *local_c;
  undefined4 local_8;

  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  local_c = (int *)0x0;
  puStack_1c = &LAB_005ca2df;
  puStack_20 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_20;
  FUN_005ca7f8(param_1);
  thunk_FUN_00406e5c(&local_8);
  FUN_005ca7bc(param_1,&local_c);
  piVar2 = local_c;
  (**(code **)(*local_c + 0xc))();
  FUN_0040b250();
  FUN_00407eb8(param_2,local_8);
  puVar1 = puStack_20;
  *in_FS_OFFSET = piVar2;
  puStack_20 = &LAB_005ca2e6;
  FUN_0040b140(&local_c,piVar2,puVar1);
  thunk_FUN_00406e5c(&local_8);
  return;
}
