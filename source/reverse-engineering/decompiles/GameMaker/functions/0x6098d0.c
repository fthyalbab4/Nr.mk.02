// rea decompile_all
// name: FUN_006098d0
// address: 0x6098d0
// body: available
// range: 0x6098d0-0x609943 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6098f7 (push 0x609944 followed by fs-segment stack chaining); handler 0x609944 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006098d0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_8;

  puStack_1c = (undefined1 *)0x6098ec;
  local_8 = param_2;
  thunk_FUN_00407660(param_2);
  puStack_20 = &LAB_00609944;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puStack_1c = &stack0xfffffffc;
  FUN_006099d0(param_1);
  (**(code **)(*param_1 + 0x58))(param_1,&local_8);
  (**(code **)(*(int *)param_1[0x26] + 0x90))((int *)param_1[0x26],local_8,param_5);
  (**(code **)(*param_1 + 0x7c))(param_1,param_3,param_5);
  puVar1 = puStack_20;
  *in_FS_OFFSET = param_4;
  puStack_20 = &LAB_0060994b;
  uStack_24 = 0x609943;
  thunk_FUN_00406e5c(&local_8,param_4,puVar1);
  return;
}
