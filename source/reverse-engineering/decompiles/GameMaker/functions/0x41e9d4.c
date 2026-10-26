// rea decompile_all
// name: FUN_0041e9d4
// address: 0x41e9d4
// body: available
// range: 0x41e9d4-0x41ea5e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x41e9ed (push 0x41ea5f followed by fs-segment stack chaining); handler 0x41ea5f lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0041e9d4(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffd0;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_18;
  int local_14;
  undefined1 local_10;
  undefined4 local_c;
  undefined1 local_8;

  puStack_20 = &stack0xfffffffc;
  local_18 = 0;
  puStack_24 = &LAB_0041ea5f;
  puStack_28 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_28;
  if (param_1 == 0) {
    iVar2 = FUN_0041bfec(&PTR_LAB_00412380,1,PTR_PTR_00782794);
  }
  else {
    local_10 = 0;
    puStack_20 = &stack0xfffffffc;
    local_14 = param_1;
    FUN_0041b4f0(param_1,&local_18);
    local_c = local_18;
    local_8 = 0x11;
    in_stack_ffffffd0 = 1;
    iVar2 = FUN_0041c0bc(&PTR_LAB_00412380,1,PTR_PTR_00782350,1,&local_14);
  }
  *(int *)(iVar2 + 0x18) = param_1;
  FUN_00406618(iVar2);
  puVar1 = puStack_28;
  *in_FS_OFFSET = in_stack_ffffffd0;
  puStack_28 = &LAB_0041ea66;
  thunk_FUN_00406e5c(&local_18,in_stack_ffffffd0,puVar1);
  return;
}
