// rea decompile_all
// name: FUN_004453f8
// address: 0x4453f8
// body: available
// range: 0x4453f8-0x445465 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x445411 (push 0x445466 followed by fs-segment stack chaining); handler 0x445466 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004453f8(undefined4 param_1,int param_2)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined1 local_10;
  int local_c;
  undefined1 local_8;

  puStack_20 = &stack0xfffffffc;
  local_18 = 0;
  puStack_24 = &LAB_00445466;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  puVar1 = &stack0xfffffffc;
  if (param_2 != 0) {
    FUN_0041b234(param_2,&local_18);
    local_14 = local_18;
    local_10 = 0x11;
    local_8 = 0;
    local_c = param_2;
    FUN_0041bf50(&LAB_00434c40,1,PTR_LAB_00688e54,1,&local_14);
    FUN_00406ab4();
    puVar1 = puStack_20;
  }
  puStack_20 = puVar1;
  puVar1 = puStack_20;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_0044546d;
  puStack_24 = (undefined1 *)0x445465;
  thunk_FUN_004072d8(&local_18,uStack_28,puVar1);
  return;
}
