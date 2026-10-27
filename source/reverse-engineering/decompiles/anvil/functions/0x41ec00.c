// rea decompile_all
// name: FUN_0041ec00
// address: 0x41ec00
// body: available
// range: 0x41ec00-0x41ec8a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x41ec19 (push 0x41ec8b followed by fs-segment stack chaining); handler 0x41ec8b lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0041ec00(int param_1)

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
  puStack_24 = &LAB_0041ec8b;
  puStack_28 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_28;
  if (param_1 == 0) {
    iVar2 = FUN_0041be80(&LAB_004121e0,1,PTR_LAB_00689520);
  }
  else {
    local_10 = 0;
    puStack_20 = &stack0xfffffffc;
    local_14 = param_1;
    FUN_0041b234(param_1,&local_18);
    local_c = local_18;
    local_8 = 0x11;
    in_stack_ffffffd0 = 1;
    iVar2 = FUN_0041bf50(&LAB_004121e0,1,PTR_LAB_00689204,1,&local_14);
  }
  *(int *)(iVar2 + 0x18) = param_1;
  FUN_00406ab4(iVar2);
  puVar1 = puStack_28;
  *in_FS_OFFSET = in_stack_ffffffd0;
  puStack_28 = &LAB_0041ec92;
  thunk_FUN_004072d8(&local_18,in_stack_ffffffd0,puVar1);
  return;
}
