// rea decompile_all
// name: FUN_00616588
// address: 0x616588
// body: available
// range: 0x616588-0x616608 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6165bb (push 0x616609 followed by fs-segment stack chaining); handler 0x616609 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00616588(int param_1,char param_2,undefined4 param_3,char param_4)

{
  undefined1 *puVar1;
  undefined4 extraout_ECX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 local_c;
  undefined4 local_8;

  local_c = 0;
  if (param_2 != '\0') {
    puStack_28 = (undefined1 *)0x6165a1;
    param_1 = FUN_00406510();
    param_3 = extraout_ECX;
  }
  puStack_28 = (undefined1 *)0x6165b0;
  local_8 = param_3;
  thunk_FUN_00407ad0(param_3);
  puStack_2c = &LAB_00616609;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  puStack_28 = &stack0xfffffffc;
  FUN_00616464(local_8,&local_c);
  FUN_00408194(param_1 + 0xc,local_c);
  puVar1 = puStack_28;
  *(undefined1 *)(param_1 + 8) = 0;
  if (param_4 == '\0') {
    *(undefined4 *)(param_1 + 4) = 1;
  }
  else {
    *(undefined4 *)(param_1 + 4) = 2;
  }
  *in_FS_OFFSET = uStack_30;
  puStack_28 = &LAB_00616610;
  puStack_2c = (undefined1 *)0x616608;
  thunk_FUN_004072fc(&local_c,2,puVar1);
  return;
}
