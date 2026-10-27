// rea decompile_all
// name: FUN_005f49e4
// address: 0x5f49e4
// body: available
// range: 0x5f49e4-0x5f4a64 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5f49fa (push 0x5f4a65 followed by fs-segment stack chaining); handler 0x5f4a65 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005f49e4(undefined4 param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  char cVar2;
  int *in_FS_OFFSET;
  undefined4 *in_stack_ffffffd8;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_c;
  undefined4 local_8;

  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  puStack_1c = &LAB_005f4a65;
  puStack_20 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = (int)&puStack_20;
  cVar2 = FUN_005f3f1c(DAT_0077db2c,param_2);
  if (cVar2 != '\0') {
    FUN_00407f0c(&local_8,param_2);
    in_stack_ffffffd8 = &local_c;
    FUN_005e07ec(&local_8,&DAT_005f4a80,1,in_stack_ffffffd8,1);
    FUN_005e25f0(local_c);
  }
  puVar1 = puStack_20;
  *in_FS_OFFSET = (int)in_stack_ffffffd8;
  puStack_20 = &LAB_005f4a6c;
  thunk_FUN_00406e80(&local_c,2,puVar1);
  return;
}
