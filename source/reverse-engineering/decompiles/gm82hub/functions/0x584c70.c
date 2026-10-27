// rea decompile_all
// name: FUN_00584c70
// address: 0x584c70
// body: available
// range: 0x584c70-0x584cdc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x584c9a (push 0x584cdd followed by fs-segment stack chaining); handler 0x584cdd lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00584c70(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 local_24 [2];
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_8;

  puStack_28 = (undefined1 *)0x584c81;
  local_8 = param_1;
  thunk_FUN_00407ad0(param_1);
  puStack_28 = (undefined1 *)0x584c8f;
  FUN_00408ff8(local_24,&DAT_00615f70);
  puStack_2c = &LAB_00584cdd;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  local_24[0] = 0;
  local_1c = param_4;
  local_18 = param_5;
  puStack_28 = &stack0xfffffffc;
  FUN_00584b70(local_8,local_24);
  puVar1 = puStack_28;
  *in_FS_OFFSET = uStack_30;
  puStack_28 = &LAB_00584ce4;
  puStack_2c = (undefined1 *)0x584cd4;
  FUN_004090d0(local_24,&DAT_00615f70,puVar1);
  puStack_2c = (undefined1 *)0x584cdc;
  thunk_FUN_004072d8(&local_8);
  return;
}
